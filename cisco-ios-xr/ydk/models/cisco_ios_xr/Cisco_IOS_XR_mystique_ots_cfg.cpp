
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mystique_ots_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mystique_ots_cfg {

HardwareModule::HardwareModule()
{
    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-mystique-ots-cfg";
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mystique-ots-cfg:hardware-module";

    return path_buffer.str();

}

EntityPath HardwareModule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<HardwareModule::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & HardwareModule::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void HardwareModule::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> HardwareModule::clone_ptr() const
{
    return std::make_shared<HardwareModule>();
}

std::string HardwareModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

HardwareModule::Node::Node()
    :
    location{YType::str, "location"}
{
    yang_name = "node"; yang_parent_name = "hardware-module";
}

HardwareModule::Node::~Node()
{
}

bool HardwareModule::Node::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool HardwareModule::Node::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(location.operation);
}

std::string HardwareModule::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mystique-ots-cfg:hardware-module/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModule::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<HardwareModule::Node::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & HardwareModule::Node::get_children()
{
    for (auto const & c : slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void HardwareModule::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

HardwareModule::Node::Slot::Slot()
    :
    slot_id{YType::str, "slot-id"}
    	,
    amplifier(std::make_shared<HardwareModule::Node::Slot::Amplifier>())
	,psm(std::make_shared<HardwareModule::Node::Slot::Psm>())
{
    amplifier->parent = this;
    children["amplifier"] = amplifier;

    psm->parent = this;
    children["psm"] = psm;

    yang_name = "slot"; yang_parent_name = "node";
}

HardwareModule::Node::Slot::~Slot()
{
}

bool HardwareModule::Node::Slot::has_data() const
{
    return slot_id.is_set
	|| (amplifier !=  nullptr && amplifier->has_data())
	|| (psm !=  nullptr && psm->has_data());
}

bool HardwareModule::Node::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(slot_id.operation)
	|| (amplifier !=  nullptr && amplifier->has_operation())
	|| (psm !=  nullptr && psm->has_operation());
}

std::string HardwareModule::Node::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot-id='" <<slot_id <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XR_mystique_ots_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.operation)) leaf_name_data.push_back(slot_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "amplifier")
    {
        if(amplifier != nullptr)
        {
            children["amplifier"] = amplifier;
        }
        else
        {
            amplifier = std::make_shared<HardwareModule::Node::Slot::Amplifier>();
            amplifier->parent = this;
            children["amplifier"] = amplifier;
        }
        return children.at("amplifier");
    }

    if(child_yang_name == "psm")
    {
        if(psm != nullptr)
        {
            children["psm"] = psm;
        }
        else
        {
            psm = std::make_shared<HardwareModule::Node::Slot::Psm>();
            psm->parent = this;
            children["psm"] = psm;
        }
        return children.at("psm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & HardwareModule::Node::Slot::get_children()
{
    if(children.find("amplifier") == children.end())
    {
        if(amplifier != nullptr)
        {
            children["amplifier"] = amplifier;
        }
    }

    if(children.find("psm") == children.end())
    {
        if(psm != nullptr)
        {
            children["psm"] = psm;
        }
    }

    return children;
}

void HardwareModule::Node::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
    }
}

HardwareModule::Node::Slot::Amplifier::Amplifier()
    :
    grid_mode{YType::enumeration, "grid-mode"},
    node_type{YType::enumeration, "node-type"},
    udc_vlan{YType::uint32, "udc-vlan"}
{
    yang_name = "amplifier"; yang_parent_name = "slot";
}

HardwareModule::Node::Slot::Amplifier::~Amplifier()
{
}

bool HardwareModule::Node::Slot::Amplifier::has_data() const
{
    return grid_mode.is_set
	|| node_type.is_set
	|| udc_vlan.is_set;
}

bool HardwareModule::Node::Slot::Amplifier::has_operation() const
{
    return is_set(operation)
	|| is_set(grid_mode.operation)
	|| is_set(node_type.operation)
	|| is_set(udc_vlan.operation);
}

std::string HardwareModule::Node::Slot::Amplifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifier";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::Slot::Amplifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Amplifier' in Cisco_IOS_XR_mystique_ots_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grid_mode.is_set || is_set(grid_mode.operation)) leaf_name_data.push_back(grid_mode.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (udc_vlan.is_set || is_set(udc_vlan.operation)) leaf_name_data.push_back(udc_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Amplifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & HardwareModule::Node::Slot::Amplifier::get_children()
{
    return children;
}

void HardwareModule::Node::Slot::Amplifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grid-mode")
    {
        grid_mode = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "udc-vlan")
    {
        udc_vlan = value;
    }
}

HardwareModule::Node::Slot::Psm::Psm()
    :
    lockout_from{YType::enumeration, "lockout-from"},
    manual_switch_to{YType::enumeration, "manual-switch-to"}
{
    yang_name = "psm"; yang_parent_name = "slot";
}

HardwareModule::Node::Slot::Psm::~Psm()
{
}

bool HardwareModule::Node::Slot::Psm::has_data() const
{
    return lockout_from.is_set
	|| manual_switch_to.is_set;
}

bool HardwareModule::Node::Slot::Psm::has_operation() const
{
    return is_set(operation)
	|| is_set(lockout_from.operation)
	|| is_set(manual_switch_to.operation);
}

std::string HardwareModule::Node::Slot::Psm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psm";

    return path_buffer.str();

}

EntityPath HardwareModule::Node::Slot::Psm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Psm' in Cisco_IOS_XR_mystique_ots_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockout_from.is_set || is_set(lockout_from.operation)) leaf_name_data.push_back(lockout_from.get_name_leafdata());
    if (manual_switch_to.is_set || is_set(manual_switch_to.operation)) leaf_name_data.push_back(manual_switch_to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Psm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & HardwareModule::Node::Slot::Psm::get_children()
{
    return children;
}

void HardwareModule::Node::Slot::Psm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lockout-from")
    {
        lockout_from = value;
    }
    if(value_path == "manual-switch-to")
    {
        manual_switch_to = value;
    }
}

const Enum::YLeaf OtsPsmLockoutFromEnum::working {1, "working"};
const Enum::YLeaf OtsPsmLockoutFromEnum::protected_ {2, "protected"};

const Enum::YLeaf OtsAmplifierGridModeEnum::Y_100g_hz {0, "100g-hz"};
const Enum::YLeaf OtsAmplifierGridModeEnum::Y_50g_hz {1, "50g-hz"};
const Enum::YLeaf OtsAmplifierGridModeEnum::gr_idle_ss {2, "gr-idle-ss"};

const Enum::YLeaf OtsPsmManualSwitchEnum::working {1, "working"};
const Enum::YLeaf OtsPsmManualSwitchEnum::protected_ {2, "protected"};

const Enum::YLeaf OtsAmplifierNodeEnum::term {0, "term"};
const Enum::YLeaf OtsAmplifierNodeEnum::ila {1, "ila"};
const Enum::YLeaf OtsAmplifierNodeEnum::roadm {2, "roadm"};


}
}

