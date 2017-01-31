
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_plat_chas_invmgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_plat_chas_invmgr_oper {

Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::State()
    :
    	admin_state{YType::str, "admin-state"},
	 card_redundancy_state{YType::enumeration, "card-redundancy-state"},
	 card_type{YType::str, "card-type"},
	 is_monitored{YType::boolean, "is-monitored"},
	 is_powered{YType::boolean, "is-powered"},
	 is_shutdown{YType::boolean, "is-shutdown"},
	 plim{YType::str, "plim"},
	 state{YType::enumeration, "state"}
{
    yang_name = "state"; yang_parent_name = "instance";
}

Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::~State()
{
}

bool Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::has_data() const
{
    return admin_state.is_set
	|| card_redundancy_state.is_set
	|| card_type.is_set
	|| is_monitored.is_set
	|| is_powered.is_set
	|| is_shutdown.is_set
	|| plim.is_set
	|| state.is_set;
}

bool Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(card_redundancy_state.operation)
	|| is_set(card_type.operation)
	|| is_set(is_monitored.operation)
	|| is_set(is_powered.operation)
	|| is_set(is_shutdown.operation)
	|| is_set(plim.operation)
	|| is_set(state.operation);
}

std::string Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (card_redundancy_state.is_set || is_set(card_redundancy_state.operation)) leaf_name_data.push_back(card_redundancy_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (is_monitored.is_set || is_set(is_monitored.operation)) leaf_name_data.push_back(is_monitored.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.operation)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (is_shutdown.is_set || is_set(is_shutdown.operation)) leaf_name_data.push_back(is_shutdown.get_name_leafdata());
    if (plim.is_set || is_set(plim.operation)) leaf_name_data.push_back(plim.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_children()
{
    return children;
}

void Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "card-redundancy-state")
    {
        card_redundancy_state = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "is-monitored")
    {
        is_monitored = value;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
    }
    if(value_path == "is-shutdown")
    {
        is_shutdown = value;
    }
    if(value_path == "plim")
    {
        plim = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Platform::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    	instance_name{YType::str, "instance-name"}
    	,
    state(std::make_unique<Platform::Racks::Rack::Slots::Slot::Instances::Instance::State>())
{
    state->parent = this;
    children["state"] = state.get();

    yang_name = "instance"; yang_parent_name = "instances";
}

Platform::Racks::Rack::Slots::Slot::Instances::Instance::~Instance()
{
}

bool Platform::Racks::Rack::Slots::Slot::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Platform::Racks::Rack::Slots::Slot::Instances::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| (state !=  nullptr && state->has_operation());
}

std::string Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Platform::Racks::Rack::Slots::Slot::Instances::Instance::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_children()
{
    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Platform::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

Platform::Racks::Rack::Slots::Slot::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "slot";
}

Platform::Racks::Rack::Slots::Slot::Instances::~Instances()
{
}

bool Platform::Racks::Rack::Slots::Slot::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Platform::Racks::Rack::Slots::Slot::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Platform::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::Slot::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::Slot::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Platform::Racks::Rack::Slots::Slot::Instances::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::Slot::Instances::get_children()
{
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Platform::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, std::string value)
{
}

Platform::Racks::Rack::Slots::Slot::Vm::Vm()
    :
    	node_descriptiton{YType::str, "node-descriptiton"},
	 node_ip{YType::str, "node-ip"},
	 partner_name{YType::str, "partner-name"},
	 red_role{YType::str, "red-role"},
	 software_status{YType::str, "software-status"}
{
    yang_name = "vm"; yang_parent_name = "slot";
}

Platform::Racks::Rack::Slots::Slot::Vm::~Vm()
{
}

bool Platform::Racks::Rack::Slots::Slot::Vm::has_data() const
{
    return node_descriptiton.is_set
	|| node_ip.is_set
	|| partner_name.is_set
	|| red_role.is_set
	|| software_status.is_set;
}

bool Platform::Racks::Rack::Slots::Slot::Vm::has_operation() const
{
    return is_set(operation)
	|| is_set(node_descriptiton.operation)
	|| is_set(node_ip.operation)
	|| is_set(partner_name.operation)
	|| is_set(red_role.operation)
	|| is_set(software_status.operation);
}

std::string Platform::Racks::Rack::Slots::Slot::Vm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vm";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::Slot::Vm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_descriptiton.is_set || is_set(node_descriptiton.operation)) leaf_name_data.push_back(node_descriptiton.get_name_leafdata());
    if (node_ip.is_set || is_set(node_ip.operation)) leaf_name_data.push_back(node_ip.get_name_leafdata());
    if (partner_name.is_set || is_set(partner_name.operation)) leaf_name_data.push_back(partner_name.get_name_leafdata());
    if (red_role.is_set || is_set(red_role.operation)) leaf_name_data.push_back(red_role.get_name_leafdata());
    if (software_status.is_set || is_set(software_status.operation)) leaf_name_data.push_back(software_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::Slot::Vm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::Slot::Vm::get_children()
{
    return children;
}

void Platform::Racks::Rack::Slots::Slot::Vm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-descriptiton")
    {
        node_descriptiton = value;
    }
    if(value_path == "node-ip")
    {
        node_ip = value;
    }
    if(value_path == "partner-name")
    {
        partner_name = value;
    }
    if(value_path == "red-role")
    {
        red_role = value;
    }
    if(value_path == "software-status")
    {
        software_status = value;
    }
}

Platform::Racks::Rack::Slots::Slot::State::State()
    :
    	admin_state{YType::str, "admin-state"},
	 card_redundancy_state{YType::enumeration, "card-redundancy-state"},
	 card_type{YType::str, "card-type"},
	 is_monitored{YType::boolean, "is-monitored"},
	 is_powered{YType::boolean, "is-powered"},
	 is_shutdown{YType::boolean, "is-shutdown"},
	 plim{YType::str, "plim"},
	 state{YType::enumeration, "state"}
{
    yang_name = "state"; yang_parent_name = "slot";
}

Platform::Racks::Rack::Slots::Slot::State::~State()
{
}

bool Platform::Racks::Rack::Slots::Slot::State::has_data() const
{
    return admin_state.is_set
	|| card_redundancy_state.is_set
	|| card_type.is_set
	|| is_monitored.is_set
	|| is_powered.is_set
	|| is_shutdown.is_set
	|| plim.is_set
	|| state.is_set;
}

bool Platform::Racks::Rack::Slots::Slot::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(card_redundancy_state.operation)
	|| is_set(card_type.operation)
	|| is_set(is_monitored.operation)
	|| is_set(is_powered.operation)
	|| is_set(is_shutdown.operation)
	|| is_set(plim.operation)
	|| is_set(state.operation);
}

