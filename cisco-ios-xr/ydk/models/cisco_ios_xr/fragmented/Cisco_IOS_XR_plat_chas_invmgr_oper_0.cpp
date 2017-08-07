
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_plat_chas_invmgr_oper_0.hpp"
#include "Cisco_IOS_XR_plat_chas_invmgr_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_plat_chas_invmgr_oper {

Platform::Platform()
    :
    racks(std::make_shared<Platform::Racks>())
{
    racks->parent = this;

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
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform";

    return path_buffer.str();

}

const EntityPath Platform::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<Platform::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Platform::clone_ptr() const
{
    return std::make_shared<Platform>();
}

std::string Platform::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Platform::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Platform::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Platform::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string Platform::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

const EntityPath Platform::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Platform::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Platform::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Platform::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Platform::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Platform::Racks::Rack::Rack()
    :
    rack_name{YType::str, "rack-name"}
    	,
    slots(std::make_shared<Platform::Racks::Rack::Slots>())
{
    slots->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(rack_name.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Platform::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack-name='" <<rack_name <<"']";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform/racks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_name.is_set || is_set(rack_name.yfilter)) leaf_name_data.push_back(rack_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<Platform::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void Platform::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-name")
    {
        rack_name = value;
        rack_name.value_namespace = name_space;
        rack_name.value_namespace_prefix = name_space_prefix;
    }
}

void Platform::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-name")
    {
        rack_name.yfilter = yfilter;
    }
}

bool Platform::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "rack-name")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string Platform::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slots' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Platform::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Platform::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Platform::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Platform::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Platform::Racks::Rack::Slots::Slot::Slot()
    :
    slot_name{YType::str, "slot-name"}
    	,
    instances(std::make_shared<Platform::Racks::Rack::Slots::Slot::Instances>())
	,state(std::make_shared<Platform::Racks::Rack::Slots::Slot::State>())
	,vm(std::make_shared<Platform::Racks::Rack::Slots::Slot::Vm>())
{
    instances->parent = this;

    state->parent = this;

    vm->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(slot_name.yfilter)
	|| (instances !=  nullptr && instances->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vm !=  nullptr && vm->has_operation());
}

std::string Platform::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot-name='" <<slot_name <<"']";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_name.is_set || is_set(slot_name.yfilter)) leaf_name_data.push_back(slot_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Platform::Racks::Rack::Slots::Slot::Instances>();
        }
        return instances;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Platform::Racks::Rack::Slots::Slot::State>();
        }
        return state;
    }

    if(child_yang_name == "vm")
    {
        if(vm == nullptr)
        {
            vm = std::make_shared<Platform::Racks::Rack::Slots::Slot::Vm>();
        }
        return vm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vm != nullptr)
    {
        children["vm"] = vm;
    }

    return children;
}

void Platform::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-name")
    {
        slot_name = value;
        slot_name.value_namespace = name_space;
        slot_name.value_namespace_prefix = name_space_prefix;
    }
}

void Platform::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-name")
    {
        slot_name.yfilter = yfilter;
    }
}

