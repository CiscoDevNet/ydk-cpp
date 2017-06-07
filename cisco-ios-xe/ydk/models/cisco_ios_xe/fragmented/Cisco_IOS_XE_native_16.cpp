
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_58.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_52.hpp"
#include "Cisco_IOS_XE_native_42.hpp"
#include "Cisco_IOS_XE_native_64.hpp"
#include "Cisco_IOS_XE_native_22.hpp"
#include "Cisco_IOS_XE_native_41.hpp"
#include "Cisco_IOS_XE_native_53.hpp"
#include "Cisco_IOS_XE_native_36.hpp"
#include "Cisco_IOS_XE_native_56.hpp"
#include "Cisco_IOS_XE_native_54.hpp"
#include "Cisco_IOS_XE_native_49.hpp"
#include "Cisco_IOS_XE_native_18.hpp"
#include "Cisco_IOS_XE_native_59.hpp"
#include "Cisco_IOS_XE_native_70.hpp"
#include "Cisco_IOS_XE_native_68.hpp"
#include "Cisco_IOS_XE_native_45.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_51.hpp"
#include "Cisco_IOS_XE_native_31.hpp"
#include "Cisco_IOS_XE_native_60.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_21.hpp"
#include "Cisco_IOS_XE_native_38.hpp"
#include "Cisco_IOS_XE_native_66.hpp"
#include "Cisco_IOS_XE_native_43.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedSetPrecTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-prec-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::~ExceedSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-prec-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetPrecTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_prec_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.operation)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetQosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_qos_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.operation)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedDrop()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-drop"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::~ExceedDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-drop";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::ExceedAction()
    :
    drop{YType::empty, "drop"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-drop";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetClpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_clp_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.operation)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetCosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_cos_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.operation)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetDiscardClassTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_discard_class_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.operation)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetDscpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_dscp_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.operation)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetFrdeTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_frde_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.operation)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetMplsExpImpositionTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_imposition_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetMplsExpTopmostTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_topmost_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetPrecTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_prec_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.operation)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetQosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_qos_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.operation)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-drop";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::PoliceCatalyst()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police>())
{
    police->parent = this;

    yang_name = "police-catalyst"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::~PoliceCatalyst()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::has_operation() const
{
    return is_set(operation)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-catalyst";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceCatalyst' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Police()
    :
    bps{YType::empty, "bps"},
    bps_value{YType::str, "bps-value"},
    byte{YType::empty, "byte"},
    byte_value{YType::str, "byte-value"}
    	,
    actions(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions>())
{
    actions->parent = this;

    yang_name = "police"; yang_parent_name = "police-catalyst";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::has_data() const
{
    return bps.is_set
	|| bps_value.is_set
	|| byte.is_set
	|| byte_value.is_set
	|| (actions !=  nullptr && actions->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(bps.operation)
	|| is_set(bps_value.operation)
	|| is_set(byte.operation)
	|| is_set(byte_value.operation)
	|| (actions !=  nullptr && actions->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bps.is_set || is_set(bps.operation)) leaf_name_data.push_back(bps.get_name_leafdata());
    if (bps_value.is_set || is_set(bps_value.operation)) leaf_name_data.push_back(bps_value.get_name_leafdata());
    if (byte.is_set || is_set(byte.operation)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (byte_value.is_set || is_set(byte_value.operation)) leaf_name_data.push_back(byte_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bps")
    {
        bps = value;
    }
    if(value_path == "bps-value")
    {
        bps_value = value;
    }
    if(value_path == "byte")
    {
        byte = value;
    }
    if(value_path == "byte-value")
    {
        byte_value = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::Actions()
    :
    conform_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop>())
	,conform_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit>())
	,conform_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit>())
	,conform_set_cos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable>())
	,conform_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit>())
	,conform_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit>())
	,conform_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable>())
	,conform_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit>())
	,conform_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit>())
	,conform_set_mpls_exp_imposition_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable>())
	,conform_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit>())
	,conform_set_mpls_exp_topmost_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable>())
	,conform_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit>())
	,conform_set_prec_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable>())
	,conform_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit>())
	,conform_set_qos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable>())
	,conform_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit>())
	,exceed_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop>())
	,exceed_dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp>())
	,exceed_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit>())
	,exceed_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit>())
	,exceed_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit>())
	,exceed_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit>())
	,exceed_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable>())
	,exceed_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit>())
	,exceed_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit>())
	,exceed_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit>())
	,exceed_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit>())
	,exceed_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit>())
	,exceed_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit>())
	,violate_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop>())
	,violate_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit>())
	,violate_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit>())
	,violate_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit>())
	,violate_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit>())
	,violate_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit>())
	,violate_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit>())
	,violate_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit>())
	,violate_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit>())
	,violate_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit>())
	,violate_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit>())
{
    conform_drop->parent = this;

    conform_set_clp_transmit->parent = this;

    conform_set_cos_transmit->parent = this;

    conform_set_cos_transmit_table->parent = this;

    conform_set_discard_class_transmit->parent = this;

    conform_set_dscp_transmit->parent = this;

    conform_set_dscp_transmit_table->parent = this;

    conform_set_frde_transmit->parent = this;

    conform_set_mpls_exp_imposition_transmit->parent = this;

    conform_set_mpls_exp_imposition_transmit_table->parent = this;

    conform_set_mpls_exp_topmost_transmit->parent = this;

    conform_set_mpls_exp_topmost_transmit_table->parent = this;

    conform_set_prec_transmit->parent = this;

    conform_set_prec_transmit_table->parent = this;

    conform_set_qos_transmit->parent = this;

    conform_set_qos_transmit_table->parent = this;

    conform_transmit->parent = this;

    exceed_drop->parent = this;

    exceed_dscp->parent = this;

    exceed_set_clp_transmit->parent = this;

    exceed_set_cos_transmit->parent = this;

    exceed_set_discard_class_transmit->parent = this;

    exceed_set_dscp_transmit->parent = this;

    exceed_set_dscp_transmit_table->parent = this;

    exceed_set_frde_transmit->parent = this;

    exceed_set_mpls_exp_imposition_transmit->parent = this;

    exceed_set_mpls_exp_topmost_transmit->parent = this;

    exceed_set_prec_transmit->parent = this;

    exceed_set_qos_transmit->parent = this;

    exceed_transmit->parent = this;

    violate_drop->parent = this;

    violate_set_clp_transmit->parent = this;

    violate_set_cos_transmit->parent = this;

    violate_set_discard_class_transmit->parent = this;

    violate_set_dscp_transmit->parent = this;

    violate_set_frde_transmit->parent = this;

    violate_set_mpls_exp_imposition_transmit->parent = this;

    violate_set_mpls_exp_topmost_transmit->parent = this;

    violate_set_prec_transmit->parent = this;

    violate_set_qos_transmit->parent = this;

    violate_transmit->parent = this;

    yang_name = "actions"; yang_parent_name = "police";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::~Actions()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::has_data() const
{
    return (conform_drop !=  nullptr && conform_drop->has_data())
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_data())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_data())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_data())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_data())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_data())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_data())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_data())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_data())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_data())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_data())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_data())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_data())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_data())
	|| (conform_transmit !=  nullptr && conform_transmit->has_data())
	|| (exceed_drop !=  nullptr && exceed_drop->has_data())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_data())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_data())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_data())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_data())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_data())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_data())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_data())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_data())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_data())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_data())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_data())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_data())
	|| (violate_drop !=  nullptr && violate_drop->has_data())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_data())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_data())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_data())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_data())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_data())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_data())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_data())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_data())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_data())
	|| (violate_transmit !=  nullptr && violate_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::has_operation() const
{
    return is_set(operation)
	|| (conform_drop !=  nullptr && conform_drop->has_operation())
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_operation())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_operation())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_operation())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_operation())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_operation())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_operation())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_operation())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_operation())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_operation())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_operation())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_operation())
	|| (conform_transmit !=  nullptr && conform_transmit->has_operation())
	|| (exceed_drop !=  nullptr && exceed_drop->has_operation())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_operation())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_operation())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_operation())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_operation())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_operation())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_operation())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_operation())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_operation())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_operation())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_operation())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_operation())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_operation())
	|| (violate_drop !=  nullptr && violate_drop->has_operation())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_operation())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_operation())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_operation())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_operation())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_operation())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_operation())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_operation())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_operation())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_operation())
	|| (violate_transmit !=  nullptr && violate_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Actions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-drop")
    {
        if(conform_drop == nullptr)
        {
            conform_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop>();
        }
        return conform_drop;
    }

    if(child_yang_name == "conform-set-clp-transmit")
    {
        if(conform_set_clp_transmit == nullptr)
        {
            conform_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit>();
        }
        return conform_set_clp_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit")
    {
        if(conform_set_cos_transmit == nullptr)
        {
            conform_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit>();
        }
        return conform_set_cos_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit-table")
    {
        if(conform_set_cos_transmit_table == nullptr)
        {
            conform_set_cos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable>();
        }
        return conform_set_cos_transmit_table;
    }

    if(child_yang_name == "conform-set-discard-class-transmit")
    {
        if(conform_set_discard_class_transmit == nullptr)
        {
            conform_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit>();
        }
        return conform_set_discard_class_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit")
    {
        if(conform_set_dscp_transmit == nullptr)
        {
            conform_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit>();
        }
        return conform_set_dscp_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit-table")
    {
        if(conform_set_dscp_transmit_table == nullptr)
        {
            conform_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable>();
        }
        return conform_set_dscp_transmit_table;
    }

    if(child_yang_name == "conform-set-frde-transmit")
    {
        if(conform_set_frde_transmit == nullptr)
        {
            conform_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit>();
        }
        return conform_set_frde_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit")
    {
        if(conform_set_mpls_exp_imposition_transmit == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit>();
        }
        return conform_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit-table")
    {
        if(conform_set_mpls_exp_imposition_transmit_table == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable>();
        }
        return conform_set_mpls_exp_imposition_transmit_table;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit")
    {
        if(conform_set_mpls_exp_topmost_transmit == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit>();
        }
        return conform_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit-table")
    {
        if(conform_set_mpls_exp_topmost_transmit_table == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable>();
        }
        return conform_set_mpls_exp_topmost_transmit_table;
    }

    if(child_yang_name == "conform-set-prec-transmit")
    {
        if(conform_set_prec_transmit == nullptr)
        {
            conform_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit>();
        }
        return conform_set_prec_transmit;
    }

    if(child_yang_name == "conform-set-prec-transmit-table")
    {
        if(conform_set_prec_transmit_table == nullptr)
        {
            conform_set_prec_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable>();
        }
        return conform_set_prec_transmit_table;
    }

    if(child_yang_name == "conform-set-qos-transmit")
    {
        if(conform_set_qos_transmit == nullptr)
        {
            conform_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit>();
        }
        return conform_set_qos_transmit;
    }

    if(child_yang_name == "conform-set-qos-transmit-table")
    {
        if(conform_set_qos_transmit_table == nullptr)
        {
            conform_set_qos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable>();
        }
        return conform_set_qos_transmit_table;
    }

    if(child_yang_name == "conform-transmit")
    {
        if(conform_transmit == nullptr)
        {
            conform_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit>();
        }
        return conform_transmit;
    }

    if(child_yang_name == "exceed-drop")
    {
        if(exceed_drop == nullptr)
        {
            exceed_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop>();
        }
        return exceed_drop;
    }

    if(child_yang_name == "exceed-dscp")
    {
        if(exceed_dscp == nullptr)
        {
            exceed_dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp>();
        }
        return exceed_dscp;
    }

    if(child_yang_name == "exceed-set-clp-transmit")
    {
        if(exceed_set_clp_transmit == nullptr)
        {
            exceed_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit>();
        }
        return exceed_set_clp_transmit;
    }

    if(child_yang_name == "exceed-set-cos-transmit")
    {
        if(exceed_set_cos_transmit == nullptr)
        {
            exceed_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit>();
        }
        return exceed_set_cos_transmit;
    }

    if(child_yang_name == "exceed-set-discard-class-transmit")
    {
        if(exceed_set_discard_class_transmit == nullptr)
        {
            exceed_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit>();
        }
        return exceed_set_discard_class_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit")
    {
        if(exceed_set_dscp_transmit == nullptr)
        {
            exceed_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit>();
        }
        return exceed_set_dscp_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit-table")
    {
        if(exceed_set_dscp_transmit_table == nullptr)
        {
            exceed_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable>();
        }
        return exceed_set_dscp_transmit_table;
    }

    if(child_yang_name == "exceed-set-frde-transmit")
    {
        if(exceed_set_frde_transmit == nullptr)
        {
            exceed_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit>();
        }
        return exceed_set_frde_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-imposition-transmit")
    {
        if(exceed_set_mpls_exp_imposition_transmit == nullptr)
        {
            exceed_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit>();
        }
        return exceed_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-topmost-transmit")
    {
        if(exceed_set_mpls_exp_topmost_transmit == nullptr)
        {
            exceed_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit>();
        }
        return exceed_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "exceed-set-prec-transmit")
    {
        if(exceed_set_prec_transmit == nullptr)
        {
            exceed_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit>();
        }
        return exceed_set_prec_transmit;
    }

    if(child_yang_name == "exceed-set-qos-transmit")
    {
        if(exceed_set_qos_transmit == nullptr)
        {
            exceed_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit>();
        }
        return exceed_set_qos_transmit;
    }

    if(child_yang_name == "exceed-transmit")
    {
        if(exceed_transmit == nullptr)
        {
            exceed_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit>();
        }
        return exceed_transmit;
    }

    if(child_yang_name == "violate-drop")
    {
        if(violate_drop == nullptr)
        {
            violate_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop>();
        }
        return violate_drop;
    }

    if(child_yang_name == "violate-set-clp-transmit")
    {
        if(violate_set_clp_transmit == nullptr)
        {
            violate_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit>();
        }
        return violate_set_clp_transmit;
    }

    if(child_yang_name == "violate-set-cos-transmit")
    {
        if(violate_set_cos_transmit == nullptr)
        {
            violate_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit>();
        }
        return violate_set_cos_transmit;
    }

    if(child_yang_name == "violate-set-discard-class-transmit")
    {
        if(violate_set_discard_class_transmit == nullptr)
        {
            violate_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit>();
        }
        return violate_set_discard_class_transmit;
    }

    if(child_yang_name == "violate-set-dscp-transmit")
    {
        if(violate_set_dscp_transmit == nullptr)
        {
            violate_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit>();
        }
        return violate_set_dscp_transmit;
    }

    if(child_yang_name == "violate-set-frde-transmit")
    {
        if(violate_set_frde_transmit == nullptr)
        {
            violate_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit>();
        }
        return violate_set_frde_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-imposition-transmit")
    {
        if(violate_set_mpls_exp_imposition_transmit == nullptr)
        {
            violate_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit>();
        }
        return violate_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-topmost-transmit")
    {
        if(violate_set_mpls_exp_topmost_transmit == nullptr)
        {
            violate_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit>();
        }
        return violate_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "violate-set-prec-transmit")
    {
        if(violate_set_prec_transmit == nullptr)
        {
            violate_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit>();
        }
        return violate_set_prec_transmit;
    }

    if(child_yang_name == "violate-set-qos-transmit")
    {
        if(violate_set_qos_transmit == nullptr)
        {
            violate_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit>();
        }
        return violate_set_qos_transmit;
    }

    if(child_yang_name == "violate-transmit")
    {
        if(violate_transmit == nullptr)
        {
            violate_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit>();
        }
        return violate_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_drop != nullptr)
    {
        children["conform-drop"] = conform_drop;
    }

    if(conform_set_clp_transmit != nullptr)
    {
        children["conform-set-clp-transmit"] = conform_set_clp_transmit;
    }

    if(conform_set_cos_transmit != nullptr)
    {
        children["conform-set-cos-transmit"] = conform_set_cos_transmit;
    }

    if(conform_set_cos_transmit_table != nullptr)
    {
        children["conform-set-cos-transmit-table"] = conform_set_cos_transmit_table;
    }

    if(conform_set_discard_class_transmit != nullptr)
    {
        children["conform-set-discard-class-transmit"] = conform_set_discard_class_transmit;
    }

    if(conform_set_dscp_transmit != nullptr)
    {
        children["conform-set-dscp-transmit"] = conform_set_dscp_transmit;
    }

    if(conform_set_dscp_transmit_table != nullptr)
    {
        children["conform-set-dscp-transmit-table"] = conform_set_dscp_transmit_table;
    }

    if(conform_set_frde_transmit != nullptr)
    {
        children["conform-set-frde-transmit"] = conform_set_frde_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit"] = conform_set_mpls_exp_imposition_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit-table"] = conform_set_mpls_exp_imposition_transmit_table;
    }

    if(conform_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit"] = conform_set_mpls_exp_topmost_transmit;
    }

    if(conform_set_mpls_exp_topmost_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit-table"] = conform_set_mpls_exp_topmost_transmit_table;
    }

    if(conform_set_prec_transmit != nullptr)
    {
        children["conform-set-prec-transmit"] = conform_set_prec_transmit;
    }

    if(conform_set_prec_transmit_table != nullptr)
    {
        children["conform-set-prec-transmit-table"] = conform_set_prec_transmit_table;
    }

    if(conform_set_qos_transmit != nullptr)
    {
        children["conform-set-qos-transmit"] = conform_set_qos_transmit;
    }

    if(conform_set_qos_transmit_table != nullptr)
    {
        children["conform-set-qos-transmit-table"] = conform_set_qos_transmit_table;
    }

    if(conform_transmit != nullptr)
    {
        children["conform-transmit"] = conform_transmit;
    }

    if(exceed_drop != nullptr)
    {
        children["exceed-drop"] = exceed_drop;
    }

    if(exceed_dscp != nullptr)
    {
        children["exceed-dscp"] = exceed_dscp;
    }

    if(exceed_set_clp_transmit != nullptr)
    {
        children["exceed-set-clp-transmit"] = exceed_set_clp_transmit;
    }

    if(exceed_set_cos_transmit != nullptr)
    {
        children["exceed-set-cos-transmit"] = exceed_set_cos_transmit;
    }

    if(exceed_set_discard_class_transmit != nullptr)
    {
        children["exceed-set-discard-class-transmit"] = exceed_set_discard_class_transmit;
    }

    if(exceed_set_dscp_transmit != nullptr)
    {
        children["exceed-set-dscp-transmit"] = exceed_set_dscp_transmit;
    }

    if(exceed_set_dscp_transmit_table != nullptr)
    {
        children["exceed-set-dscp-transmit-table"] = exceed_set_dscp_transmit_table;
    }

    if(exceed_set_frde_transmit != nullptr)
    {
        children["exceed-set-frde-transmit"] = exceed_set_frde_transmit;
    }

    if(exceed_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-imposition-transmit"] = exceed_set_mpls_exp_imposition_transmit;
    }

    if(exceed_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-topmost-transmit"] = exceed_set_mpls_exp_topmost_transmit;
    }

    if(exceed_set_prec_transmit != nullptr)
    {
        children["exceed-set-prec-transmit"] = exceed_set_prec_transmit;
    }

    if(exceed_set_qos_transmit != nullptr)
    {
        children["exceed-set-qos-transmit"] = exceed_set_qos_transmit;
    }

    if(exceed_transmit != nullptr)
    {
        children["exceed-transmit"] = exceed_transmit;
    }

    if(violate_drop != nullptr)
    {
        children["violate-drop"] = violate_drop;
    }

    if(violate_set_clp_transmit != nullptr)
    {
        children["violate-set-clp-transmit"] = violate_set_clp_transmit;
    }

    if(violate_set_cos_transmit != nullptr)
    {
        children["violate-set-cos-transmit"] = violate_set_cos_transmit;
    }

    if(violate_set_discard_class_transmit != nullptr)
    {
        children["violate-set-discard-class-transmit"] = violate_set_discard_class_transmit;
    }

    if(violate_set_dscp_transmit != nullptr)
    {
        children["violate-set-dscp-transmit"] = violate_set_dscp_transmit;
    }

    if(violate_set_frde_transmit != nullptr)
    {
        children["violate-set-frde-transmit"] = violate_set_frde_transmit;
    }

    if(violate_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["violate-set-mpls-exp-imposition-transmit"] = violate_set_mpls_exp_imposition_transmit;
    }

    if(violate_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["violate-set-mpls-exp-topmost-transmit"] = violate_set_mpls_exp_topmost_transmit;
    }

    if(violate_set_prec_transmit != nullptr)
    {
        children["violate-set-prec-transmit"] = violate_set_prec_transmit;
    }

    if(violate_set_qos_transmit != nullptr)
    {
        children["violate-set-qos-transmit"] = violate_set_qos_transmit;
    }

    if(violate_transmit != nullptr)
    {
        children["violate-transmit"] = violate_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformSetClpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-clp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::~ConformSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-clp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetClpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::ConformAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-clp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_clp_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.operation)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformSetCosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::~ConformSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetCosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::has_data() const
{
    return set_cos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_cos_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.operation)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformSetCosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::~ConformSetCosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetCosTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_cos_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.operation)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformSetDiscardClassTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-discard-class-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::~ConformSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-discard-class-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetDiscardClassTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::ConformAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-discard-class-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_discard_class_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.operation)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformSetDscpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::~ConformSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetDscpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_dscp_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.operation)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformSetDscpTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::~ConformSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetDscpTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_dscp_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.operation)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformSetFrdeTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-frde-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::~ConformSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-frde-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetFrdeTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::ConformAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-frde-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_frde_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.operation)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformSetMplsExpImpositionTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::~ConformSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetMplsExpImpositionTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_imposition_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetMplsExpImpositionTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_imposition_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetMplsExpTopmostTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_topmost_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetMplsExpTopmostTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_topmost_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetPrecTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_prec_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.operation)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetPrecTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_prec_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.operation)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetQosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_qos_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.operation)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformSetQosTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_qos_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.operation)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::has_operation() const
{
    return is_set(operation)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{
    yang_name = "conform-action"; yang_parent_name = "conform-drop";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedDscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetClpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_clp_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.operation)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetCosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_cos_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.operation)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetDiscardClassTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_discard_class_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.operation)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetDscpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::ExceedAction()
    :
    set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>())
{
    set_dscp_transmit->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_data() const
{
    return (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-dscp-transmit")
    {
        if(set_dscp_transmit == nullptr)
        {
            set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>();
        }
        return set_dscp_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set_dscp_transmit != nullptr)
    {
        children["set-dscp-transmit"] = set_dscp_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::SetDscpTransmit()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>())
{
    dscp->parent = this;

    yang_name = "set-dscp-transmit"; yang_parent_name = "exceed-action";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::~SetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_operation() const
{
    return is_set(operation)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-dscp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetDscpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Dscp()
    :
    table{YType::enumeration, "table"}
{
    yang_name = "dscp"; yang_parent_name = "set-dscp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedSetDscpTransmitTable()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit-table"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::~ExceedSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit-table";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetDscpTransmitTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::ExceedAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit-table";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_dscp_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.operation)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedSetFrdeTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-frde-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::~ExceedSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-frde-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetFrdeTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::ExceedAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-frde-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_frde_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.operation)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedSetMplsExpImpositionTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::~ExceedSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-imposition-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetMplsExpImpositionTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-imposition-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_imposition_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedSetMplsExpTopmostTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::~ExceedSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-topmost-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetMplsExpTopmostTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-topmost-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_topmost_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedSetPrecTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-prec-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::~ExceedSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-prec-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetPrecTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_prec_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.operation)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedSetQosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_qos_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.operation)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedDrop()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-drop"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::~ExceedDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::has_operation() const
{
    return is_set(operation)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-drop";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::ExceedAction()
    :
    drop{YType::empty, "drop"}
{
    yang_name = "exceed-action"; yang_parent_name = "exceed-drop";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetClpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_clp_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.operation)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetCosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_cos_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.operation)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetDiscardClassTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_discard_class_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.operation)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetDscpTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_dscp_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.operation)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetFrdeTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_frde_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.operation)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetMplsExpImpositionTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_imposition_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetMplsExpTopmostTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_mpls_exp_topmost_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.operation)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetPrecTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_prec_transmit.operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.operation)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateSetQosTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(set_qos_transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.operation)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateTransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-transmit";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(transmit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::has_operation() const
{
    return is_set(operation)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{
    yang_name = "violate-action"; yang_parent_name = "violate-drop";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViolateAction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::PoliceSwitch()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police>())
{
    police->parent = this;

    yang_name = "police-switch"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::~PoliceSwitch()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_operation() const
{
    return is_set(operation)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-switch";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceSwitch' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::Police()
    :
    bc{YType::uint32, "bc"},
    cir{YType::uint32, "cir"},
    exceed_action{YType::enumeration, "exceed-action"}
{
    yang_name = "police"; yang_parent_name = "police-switch";
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_data() const
{
    return bc.is_set
	|| cir.is_set
	|| exceed_action.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(bc.operation)
	|| is_set(cir.operation)
	|| is_set(exceed_action.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc.is_set || is_set(bc.operation)) leaf_name_data.push_back(bc.get_name_leafdata());
    if (cir.is_set || is_set(cir.operation)) leaf_name_data.push_back(cir.get_name_leafdata());
    if (exceed_action.is_set || is_set(exceed_action.operation)) leaf_name_data.push_back(exceed_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bc")
    {
        bc = value;
    }
    if(value_path == "cir")
    {
        cir = value;
    }
    if(value_path == "exceed-action")
    {
        exceed_action = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Priority::Priority()
    :
    burst{YType::uint32, "burst"},
    kilo_bits{YType::uint32, "kilo-bits"},
    level{YType::uint8, "level"},
    percent{YType::uint16, "percent"}
{
    yang_name = "priority"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Priority::~Priority()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_data() const
{
    return burst.is_set
	|| kilo_bits.is_set
	|| level.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(burst.operation)
	|| is_set(kilo_bits.operation)
	|| is_set(level.operation)
	|| is_set(percent.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (kilo_bits.is_set || is_set(kilo_bits.operation)) leaf_name_data.push_back(kilo_bits.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "kilo-bits")
    {
        kilo_bits = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::QueueBuffers()
    :
    ratio{YType::uint8, "ratio"}
{
    yang_name = "queue-buffers"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::~QueueBuffers()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::has_data() const
{
    return ratio.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(ratio.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-buffers";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueBuffers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ratio.is_set || is_set(ratio.operation)) leaf_name_data.push_back(ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ratio")
    {
        ratio = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimit()
    :
    queue_limit_type{YType::enumeration, "queue-limit-type"},
    queue_limit_value{YType::uint32, "queue-limit-value"}
{
    yang_name = "queue-limit"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::~QueueLimit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_data() const
{
    return queue_limit_type.is_set
	|| queue_limit_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(queue_limit_type.operation)
	|| is_set(queue_limit_value.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_limit_type.is_set || is_set(queue_limit_type.operation)) leaf_name_data.push_back(queue_limit_type.get_name_leafdata());
    if (queue_limit_value.is_set || is_set(queue_limit_value.operation)) leaf_name_data.push_back(queue_limit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-limit-type")
    {
        queue_limit_type = value;
    }
    if(value_path == "queue-limit-value")
    {
        queue_limit_value = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::QueueLimitDscp()
{
    yang_name = "queue-limit-dscp"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::~QueueLimitDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::has_data() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::has_operation() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-dscp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueLimitDscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        for(auto const & c : dscp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp>();
        c->parent = this;
        dscp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dscp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    dscp_val1{YType::str, "dscp-val1"},
    percent{YType::uint8, "percent"},
    values{YType::empty, "values"}
{
    yang_name = "dscp"; yang_parent_name = "queue-limit-dscp";
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_data() const
{
    return dscp_val.is_set
	|| dscp_val1.is_set
	|| percent.is_set
	|| values.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_val.operation)
	|| is_set(dscp_val1.operation)
	|| is_set(percent.operation)
	|| is_set(values.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp" <<"[dscp-val='" <<dscp_val <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.operation)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (dscp_val1.is_set || is_set(dscp_val1.operation)) leaf_name_data.push_back(dscp_val1.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (values.is_set || is_set(values.operation)) leaf_name_data.push_back(values.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
    }
    if(value_path == "dscp-val1")
    {
        dscp_val1 = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "values")
    {
        values = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::RandomDetect()
    :
    discard_class_based{YType::empty, "discard-class-based"},
    dscp_based{YType::empty, "dscp-based"},
    ecn{YType::empty, "ecn"},
    exponential_weighting_constant{YType::uint16, "exponential-weighting-constant"},
    prec_based{YType::empty, "prec-based"}
    	,
    aggregate(nullptr) // presence node
	,discard_class(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass>())
	,precedence(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence>())
{
    discard_class->parent = this;

    precedence->parent = this;

    yang_name = "random-detect"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::~RandomDetect()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::has_data() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return discard_class_based.is_set
	|| dscp_based.is_set
	|| ecn.is_set
	|| exponential_weighting_constant.is_set
	|| prec_based.is_set
	|| (aggregate !=  nullptr && aggregate->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (precedence !=  nullptr && precedence->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::has_operation() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(discard_class_based.operation)
	|| is_set(dscp_based.operation)
	|| is_set(ecn.operation)
	|| is_set(exponential_weighting_constant.operation)
	|| is_set(prec_based.operation)
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-detect";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RandomDetect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_class_based.is_set || is_set(discard_class_based.operation)) leaf_name_data.push_back(discard_class_based.get_name_leafdata());
    if (dscp_based.is_set || is_set(dscp_based.operation)) leaf_name_data.push_back(dscp_based.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.operation)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (exponential_weighting_constant.is_set || is_set(exponential_weighting_constant.operation)) leaf_name_data.push_back(exponential_weighting_constant.get_name_leafdata());
    if (prec_based.is_set || is_set(prec_based.operation)) leaf_name_data.push_back(prec_based.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class == nullptr)
        {
            discard_class = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass>();
        }
        return discard_class;
    }

    if(child_yang_name == "dscp")
    {
        for(auto const & c : dscp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp>();
        c->parent = this;
        dscp.push_back(c);
        return c;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence>();
        }
        return precedence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    if(discard_class != nullptr)
    {
        children["discard-class"] = discard_class;
    }

    for (auto const & c : dscp)
    {
        children[c->get_segment_path()] = c;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-class-based")
    {
        discard_class_based = value;
    }
    if(value_path == "dscp-based")
    {
        dscp_based = value;
    }
    if(value_path == "ecn")
    {
        ecn = value;
    }
    if(value_path == "exponential-weighting-constant")
    {
        exponential_weighting_constant = value;
    }
    if(value_path == "prec-based")
    {
        prec_based = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::Aggregate()
    :
    denominator{YType::uint32, "denominator"},
    mark_probability{YType::empty, "mark-probability"},
    maximum_thresh{YType::uint32, "maximum-thresh"},
    minimum_thresh{YType::uint32, "minimum-thresh"}
{
    yang_name = "aggregate"; yang_parent_name = "random-detect";
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::~Aggregate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_data() const
{
    return denominator.is_set
	|| mark_probability.is_set
	|| maximum_thresh.is_set
	|| minimum_thresh.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_operation() const
{
    return is_set(operation)
	|| is_set(denominator.operation)
	|| is_set(mark_probability.operation)
	|| is_set(maximum_thresh.operation)
	|| is_set(minimum_thresh.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (denominator.is_set || is_set(denominator.operation)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (mark_probability.is_set || is_set(mark_probability.operation)) leaf_name_data.push_back(mark_probability.get_name_leafdata());
    if (maximum_thresh.is_set || is_set(maximum_thresh.operation)) leaf_name_data.push_back(maximum_thresh.get_name_leafdata());
    if (minimum_thresh.is_set || is_set(minimum_thresh.operation)) leaf_name_data.push_back(minimum_thresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "denominator")
    {
        denominator = value;
    }
    if(value_path == "mark-probability")
    {
        mark_probability = value;
    }
    if(value_path == "maximum-thresh")
    {
        maximum_thresh = value;
    }
    if(value_path == "minimum-thresh")
    {
        minimum_thresh = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::DiscardClass()
    :
    dclass{YType::uint16, "dclass"},
    denominator{YType::uint32, "denominator"},
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{
    yang_name = "discard-class"; yang_parent_name = "random-detect";
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::~DiscardClass()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_data() const
{
    return dclass.is_set
	|| denominator.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_operation() const
{
    return is_set(operation)
	|| is_set(dclass.operation)
	|| is_set(denominator.operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscardClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dclass.is_set || is_set(dclass.operation)) leaf_name_data.push_back(dclass.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.operation)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dclass")
    {
        dclass = value;
    }
    if(value_path == "denominator")
    {
        denominator = value;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    denominator{YType::uint32, "denominator"},
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{
    yang_name = "dscp"; yang_parent_name = "random-detect";
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_data() const
{
    return dscp_val.is_set
	|| denominator.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_val.operation)
	|| is_set(denominator.operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp" <<"[dscp-val='" <<dscp_val <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.operation)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.operation)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
    }
    if(value_path == "denominator")
    {
        denominator = value;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::Precedence()
    :
    denominator{YType::uint32, "denominator"},
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"},
    prec{YType::str, "prec"}
{
    yang_name = "precedence"; yang_parent_name = "random-detect";
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::~Precedence()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_data() const
{
    return denominator.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set
	|| prec.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_operation() const
{
    return is_set(operation)
	|| is_set(denominator.operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation)
	|| is_set(prec.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Precedence' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (denominator.is_set || is_set(denominator.operation)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (prec.is_set || is_set(prec.operation)) leaf_name_data.push_back(prec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "denominator")
    {
        denominator = value;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
    if(value_path == "prec")
    {
        prec = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Set()
    :
    atm_clp{YType::empty, "atm-clp"},
    discard_class{YType::uint16, "discard-class"},
    fr_de{YType::empty, "fr-de"}
    	,
    cos(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Cos>())
	,dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp>())
	,ip(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip>())
	,mpls(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls>())
	,qos_group(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup>())
{
    cos->parent = this;

    dscp->parent = this;

    ip->parent = this;

    mpls->parent = this;

    qos_group->parent = this;

    yang_name = "set"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::~Set()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::has_data() const
{
    return atm_clp.is_set
	|| discard_class.is_set
	|| fr_de.is_set
	|| (cos !=  nullptr && cos->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_clp.operation)
	|| is_set(discard_class.operation)
	|| is_set(fr_de.operation)
	|| (cos !=  nullptr && cos->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp.is_set || is_set(atm_clp.operation)) leaf_name_data.push_back(atm_clp.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.operation)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos")
    {
        if(cos == nullptr)
        {
            cos = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Cos>();
        }
        return cos;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup>();
        }
        return qos_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos != nullptr)
    {
        children["cos"] = cos;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp")
    {
        atm_clp = value;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Cos()
    :
    pack{YType::enumeration, "pack"},
    table{YType::str, "table"},
    user_priority{YType::empty, "user-priority"},
    val{YType::uint16, "val"}
{
    yang_name = "cos"; yang_parent_name = "set";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::~Cos()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_data() const
{
    return pack.is_set
	|| table.is_set
	|| user_priority.is_set
	|| val.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_operation() const
{
    return is_set(operation)
	|| is_set(pack.operation)
	|| is_set(table.operation)
	|| is_set(user_priority.operation)
	|| is_set(val.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pack.is_set || is_set(pack.operation)) leaf_name_data.push_back(pack.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.operation)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (val.is_set || is_set(val.operation)) leaf_name_data.push_back(val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pack")
    {
        pack = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
    }
    if(value_path == "val")
    {
        val = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    tunnel{YType::empty, "tunnel"}
    	,
    dscp(nullptr) // presence node
{
    yang_name = "dscp"; yang_parent_name = "set";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_data() const
{
    return dscp_val.is_set
	|| tunnel.is_set
	|| (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_val.operation)
	|| is_set(tunnel.operation)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.operation)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::Dscp_()
    :
    table{YType::str, "table"}
{
    yang_name = "dscp"; yang_parent_name = "dscp";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::~Dscp_()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::has_operation() const
{
    return is_set(operation)
	|| is_set(table.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Ip()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp>())
	,precedence(nullptr) // presence node
{
    dscp->parent = this;

    yang_name = "ip"; yang_parent_name = "set";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::~Ip()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data())
	|| (precedence !=  nullptr && precedence->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::has_operation() const
{
    return is_set(operation)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence>();
        }
        return precedence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    tunnel{YType::empty, "tunnel"}
{
    yang_name = "dscp"; yang_parent_name = "ip";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_data() const
{
    return dscp_val.is_set
	|| tunnel.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_val.operation)
	|| is_set(tunnel.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.operation)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::Precedence()
    :
    precedence_val{YType::str, "precedence-val"}
{
    yang_name = "precedence"; yang_parent_name = "ip";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::~Precedence()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::has_data() const
{
    return precedence_val.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::has_operation() const
{
    return is_set(operation)
	|| is_set(precedence_val.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Precedence' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence_val.is_set || is_set(precedence_val.operation)) leaf_name_data.push_back(precedence_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence-val")
    {
        precedence_val = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "set";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::~Mpls()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::has_operation() const
{
    return is_set(operation)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Experimental()
    :
    imposition(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition>())
	,topmost(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost>())
{
    imposition->parent = this;

    topmost->parent = this;

    yang_name = "experimental"; yang_parent_name = "mpls";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::has_data() const
{
    return (imposition !=  nullptr && imposition->has_data())
	|| (topmost !=  nullptr && topmost->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::has_operation() const
{
    return is_set(operation)
	|| (imposition !=  nullptr && imposition->has_operation())
	|| (topmost !=  nullptr && topmost->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Experimental' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition")
    {
        if(imposition == nullptr)
        {
            imposition = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition>();
        }
        return imposition;
    }

    if(child_yang_name == "topmost")
    {
        if(topmost == nullptr)
        {
            topmost = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost>();
        }
        return topmost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(imposition != nullptr)
    {
        children["imposition"] = imposition;
    }

    if(topmost != nullptr)
    {
        children["topmost"] = topmost;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::Imposition()
    :
    exp_value{YType::uint8, "exp-value"}
{
    yang_name = "imposition"; yang_parent_name = "experimental";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::~Imposition()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::has_data() const
{
    return exp_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::has_operation() const
{
    return is_set(operation)
	|| is_set(exp_value.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Imposition' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_value.is_set || is_set(exp_value.operation)) leaf_name_data.push_back(exp_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp-value")
    {
        exp_value = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::Topmost()
    :
    exp_value{YType::uint8, "exp-value"}
{
    yang_name = "topmost"; yang_parent_name = "experimental";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::~Topmost()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::has_data() const
{
    return exp_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::has_operation() const
{
    return is_set(operation)
	|| is_set(exp_value.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topmost";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topmost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_value.is_set || is_set(exp_value.operation)) leaf_name_data.push_back(exp_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp-value")
    {
        exp_value = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::QosGroup()
    :
    qos_group_value{YType::uint8, "qos-group-value"}
{
    yang_name = "qos-group"; yang_parent_name = "set";
}

Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::~QosGroup()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::has_data() const
{
    return qos_group_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(qos_group_value.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group_value.is_set || is_set(qos_group_value.operation)) leaf_name_data.push_back(qos_group_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qos-group-value")
    {
        qos_group_value = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Shape()
    :
    adaptive{YType::uint32, "adaptive"},
    fecn_adapt{YType::empty, "fecn-adapt"},
    max_buffers{YType::uint16, "max-buffers"}
    	,
    average(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average>())
	,fr_voice_adapt(nullptr) // presence node
{
    average->parent = this;

    yang_name = "shape"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::~Shape()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::has_data() const
{
    return adaptive.is_set
	|| fecn_adapt.is_set
	|| max_buffers.is_set
	|| (average !=  nullptr && average->has_data())
	|| (fr_voice_adapt !=  nullptr && fr_voice_adapt->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(adaptive.operation)
	|| is_set(fecn_adapt.operation)
	|| is_set(max_buffers.operation)
	|| (average !=  nullptr && average->has_operation())
	|| (fr_voice_adapt !=  nullptr && fr_voice_adapt->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adaptive.is_set || is_set(adaptive.operation)) leaf_name_data.push_back(adaptive.get_name_leafdata());
    if (fecn_adapt.is_set || is_set(fecn_adapt.operation)) leaf_name_data.push_back(fecn_adapt.get_name_leafdata());
    if (max_buffers.is_set || is_set(max_buffers.operation)) leaf_name_data.push_back(max_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average>();
        }
        return average;
    }

    if(child_yang_name == "fr-voice-adapt")
    {
        if(fr_voice_adapt == nullptr)
        {
            fr_voice_adapt = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt>();
        }
        return fr_voice_adapt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average != nullptr)
    {
        children["average"] = average;
    }

    if(fr_voice_adapt != nullptr)
    {
        children["fr-voice-adapt"] = fr_voice_adapt;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adaptive")
    {
        adaptive = value;
    }
    if(value_path == "fecn-adapt")
    {
        fecn_adapt = value;
    }
    if(value_path == "max-buffers")
    {
        max_buffers = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Average()
    :
    bit_rate{YType::uint64, "bit-rate"},
    bits_per_interval_excess{YType::uint32, "bits-per-interval-excess"},
    bits_per_interval_sustained{YType::uint32, "bits-per-interval-sustained"},
    burst_size_sustained{YType::uint16, "burst-size-sustained"},
    ms{YType::empty, "ms"},
    percent{YType::uint8, "percent"}
    	,
    account(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account>())
	,bse(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse>())
{
    account->parent = this;

    bse->parent = this;

    yang_name = "average"; yang_parent_name = "shape";
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::~Average()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_data() const
{
    return bit_rate.is_set
	|| bits_per_interval_excess.is_set
	|| bits_per_interval_sustained.is_set
	|| burst_size_sustained.is_set
	|| ms.is_set
	|| percent.is_set
	|| (account !=  nullptr && account->has_data())
	|| (bse !=  nullptr && bse->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(bits_per_interval_excess.operation)
	|| is_set(bits_per_interval_sustained.operation)
	|| is_set(burst_size_sustained.operation)
	|| is_set(ms.operation)
	|| is_set(percent.operation)
	|| (account !=  nullptr && account->has_operation())
	|| (bse !=  nullptr && bse->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Average' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (bits_per_interval_excess.is_set || is_set(bits_per_interval_excess.operation)) leaf_name_data.push_back(bits_per_interval_excess.get_name_leafdata());
    if (bits_per_interval_sustained.is_set || is_set(bits_per_interval_sustained.operation)) leaf_name_data.push_back(bits_per_interval_sustained.get_name_leafdata());
    if (burst_size_sustained.is_set || is_set(burst_size_sustained.operation)) leaf_name_data.push_back(burst_size_sustained.get_name_leafdata());
    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account>();
        }
        return account;
    }

    if(child_yang_name == "bse")
    {
        if(bse == nullptr)
        {
            bse = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse>();
        }
        return bse;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(bse != nullptr)
    {
        children["bse"] = bse;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "bits-per-interval-excess")
    {
        bits_per_interval_excess = value;
    }
    if(value_path == "bits-per-interval-sustained")
    {
        bits_per_interval_sustained = value;
    }
    if(value_path == "burst-size-sustained")
    {
        burst_size_sustained = value;
    }
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::Account()
    :
    user_defined{YType::uint32, "user-defined"}
{
    yang_name = "account"; yang_parent_name = "average";
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::~Account()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::has_data() const
{
    return user_defined.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::has_operation() const
{
    return is_set(operation)
	|| is_set(user_defined.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Account' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined.is_set || is_set(user_defined.operation)) leaf_name_data.push_back(user_defined.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-defined")
    {
        user_defined = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::Bse()
    :
    burst_size_excess{YType::uint16, "burst-size-excess"},
    ms{YType::empty, "ms"}
{
    yang_name = "bse"; yang_parent_name = "average";
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::~Bse()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::has_data() const
{
    return burst_size_excess.is_set
	|| ms.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size_excess.operation)
	|| is_set(ms.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bse";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bse' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size_excess.is_set || is_set(burst_size_excess.operation)) leaf_name_data.push_back(burst_size_excess.get_name_leafdata());
    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size-excess")
    {
        burst_size_excess = value;
    }
    if(value_path == "ms")
    {
        ms = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::FrVoiceAdapt()
    :
    deactivation{YType::uint16, "deactivation"}
{
    yang_name = "fr-voice-adapt"; yang_parent_name = "shape";
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::~FrVoiceAdapt()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::has_data() const
{
    return deactivation.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::has_operation() const
{
    return is_set(operation)
	|| is_set(deactivation.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-voice-adapt";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrVoiceAdapt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivation.is_set || is_set(deactivation.operation)) leaf_name_data.push_back(deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deactivation")
    {
        deactivation = value;
    }
}

Native::Interface::Interface()
    :
    atm_acrsubinterface(std::make_shared<Native::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "native";
}

Native::Interface::~Interface()
{
}

bool Native::Interface::has_data() const
{
    for (std::size_t index=0; index<appnav_compress.size(); index++)
    {
        if(appnav_compress[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<appnav_uncompress.size(); index++)
    {
        if(appnav_uncompress[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bdi.size(); index++)
    {
        if(bdi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cem_acr.size(); index++)
    {
        if(cem_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<embedded_service_engine.size(); index++)
    {
        if(embedded_service_engine[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fastethernet.size(); index++)
    {
        if(fastethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fortygigabitethernet.size(); index++)
    {
        if(fortygigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<gigabitethernet.size(); index++)
    {
        if(gigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group_async.size(); index++)
    {
        if(group_async[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp.size(); index++)
    {
        if(lisp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multilink.size(); index++)
    {
        if(multilink[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nve.size(); index++)
    {
        if(nve[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sm.size(); index++)
    {
        if(sm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tengigabitethernet.size(); index++)
    {
        if(tengigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vasileft.size(); index++)
    {
        if(vasileft[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vasiright.size(); index++)
    {
        if(vasiright[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_template.size(); index++)
    {
        if(virtual_template[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::has_operation() const
{
    for (std::size_t index=0; index<appnav_compress.size(); index++)
    {
        if(appnav_compress[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<appnav_uncompress.size(); index++)
    {
        if(appnav_uncompress[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bdi.size(); index++)
    {
        if(bdi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cem_acr.size(); index++)
    {
        if(cem_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<embedded_service_engine.size(); index++)
    {
        if(embedded_service_engine[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fastethernet.size(); index++)
    {
        if(fastethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fortygigabitethernet.size(); index++)
    {
        if(fortygigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<gigabitethernet.size(); index++)
    {
        if(gigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group_async.size(); index++)
    {
        if(group_async[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp.size(); index++)
    {
        if(lisp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multilink.size(); index++)
    {
        if(multilink[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nve.size(); index++)
    {
        if(nve[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sm.size(); index++)
    {
        if(sm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tengigabitethernet.size(); index++)
    {
        if(tengigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vasileft.size(); index++)
    {
        if(vasileft[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vasiright.size(); index++)
    {
        if(vasiright[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_template.size(); index++)
    {
        if(virtual_template[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppNav-Compress")
    {
        for(auto const & c : appnav_compress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AppnavCompress>();
        c->parent = this;
        appnav_compress.push_back(c);
        return c;
    }

    if(child_yang_name == "AppNav-UnCompress")
    {
        for(auto const & c : appnav_uncompress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AppnavUncompress>();
        c->parent = this;
        appnav_uncompress.push_back(c);
        return c;
    }

    if(child_yang_name == "ATM")
    {
        for(auto const & c : atm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Atm>();
        c->parent = this;
        atm.push_back(c);
        return c;
    }

    if(child_yang_name == "ATM-ACR")
    {
        for(auto const & c : atm_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AtmAcr>();
        c->parent = this;
        atm_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "BDI")
    {
        for(auto const & c : bdi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Bdi>();
        c->parent = this;
        bdi.push_back(c);
        return c;
    }

    if(child_yang_name == "Cellular")
    {
        for(auto const & c : cellular)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Cellular>();
        c->parent = this;
        cellular.push_back(c);
        return c;
    }

    if(child_yang_name == "CEM")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "CEM-ACR")
    {
        for(auto const & c : cem_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::CemAcr>();
        c->parent = this;
        cem_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "Embedded-Service-Engine")
    {
        for(auto const & c : embedded_service_engine)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::EmbeddedServiceEngine>();
        c->parent = this;
        embedded_service_engine.push_back(c);
        return c;
    }

    if(child_yang_name == "FastEthernet")
    {
        for(auto const & c : fastethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Fastethernet>();
        c->parent = this;
        fastethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "FortyGigabitEthernet")
    {
        for(auto const & c : fortygigabitethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Fortygigabitethernet>();
        c->parent = this;
        fortygigabitethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "GigabitEthernet")
    {
        for(auto const & c : gigabitethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet>();
        c->parent = this;
        gigabitethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "Group-Async")
    {
        for(auto const & c : group_async)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GroupAsync>();
        c->parent = this;
        group_async.push_back(c);
        return c;
    }

    if(child_yang_name == "LISP")
    {
        for(auto const & c : lisp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Lisp>();
        c->parent = this;
        lisp.push_back(c);
        return c;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Loopback")
    {
        for(auto const & c : loopback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Loopback>();
        c->parent = this;
        loopback.push_back(c);
        return c;
    }

    if(child_yang_name == "Multilink")
    {
        for(auto const & c : multilink)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Multilink>();
        c->parent = this;
        multilink.push_back(c);
        return c;
    }

    if(child_yang_name == "nve")
    {
        for(auto const & c : nve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Nve>();
        c->parent = this;
        nve.push_back(c);
        return c;
    }

    if(child_yang_name == "overlay")
    {
        for(auto const & c : overlay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay>();
        c->parent = this;
        overlay.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    if(child_yang_name == "pseudowire")
    {
        for(auto const & c : pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Pseudowire>();
        c->parent = this;
        pseudowire.push_back(c);
        return c;
    }

    if(child_yang_name == "Serial")
    {
        for(auto const & c : serial)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Serial>();
        c->parent = this;
        serial.push_back(c);
        return c;
    }

    if(child_yang_name == "SM")
    {
        for(auto const & c : sm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Sm>();
        c->parent = this;
        sm.push_back(c);
        return c;
    }

    if(child_yang_name == "TenGigabitEthernet")
    {
        for(auto const & c : tengigabitethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet>();
        c->parent = this;
        tengigabitethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "Tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    if(child_yang_name == "vasileft")
    {
        for(auto const & c : vasileft)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasileft>();
        c->parent = this;
        vasileft.push_back(c);
        return c;
    }

    if(child_yang_name == "vasiright")
    {
        for(auto const & c : vasiright)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasiright>();
        c->parent = this;
        vasiright.push_back(c);
        return c;
    }

    if(child_yang_name == "Virtual-Template")
    {
        for(auto const & c : virtual_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate>();
        c->parent = this;
        virtual_template.push_back(c);
        return c;
    }

    if(child_yang_name == "VirtualPortGroup")
    {
        for(auto const & c : virtualportgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Virtualportgroup>();
        c->parent = this;
        virtualportgroup.push_back(c);
        return c;
    }

    if(child_yang_name == "Vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appnav_compress)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : appnav_uncompress)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : atm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : atm_acr)
    {
        children[c->get_segment_path()] = c;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    for (auto const & c : bdi)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cellular)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cem_acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : embedded_service_engine)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fastethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fortygigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : gigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : group_async)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lisp)
    {
        children[c->get_segment_path()] = c;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    for (auto const & c : loopback)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multilink)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nve)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : overlay)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    for (auto const & c : pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : serial)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tengigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vasileft)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vasiright)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : virtual_template)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : virtualportgroup)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::AppnavCompress::AppnavCompress()
    :
    name{YType::uint16, "name"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::AppnavCompress::AccessSession>())
	,arp(std::make_shared<Native::Interface::AppnavCompress::Arp>())
	,backup(std::make_shared<Native::Interface::AppnavCompress::Backup>())
	,bandwidth(std::make_shared<Native::Interface::AppnavCompress::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::AppnavCompress::Bfd>())
	,cemoudp(std::make_shared<Native::Interface::AppnavCompress::Cemoudp>())
	,cws_tunnel(std::make_shared<Native::Interface::AppnavCompress::CwsTunnel>())
	,dampening(nullptr) // presence node
	,domain(std::make_shared<Native::Interface::AppnavCompress::Domain>())
	,encapsulation(std::make_shared<Native::Interface::AppnavCompress::Encapsulation>())
	,fair_queue(std::make_shared<Native::Interface::AppnavCompress::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::AppnavCompress::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::AppnavCompress::Flowcontrol>())
	,hold_queue(std::make_shared<Native::Interface::AppnavCompress::HoldQueue>())
	,interface_qos(std::make_shared<Native::Interface::AppnavCompress::Interface_Qos>())
	,ip(std::make_shared<Native::Interface::AppnavCompress::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::AppnavCompress::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::AppnavCompress::Ipv6>())
	,isis(std::make_shared<Native::Interface::AppnavCompress::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::AppnavCompress::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,logging(std::make_shared<Native::Interface::AppnavCompress::Logging>())
	,mdix(std::make_shared<Native::Interface::AppnavCompress::Mdix>())
	,mop(std::make_shared<Native::Interface::AppnavCompress::Mop>())
	,mpls(std::make_shared<Native::Interface::AppnavCompress::Mpls>())
	,peer(std::make_shared<Native::Interface::AppnavCompress::Peer>())
	,pm_path(std::make_shared<Native::Interface::AppnavCompress::PmPath>())
	,priority_queue(std::make_shared<Native::Interface::AppnavCompress::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::AppnavCompress::RcvQueue>())
	,standby(std::make_shared<Native::Interface::AppnavCompress::Standby>())
	,storm_control(std::make_shared<Native::Interface::AppnavCompress::StormControl>())
	,switchport(std::make_shared<Native::Interface::AppnavCompress::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::AppnavCompress::SwitchportConf>())
	,trust(std::make_shared<Native::Interface::AppnavCompress::Trust>())
	,utd(std::make_shared<Native::Interface::AppnavCompress::Utd>())
	,vrf(std::make_shared<Native::Interface::AppnavCompress::Vrf>())
{
    access_session->parent = this;

    arp->parent = this;

    backup->parent = this;

    bandwidth->parent = this;

    bfd->parent = this;

    cemoudp->parent = this;

    cws_tunnel->parent = this;

    domain->parent = this;

    encapsulation->parent = this;

    fair_queue->parent = this;

    fair_queue_conf->parent = this;

    flowcontrol->parent = this;

    hold_queue->parent = this;

    interface_qos->parent = this;

    ip->parent = this;

    ip_vrf->parent = this;

    ipv6->parent = this;

    isis->parent = this;

    keepalive_settings->parent = this;

    logging->parent = this;

    mdix->parent = this;

    mop->parent = this;

    mpls->parent = this;

    peer->parent = this;

    pm_path->parent = this;

    priority_queue->parent = this;

    rcv_queue->parent = this;

    standby->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    switchport_conf->parent = this;

    trust->parent = this;

    utd->parent = this;

    vrf->parent = this;

    yang_name = "AppNav-Compress"; yang_parent_name = "interface";
}

Native::Interface::AppnavCompress::~AppnavCompress()
{
}

bool Native::Interface::AppnavCompress::has_data() const
{
    return name.is_set
	|| delay.is_set
	|| description.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (hold_queue !=  nullptr && hold_queue->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::AppnavCompress::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation)
	|| is_set(description.operation)
	|| is_set(if_state.operation)
	|| is_set(keepalive.operation)
	|| is_set(load_interval.operation)
	|| is_set(max_reserved_bandwidth.operation)
	|| is_set(mtu.operation)
	|| is_set(service_insertion.operation)
	|| is_set(shutdown.operation)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (hold_queue !=  nullptr && hold_queue->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::AppnavCompress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppNav-Compress" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavCompress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.operation)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.operation)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.operation)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavCompress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::AppnavCompress::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::AppnavCompress::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AppnavCompress::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::AppnavCompress::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::AppnavCompress::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::AppnavCompress::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::AppnavCompress::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::AppnavCompress::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::AppnavCompress::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::AppnavCompress::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::AppnavCompress::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::AppnavCompress::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::AppnavCompress::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        if(hold_queue == nullptr)
        {
            hold_queue = std::make_shared<Native::Interface::AppnavCompress::HoldQueue>();
        }
        return hold_queue;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::AppnavCompress::Interface_Qos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AppnavCompress::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::AppnavCompress::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::AppnavCompress::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::AppnavCompress::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::AppnavCompress::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::AppnavCompress::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::AppnavCompress::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::AppnavCompress::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::AppnavCompress::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::AppnavCompress::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AppnavCompress::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::AppnavCompress::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::AppnavCompress::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::AppnavCompress::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::AppnavCompress::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::AppnavCompress::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::AppnavCompress::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::AppnavCompress::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::AppnavCompress::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::AppnavCompress::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::AppnavCompress::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavCompress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(hold_queue != nullptr)
    {
        children["hold-queue"] = hold_queue;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::AppnavCompress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "if-state")
    {
        if_state = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::AppnavCompress::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "switchport-conf"; yang_parent_name = "AppNav-Compress";
}

Native::Interface::AppnavCompress::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::AppnavCompress::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::AppnavCompress::SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::AppnavCompress::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavCompress::SwitchportConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchportConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.operation)) leaf_name_data.push_back(switchport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavCompress::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavCompress::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavCompress::SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::AppnavCompress::Switchport::Switchport()
{
    yang_name = "switchport"; yang_parent_name = "AppNav-Compress";
}

Native::Interface::AppnavCompress::Switchport::~Switchport()
{
}

bool Native::Interface::AppnavCompress::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::AppnavCompress::Switchport::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::AppnavCompress::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::AppnavCompress::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switchport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::AppnavCompress::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppnavCompress::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppnavCompress::Switchport::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::TableEnum::policed_dscp {0, "policed-dscp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedActionEnum::drop {0, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedActionEnum::policed_dscp_transmit {1, "policed-dscp-transmit"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitTypeEnum::bytes {0, "bytes"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitTypeEnum::ms {1, "ms"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitTypeEnum::packets {2, "packets"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitTypeEnum::us {3, "us"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::PackEnum::dscp {0, "dscp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::PackEnum::precedence {1, "precedence"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::PackEnum::cos {2, "cos"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::PackEnum::qos_group {3, "qos-group"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::PackEnum::wlan {4, "wlan"};

const Enum::YLeaf Native::Interface::AppnavCompress::IfStateEnum::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::AppnavCompress::ServiceInsertionEnum::waas {0, "waas"};


}
}