std::string Platform::Racks::Rack::Slots::Slot::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::Slot::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (card_redundancy_state.is_set || is_set(card_redundancy_state.operation)) leaf_name_data.push_back(card_redundancy_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (is_monitored.is_set || is_set(is_monitored.operation)) leaf_name_data.push_back(is_monitored.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.operation)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (is_shutdown.is_set || is_set(is_shutdown.operation)) leaf_name_data.push_back(is_shutdown.get_name_leafdata());
    if (plim.is_set || is_set(plim.operation)) leaf_name_data.push_back(plim.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::Slot::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::Slot::State::get_children()
{
    return children;
}

void Platform::Racks::Rack::Slots::Slot::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "card-redundancy-state")
    {
        card_redundancy_state = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "is-monitored")
    {
        is_monitored = value;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
    }
    if(value_path == "is-shutdown")
    {
        is_shutdown = value;
    }
    if(value_path == "plim")
    {
        plim = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Platform::Racks::Rack::Slots::Slot::Slot()
    :
    	slot_name{YType::str, "slot-name"}
    	,
    instances(std::make_unique<Platform::Racks::Rack::Slots::Slot::Instances>())
	,state(std::make_unique<Platform::Racks::Rack::Slots::Slot::State>())
	,vm(std::make_unique<Platform::Racks::Rack::Slots::Slot::Vm>())
{
    instances->parent = this;
    children["instances"] = instances.get();

    state->parent = this;
    children["state"] = state.get();

    vm->parent = this;
    children["vm"] = vm.get();

    yang_name = "slot"; yang_parent_name = "slots";
}

Platform::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Platform::Racks::Rack::Slots::Slot::has_data() const
{
    return slot_name.is_set
	|| (instances !=  nullptr && instances->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vm !=  nullptr && vm->has_data());
}

bool Platform::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(slot_name.operation)
	|| (instances !=  nullptr && instances->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vm !=  nullptr && vm->has_operation());
}

std::string Platform::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot-name='" <<slot_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_name.is_set || is_set(slot_name.operation)) leaf_name_data.push_back(slot_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instances")
    {
        if(instances != nullptr)
        {
            children["instances"] = instances.get();
        }
        else
        {
            instances = std::make_unique<Platform::Racks::Rack::Slots::Slot::Instances>();
            instances->parent = this;
            children["instances"] = instances.get();
        }
        return children.at("instances");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Platform::Racks::Rack::Slots::Slot::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    if(child_yang_name == "vm")
    {
        if(vm != nullptr)
        {
            children["vm"] = vm.get();
        }
        else
        {
            vm = std::make_unique<Platform::Racks::Rack::Slots::Slot::Vm>();
            vm->parent = this;
            children["vm"] = vm.get();
        }
        return children.at("vm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::Slot::get_children()
{
    if(children.find("instances") == children.end())
    {
        if(instances != nullptr)
        {
            children["instances"] = instances.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    if(children.find("vm") == children.end())
    {
        if(vm != nullptr)
        {
            children["vm"] = vm.get();
        }
    }

    return children;
}

void Platform::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot-name")
    {
        slot_name = value;
    }
}

Platform::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
}

Platform::Racks::Rack::Slots::~Slots()
{
}

bool Platform::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Platform::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Platform::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Platform::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::Racks::Rack::Slots::get_children()
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

void Platform::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

Platform::Racks::Rack::Rack()
    :
    	rack_name{YType::str, "rack-name"}
    	,
    slots(std::make_unique<Platform::Racks::Rack::Slots>())
{
    slots->parent = this;
    children["slots"] = slots.get();

    yang_name = "rack"; yang_parent_name = "racks";
}

Platform::Racks::Rack::~Rack()
{
}

bool Platform::Racks::Rack::has_data() const
{
    return rack_name.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool Platform::Racks::Rack::has_operation() const
{
    return is_set(operation)
	|| is_set(rack_name.operation)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Platform::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack-name='" <<rack_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Platform::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform/racks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_name.is_set || is_set(rack_name.operation)) leaf_name_data.push_back(rack_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slots")
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
        else
        {
            slots = std::make_unique<Platform::Racks::Rack::Slots>();
            slots->parent = this;
            children["slots"] = slots.get();
        }
        return children.at("slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::Racks::Rack::get_children()
{
    if(children.find("slots") == children.end())
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
    }

    return children;
}

void Platform::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rack-name")
    {
        rack_name = value;
    }
}

Platform::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "platform";
}

Platform::Racks::~Racks()
{
}

bool Platform::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Platform::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Platform::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

EntityPath Platform::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Platform::Racks::Rack>();
        c->parent = this;
        rack.push_back(std::move(c));
        children[segment_path] = rack.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::Racks::get_children()
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

void Platform::Racks::set_value(const std::string & value_path, std::string value)
{
}

Platform::Platform()
    :
    racks(std::make_unique<Platform::Racks>())
{
    racks->parent = this;
    children["racks"] = racks.get();

    yang_name = "platform"; yang_parent_name = "Cisco-IOS-XR-plat-chas-invmgr-oper";
}

Platform::~Platform()
{
}

bool Platform::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool Platform::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform";

    return path_buffer.str();

}

EntityPath Platform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            racks = std::make_unique<Platform::Racks>();
            racks->parent = this;
            children["racks"] = racks.get();
        }
        return children.at("racks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Platform::get_children()
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

void Platform::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Platform::clone_ptr()
{
    return std::make_unique<Platform>();
}
PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Ports()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "ports"; yang_parent_name = "portses";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::~Ports()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Portses()
{
    yang_name = "portses"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::~Portses()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portses";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports>();
        c->parent = this;
        ports.push_back(std::move(c));
        children[segment_path] = ports.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::get_children()
{
    for (auto const & c : ports)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::ProcessorInformation()
    :
    	processor_type{YType::str, "processor-type"},
	 revision{YType::str, "revision"},
	 speed{YType::str, "speed"}
{
    yang_name = "processor-information"; yang_parent_name = "hardware-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::~ProcessorInformation()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::has_data() const
{
    return processor_type.is_set
	|| revision.is_set
	|| speed.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(processor_type.operation)
	|| is_set(revision.operation)
	|| is_set(speed.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processor-information";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processor_type.is_set || is_set(processor_type.operation)) leaf_name_data.push_back(processor_type.get_name_leafdata());
    if (revision.is_set || is_set(revision.operation)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processor-type")
    {
        processor_type = value;
    }
    if(value_path == "revision")
    {
        revision = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::Rom()
    :
    	image_name{YType::str, "image-name"},
	 major_version{YType::uint32, "major-version"},
	 micro_image_version{YType::str, "micro-image-version"},
	 minor_version{YType::uint32, "minor-version"},
	 platform_specific{YType::str, "platform-specific"},
	 release_type{YType::str, "release-type"}
{
    yang_name = "rom"; yang_parent_name = "motherboard-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::~Rom()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::has_data() const
{
    return image_name.is_set
	|| major_version.is_set
	|| micro_image_version.is_set
	|| minor_version.is_set
	|| platform_specific.is_set
	|| release_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::has_operation() const
{
    return is_set(operation)
	|| is_set(image_name.operation)
	|| is_set(major_version.operation)
	|| is_set(micro_image_version.operation)
	|| is_set(minor_version.operation)
	|| is_set(platform_specific.operation)
	|| is_set(release_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rom";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (image_name.is_set || is_set(image_name.operation)) leaf_name_data.push_back(image_name.get_name_leafdata());
    if (major_version.is_set || is_set(major_version.operation)) leaf_name_data.push_back(major_version.get_name_leafdata());
    if (micro_image_version.is_set || is_set(micro_image_version.operation)) leaf_name_data.push_back(micro_image_version.get_name_leafdata());
    if (minor_version.is_set || is_set(minor_version.operation)) leaf_name_data.push_back(minor_version.get_name_leafdata());
    if (platform_specific.is_set || is_set(platform_specific.operation)) leaf_name_data.push_back(platform_specific.get_name_leafdata());
    if (release_type.is_set || is_set(release_type.operation)) leaf_name_data.push_back(release_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "image-name")
    {
        image_name = value;
    }
    if(value_path == "major-version")
    {
        major_version = value;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version = value;
    }
    if(value_path == "minor-version")
    {
        minor_version = value;
    }
    if(value_path == "platform-specific")
    {
        platform_specific = value;
    }
    if(value_path == "release-type")
    {
        release_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::Bootflash()
    :
    	bootflash_size{YType::uint32, "bootflash-size"},
	 bootflash_type{YType::str, "bootflash-type"},
	 image_name{YType::str, "image-name"},
	 major_version{YType::uint32, "major-version"},
	 micro_image_version{YType::str, "micro-image-version"},
	 minor_version{YType::uint32, "minor-version"},
	 platform_specific{YType::str, "platform-specific"},
	 platform_type{YType::str, "platform-type"},
	 release_type{YType::str, "release-type"},
	 sector_size{YType::uint32, "sector-size"}
{
    yang_name = "bootflash"; yang_parent_name = "motherboard-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::~Bootflash()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::has_data() const
{
    return bootflash_size.is_set
	|| bootflash_type.is_set
	|| image_name.is_set
	|| major_version.is_set
	|| micro_image_version.is_set
	|| minor_version.is_set
	|| platform_specific.is_set
	|| platform_type.is_set
	|| release_type.is_set
	|| sector_size.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::has_operation() const
{
    return is_set(operation)
	|| is_set(bootflash_size.operation)
	|| is_set(bootflash_type.operation)
	|| is_set(image_name.operation)
	|| is_set(major_version.operation)
	|| is_set(micro_image_version.operation)
	|| is_set(minor_version.operation)
	|| is_set(platform_specific.operation)
	|| is_set(platform_type.operation)
	|| is_set(release_type.operation)
	|| is_set(sector_size.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootflash";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootflash_size.is_set || is_set(bootflash_size.operation)) leaf_name_data.push_back(bootflash_size.get_name_leafdata());
    if (bootflash_type.is_set || is_set(bootflash_type.operation)) leaf_name_data.push_back(bootflash_type.get_name_leafdata());
    if (image_name.is_set || is_set(image_name.operation)) leaf_name_data.push_back(image_name.get_name_leafdata());
    if (major_version.is_set || is_set(major_version.operation)) leaf_name_data.push_back(major_version.get_name_leafdata());
    if (micro_image_version.is_set || is_set(micro_image_version.operation)) leaf_name_data.push_back(micro_image_version.get_name_leafdata());
    if (minor_version.is_set || is_set(minor_version.operation)) leaf_name_data.push_back(minor_version.get_name_leafdata());
    if (platform_specific.is_set || is_set(platform_specific.operation)) leaf_name_data.push_back(platform_specific.get_name_leafdata());
    if (platform_type.is_set || is_set(platform_type.operation)) leaf_name_data.push_back(platform_type.get_name_leafdata());
    if (release_type.is_set || is_set(release_type.operation)) leaf_name_data.push_back(release_type.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.operation)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bootflash-size")
    {
        bootflash_size = value;
    }
    if(value_path == "bootflash-type")
    {
        bootflash_type = value;
    }
    if(value_path == "image-name")
    {
        image_name = value;
    }
    if(value_path == "major-version")
    {
        major_version = value;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version = value;
    }
    if(value_path == "minor-version")
    {
        minor_version = value;
    }
    if(value_path == "platform-specific")
    {
        platform_specific = value;
    }
    if(value_path == "platform-type")
    {
        platform_type = value;
    }
    if(value_path == "release-type")
    {
        release_type = value;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::Processor()
    :
    	processor_type{YType::str, "processor-type"},
	 revision{YType::str, "revision"},
	 speed{YType::str, "speed"}
{
    yang_name = "processor"; yang_parent_name = "motherboard-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::~Processor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::has_data() const
{
    return processor_type.is_set
	|| revision.is_set
	|| speed.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::has_operation() const
{
    return is_set(operation)
	|| is_set(processor_type.operation)
	|| is_set(revision.operation)
	|| is_set(speed.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processor";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processor_type.is_set || is_set(processor_type.operation)) leaf_name_data.push_back(processor_type.get_name_leafdata());
    if (revision.is_set || is_set(revision.operation)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processor-type")
    {
        processor_type = value;
    }
    if(value_path == "revision")
    {
        revision = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::MotherboardInformation()
    :
    	main_memory_size{YType::uint64, "main-memory-size"},
	 nvram_size{YType::uint64, "nvram-size"}
    	,
    bootflash(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash>())
	,processor(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor>())
	,rom(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom>())
{
    bootflash->parent = this;
    children["bootflash"] = bootflash.get();

    processor->parent = this;
    children["processor"] = processor.get();

    rom->parent = this;
    children["rom"] = rom.get();

    yang_name = "motherboard-information"; yang_parent_name = "hardware-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::~MotherboardInformation()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::has_data() const
{
    return main_memory_size.is_set
	|| nvram_size.is_set
	|| (bootflash !=  nullptr && bootflash->has_data())
	|| (processor !=  nullptr && processor->has_data())
	|| (rom !=  nullptr && rom->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(main_memory_size.operation)
	|| is_set(nvram_size.operation)
	|| (bootflash !=  nullptr && bootflash->has_operation())
	|| (processor !=  nullptr && processor->has_operation())
	|| (rom !=  nullptr && rom->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "motherboard-information";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_memory_size.is_set || is_set(main_memory_size.operation)) leaf_name_data.push_back(main_memory_size.get_name_leafdata());
    if (nvram_size.is_set || is_set(nvram_size.operation)) leaf_name_data.push_back(nvram_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bootflash")
    {
        if(bootflash != nullptr)
        {
            children["bootflash"] = bootflash.get();
        }
        else
        {
            bootflash = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash>();
            bootflash->parent = this;
            children["bootflash"] = bootflash.get();
        }
        return children.at("bootflash");
    }

    if(child_yang_name == "processor")
    {
        if(processor != nullptr)
        {
            children["processor"] = processor.get();
        }
        else
        {
            processor = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor>();
            processor->parent = this;
            children["processor"] = processor.get();
        }
        return children.at("processor");
    }

    if(child_yang_name == "rom")
    {
        if(rom != nullptr)
        {
            children["rom"] = rom.get();
        }
        else
        {
            rom = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom>();
            rom->parent = this;
            children["rom"] = rom.get();
        }
        return children.at("rom");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_children()
{
    if(children.find("bootflash") == children.end())
    {
        if(bootflash != nullptr)
        {
            children["bootflash"] = bootflash.get();
        }
    }

    if(children.find("processor") == children.end())
    {
        if(processor != nullptr)
        {
            children["processor"] = processor.get();
        }
    }

    if(children.find("rom") == children.end())
    {
        if(rom != nullptr)
        {
            children["rom"] = rom.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "main-memory-size")
    {
        main_memory_size = value;
    }
    if(value_path == "nvram-size")
    {
        nvram_size = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::BootflashInformation()
    :
    	bootflash_size{YType::uint32, "bootflash-size"},
	 bootflash_type{YType::str, "bootflash-type"},
	 image_name{YType::str, "image-name"},
	 major_version{YType::uint32, "major-version"},
	 micro_image_version{YType::str, "micro-image-version"},
	 minor_version{YType::uint32, "minor-version"},
	 platform_specific{YType::str, "platform-specific"},
	 platform_type{YType::str, "platform-type"},
	 release_type{YType::str, "release-type"},
	 sector_size{YType::uint32, "sector-size"}
{
    yang_name = "bootflash-information"; yang_parent_name = "hardware-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::~BootflashInformation()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::has_data() const
{
    return bootflash_size.is_set
	|| bootflash_type.is_set
	|| image_name.is_set
	|| major_version.is_set
	|| micro_image_version.is_set
	|| minor_version.is_set
	|| platform_specific.is_set
	|| platform_type.is_set
	|| release_type.is_set
	|| sector_size.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bootflash_size.operation)
	|| is_set(bootflash_type.operation)
	|| is_set(image_name.operation)
	|| is_set(major_version.operation)
	|| is_set(micro_image_version.operation)
	|| is_set(minor_version.operation)
	|| is_set(platform_specific.operation)
	|| is_set(platform_type.operation)
	|| is_set(release_type.operation)
	|| is_set(sector_size.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootflash-information";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootflash_size.is_set || is_set(bootflash_size.operation)) leaf_name_data.push_back(bootflash_size.get_name_leafdata());
    if (bootflash_type.is_set || is_set(bootflash_type.operation)) leaf_name_data.push_back(bootflash_type.get_name_leafdata());
    if (image_name.is_set || is_set(image_name.operation)) leaf_name_data.push_back(image_name.get_name_leafdata());
    if (major_version.is_set || is_set(major_version.operation)) leaf_name_data.push_back(major_version.get_name_leafdata());
    if (micro_image_version.is_set || is_set(micro_image_version.operation)) leaf_name_data.push_back(micro_image_version.get_name_leafdata());
    if (minor_version.is_set || is_set(minor_version.operation)) leaf_name_data.push_back(minor_version.get_name_leafdata());
    if (platform_specific.is_set || is_set(platform_specific.operation)) leaf_name_data.push_back(platform_specific.get_name_leafdata());
    if (platform_type.is_set || is_set(platform_type.operation)) leaf_name_data.push_back(platform_type.get_name_leafdata());
    if (release_type.is_set || is_set(release_type.operation)) leaf_name_data.push_back(release_type.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.operation)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bootflash-size")
    {
        bootflash_size = value;
    }
    if(value_path == "bootflash-type")
    {
        bootflash_type = value;
    }
    if(value_path == "image-name")
    {
        image_name = value;
    }
    if(value_path == "major-version")
    {
        major_version = value;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version = value;
    }
    if(value_path == "minor-version")
    {
        minor_version = value;
    }
    if(value_path == "platform-specific")
    {
        platform_specific = value;
    }
    if(value_path == "platform-type")
    {
        platform_type = value;
    }
    if(value_path == "release-type")
    {
        release_type = value;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::Disks()
    :
    	disk_name{YType::str, "disk-name"},
	 disk_size{YType::uint32, "disk-size"},
	 sector_size{YType::uint32, "sector-size"}
{
    yang_name = "disks"; yang_parent_name = "disk-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::~Disks()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::has_data() const
{
    return disk_name.is_set
	|| disk_size.is_set
	|| sector_size.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::has_operation() const
{
    return is_set(operation)
	|| is_set(disk_name.operation)
	|| is_set(disk_size.operation)
	|| is_set(sector_size.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disks";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disk_name.is_set || is_set(disk_name.operation)) leaf_name_data.push_back(disk_name.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.operation)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.operation)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disk-name")
    {
        disk_name = value;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::DiskInformation()
    :
    	disk_name{YType::str, "disk-name"},
	 disk_size{YType::uint32, "disk-size"},
	 sector_size{YType::uint32, "sector-size"}
{
    yang_name = "disk-information"; yang_parent_name = "hardware-information";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::~DiskInformation()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::has_data() const
{
    for (std::size_t index=0; index<disks.size(); index++)
    {
        if(disks[index]->has_data())
            return true;
    }
    return disk_name.is_set
	|| disk_size.is_set
	|| sector_size.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::has_operation() const
{
    for (std::size_t index=0; index<disks.size(); index++)
    {
        if(disks[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disk_name.operation)
	|| is_set(disk_size.operation)
	|| is_set(sector_size.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disk-information";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disk_name.is_set || is_set(disk_name.operation)) leaf_name_data.push_back(disk_name.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.operation)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.operation)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disks")
    {
        for(auto const & c : disks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks>();
        c->parent = this;
        disks.push_back(std::move(c));
        children[segment_path] = disks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_children()
{
    for (auto const & c : disks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disk-name")
    {
        disk_name = value;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::HardwareInformation()
    :
    bootflash_information(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation>())
	,disk_information(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation>())
	,motherboard_information(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation>())
	,processor_information(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation>())
{
    bootflash_information->parent = this;
    children["bootflash-information"] = bootflash_information.get();

    disk_information->parent = this;
    children["disk-information"] = disk_information.get();

    motherboard_information->parent = this;
    children["motherboard-information"] = motherboard_information.get();

    processor_information->parent = this;
    children["processor-information"] = processor_information.get();

    yang_name = "hardware-information"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::~HardwareInformation()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::has_data() const
{
    return (bootflash_information !=  nullptr && bootflash_information->has_data())
	|| (disk_information !=  nullptr && disk_information->has_data())
	|| (motherboard_information !=  nullptr && motherboard_information->has_data())
	|| (processor_information !=  nullptr && processor_information->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::has_operation() const
{
    return is_set(operation)
	|| (bootflash_information !=  nullptr && bootflash_information->has_operation())
	|| (disk_information !=  nullptr && disk_information->has_operation())
	|| (motherboard_information !=  nullptr && motherboard_information->has_operation())
	|| (processor_information !=  nullptr && processor_information->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-information";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bootflash-information")
    {
        if(bootflash_information != nullptr)
        {
            children["bootflash-information"] = bootflash_information.get();
        }
        else
        {
            bootflash_information = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation>();
            bootflash_information->parent = this;
            children["bootflash-information"] = bootflash_information.get();
        }
        return children.at("bootflash-information");
    }

    if(child_yang_name == "disk-information")
    {
        if(disk_information != nullptr)
        {
            children["disk-information"] = disk_information.get();
        }
        else
        {
            disk_information = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation>();
            disk_information->parent = this;
            children["disk-information"] = disk_information.get();
        }
        return children.at("disk-information");
    }

    if(child_yang_name == "motherboard-information")
    {
        if(motherboard_information != nullptr)
        {
            children["motherboard-information"] = motherboard_information.get();
        }
        else
        {
            motherboard_information = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation>();
            motherboard_information->parent = this;
            children["motherboard-information"] = motherboard_information.get();
        }
        return children.at("motherboard-information");
    }

    if(child_yang_name == "processor-information")
    {
        if(processor_information != nullptr)
        {
            children["processor-information"] = processor_information.get();
        }
        else
        {
            processor_information = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation>();
            processor_information->parent = this;
            children["processor-information"] = processor_information.get();
        }
        return children.at("processor-information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_children()
{
    if(children.find("bootflash-information") == children.end())
    {
        if(bootflash_information != nullptr)
        {
            children["bootflash-information"] = bootflash_information.get();
        }
    }

    if(children.find("disk-information") == children.end())
    {
        if(disk_information != nullptr)
        {
            children["disk-information"] = disk_information.get();
        }
    }

    if(children.find("motherboard-information") == children.end())
    {
        if(motherboard_information != nullptr)
        {
            children["motherboard-information"] = motherboard_information.get();
        }
    }

    if(children.find("processor-information") == children.end())
    {
        if(processor_information != nullptr)
        {
            children["processor-information"] = processor_information.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "port";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Port()
    :
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "port"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::~Port()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_data() const
{
    return (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Sensor()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::PortSlot()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes>())
	,port(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>())
	,sensors(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    port->parent = this;
    children["port"] = port.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::~PortSlot()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
        else
        {
            port = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>();
            port->parent = this;
            children["port"] = port.get();
        }
        return children.at("port");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlots()
{
    yang_name = "port-slots"; yang_parent_name = "module";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::~PortSlots()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_data() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-slot")
    {
        for(auto const & c : port_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(std::move(c));
        children[segment_path] = port_slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_children()
{
    for (auto const & c : port_slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Sensor()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "module";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "module";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Module()
    :
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes>())
	,port_slots(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>())
	,sensors(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    port_slots->parent = this;
    children["port-slots"] = port_slots.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    yang_name = "module"; yang_parent_name = "sub-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::~Module()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_data() const
{
    return (attributes !=  nullptr && attributes->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_operation() const
{
    return is_set(operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
        else
        {
            port_slots = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>();
            port_slots->parent = this;
            children["port-slots"] = port_slots.get();
        }
        return children.at("port-slots");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("port-slots") == children.end())
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "sub-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::SubSlot()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes>())
	,module(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    module->parent = this;
    children["module"] = module.get();

    yang_name = "sub-slot"; yang_parent_name = "sub-slots";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::~SubSlot()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (module !=  nullptr && module->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (module !=  nullptr && module->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slot" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "module")
    {
        if(module != nullptr)
        {
            children["module"] = module.get();
        }
        else
        {
            module = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>();
            module->parent = this;
            children["module"] = module.get();
        }
        return children.at("module");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("module") == children.end())
    {
        if(module != nullptr)
        {
            children["module"] = module.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlots()
{
    yang_name = "sub-slots"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::~SubSlots()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_data() const
{
    for (std::size_t index=0; index<sub_slot.size(); index++)
    {
        if(sub_slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_operation() const
{
    for (std::size_t index=0; index<sub_slot.size(); index++)
    {
        if(sub_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slots";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-slot")
    {
        for(auto const & c : sub_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot>();
        c->parent = this;
        sub_slot.push_back(std::move(c));
        children[segment_path] = sub_slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_children()
{
    for (auto const & c : sub_slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "hw-component";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "hw-component";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::HwComponent()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes>())
	,sensors(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    yang_name = "hw-component"; yang_parent_name = "hw-components";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::~HwComponent()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponents()
{
    yang_name = "hw-components"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::~HwComponents()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_data() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-component")
    {
        for(auto const & c : hw_component)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.push_back(std::move(c));
        children[segment_path] = hw_component.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_children()
{
    for (auto const & c : hw_component)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "port";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Port()
    :
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "port"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::~Port()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_data() const
{
    return (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Sensor()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::PortSlot()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes>())
	,port(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>())
	,sensors(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    port->parent = this;
    children["port"] = port.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::~PortSlot()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
        else
        {
            port = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>();
            port->parent = this;
            children["port"] = port.get();
        }
        return children.at("port");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlots()
{
    yang_name = "port-slots"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::~PortSlots()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_data() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-slot")
    {
        for(auto const & c : port_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(std::move(c));
        children[segment_path] = port_slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_children()
{
    for (auto const & c : port_slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Sensor()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Card()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes>())
	,hardware_information(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation>())
	,hw_components(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>())
	,port_slots(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>())
	,portses(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses>())
	,sensors(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>())
	,sub_slots(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    hardware_information->parent = this;
    children["hardware-information"] = hardware_information.get();

    hw_components->parent = this;
    children["hw-components"] = hw_components.get();

    port_slots->parent = this;
    children["port-slots"] = port_slots.get();

    portses->parent = this;
    children["portses"] = portses.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    sub_slots->parent = this;
    children["sub-slots"] = sub_slots.get();

    yang_name = "card"; yang_parent_name = "cards";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::~Card()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (hardware_information !=  nullptr && hardware_information->has_data())
	|| (hw_components !=  nullptr && hw_components->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (portses !=  nullptr && portses->has_data())
	|| (sensors !=  nullptr && sensors->has_data())
	|| (sub_slots !=  nullptr && sub_slots->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (hardware_information !=  nullptr && hardware_information->has_operation())
	|| (hw_components !=  nullptr && hw_components->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (portses !=  nullptr && portses->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (sub_slots !=  nullptr && sub_slots->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "hardware-information")
    {
        if(hardware_information != nullptr)
        {
            children["hardware-information"] = hardware_information.get();
        }
        else
        {
            hardware_information = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation>();
            hardware_information->parent = this;
            children["hardware-information"] = hardware_information.get();
        }
        return children.at("hardware-information");
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components != nullptr)
        {
            children["hw-components"] = hw_components.get();
        }
        else
        {
            hw_components = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>();
            hw_components->parent = this;
            children["hw-components"] = hw_components.get();
        }
        return children.at("hw-components");
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
        else
        {
            port_slots = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>();
            port_slots->parent = this;
            children["port-slots"] = port_slots.get();
        }
        return children.at("port-slots");
    }

    if(child_yang_name == "portses")
    {
        if(portses != nullptr)
        {
            children["portses"] = portses.get();
        }
        else
        {
            portses = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses>();
            portses->parent = this;
            children["portses"] = portses.get();
        }
        return children.at("portses");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    if(child_yang_name == "sub-slots")
    {
        if(sub_slots != nullptr)
        {
            children["sub-slots"] = sub_slots.get();
        }
        else
        {
            sub_slots = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>();
            sub_slots->parent = this;
            children["sub-slots"] = sub_slots.get();
        }
        return children.at("sub-slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("hardware-information") == children.end())
    {
        if(hardware_information != nullptr)
        {
            children["hardware-information"] = hardware_information.get();
        }
    }

    if(children.find("hw-components") == children.end())
    {
        if(hw_components != nullptr)
        {
            children["hw-components"] = hw_components.get();
        }
    }

    if(children.find("port-slots") == children.end())
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
    }

    if(children.find("portses") == children.end())
    {
        if(portses != nullptr)
        {
            children["portses"] = portses.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    if(children.find("sub-slots") == children.end())
    {
        if(sub_slots != nullptr)
        {
            children["sub-slots"] = sub_slots.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Cards()
{
    yang_name = "cards"; yang_parent_name = "slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::~Cards()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::has_data() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::has_operation() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cards";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card>();
        c->parent = this;
        card.push_back(std::move(c));
        children[segment_path] = card.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_children()
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Slot()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes>())
	,cards(std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    cards->parent = this;
    children["cards"] = cards.get();

    yang_name = "slot"; yang_parent_name = "slots";
}

PlatformInventory::Racks::Rack::Slots::Slot::~Slot()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (cards !=  nullptr && cards->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (cards !=  nullptr && cards->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* PlatformInventory::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "cards")
    {
        if(cards != nullptr)
        {
            children["cards"] = cards.get();
        }
        else
        {
            cards = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot::Cards>();
            cards->parent = this;
            children["cards"] = cards.get();
        }
        return children.at("cards");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::Slot::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("cards") == children.end())
    {
        if(cards != nullptr)
        {
            children["cards"] = cards.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
}

PlatformInventory::Racks::Rack::Slots::~Slots()
{
}

bool PlatformInventory::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformInventory::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Slots::get_children()
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

void PlatformInventory::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Attributes::BasicInfo::BasicInfo()
    :
    	description{YType::str, "description"},
	 firmware_revision{YType::str, "firmware-revision"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_children()
{
    return children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
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

PlatformInventory::Racks::Rack::Attributes::FruInfo::FruInfo()
    :
    	module_administrative_state{YType::enumeration, "module-administrative-state"},
	 module_monitor_state{YType::enumeration, "module-monitor-state"},
	 module_operational_state{YType::enumeration, "module-operational-state"},
	 module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
	 module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_unique<PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_unique<PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    module_up_time->parent = this;
    children["module-up-time"] = module_up_time.get();

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
        else
        {
            module_up_time = std::make_unique<PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime>();
            module_up_time->parent = this;
            children["module-up-time"] = module_up_time.get();
        }
        return children.at("module-up-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Attributes::FruInfo::get_children()
{
    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    if(children.find("module-up-time") == children.end())
    {
        if(module_up_time != nullptr)
        {
            children["module-up-time"] = module_up_time.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Attributes::Attributes()
    :
    basic_info(std::make_unique<PlatformInventory::Racks::Rack::Attributes::BasicInfo>())
	,fru_info(std::make_unique<PlatformInventory::Racks::Rack::Attributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "attributes"; yang_parent_name = "rack";
}

PlatformInventory::Racks::Rack::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::Rack::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<PlatformInventory::Racks::Rack::Attributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<PlatformInventory::Racks::Rack::Attributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::Attributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Rack()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<PlatformInventory::Racks::Rack::Attributes>())
	,slots(std::make_unique<PlatformInventory::Racks::Rack::Slots>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    slots->parent = this;
    children["slots"] = slots.get();

    yang_name = "rack"; yang_parent_name = "racks";
}

PlatformInventory::Racks::Rack::~Rack()
{
}

bool PlatformInventory::Racks::Rack::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (slots !=  nullptr && slots->has_data());
}

bool PlatformInventory::Racks::Rack::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (slots !=  nullptr && slots->has_operation());
}

std::string PlatformInventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory/racks/" << get_segment_path();
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

Entity* PlatformInventory::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attributes = std::make_unique<PlatformInventory::Racks::Rack::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "slots")
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
        else
        {
            slots = std::make_unique<PlatformInventory::Racks::Rack::Slots>();
            slots->parent = this;
            children["slots"] = slots.get();
        }
        return children.at("slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::Rack::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("slots") == children.end())
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
    }

    return children;
}

void PlatformInventory::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PlatformInventory::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "platform-inventory";
}

PlatformInventory::Racks::~Racks()
{
}

bool PlatformInventory::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformInventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

EntityPath PlatformInventory::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformInventory::Racks::Rack>();
        c->parent = this;
        rack.push_back(std::move(c));
        children[segment_path] = rack.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::Racks::get_children()
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

void PlatformInventory::Racks::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::PlatformInventory()
    :
    racks(std::make_unique<PlatformInventory::Racks>())
{
    racks->parent = this;
    children["racks"] = racks.get();

    yang_name = "platform-inventory"; yang_parent_name = "Cisco-IOS-XR-plat-chas-invmgr-oper";
}

PlatformInventory::~PlatformInventory()
{
}

bool PlatformInventory::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool PlatformInventory::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string PlatformInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory";

    return path_buffer.str();

}

EntityPath PlatformInventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            racks = std::make_unique<PlatformInventory::Racks>();
            racks->parent = this;
            children["racks"] = racks.get();
        }
        return children.at("racks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformInventory::get_children()
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

void PlatformInventory::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PlatformInventory::clone_ptr()
{
    return std::make_unique<PlatformInventory>();
}

const Enum::YLeaf InvAdminStateEnum::admin_state_invalid {0, "admin-state-invalid"};
const Enum::YLeaf InvAdminStateEnum::admin_up {1, "admin-up"};
const Enum::YLeaf InvAdminStateEnum::admin_down {2, "admin-down"};

const Enum::YLeaf InvResetReasonEnum::module_reset_reason_unknown {0, "module-reset-reason-unknown"};
const Enum::YLeaf InvResetReasonEnum::module_reset_reason_powerup {1, "module-reset-reason-powerup"};
const Enum::YLeaf InvResetReasonEnum::module_reset_reason_user_shutdown {2, "module-reset-reason-user-shutdown"};
const Enum::YLeaf InvResetReasonEnum::module_reset_reason_user_reload {3, "module-reset-reason-user-reload"};
const Enum::YLeaf InvResetReasonEnum::module_reset_reason_auto_reload {4, "module-reset-reason-auto-reload"};
const Enum::YLeaf InvResetReasonEnum::module_reset_reason_environment {5, "module-reset-reason-environment"};
const Enum::YLeaf InvResetReasonEnum::module_reset_reason_user_unpower {6, "module-reset-reason-user-unpower"};

const Enum::YLeaf InvCardStateEnum::inv_card_not_present {0, "inv-card-not-present"};
const Enum::YLeaf InvCardStateEnum::inv_card_present {1, "inv-card-present"};
const Enum::YLeaf InvCardStateEnum::inv_card_reset {2, "inv-card-reset"};
const Enum::YLeaf InvCardStateEnum::inv_card_booting {3, "inv-card-booting"};
const Enum::YLeaf InvCardStateEnum::inv_card_mbi_booting {4, "inv-card-mbi-booting"};
const Enum::YLeaf InvCardStateEnum::inv_card_running_mbi {5, "inv-card-running-mbi"};
const Enum::YLeaf InvCardStateEnum::inv_card_running_ena {6, "inv-card-running-ena"};
const Enum::YLeaf InvCardStateEnum::inv_card_bring_down {7, "inv-card-bring-down"};
const Enum::YLeaf InvCardStateEnum::inv_card_ena_failure {8, "inv-card-ena-failure"};
const Enum::YLeaf InvCardStateEnum::inv_card_f_diag_run {9, "inv-card-f-diag-run"};
const Enum::YLeaf InvCardStateEnum::inv_card_f_diag_failure {10, "inv-card-f-diag-failure"};
const Enum::YLeaf InvCardStateEnum::inv_card_powered {11, "inv-card-powered"};
const Enum::YLeaf InvCardStateEnum::inv_card_unpowered {12, "inv-card-unpowered"};
const Enum::YLeaf InvCardStateEnum::inv_card_mdr {13, "inv-card-mdr"};
const Enum::YLeaf InvCardStateEnum::inv_card_mdr_running_mbi {14, "inv-card-mdr-running-mbi"};
const Enum::YLeaf InvCardStateEnum::inv_card_main_t_mode {15, "inv-card-main-t-mode"};
const Enum::YLeaf InvCardStateEnum::inv_card_admin_down {16, "inv-card-admin-down"};
const Enum::YLeaf InvCardStateEnum::inv_card_no_mon {17, "inv-card-no-mon"};
const Enum::YLeaf InvCardStateEnum::inv_card_unknown {18, "inv-card-unknown"};
const Enum::YLeaf InvCardStateEnum::inv_card_failed {19, "inv-card-failed"};
const Enum::YLeaf InvCardStateEnum::inv_card_ok {20, "inv-card-ok"};
const Enum::YLeaf InvCardStateEnum::inv_card_missing {21, "inv-card-missing"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_downloading {22, "inv-card-field-diag-downloading"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_unmonitor {23, "inv-card-field-diag-unmonitor"};
const Enum::YLeaf InvCardStateEnum::inv_card_fabric_field_diag_unmonitor {24, "inv-card-fabric-field-diag-unmonitor"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_rp_launching {25, "inv-card-field-diag-rp-launching"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_running {26, "inv-card-field-diag-running"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_pass {27, "inv-card-field-diag-pass"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_fail {28, "inv-card-field-diag-fail"};
const Enum::YLeaf InvCardStateEnum::inv_card_field_diag_timeout {29, "inv-card-field-diag-timeout"};
const Enum::YLeaf InvCardStateEnum::inv_card_disabled {30, "inv-card-disabled"};
const Enum::YLeaf InvCardStateEnum::inv_card_spa_booting {31, "inv-card-spa-booting"};
const Enum::YLeaf InvCardStateEnum::inv_card_not_allowed_online {32, "inv-card-not-allowed-online"};
const Enum::YLeaf InvCardStateEnum::inv_card_stopped {33, "inv-card-stopped"};
const Enum::YLeaf InvCardStateEnum::inv_card_incompatible_fw_ver {34, "inv-card-incompatible-fw-ver"};
const Enum::YLeaf InvCardStateEnum::inv_card_fpd_hold {35, "inv-card-fpd-hold"};
const Enum::YLeaf InvCardStateEnum::inv_card_node_prep {36, "inv-card-node-prep"};
const Enum::YLeaf InvCardStateEnum::inv_card_updating_fpd {37, "inv-card-updating-fpd"};
const Enum::YLeaf InvCardStateEnum::inv_card_num_states {38, "inv-card-num-states"};

const Enum::YLeaf InvMonitorStateEnum::unmonitored {0, "unmonitored"};
const Enum::YLeaf InvMonitorStateEnum::monitored {1, "monitored"};

const Enum::YLeaf NodeStateEnum::not_present {0, "not-present"};
const Enum::YLeaf NodeStateEnum::present {1, "present"};
const Enum::YLeaf NodeStateEnum::reset {2, "reset"};
const Enum::YLeaf NodeStateEnum::rommon {3, "rommon"};
const Enum::YLeaf NodeStateEnum::mbi_boot {4, "mbi-boot"};
const Enum::YLeaf NodeStateEnum::mbi_run {5, "mbi-run"};
const Enum::YLeaf NodeStateEnum::xr_run {6, "xr-run"};
const Enum::YLeaf NodeStateEnum::bring_down {7, "bring-down"};
const Enum::YLeaf NodeStateEnum::xr_fail {8, "xr-fail"};
const Enum::YLeaf NodeStateEnum::fdiag_run {9, "fdiag-run"};
const Enum::YLeaf NodeStateEnum::fdiag_fail {10, "fdiag-fail"};
const Enum::YLeaf NodeStateEnum::power {11, "power"};
const Enum::YLeaf NodeStateEnum::unpower {12, "unpower"};
const Enum::YLeaf NodeStateEnum::mdr_warm_reload {13, "mdr-warm-reload"};
const Enum::YLeaf NodeStateEnum::mdr_mbi_run {14, "mdr-mbi-run"};
const Enum::YLeaf NodeStateEnum::maintenance_mode {15, "maintenance-mode"};
const Enum::YLeaf NodeStateEnum::admin_down {16, "admin-down"};
const Enum::YLeaf NodeStateEnum::not_monitor {17, "not-monitor"};
const Enum::YLeaf NodeStateEnum::unknown_card {18, "unknown-card"};
const Enum::YLeaf NodeStateEnum::failed {19, "failed"};
const Enum::YLeaf NodeStateEnum::ok {20, "ok"};
const Enum::YLeaf NodeStateEnum::missing {21, "missing"};
const Enum::YLeaf NodeStateEnum::diag_download {22, "diag-download"};
const Enum::YLeaf NodeStateEnum::diag_not_monitor {23, "diag-not-monitor"};
const Enum::YLeaf NodeStateEnum::fabric_diag_not_monitor {24, "fabric-diag-not-monitor"};
const Enum::YLeaf NodeStateEnum::diag_rp_launch {25, "diag-rp-launch"};
const Enum::YLeaf NodeStateEnum::diag_run {26, "diag-run"};
const Enum::YLeaf NodeStateEnum::diag_pass {27, "diag-pass"};
const Enum::YLeaf NodeStateEnum::diag_fail {28, "diag-fail"};
const Enum::YLeaf NodeStateEnum::diag_timeout {29, "diag-timeout"};
const Enum::YLeaf NodeStateEnum::disable {30, "disable"};
const Enum::YLeaf NodeStateEnum::spa_boot {31, "spa-boot"};
const Enum::YLeaf NodeStateEnum::not_allowed_online {32, "not-allowed-online"};
const Enum::YLeaf NodeStateEnum::stop {33, "stop"};
const Enum::YLeaf NodeStateEnum::incomp_version {34, "incomp-version"};
const Enum::YLeaf NodeStateEnum::fpd_hold {35, "fpd-hold"};
const Enum::YLeaf NodeStateEnum::xr_preparation {36, "xr-preparation"};
const Enum::YLeaf NodeStateEnum::sync_ready {37, "sync-ready"};
const Enum::YLeaf NodeStateEnum::xr_isolate {38, "xr-isolate"};
const Enum::YLeaf NodeStateEnum::ready {39, "ready"};
const Enum::YLeaf NodeStateEnum::invalid {40, "invalid"};
const Enum::YLeaf NodeStateEnum::operational {41, "operational"};
const Enum::YLeaf NodeStateEnum::operational_lock {42, "operational-lock"};
const Enum::YLeaf NodeStateEnum::going_down {43, "going-down"};
const Enum::YLeaf NodeStateEnum::going_offline {44, "going-offline"};
const Enum::YLeaf NodeStateEnum::going_online {45, "going-online"};
const Enum::YLeaf NodeStateEnum::offline {46, "offline"};
const Enum::YLeaf NodeStateEnum::up {47, "up"};
const Enum::YLeaf NodeStateEnum::down {48, "down"};
const Enum::YLeaf NodeStateEnum::max {49, "max"};
const Enum::YLeaf NodeStateEnum::unknown {50, "unknown"};

const Enum::YLeaf CardRedundancyStateEnum::active {1, "active"};
const Enum::YLeaf CardRedundancyStateEnum::standby {2, "standby"};

const Enum::YLeaf InvPowerAdminStateEnum::admin_power_invalid {0, "admin-power-invalid"};
const Enum::YLeaf InvPowerAdminStateEnum::admin_on {2, "admin-on"};
const Enum::YLeaf InvPowerAdminStateEnum::admin_off {3, "admin-off"};


}
}