bool Platform::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances" || name == "state" || name == "vm" || name == "slot-name")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string Platform::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::Slot::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instances' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::Slot::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Platform::Racks::Rack::Slots::Slot::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::Slot::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Platform::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Platform::Racks::Rack::Slots::Slot::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Platform::Racks::Rack::Slots::Slot::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Platform::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    state(std::make_shared<Platform::Racks::Rack::Slots::Slot::Instances::Instance::State>())
{
    state->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Platform::Racks::Rack::Slots::Slot::Instances::Instance::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::Slot::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Platform::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Platform::Racks::Rack::Slots::Slot::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Platform::Racks::Rack::Slots::Slot::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-name")
        return true;
    return false;
}

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
    return is_set(yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(card_redundancy_state.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(is_monitored.yfilter)
	|| ydk::is_set(is_powered.yfilter)
	|| ydk::is_set(is_shutdown.yfilter)
	|| ydk::is_set(plim.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (card_redundancy_state.is_set || is_set(card_redundancy_state.yfilter)) leaf_name_data.push_back(card_redundancy_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (is_monitored.is_set || is_set(is_monitored.yfilter)) leaf_name_data.push_back(is_monitored.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.yfilter)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (is_shutdown.is_set || is_set(is_shutdown.yfilter)) leaf_name_data.push_back(is_shutdown.get_name_leafdata());
    if (plim.is_set || is_set(plim.yfilter)) leaf_name_data.push_back(plim.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-redundancy-state")
    {
        card_redundancy_state = value;
        card_redundancy_state.value_namespace = name_space;
        card_redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-monitored")
    {
        is_monitored = value;
        is_monitored.value_namespace = name_space;
        is_monitored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
        is_powered.value_namespace = name_space;
        is_powered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-shutdown")
    {
        is_shutdown = value;
        is_shutdown.value_namespace = name_space;
        is_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plim")
    {
        plim = value;
        plim.value_namespace = name_space;
        plim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "card-redundancy-state")
    {
        card_redundancy_state.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "is-monitored")
    {
        is_monitored.yfilter = yfilter;
    }
    if(value_path == "is-powered")
    {
        is_powered.yfilter = yfilter;
    }
    if(value_path == "is-shutdown")
    {
        is_shutdown.yfilter = yfilter;
    }
    if(value_path == "plim")
    {
        plim.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Platform::Racks::Rack::Slots::Slot::Instances::Instance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-state" || name == "card-redundancy-state" || name == "card-type" || name == "is-monitored" || name == "is-powered" || name == "is-shutdown" || name == "plim" || name == "state")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(node_descriptiton.yfilter)
	|| ydk::is_set(node_ip.yfilter)
	|| ydk::is_set(partner_name.yfilter)
	|| ydk::is_set(red_role.yfilter)
	|| ydk::is_set(software_status.yfilter);
}

std::string Platform::Racks::Rack::Slots::Slot::Vm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vm";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::Slot::Vm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vm' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_descriptiton.is_set || is_set(node_descriptiton.yfilter)) leaf_name_data.push_back(node_descriptiton.get_name_leafdata());
    if (node_ip.is_set || is_set(node_ip.yfilter)) leaf_name_data.push_back(node_ip.get_name_leafdata());
    if (partner_name.is_set || is_set(partner_name.yfilter)) leaf_name_data.push_back(partner_name.get_name_leafdata());
    if (red_role.is_set || is_set(red_role.yfilter)) leaf_name_data.push_back(red_role.get_name_leafdata());
    if (software_status.is_set || is_set(software_status.yfilter)) leaf_name_data.push_back(software_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::Slot::Vm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::Slot::Vm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Platform::Racks::Rack::Slots::Slot::Vm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-descriptiton")
    {
        node_descriptiton = value;
        node_descriptiton.value_namespace = name_space;
        node_descriptiton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-ip")
    {
        node_ip = value;
        node_ip.value_namespace = name_space;
        node_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-name")
    {
        partner_name = value;
        partner_name.value_namespace = name_space;
        partner_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-role")
    {
        red_role = value;
        red_role.value_namespace = name_space;
        red_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-status")
    {
        software_status = value;
        software_status.value_namespace = name_space;
        software_status.value_namespace_prefix = name_space_prefix;
    }
}

void Platform::Racks::Rack::Slots::Slot::Vm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-descriptiton")
    {
        node_descriptiton.yfilter = yfilter;
    }
    if(value_path == "node-ip")
    {
        node_ip.yfilter = yfilter;
    }
    if(value_path == "partner-name")
    {
        partner_name.yfilter = yfilter;
    }
    if(value_path == "red-role")
    {
        red_role.yfilter = yfilter;
    }
    if(value_path == "software-status")
    {
        software_status.yfilter = yfilter;
    }
}

bool Platform::Racks::Rack::Slots::Slot::Vm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-descriptiton" || name == "node-ip" || name == "partner-name" || name == "red-role" || name == "software-status")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(card_redundancy_state.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(is_monitored.yfilter)
	|| ydk::is_set(is_powered.yfilter)
	|| ydk::is_set(is_shutdown.yfilter)
	|| ydk::is_set(plim.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Platform::Racks::Rack::Slots::Slot::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Platform::Racks::Rack::Slots::Slot::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (card_redundancy_state.is_set || is_set(card_redundancy_state.yfilter)) leaf_name_data.push_back(card_redundancy_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (is_monitored.is_set || is_set(is_monitored.yfilter)) leaf_name_data.push_back(is_monitored.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.yfilter)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (is_shutdown.is_set || is_set(is_shutdown.yfilter)) leaf_name_data.push_back(is_shutdown.get_name_leafdata());
    if (plim.is_set || is_set(plim.yfilter)) leaf_name_data.push_back(plim.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Platform::Racks::Rack::Slots::Slot::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Platform::Racks::Rack::Slots::Slot::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Platform::Racks::Rack::Slots::Slot::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-redundancy-state")
    {
        card_redundancy_state = value;
        card_redundancy_state.value_namespace = name_space;
        card_redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-monitored")
    {
        is_monitored = value;
        is_monitored.value_namespace = name_space;
        is_monitored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
        is_powered.value_namespace = name_space;
        is_powered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-shutdown")
    {
        is_shutdown = value;
        is_shutdown.value_namespace = name_space;
        is_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plim")
    {
        plim = value;
        plim.value_namespace = name_space;
        plim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Platform::Racks::Rack::Slots::Slot::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "card-redundancy-state")
    {
        card_redundancy_state.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "is-monitored")
    {
        is_monitored.yfilter = yfilter;
    }
    if(value_path == "is-powered")
    {
        is_powered.yfilter = yfilter;
    }
    if(value_path == "is-shutdown")
    {
        is_shutdown.yfilter = yfilter;
    }
    if(value_path == "plim")
    {
        plim.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Platform::Racks::Rack::Slots::Slot::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-state" || name == "card-redundancy-state" || name == "card-type" || name == "is-monitored" || name == "is-powered" || name == "is-shutdown" || name == "plim" || name == "state")
        return true;
    return false;
}

PlatformInventory::PlatformInventory()
    :
    racks(std::make_shared<PlatformInventory::Racks>())
{
    racks->parent = this;

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
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string PlatformInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory";

    return path_buffer.str();

}

const EntityPath PlatformInventory::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PlatformInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<PlatformInventory::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void PlatformInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformInventory::clone_ptr() const
{
    return std::make_shared<PlatformInventory>();
}

std::string PlatformInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Rack()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Attributes>())
	,slots(std::make_shared<PlatformInventory::Racks::Rack::Slots>())
{
    attributes->parent = this;

    slots->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (slots !=  nullptr && slots->has_operation());
}

std::string PlatformInventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory/racks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<PlatformInventory::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void PlatformInventory::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "slots" || name == "name")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slots' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Slot()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes>())
	,cards(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards>())
{
    attributes->parent = this;

    cards->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (cards !=  nullptr && cards->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "cards")
    {
        if(cards == nullptr)
        {
            cards = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards>();
        }
        return cards;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(cards != nullptr)
    {
        children["cards"] = cards;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "cards" || name == "name")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cards";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cards' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card>();
        c->parent = this;
        card.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : card)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Card()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes>())
	,hardware_information(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation>())
	,hw_components(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>())
	,port_slots(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>())
	,sub_slots(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>())
{
    attributes->parent = this;

    hardware_information->parent = this;

    hw_components->parent = this;

    port_slots->parent = this;

    sensors->parent = this;

    sub_slots->parent = this;

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
	|| (sensors !=  nullptr && sensors->has_data())
	|| (sub_slots !=  nullptr && sub_slots->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (hardware_information !=  nullptr && hardware_information->has_operation())
	|| (hw_components !=  nullptr && hw_components->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (sub_slots !=  nullptr && sub_slots->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Card' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "hardware-information")
    {
        if(hardware_information == nullptr)
        {
            hardware_information = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation>();
        }
        return hardware_information;
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components == nullptr)
        {
            hw_components = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>();
        }
        return hw_components;
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots == nullptr)
        {
            port_slots = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>();
        }
        return port_slots;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>();
        }
        return sensors;
    }

    if(child_yang_name == "sub-slots")
    {
        if(sub_slots == nullptr)
        {
            sub_slots = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>();
        }
        return sub_slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(hardware_information != nullptr)
    {
        children["hardware-information"] = hardware_information;
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "hardware-information" || name == "hw-components" || name == "port-slots" || name == "sensors" || name == "sub-slots" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::HardwareInformation()
    :
    bootflash_information(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation>())
	,disk_information(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation>())
	,motherboard_information(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation>())
	,processor_information(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation>())
{
    bootflash_information->parent = this;

    disk_information->parent = this;

    motherboard_information->parent = this;

    processor_information->parent = this;

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
    return is_set(yfilter)
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

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HardwareInformation' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootflash-information")
    {
        if(bootflash_information == nullptr)
        {
            bootflash_information = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation>();
        }
        return bootflash_information;
    }

    if(child_yang_name == "disk-information")
    {
        if(disk_information == nullptr)
        {
            disk_information = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation>();
        }
        return disk_information;
    }

    if(child_yang_name == "motherboard-information")
    {
        if(motherboard_information == nullptr)
        {
            motherboard_information = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation>();
        }
        return motherboard_information;
    }

    if(child_yang_name == "processor-information")
    {
        if(processor_information == nullptr)
        {
            processor_information = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation>();
        }
        return processor_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootflash_information != nullptr)
    {
        children["bootflash-information"] = bootflash_information;
    }

    if(disk_information != nullptr)
    {
        children["disk-information"] = disk_information;
    }

    if(motherboard_information != nullptr)
    {
        children["motherboard-information"] = motherboard_information;
    }

    if(processor_information != nullptr)
    {
        children["processor-information"] = processor_information;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootflash-information" || name == "disk-information" || name == "motherboard-information" || name == "processor-information")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processor_type.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processor-information";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessorInformation' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processor_type.is_set || is_set(processor_type.yfilter)) leaf_name_data.push_back(processor_type.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processor-type")
    {
        processor_type = value;
        processor_type.value_namespace = name_space;
        processor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processor-type")
    {
        processor_type.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processor-type" || name == "revision" || name == "speed")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::MotherboardInformation()
    :
    main_memory_size{YType::uint64, "main-memory-size"},
    nvram_size{YType::uint64, "nvram-size"}
    	,
    bootflash(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash>())
	,processor(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor>())
	,rom(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom>())
{
    bootflash->parent = this;

    processor->parent = this;

    rom->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(main_memory_size.yfilter)
	|| ydk::is_set(nvram_size.yfilter)
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

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MotherboardInformation' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_memory_size.is_set || is_set(main_memory_size.yfilter)) leaf_name_data.push_back(main_memory_size.get_name_leafdata());
    if (nvram_size.is_set || is_set(nvram_size.yfilter)) leaf_name_data.push_back(nvram_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootflash")
    {
        if(bootflash == nullptr)
        {
            bootflash = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash>();
        }
        return bootflash;
    }

    if(child_yang_name == "processor")
    {
        if(processor == nullptr)
        {
            processor = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor>();
        }
        return processor;
    }

    if(child_yang_name == "rom")
    {
        if(rom == nullptr)
        {
            rom = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom>();
        }
        return rom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootflash != nullptr)
    {
        children["bootflash"] = bootflash;
    }

    if(processor != nullptr)
    {
        children["processor"] = processor;
    }

    if(rom != nullptr)
    {
        children["rom"] = rom;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-memory-size")
    {
        main_memory_size = value;
        main_memory_size.value_namespace = name_space;
        main_memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nvram-size")
    {
        nvram_size = value;
        nvram_size.value_namespace = name_space;
        nvram_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-memory-size")
    {
        main_memory_size.yfilter = yfilter;
    }
    if(value_path == "nvram-size")
    {
        nvram_size.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootflash" || name == "processor" || name == "rom" || name == "main-memory-size" || name == "nvram-size")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(image_name.yfilter)
	|| ydk::is_set(major_version.yfilter)
	|| ydk::is_set(micro_image_version.yfilter)
	|| ydk::is_set(minor_version.yfilter)
	|| ydk::is_set(platform_specific.yfilter)
	|| ydk::is_set(release_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rom";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rom' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (image_name.is_set || is_set(image_name.yfilter)) leaf_name_data.push_back(image_name.get_name_leafdata());
    if (major_version.is_set || is_set(major_version.yfilter)) leaf_name_data.push_back(major_version.get_name_leafdata());
    if (micro_image_version.is_set || is_set(micro_image_version.yfilter)) leaf_name_data.push_back(micro_image_version.get_name_leafdata());
    if (minor_version.is_set || is_set(minor_version.yfilter)) leaf_name_data.push_back(minor_version.get_name_leafdata());
    if (platform_specific.is_set || is_set(platform_specific.yfilter)) leaf_name_data.push_back(platform_specific.get_name_leafdata());
    if (release_type.is_set || is_set(release_type.yfilter)) leaf_name_data.push_back(release_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "image-name")
    {
        image_name = value;
        image_name.value_namespace = name_space;
        image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major-version")
    {
        major_version = value;
        major_version.value_namespace = name_space;
        major_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version = value;
        micro_image_version.value_namespace = name_space;
        micro_image_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-version")
    {
        minor_version = value;
        minor_version.value_namespace = name_space;
        minor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-specific")
    {
        platform_specific = value;
        platform_specific.value_namespace = name_space;
        platform_specific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-type")
    {
        release_type = value;
        release_type.value_namespace = name_space;
        release_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "image-name")
    {
        image_name.yfilter = yfilter;
    }
    if(value_path == "major-version")
    {
        major_version.yfilter = yfilter;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version.yfilter = yfilter;
    }
    if(value_path == "minor-version")
    {
        minor_version.yfilter = yfilter;
    }
    if(value_path == "platform-specific")
    {
        platform_specific.yfilter = yfilter;
    }
    if(value_path == "release-type")
    {
        release_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "image-name" || name == "major-version" || name == "micro-image-version" || name == "minor-version" || name == "platform-specific" || name == "release-type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(bootflash_size.yfilter)
	|| ydk::is_set(bootflash_type.yfilter)
	|| ydk::is_set(image_name.yfilter)
	|| ydk::is_set(major_version.yfilter)
	|| ydk::is_set(micro_image_version.yfilter)
	|| ydk::is_set(minor_version.yfilter)
	|| ydk::is_set(platform_specific.yfilter)
	|| ydk::is_set(platform_type.yfilter)
	|| ydk::is_set(release_type.yfilter)
	|| ydk::is_set(sector_size.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootflash";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bootflash' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootflash_size.is_set || is_set(bootflash_size.yfilter)) leaf_name_data.push_back(bootflash_size.get_name_leafdata());
    if (bootflash_type.is_set || is_set(bootflash_type.yfilter)) leaf_name_data.push_back(bootflash_type.get_name_leafdata());
    if (image_name.is_set || is_set(image_name.yfilter)) leaf_name_data.push_back(image_name.get_name_leafdata());
    if (major_version.is_set || is_set(major_version.yfilter)) leaf_name_data.push_back(major_version.get_name_leafdata());
    if (micro_image_version.is_set || is_set(micro_image_version.yfilter)) leaf_name_data.push_back(micro_image_version.get_name_leafdata());
    if (minor_version.is_set || is_set(minor_version.yfilter)) leaf_name_data.push_back(minor_version.get_name_leafdata());
    if (platform_specific.is_set || is_set(platform_specific.yfilter)) leaf_name_data.push_back(platform_specific.get_name_leafdata());
    if (platform_type.is_set || is_set(platform_type.yfilter)) leaf_name_data.push_back(platform_type.get_name_leafdata());
    if (release_type.is_set || is_set(release_type.yfilter)) leaf_name_data.push_back(release_type.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.yfilter)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootflash-size")
    {
        bootflash_size = value;
        bootflash_size.value_namespace = name_space;
        bootflash_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootflash-type")
    {
        bootflash_type = value;
        bootflash_type.value_namespace = name_space;
        bootflash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "image-name")
    {
        image_name = value;
        image_name.value_namespace = name_space;
        image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major-version")
    {
        major_version = value;
        major_version.value_namespace = name_space;
        major_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version = value;
        micro_image_version.value_namespace = name_space;
        micro_image_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-version")
    {
        minor_version = value;
        minor_version.value_namespace = name_space;
        minor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-specific")
    {
        platform_specific = value;
        platform_specific.value_namespace = name_space;
        platform_specific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-type")
    {
        platform_type = value;
        platform_type.value_namespace = name_space;
        platform_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-type")
    {
        release_type = value;
        release_type.value_namespace = name_space;
        release_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
        sector_size.value_namespace = name_space;
        sector_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootflash-size")
    {
        bootflash_size.yfilter = yfilter;
    }
    if(value_path == "bootflash-type")
    {
        bootflash_type.yfilter = yfilter;
    }
    if(value_path == "image-name")
    {
        image_name.yfilter = yfilter;
    }
    if(value_path == "major-version")
    {
        major_version.yfilter = yfilter;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version.yfilter = yfilter;
    }
    if(value_path == "minor-version")
    {
        minor_version.yfilter = yfilter;
    }
    if(value_path == "platform-specific")
    {
        platform_specific.yfilter = yfilter;
    }
    if(value_path == "platform-type")
    {
        platform_type.yfilter = yfilter;
    }
    if(value_path == "release-type")
    {
        release_type.yfilter = yfilter;
    }
    if(value_path == "sector-size")
    {
        sector_size.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootflash-size" || name == "bootflash-type" || name == "image-name" || name == "major-version" || name == "micro-image-version" || name == "minor-version" || name == "platform-specific" || name == "platform-type" || name == "release-type" || name == "sector-size")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processor_type.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processor";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Processor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processor_type.is_set || is_set(processor_type.yfilter)) leaf_name_data.push_back(processor_type.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processor-type")
    {
        processor_type = value;
        processor_type.value_namespace = name_space;
        processor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processor-type")
    {
        processor_type.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processor-type" || name == "revision" || name == "speed")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(bootflash_size.yfilter)
	|| ydk::is_set(bootflash_type.yfilter)
	|| ydk::is_set(image_name.yfilter)
	|| ydk::is_set(major_version.yfilter)
	|| ydk::is_set(micro_image_version.yfilter)
	|| ydk::is_set(minor_version.yfilter)
	|| ydk::is_set(platform_specific.yfilter)
	|| ydk::is_set(platform_type.yfilter)
	|| ydk::is_set(release_type.yfilter)
	|| ydk::is_set(sector_size.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootflash-information";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootflashInformation' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootflash_size.is_set || is_set(bootflash_size.yfilter)) leaf_name_data.push_back(bootflash_size.get_name_leafdata());
    if (bootflash_type.is_set || is_set(bootflash_type.yfilter)) leaf_name_data.push_back(bootflash_type.get_name_leafdata());
    if (image_name.is_set || is_set(image_name.yfilter)) leaf_name_data.push_back(image_name.get_name_leafdata());
    if (major_version.is_set || is_set(major_version.yfilter)) leaf_name_data.push_back(major_version.get_name_leafdata());
    if (micro_image_version.is_set || is_set(micro_image_version.yfilter)) leaf_name_data.push_back(micro_image_version.get_name_leafdata());
    if (minor_version.is_set || is_set(minor_version.yfilter)) leaf_name_data.push_back(minor_version.get_name_leafdata());
    if (platform_specific.is_set || is_set(platform_specific.yfilter)) leaf_name_data.push_back(platform_specific.get_name_leafdata());
    if (platform_type.is_set || is_set(platform_type.yfilter)) leaf_name_data.push_back(platform_type.get_name_leafdata());
    if (release_type.is_set || is_set(release_type.yfilter)) leaf_name_data.push_back(release_type.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.yfilter)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootflash-size")
    {
        bootflash_size = value;
        bootflash_size.value_namespace = name_space;
        bootflash_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootflash-type")
    {
        bootflash_type = value;
        bootflash_type.value_namespace = name_space;
        bootflash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "image-name")
    {
        image_name = value;
        image_name.value_namespace = name_space;
        image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major-version")
    {
        major_version = value;
        major_version.value_namespace = name_space;
        major_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version = value;
        micro_image_version.value_namespace = name_space;
        micro_image_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-version")
    {
        minor_version = value;
        minor_version.value_namespace = name_space;
        minor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-specific")
    {
        platform_specific = value;
        platform_specific.value_namespace = name_space;
        platform_specific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-type")
    {
        platform_type = value;
        platform_type.value_namespace = name_space;
        platform_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-type")
    {
        release_type = value;
        release_type.value_namespace = name_space;
        release_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
        sector_size.value_namespace = name_space;
        sector_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootflash-size")
    {
        bootflash_size.yfilter = yfilter;
    }
    if(value_path == "bootflash-type")
    {
        bootflash_type.yfilter = yfilter;
    }
    if(value_path == "image-name")
    {
        image_name.yfilter = yfilter;
    }
    if(value_path == "major-version")
    {
        major_version.yfilter = yfilter;
    }
    if(value_path == "micro-image-version")
    {
        micro_image_version.yfilter = yfilter;
    }
    if(value_path == "minor-version")
    {
        minor_version.yfilter = yfilter;
    }
    if(value_path == "platform-specific")
    {
        platform_specific.yfilter = yfilter;
    }
    if(value_path == "platform-type")
    {
        platform_type.yfilter = yfilter;
    }
    if(value_path == "release-type")
    {
        release_type.yfilter = yfilter;
    }
    if(value_path == "sector-size")
    {
        sector_size.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootflash-size" || name == "bootflash-type" || name == "image-name" || name == "major-version" || name == "micro-image-version" || name == "minor-version" || name == "platform-specific" || name == "platform-type" || name == "release-type" || name == "sector-size")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(disk_name.yfilter)
	|| ydk::is_set(disk_size.yfilter)
	|| ydk::is_set(sector_size.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disk-information";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiskInformation' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disk_name.is_set || is_set(disk_name.yfilter)) leaf_name_data.push_back(disk_name.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.yfilter)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.yfilter)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disks")
    {
        for(auto const & c : disks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks>();
        c->parent = this;
        disks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : disks)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disk-name")
    {
        disk_name = value;
        disk_name.value_namespace = name_space;
        disk_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
        disk_size.value_namespace = name_space;
        disk_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
        sector_size.value_namespace = name_space;
        sector_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disk-name")
    {
        disk_name.yfilter = yfilter;
    }
    if(value_path == "disk-size")
    {
        disk_size.yfilter = yfilter;
    }
    if(value_path == "sector-size")
    {
        sector_size.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disks" || name == "disk-name" || name == "disk-size" || name == "sector-size")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(disk_name.yfilter)
	|| ydk::is_set(disk_size.yfilter)
	|| ydk::is_set(sector_size.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disks";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disks' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disk_name.is_set || is_set(disk_name.yfilter)) leaf_name_data.push_back(disk_name.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.yfilter)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (sector_size.is_set || is_set(sector_size.yfilter)) leaf_name_data.push_back(sector_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disk-name")
    {
        disk_name = value;
        disk_name.value_namespace = name_space;
        disk_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
        disk_size.value_namespace = name_space;
        disk_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sector-size")
    {
        sector_size = value;
        sector_size.value_namespace = name_space;
        sector_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disk-name")
    {
        disk_name.yfilter = yfilter;
    }
    if(value_path == "disk-size")
    {
        disk_size.yfilter = yfilter;
    }
    if(value_path == "sector-size")
    {
        sector_size.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disk-name" || name == "disk-size" || name == "sector-size")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slots";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubSlots' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot>();
        c->parent = this;
        sub_slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-slot")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::SubSlot()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes>())
	,module(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>())
{
    attributes->parent = this;

    module->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (module !=  nullptr && module->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slot" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubSlot' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "module")
    {
        if(module == nullptr)
        {
            module = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>();
        }
        return module;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(module != nullptr)
    {
        children["module"] = module;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "module" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Module()
    :
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes>())
	,port_slots(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>())
{
    attributes->parent = this;

    port_slots->parent = this;

    sensors->parent = this;

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
    return is_set(yfilter)
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

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Module' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots == nullptr)
        {
            port_slots = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>();
        }
        return port_slots;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "port-slots" || name == "sensors")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlots' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-slot")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::PortSlot()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes>())
	,portses(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors>())
{
    attributes->parent = this;

    portses->parent = this;

    sensors->parent = this;

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::~PortSlot()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (portses !=  nullptr && portses->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (portses !=  nullptr && portses->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlot' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "portses")
    {
        if(portses == nullptr)
        {
            portses = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses>();
        }
        return portses;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(portses != nullptr)
    {
        children["portses"] = portses;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "portses" || name == "sensors" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Portses()
{
    yang_name = "portses"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::~Portses()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portses";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Portses' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports>();
        c->parent = this;
        ports.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ports)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Ports()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes>())
	,hw_components(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors>())
{
    attributes->parent = this;

    hw_components->parent = this;

    sensors->parent = this;

    yang_name = "ports"; yang_parent_name = "portses";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::~Ports()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (hw_components !=  nullptr && hw_components->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (hw_components !=  nullptr && hw_components->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ports' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components == nullptr)
        {
            hw_components = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents>();
        }
        return hw_components;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(hw_components != nullptr)
    {
        children["hw-components"] = hw_components;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "hw-components" || name == "sensors" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponents()
{
    yang_name = "hw-components"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::~HwComponents()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::has_data() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponents' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_component)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-component")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::HwComponent()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors>())
{
    attributes->parent = this;

    sensors->parent = this;

    yang_name = "hw-component"; yang_parent_name = "hw-components";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::~HwComponent()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponent' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "sensors" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "hw-component";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "hw-component";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlots' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-slot")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::PortSlot()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes>())
	,portses(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors>())
{
    attributes->parent = this;

    portses->parent = this;

    sensors->parent = this;

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::~PortSlot()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (portses !=  nullptr && portses->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (portses !=  nullptr && portses->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlot' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "portses")
    {
        if(portses == nullptr)
        {
            portses = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses>();
        }
        return portses;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(portses != nullptr)
    {
        children["portses"] = portses;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "portses" || name == "sensors" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Portses()
{
    yang_name = "portses"; yang_parent_name = "port-slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::~Portses()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portses";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Portses' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports>();
        c->parent = this;
        ports.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ports)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Ports()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes>())
	,hw_components(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors>())
{
    attributes->parent = this;

    hw_components->parent = this;

    sensors->parent = this;

    yang_name = "ports"; yang_parent_name = "portses";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::~Ports()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (hw_components !=  nullptr && hw_components->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (hw_components !=  nullptr && hw_components->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ports' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components == nullptr)
        {
            hw_components = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents>();
        }
        return hw_components;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(hw_components != nullptr)
    {
        children["hw-components"] = hw_components;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "hw-components" || name == "sensors" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponents()
{
    yang_name = "hw-components"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::~HwComponents()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::has_data() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponents' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_component)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-component")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::HwComponent()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors>())
{
    attributes->parent = this;

    sensors->parent = this;

    yang_name = "hw-component"; yang_parent_name = "hw-components";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::~HwComponent()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponent' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "sensors" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "hw-component";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "hw-component";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "sensor";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "ports";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::BasicInfo()
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

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::has_data() const
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

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponents' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_component)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-component")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::HwComponent()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes>())
	,sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>())
{
    attributes->parent = this;

    sensors->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponent' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "sensors" || name == "name")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

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
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_children() const
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

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "firmware-revision" || name == "hardware-revision" || name == "is-field-replaceable-unit" || name == "model-name" || name == "name" || name == "serial-number" || name == "software-revision" || name == "vendor-type")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-monitor-state" || name == "module-operational-state" || name == "module-power-administrative-state" || name == "module-reset-reason")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(time_in_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "time-in-seconds")
        return true;
    return false;
}

const Enum::YLeaf InvResetReason::module_reset_reason_unknown {0, "module-reset-reason-unknown"};
const Enum::YLeaf InvResetReason::module_reset_reason_powerup {1, "module-reset-reason-powerup"};
const Enum::YLeaf InvResetReason::module_reset_reason_user_shutdown {2, "module-reset-reason-user-shutdown"};
const Enum::YLeaf InvResetReason::module_reset_reason_user_reload {3, "module-reset-reason-user-reload"};
const Enum::YLeaf InvResetReason::module_reset_reason_auto_reload {4, "module-reset-reason-auto-reload"};
const Enum::YLeaf InvResetReason::module_reset_reason_environment {5, "module-reset-reason-environment"};
const Enum::YLeaf InvResetReason::module_reset_reason_user_unpower {6, "module-reset-reason-user-unpower"};

const Enum::YLeaf InvMonitorState::unmonitored {0, "unmonitored"};
const Enum::YLeaf InvMonitorState::monitored {1, "monitored"};

const Enum::YLeaf InvPowerAdminState::admin_power_invalid {0, "admin-power-invalid"};
const Enum::YLeaf InvPowerAdminState::admin_on {2, "admin-on"};
const Enum::YLeaf InvPowerAdminState::admin_off {3, "admin-off"};

const Enum::YLeaf InvCardState::inv_card_not_present {0, "inv-card-not-present"};
const Enum::YLeaf InvCardState::inv_card_present {1, "inv-card-present"};
const Enum::YLeaf InvCardState::inv_card_reset {2, "inv-card-reset"};
const Enum::YLeaf InvCardState::inv_card_booting {3, "inv-card-booting"};
const Enum::YLeaf InvCardState::inv_card_mbi_booting {4, "inv-card-mbi-booting"};
const Enum::YLeaf InvCardState::inv_card_running_mbi {5, "inv-card-running-mbi"};
const Enum::YLeaf InvCardState::inv_card_running_ena {6, "inv-card-running-ena"};
const Enum::YLeaf InvCardState::inv_card_bring_down {7, "inv-card-bring-down"};
const Enum::YLeaf InvCardState::inv_card_ena_failure {8, "inv-card-ena-failure"};
const Enum::YLeaf InvCardState::inv_card_f_diag_run {9, "inv-card-f-diag-run"};
const Enum::YLeaf InvCardState::inv_card_f_diag_failure {10, "inv-card-f-diag-failure"};
const Enum::YLeaf InvCardState::inv_card_powered {11, "inv-card-powered"};
const Enum::YLeaf InvCardState::inv_card_unpowered {12, "inv-card-unpowered"};
const Enum::YLeaf InvCardState::inv_card_mdr {13, "inv-card-mdr"};
const Enum::YLeaf InvCardState::inv_card_mdr_running_mbi {14, "inv-card-mdr-running-mbi"};
const Enum::YLeaf InvCardState::inv_card_main_t_mode {15, "inv-card-main-t-mode"};
const Enum::YLeaf InvCardState::inv_card_admin_down {16, "inv-card-admin-down"};
const Enum::YLeaf InvCardState::inv_card_no_mon {17, "inv-card-no-mon"};
const Enum::YLeaf InvCardState::inv_card_unknown {18, "inv-card-unknown"};
const Enum::YLeaf InvCardState::inv_card_failed {19, "inv-card-failed"};
const Enum::YLeaf InvCardState::inv_card_ok {20, "inv-card-ok"};
const Enum::YLeaf InvCardState::inv_card_missing {21, "inv-card-missing"};
const Enum::YLeaf InvCardState::inv_card_field_diag_downloading {22, "inv-card-field-diag-downloading"};
const Enum::YLeaf InvCardState::inv_card_field_diag_unmonitor {23, "inv-card-field-diag-unmonitor"};
const Enum::YLeaf InvCardState::inv_card_fabric_field_diag_unmonitor {24, "inv-card-fabric-field-diag-unmonitor"};
const Enum::YLeaf InvCardState::inv_card_field_diag_rp_launching {25, "inv-card-field-diag-rp-launching"};
const Enum::YLeaf InvCardState::inv_card_field_diag_running {26, "inv-card-field-diag-running"};
const Enum::YLeaf InvCardState::inv_card_field_diag_pass {27, "inv-card-field-diag-pass"};
const Enum::YLeaf InvCardState::inv_card_field_diag_fail {28, "inv-card-field-diag-fail"};
const Enum::YLeaf InvCardState::inv_card_field_diag_timeout {29, "inv-card-field-diag-timeout"};
const Enum::YLeaf InvCardState::inv_card_disabled {30, "inv-card-disabled"};
const Enum::YLeaf InvCardState::inv_card_spa_booting {31, "inv-card-spa-booting"};
const Enum::YLeaf InvCardState::inv_card_not_allowed_online {32, "inv-card-not-allowed-online"};
const Enum::YLeaf InvCardState::inv_card_stopped {33, "inv-card-stopped"};
const Enum::YLeaf InvCardState::inv_card_incompatible_fw_ver {34, "inv-card-incompatible-fw-ver"};
const Enum::YLeaf InvCardState::inv_card_fpd_hold {35, "inv-card-fpd-hold"};
const Enum::YLeaf InvCardState::inv_card_node_prep {36, "inv-card-node-prep"};
const Enum::YLeaf InvCardState::inv_card_updating_fpd {37, "inv-card-updating-fpd"};
const Enum::YLeaf InvCardState::inv_card_num_states {38, "inv-card-num-states"};

const Enum::YLeaf NodeState::not_present {0, "not-present"};
const Enum::YLeaf NodeState::present {1, "present"};
const Enum::YLeaf NodeState::reset {2, "reset"};
const Enum::YLeaf NodeState::rommon {3, "rommon"};
const Enum::YLeaf NodeState::mbi_boot {4, "mbi-boot"};
const Enum::YLeaf NodeState::mbi_run {5, "mbi-run"};
const Enum::YLeaf NodeState::xr_run {6, "xr-run"};
const Enum::YLeaf NodeState::bring_down {7, "bring-down"};
const Enum::YLeaf NodeState::xr_fail {8, "xr-fail"};
const Enum::YLeaf NodeState::fdiag_run {9, "fdiag-run"};
const Enum::YLeaf NodeState::fdiag_fail {10, "fdiag-fail"};
const Enum::YLeaf NodeState::power {11, "power"};
const Enum::YLeaf NodeState::unpower {12, "unpower"};
const Enum::YLeaf NodeState::mdr_warm_reload {13, "mdr-warm-reload"};
const Enum::YLeaf NodeState::mdr_mbi_run {14, "mdr-mbi-run"};
const Enum::YLeaf NodeState::maintenance_mode {15, "maintenance-mode"};
const Enum::YLeaf NodeState::admin_down {16, "admin-down"};
const Enum::YLeaf NodeState::not_monitor {17, "not-monitor"};
const Enum::YLeaf NodeState::unknown_card {18, "unknown-card"};
const Enum::YLeaf NodeState::failed {19, "failed"};
const Enum::YLeaf NodeState::ok {20, "ok"};
const Enum::YLeaf NodeState::missing {21, "missing"};
const Enum::YLeaf NodeState::diag_download {22, "diag-download"};
const Enum::YLeaf NodeState::diag_not_monitor {23, "diag-not-monitor"};
const Enum::YLeaf NodeState::fabric_diag_not_monitor {24, "fabric-diag-not-monitor"};
const Enum::YLeaf NodeState::diag_rp_launch {25, "diag-rp-launch"};
const Enum::YLeaf NodeState::diag_run {26, "diag-run"};
const Enum::YLeaf NodeState::diag_pass {27, "diag-pass"};
const Enum::YLeaf NodeState::diag_fail {28, "diag-fail"};
const Enum::YLeaf NodeState::diag_timeout {29, "diag-timeout"};
const Enum::YLeaf NodeState::disable {30, "disable"};
const Enum::YLeaf NodeState::spa_boot {31, "spa-boot"};
const Enum::YLeaf NodeState::not_allowed_online {32, "not-allowed-online"};
const Enum::YLeaf NodeState::stop {33, "stop"};
const Enum::YLeaf NodeState::incomp_version {34, "incomp-version"};
const Enum::YLeaf NodeState::fpd_hold {35, "fpd-hold"};
const Enum::YLeaf NodeState::xr_preparation {36, "xr-preparation"};
const Enum::YLeaf NodeState::sync_ready {37, "sync-ready"};
const Enum::YLeaf NodeState::xr_isolate {38, "xr-isolate"};
const Enum::YLeaf NodeState::ready {39, "ready"};
const Enum::YLeaf NodeState::invalid {40, "invalid"};
const Enum::YLeaf NodeState::operational {41, "operational"};
const Enum::YLeaf NodeState::operational_lock {42, "operational-lock"};
const Enum::YLeaf NodeState::going_down {43, "going-down"};
const Enum::YLeaf NodeState::going_offline {44, "going-offline"};
const Enum::YLeaf NodeState::going_online {45, "going-online"};
const Enum::YLeaf NodeState::offline {46, "offline"};
const Enum::YLeaf NodeState::up {47, "up"};
const Enum::YLeaf NodeState::down {48, "down"};
const Enum::YLeaf NodeState::max {49, "max"};
const Enum::YLeaf NodeState::unknown {50, "unknown"};

const Enum::YLeaf CardRedundancyState::active {1, "active"};
const Enum::YLeaf CardRedundancyState::standby {2, "standby"};

const Enum::YLeaf InvAdminState::admin_state_invalid {0, "admin-state-invalid"};
const Enum::YLeaf InvAdminState::admin_up {1, "admin-up"};
const Enum::YLeaf InvAdminState::admin_down {2, "admin-down"};


}
}

