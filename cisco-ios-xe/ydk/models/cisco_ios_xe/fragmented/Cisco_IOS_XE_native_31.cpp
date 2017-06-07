
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_31.hpp"
#include "Cisco_IOS_XE_native_34.hpp"
#include "Cisco_IOS_XE_native_35.hpp"
#include "Cisco_IOS_XE_native_32.hpp"
#include "Cisco_IOS_XE_native_33.hpp"
#include "Cisco_IOS_XE_native_36.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Power::Power()
    :
    inline_(std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_>())
{
    inline_->parent = this;

    yang_name = "power"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Power::~Power()
{
}

bool Native::Interface::Gigabitethernet::Power::has_data() const
{
    return (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Interface::Gigabitethernet::Power::has_operation() const
{
    return is_set(operation)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Interface::Gigabitethernet::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Power' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inline_ != nullptr)
    {
        children["inline"] = inline_;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Power::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Power::Inline_::Inline_()
    :
    consumption{YType::uint16, "consumption"},
    never{YType::empty, "never"}
    	,
    auto_(nullptr) // presence node
	,four_pair(std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::FourPair>())
	,police(nullptr) // presence node
	,port(std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Port>())
	,static_(nullptr) // presence node
{
    four_pair->parent = this;

    port->parent = this;

    yang_name = "inline"; yang_parent_name = "power";
}

Native::Interface::Gigabitethernet::Power::Inline_::~Inline_()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::has_data() const
{
    return consumption.is_set
	|| never.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_pair !=  nullptr && four_pair->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::Gigabitethernet::Power::Inline_::has_operation() const
{
    return is_set(operation)
	|| is_set(consumption.operation)
	|| is_set(never.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_pair !=  nullptr && four_pair->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inline_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (consumption.is_set || is_set(consumption.operation)) leaf_name_data.push_back(consumption.get_name_leafdata());
    if (never.is_set || is_set(never.operation)) leaf_name_data.push_back(never.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-pair")
    {
        if(four_pair == nullptr)
        {
            four_pair = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::FourPair>();
        }
        return four_pair;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Police>();
        }
        return police;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Port>();
        }
        return port;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_pair != nullptr)
    {
        children["four-pair"] = four_pair;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "consumption")
    {
        consumption = value;
    }
    if(value_path == "never")
    {
        never = value;
    }
}

Native::Interface::Gigabitethernet::Power::Inline_::Auto_::Auto_()
    :
    max{YType::int16, "max"}
{
    yang_name = "auto"; yang_parent_name = "inline";
}

Native::Interface::Gigabitethernet::Power::Inline_::Auto_::~Auto_()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Auto_::has_data() const
{
    return max.is_set;
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Interface::Gigabitethernet::Power::Inline_::FourPair::FourPair()
    :
    forced{YType::empty, "forced"}
{
    yang_name = "four-pair"; yang_parent_name = "inline";
}

Native::Interface::Gigabitethernet::Power::Inline_::FourPair::~FourPair()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::FourPair::has_data() const
{
    return forced.is_set;
}

bool Native::Interface::Gigabitethernet::Power::Inline_::FourPair::has_operation() const
{
    return is_set(operation)
	|| is_set(forced.operation);
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::FourPair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-pair";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::FourPair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourPair' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forced.is_set || is_set(forced.operation)) leaf_name_data.push_back(forced.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::FourPair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::FourPair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::FourPair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forced")
    {
        forced = value;
    }
}

Native::Interface::Gigabitethernet::Power::Inline_::Police::Police()
    :
    action(std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Police::Action>())
{
    action->parent = this;

    yang_name = "police"; yang_parent_name = "inline";
}

Native::Interface::Gigabitethernet::Power::Inline_::Police::~Police()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Police::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Police::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::Police::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Gigabitethernet::Power::Inline_::Police::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::Police::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::Action()
    :
    errdisable{YType::empty, "errdisable"},
    log{YType::empty, "log"}
{
    yang_name = "action"; yang_parent_name = "police";
}

Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::~Action()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::has_data() const
{
    return errdisable.is_set
	|| log.is_set;
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(errdisable.operation)
	|| is_set(log.operation);
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errdisable.is_set || is_set(errdisable.operation)) leaf_name_data.push_back(errdisable.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::Police::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "errdisable")
    {
        errdisable = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Interface::Gigabitethernet::Power::Inline_::Port::Port()
    :
    poe_ha{YType::empty, "poe-ha"},
    two_event{YType::empty, "two-event"}
{
    yang_name = "port"; yang_parent_name = "inline";
}

Native::Interface::Gigabitethernet::Power::Inline_::Port::~Port()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Port::has_data() const
{
    return poe_ha.is_set
	|| two_event.is_set;
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(poe_ha.operation)
	|| is_set(two_event.operation);
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poe_ha.is_set || is_set(poe_ha.operation)) leaf_name_data.push_back(poe_ha.get_name_leafdata());
    if (two_event.is_set || is_set(two_event.operation)) leaf_name_data.push_back(two_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "poe-ha")
    {
        poe_ha = value;
    }
    if(value_path == "two-event")
    {
        two_event = value;
    }
}

Native::Interface::Gigabitethernet::Power::Inline_::Static_::Static_()
    :
    max{YType::int16, "max"}
{
    yang_name = "static"; yang_parent_name = "inline";
}

Native::Interface::Gigabitethernet::Power::Inline_::Static_::~Static_()
{
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Static_::has_data() const
{
    return max.is_set;
}

bool Native::Interface::Gigabitethernet::Power::Inline_::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Interface::Gigabitethernet::Power::Inline_::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Power::Inline_::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Power::Inline_::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Power::Inline_::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Power::Inline_::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    periodic{YType::empty, "periodic"},
    port_control{YType::enumeration, "port-control"},
    violation{YType::enumeration, "violation"}
    	,
    event(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event>())
	,order(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Order>())
	,priority(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Priority>())
	,timer(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer>())
{
    event->parent = this;

    order->parent = this;

    priority->parent = this;

    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Authentication::has_data() const
{
    return control_direction.is_set
	|| fallback.is_set
	|| host_mode.is_set
	|| open.is_set
	|| periodic.is_set
	|| port_control.is_set
	|| violation.is_set
	|| (event !=  nullptr && event->has_data())
	|| (order !=  nullptr && order->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(control_direction.operation)
	|| is_set(fallback.operation)
	|| is_set(host_mode.operation)
	|| is_set(open.operation)
	|| is_set(periodic.operation)
	|| is_set(port_control.operation)
	|| is_set(violation.operation)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.operation)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.operation)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.operation)) leaf_name_data.push_back(open.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.operation)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.operation)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(order != nullptr)
    {
        children["order"] = order;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control-direction")
    {
        control_direction = value;
    }
    if(value_path == "fallback")
    {
        fallback = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
    if(value_path == "open")
    {
        open = value;
    }
    if(value_path == "periodic")
    {
        periodic = value;
    }
    if(value_path == "port-control")
    {
        port_control = value;
    }
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Event::Event()
    :
    fail(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Fail>())
	,no_response(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::NoResponse>())
	,server(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server>())
{
    fail->parent = this;

    no_response->parent = this;

    server->parent = this;

    yang_name = "event"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Authentication::Event::~Event()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::has_data() const
{
    return (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::has_operation() const
{
    return is_set(operation)
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fail != nullptr)
    {
        children["fail"] = fail;
    }

    if(no_response != nullptr)
    {
        children["no-response"] = no_response;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive>())
	,dead(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead>())
{
    alive->parent = this;

    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::has_data() const
{
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::has_operation() const
{
    return is_set(operation)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alive != nullptr)
    {
        children["alive"] = alive;
    }

    if(dead != nullptr)
    {
        children["dead"] = dead;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{
    yang_name = "action"; yang_parent_name = "alive";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::has_data() const
{
    return reinitialize.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(reinitialize.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.operation)) leaf_name_data.push_back(reinitialize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dead' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
	,reinitialize(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(operation)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    if(reinitialize != nullptr)
    {
        children["reinitialize"] = reinitialize;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{
    yang_name = "authorize"; yang_parent_name = "action";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation)
	|| is_set(voice.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.operation)) leaf_name_data.push_back(voice.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
    if(value_path == "voice")
    {
        voice = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "reinitialize"; yang_parent_name = "action";
}

Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reinitialize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event";
}

Native::Interface::Gigabitethernet::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Fail::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Fail::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Fail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fail' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Fail::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail";
}

Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(operation)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "authorize"; yang_parent_name = "action";
}

Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event";
}

Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoResponse' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response";
}

Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(operation)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "authorize"; yang_parent_name = "action";
}

Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "order"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Authentication::Order::~Order()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Order::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Order::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Order::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Order' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Order::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "priority"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Authentication::Priority::~Priority()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Priority::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Priority::get_entity_path(Entity* ancestor) const
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

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
    	,
    inactivity(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity>())
	,reauthenticate(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate>())
{
    inactivity->parent = this;

    reauthenticate->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Authentication::Timer::~Timer()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::has_data() const
{
    return restart.is_set
	|| (inactivity !=  nullptr && inactivity->has_data())
	|| (reauthenticate !=  nullptr && reauthenticate->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(restart.operation)
	|| (inactivity !=  nullptr && inactivity->has_operation())
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactivity != nullptr)
    {
        children["inactivity"] = inactivity;
    }

    if(reauthenticate != nullptr)
    {
        children["reauthenticate"] = reauthenticate;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restart")
    {
        restart = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::Reauthenticate()
    :
    server{YType::empty, "server"},
    value_{YType::uint16, "value"}
{
    yang_name = "reauthenticate"; yang_parent_name = "timer";
}

Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::~Reauthenticate()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::has_data() const
{
    return server.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::has_operation() const
{
    return is_set(operation)
	|| is_set(server.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauthenticate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reauthenticate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server")
    {
        server = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Inactivity()
    :
    server(nullptr) // presence node
	,value_(std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_>())
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer";
}

Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(operation)
	|| (server !=  nullptr && server->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inactivity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::Value_()
    :
    dynamic{YType::empty, "dynamic"},
    value_{YType::uint16, "value"}
{
    yang_name = "value"; yang_parent_name = "inactivity";
}

Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::~Value_()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::has_data() const
{
    return dynamic.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Value_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "server"; yang_parent_name = "inactivity";
}

Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::has_data() const
{
    return dynamic.is_set;
}

bool Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation);
}

std::string Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Interface::Gigabitethernet::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{
    yang_name = "mab"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Mab::~Mab()
{
}

bool Native::Interface::Gigabitethernet::Mab::has_data() const
{
    return eap.is_set;
}

bool Native::Interface::Gigabitethernet::Mab::has_operation() const
{
    return is_set(operation)
	|| is_set(eap.operation);
}

std::string Native::Interface::Gigabitethernet::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mab::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mab' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.operation)) leaf_name_data.push_back(eap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mab::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eap")
    {
        eap = value;
    }
}

Native::Interface::Gigabitethernet::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
    	,
    bpduguard(std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Bpduguard>())
	,loopguard(std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Loopguard>())
	,mst(std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Mst>())
	,portfast(nullptr) // presence node
	,vlan(std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Vlan>())
{
    bpduguard->parent = this;

    loopguard->parent = this;

    mst->parent = this;

    vlan->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::Gigabitethernet::SpanningTree::has_data() const
{
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Gigabitethernet::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(bpdufilter.operation)
	|| is_set(cost.operation)
	|| is_set(guard.operation)
	|| is_set(link_type.operation)
	|| is_set(port_priority.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Gigabitethernet::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanningTree' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.operation)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.operation)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Gigabitethernet::SpanningTree::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(loopguard != nullptr)
    {
        children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        children["mst"] = mst;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Gigabitethernet::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "guard")
    {
        guard = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::has_data() const
{
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation);
}

std::string Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bpduguard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::Gigabitethernet::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Interface::Gigabitethernet::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::Gigabitethernet::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| trunk.is_set;
}

bool Native::Interface::Gigabitethernet::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(trunk.operation);
}

std::string Native::Interface::Gigabitethernet::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Portfast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Interface::Gigabitethernet::SpanningTree::Vlan::Vlan()
    :
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"},
    vlan_ids{YType::str, "vlan-ids"}
{
    yang_name = "vlan"; yang_parent_name = "spanning-tree";
}

Native::Interface::Gigabitethernet::SpanningTree::Vlan::~Vlan()
{
}

bool Native::Interface::Gigabitethernet::SpanningTree::Vlan::has_data() const
{
    for (auto const & leaf : vlan_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::Gigabitethernet::SpanningTree::Vlan::has_operation() const
{
    for (auto const & leaf : vlan_ids.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(port_priority.operation)
	|| is_set(vlan_ids.operation);
}

std::string Native::Interface::Gigabitethernet::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SpanningTree::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    auto vlan_ids_name_datas = vlan_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_ids_name_datas.begin(), vlan_ids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SpanningTree::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids.append(value);
    }
}

Native::Interface::Gigabitethernet::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{
    yang_name = "loopguard"; yang_parent_name = "spanning-tree";
}

Native::Interface::Gigabitethernet::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::Gigabitethernet::SpanningTree::Loopguard::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::Gigabitethernet::SpanningTree::Loopguard::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::Interface::Gigabitethernet::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SpanningTree::Loopguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loopguard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SpanningTree::Loopguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Gigabitethernet::SpanningTree::Mst::Mst()
    :
    cost{YType::uint32, "cost"},
    instance{YType::str, "instance"},
    port_priority{YType::uint16, "port-priority"},
    pre_standard{YType::empty, "pre-standard"}
{
    yang_name = "mst"; yang_parent_name = "spanning-tree";
}

Native::Interface::Gigabitethernet::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::Gigabitethernet::SpanningTree::Mst::has_data() const
{
    return cost.is_set
	|| instance.is_set
	|| port_priority.is_set
	|| pre_standard.is_set;
}

bool Native::Interface::Gigabitethernet::SpanningTree::Mst::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(instance.operation)
	|| is_set(port_priority.operation)
	|| is_set(pre_standard.operation);
}

std::string Native::Interface::Gigabitethernet::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SpanningTree::Mst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mst' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (pre_standard.is_set || is_set(pre_standard.operation)) leaf_name_data.push_back(pre_standard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SpanningTree::Mst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "pre-standard")
    {
        pre_standard = value;
    }
}

Native::Interface::Gigabitethernet::Auto_::Auto_()
    :
    qos(std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos>())
{
    qos->parent = this;

    yang_name = "auto"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Auto_::~Auto_()
{
}

bool Native::Interface::Gigabitethernet::Auto_::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::Gigabitethernet::Auto_::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::Gigabitethernet::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Auto_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Auto_::Qos::Qos()
    :
    classify(nullptr) // presence node
	,trust(nullptr) // presence node
	,video(std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos::Video>())
	,voip(nullptr) // presence node
{
    video->parent = this;

    yang_name = "qos"; yang_parent_name = "auto";
}

Native::Interface::Gigabitethernet::Auto_::Qos::~Qos()
{
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::has_data() const
{
    return (classify !=  nullptr && classify->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (video !=  nullptr && video->has_data())
	|| (voip !=  nullptr && voip->has_data());
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::has_operation() const
{
    return is_set(operation)
	|| (classify !=  nullptr && classify->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (video !=  nullptr && video->has_operation())
	|| (voip !=  nullptr && voip->has_operation());
}

std::string Native::Interface::Gigabitethernet::Auto_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Auto_::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Auto_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classify")
    {
        if(classify == nullptr)
        {
            classify = std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos::Classify>();
        }
        return classify;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "video")
    {
        if(video == nullptr)
        {
            video = std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos::Video>();
        }
        return video;
    }

    if(child_yang_name == "voip")
    {
        if(voip == nullptr)
        {
            voip = std::make_shared<Native::Interface::Gigabitethernet::Auto_::Qos::Voip>();
        }
        return voip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Auto_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classify != nullptr)
    {
        children["classify"] = classify;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(video != nullptr)
    {
        children["video"] = video;
    }

    if(voip != nullptr)
    {
        children["voip"] = voip;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Auto_::Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Auto_::Qos::Classify::Classify()
    :
    police{YType::empty, "police"}
{
    yang_name = "classify"; yang_parent_name = "qos";
}

Native::Interface::Gigabitethernet::Auto_::Qos::Classify::~Classify()
{
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Classify::has_data() const
{
    return police.is_set;
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Classify::has_operation() const
{
    return is_set(operation)
	|| is_set(police.operation);
}

std::string Native::Interface::Gigabitethernet::Auto_::Qos::Classify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classify";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Auto_::Qos::Classify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (police.is_set || is_set(police.operation)) leaf_name_data.push_back(police.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Auto_::Qos::Classify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Auto_::Qos::Classify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Auto_::Qos::Classify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "police")
    {
        police = value;
    }
}

Native::Interface::Gigabitethernet::Auto_::Qos::Trust::Trust()
    :
    cos{YType::empty, "cos"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "trust"; yang_parent_name = "qos";
}

Native::Interface::Gigabitethernet::Auto_::Qos::Trust::~Trust()
{
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Trust::has_data() const
{
    return cos.is_set
	|| dscp.is_set;
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dscp.operation);
}

std::string Native::Interface::Gigabitethernet::Auto_::Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Auto_::Qos::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Auto_::Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Auto_::Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Auto_::Qos::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::Interface::Gigabitethernet::Auto_::Qos::Video::Video()
    :
    cts{YType::empty, "cts"},
    ip_camera{YType::empty, "ip-camera"},
    media_player{YType::empty, "media-player"}
{
    yang_name = "video"; yang_parent_name = "qos";
}

Native::Interface::Gigabitethernet::Auto_::Qos::Video::~Video()
{
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Video::has_data() const
{
    return cts.is_set
	|| ip_camera.is_set
	|| media_player.is_set;
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Video::has_operation() const
{
    return is_set(operation)
	|| is_set(cts.operation)
	|| is_set(ip_camera.operation)
	|| is_set(media_player.operation);
}

std::string Native::Interface::Gigabitethernet::Auto_::Qos::Video::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "video";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Auto_::Qos::Video::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Video' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts.is_set || is_set(cts.operation)) leaf_name_data.push_back(cts.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.operation)) leaf_name_data.push_back(ip_camera.get_name_leafdata());
    if (media_player.is_set || is_set(media_player.operation)) leaf_name_data.push_back(media_player.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Auto_::Qos::Video::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Auto_::Qos::Video::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Auto_::Qos::Video::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cts")
    {
        cts = value;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
    }
    if(value_path == "media-player")
    {
        media_player = value;
    }
}

Native::Interface::Gigabitethernet::Auto_::Qos::Voip::Voip()
    :
    cisco_phone{YType::empty, "cisco-phone"},
    cisco_softphone{YType::empty, "cisco-softphone"},
    trust{YType::empty, "trust"}
{
    yang_name = "voip"; yang_parent_name = "qos";
}

Native::Interface::Gigabitethernet::Auto_::Qos::Voip::~Voip()
{
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Voip::has_data() const
{
    return cisco_phone.is_set
	|| cisco_softphone.is_set
	|| trust.is_set;
}

bool Native::Interface::Gigabitethernet::Auto_::Qos::Voip::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco_phone.operation)
	|| is_set(cisco_softphone.operation)
	|| is_set(trust.operation);
}

std::string Native::Interface::Gigabitethernet::Auto_::Qos::Voip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Auto_::Qos::Voip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_phone.is_set || is_set(cisco_phone.operation)) leaf_name_data.push_back(cisco_phone.get_name_leafdata());
    if (cisco_softphone.is_set || is_set(cisco_softphone.operation)) leaf_name_data.push_back(cisco_softphone.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Auto_::Qos::Voip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Auto_::Qos::Voip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Auto_::Qos::Voip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone = value;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Gigabitethernet::Datalink::Datalink()
    :
    flow(std::make_shared<Native::Interface::Gigabitethernet::Datalink::Flow>())
{
    flow->parent = this;

    yang_name = "datalink"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Datalink::~Datalink()
{
}

bool Native::Interface::Gigabitethernet::Datalink::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::Gigabitethernet::Datalink::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::Gigabitethernet::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:datalink";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Datalink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Datalink' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Gigabitethernet::Datalink::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Datalink::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Datalink::Flow::Flow()
    :
    monitor(nullptr) // presence node
{
    yang_name = "flow"; yang_parent_name = "datalink";
}

Native::Interface::Gigabitethernet::Datalink::Flow::~Flow()
{
}

bool Native::Interface::Gigabitethernet::Datalink::Flow::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::Gigabitethernet::Datalink::Flow::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::Gigabitethernet::Datalink::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Datalink::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Datalink::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::Gigabitethernet::Datalink::Flow::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Datalink::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Datalink::Flow::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::Monitor()
    :
    input_output{YType::enumeration, "input-output"},
    user_defined_flow{YType::str, "User-defined-flow"}
{
    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::has_data() const
{
    return input_output.is_set
	|| user_defined_flow.is_set;
}

bool Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::has_operation() const
{
    return is_set(operation)
	|| is_set(input_output.operation)
	|| is_set(user_defined_flow.operation);
}

std::string Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_output.is_set || is_set(input_output.operation)) leaf_name_data.push_back(input_output.get_name_leafdata());
    if (user_defined_flow.is_set || is_set(user_defined_flow.operation)) leaf_name_data.push_back(user_defined_flow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input-output")
    {
        input_output = value;
    }
    if(value_path == "User-defined-flow")
    {
        user_defined_flow = value;
    }
}

Native::Interface::Gigabitethernet::Energywise::Energywise()
    :
    activitycheck{YType::empty, "activitycheck"}
{
    yang_name = "energywise"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Energywise::~Energywise()
{
}

bool Native::Interface::Gigabitethernet::Energywise::has_data() const
{
    return activitycheck.is_set;
}

bool Native::Interface::Gigabitethernet::Energywise::has_operation() const
{
    return is_set(operation)
	|| is_set(activitycheck.operation);
}

std::string Native::Interface::Gigabitethernet::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Energywise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Energywise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activitycheck.is_set || is_set(activitycheck.operation)) leaf_name_data.push_back(activitycheck.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Energywise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activitycheck")
    {
        activitycheck = value;
    }
}

Native::Interface::Gigabitethernet::Location::Location()
    :
    civic_location_id(std::make_shared<Native::Interface::Gigabitethernet::Location::CivicLocationId>())
{
    civic_location_id->parent = this;

    yang_name = "location"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Location::~Location()
{
}

bool Native::Interface::Gigabitethernet::Location::has_data() const
{
    return (civic_location_id !=  nullptr && civic_location_id->has_data());
}

bool Native::Interface::Gigabitethernet::Location::has_operation() const
{
    return is_set(operation)
	|| (civic_location_id !=  nullptr && civic_location_id->has_operation());
}

std::string Native::Interface::Gigabitethernet::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:location";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location-id")
    {
        if(civic_location_id == nullptr)
        {
            civic_location_id = std::make_shared<Native::Interface::Gigabitethernet::Location::CivicLocationId>();
        }
        return civic_location_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(civic_location_id != nullptr)
    {
        children["civic-location-id"] = civic_location_id;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Location::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Location::CivicLocationId::CivicLocationId()
    :
    location_identifier{YType::str, "location-identifier"}
    	,
    host(nullptr) // presence node
	,none(nullptr) // presence node
{
    yang_name = "civic-location-id"; yang_parent_name = "location";
}

Native::Interface::Gigabitethernet::Location::CivicLocationId::~CivicLocationId()
{
}

bool Native::Interface::Gigabitethernet::Location::CivicLocationId::has_data() const
{
    return location_identifier.is_set
	|| (host !=  nullptr && host->has_data())
	|| (none !=  nullptr && none->has_data());
}

bool Native::Interface::Gigabitethernet::Location::CivicLocationId::has_operation() const
{
    return is_set(operation)
	|| is_set(location_identifier.operation)
	|| (host !=  nullptr && host->has_operation())
	|| (none !=  nullptr && none->has_operation());
}

std::string Native::Interface::Gigabitethernet::Location::CivicLocationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Location::CivicLocationId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CivicLocationId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_identifier.is_set || is_set(location_identifier.operation)) leaf_name_data.push_back(location_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Location::CivicLocationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::Gigabitethernet::Location::CivicLocationId::Host>();
        }
        return host;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Interface::Gigabitethernet::Location::CivicLocationId::None>();
        }
        return none;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Location::CivicLocationId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(none != nullptr)
    {
        children["none"] = none;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Location::CivicLocationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-identifier")
    {
        location_identifier = value;
    }
}

Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::Host()
    :
    port_location{YType::str, "port-location"}
{
    yang_name = "host"; yang_parent_name = "civic-location-id";
}

Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::~Host()
{
}

bool Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(port_location.operation);
}

std::string Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.operation)) leaf_name_data.push_back(port_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Location::CivicLocationId::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-location")
    {
        port_location = value;
    }
}

Native::Interface::Gigabitethernet::Location::CivicLocationId::None::None()
    :
    port_location{YType::str, "port-location"}
{
    yang_name = "none"; yang_parent_name = "civic-location-id";
}

Native::Interface::Gigabitethernet::Location::CivicLocationId::None::~None()
{
}

bool Native::Interface::Gigabitethernet::Location::CivicLocationId::None::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::Gigabitethernet::Location::CivicLocationId::None::has_operation() const
{
    return is_set(operation)
	|| is_set(port_location.operation);
}

std::string Native::Interface::Gigabitethernet::Location::CivicLocationId::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Location::CivicLocationId::None::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'None' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.operation)) leaf_name_data.push_back(port_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Location::CivicLocationId::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Location::CivicLocationId::None::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Location::CivicLocationId::None::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-location")
    {
        port_location = value;
    }
}

Native::Interface::Gigabitethernet::Mac::Mac()
    :
    access_group(std::make_shared<Native::Interface::Gigabitethernet::Mac::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "mac"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Mac::~Mac()
{
}

bool Native::Interface::Gigabitethernet::Mac::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Interface::Gigabitethernet::Mac::has_operation() const
{
    return is_set(operation)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Gigabitethernet::Mac::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mac::AccessGroup::AccessGroup()
    :
    acl_name(std::make_shared<Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName>())
{
    acl_name->parent = this;

    yang_name = "access-group"; yang_parent_name = "mac";
}

Native::Interface::Gigabitethernet::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Gigabitethernet::Mac::AccessGroup::has_data() const
{
    return (acl_name !=  nullptr && acl_name->has_data());
}

bool Native::Interface::Gigabitethernet::Mac::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (acl_name !=  nullptr && acl_name->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mac::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-name")
    {
        if(acl_name == nullptr)
        {
            acl_name = std::make_shared<Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName>();
        }
        return acl_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_name != nullptr)
    {
        children["ACL-name"] = acl_name;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mac::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::AclName()
    :
    acl_name{YType::str, "acl-name"},
    apply_to{YType::enumeration, "apply-to"}
{
    yang_name = "ACL-name"; yang_parent_name = "access-group";
}

Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::~AclName()
{
}

bool Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::has_data() const
{
    return acl_name.is_set
	|| apply_to.is_set;
}

bool Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(apply_to.operation);
}

std::string Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-name";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (apply_to.is_set || is_set(apply_to.operation)) leaf_name_data.push_back(apply_to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "apply-to")
    {
        apply_to = value;
    }
}

Native::Interface::Gigabitethernet::Macro::Macro()
    :
    description{YType::str, "description"}
    	,
    auto_(std::make_shared<Native::Interface::Gigabitethernet::Macro::Auto_>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Macro::~Macro()
{
}

bool Native::Interface::Gigabitethernet::Macro::has_data() const
{
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::Gigabitethernet::Macro::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::Gigabitethernet::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Macro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macro' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::Gigabitethernet::Macro::Auto_>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Macro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Interface::Gigabitethernet::Macro::Auto_::Auto_()
    :
    processing{YType::boolean, "processing"}
{
    yang_name = "auto"; yang_parent_name = "macro";
}

Native::Interface::Gigabitethernet::Macro::Auto_::~Auto_()
{
}

bool Native::Interface::Gigabitethernet::Macro::Auto_::has_data() const
{
    return processing.is_set;
}

bool Native::Interface::Gigabitethernet::Macro::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(processing.operation);
}

std::string Native::Interface::Gigabitethernet::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Macro::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.operation)) leaf_name_data.push_back(processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Macro::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processing")
    {
        processing = value;
    }
}

Native::Interface::Gigabitethernet::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{
    yang_name = "dual-active"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::DualActive::~DualActive()
{
}

bool Native::Interface::Gigabitethernet::DualActive::has_data() const
{
    return fast_hello.is_set;
}

bool Native::Interface::Gigabitethernet::DualActive::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_hello.operation);
}

std::string Native::Interface::Gigabitethernet::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::DualActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DualActive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.operation)) leaf_name_data.push_back(fast_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::DualActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
    }
}

Native::Interface::Gigabitethernet::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{
    yang_name = "lldp"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Lldp::~Lldp()
{
}

bool Native::Interface::Gigabitethernet::Lldp::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::Gigabitethernet::Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(transmit.operation);
}

std::string Native::Interface::Gigabitethernet::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:lldp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Interface::Gigabitethernet::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "load-balancing"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::Gigabitethernet::LoadBalancing::has_data() const
{
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::Gigabitethernet::LoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(flow.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::LoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalancing' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::LoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::VlanRange::VlanRange()
    :
    id{YType::str, "id"}
    	,
    service_policy(std::make_shared<Native::Interface::Gigabitethernet::VlanRange::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "vlan-range"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::VlanRange::~VlanRange()
{
}

bool Native::Interface::Gigabitethernet::VlanRange::has_data() const
{
    return id.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::Gigabitethernet::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::Gigabitethernet::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan-range" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Gigabitethernet::VlanRange::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::Gigabitethernet::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "vlan-range";
}

Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::VlanRange::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::Gigabitethernet::Switch::Switch()
    :
    virtual_(std::make_shared<Native::Interface::Gigabitethernet::Switch::Virtual_>())
{
    virtual_->parent = this;

    yang_name = "switch"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Switch::~Switch()
{
}

bool Native::Interface::Gigabitethernet::Switch::has_data() const
{
    return (virtual_ !=  nullptr && virtual_->has_data());
}

bool Native::Interface::Gigabitethernet::Switch::has_operation() const
{
    return is_set(operation)
	|| (virtual_ !=  nullptr && virtual_->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switch' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual")
    {
        if(virtual_ == nullptr)
        {
            virtual_ = std::make_shared<Native::Interface::Gigabitethernet::Switch::Virtual_>();
        }
        return virtual_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_ != nullptr)
    {
        children["virtual"] = virtual_;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switch::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switch::Virtual_::Virtual_()
    :
    link{YType::uint8, "link"}
{
    yang_name = "virtual"; yang_parent_name = "switch";
}

Native::Interface::Gigabitethernet::Switch::Virtual_::~Virtual_()
{
}

bool Native::Interface::Gigabitethernet::Switch::Virtual_::has_data() const
{
    return link.is_set;
}

bool Native::Interface::Gigabitethernet::Switch::Virtual_::has_operation() const
{
    return is_set(operation)
	|| is_set(link.operation);
}

std::string Native::Interface::Gigabitethernet::Switch::Virtual_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switch::Virtual_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Virtual_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switch::Virtual_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switch::Virtual_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switch::Virtual_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
}

Native::Interface::Gigabitethernet::SrrQueue::SrrQueue()
    :
    bandwidth(std::make_shared<Native::Interface::Gigabitethernet::SrrQueue::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "srr-queue"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::SrrQueue::~SrrQueue()
{
}

bool Native::Interface::Gigabitethernet::SrrQueue::has_data() const
{
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::Gigabitethernet::SrrQueue::has_operation() const
{
    return is_set(operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::Gigabitethernet::SrrQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:srr-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SrrQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrrQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SrrQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Gigabitethernet::SrrQueue::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SrrQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::Gigabitethernet::SrrQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Bandwidth()
    :
    shape(std::make_shared<Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape>())
	,share(std::make_shared<Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share>())
{
    shape->parent = this;

    share->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "srr-queue";
}

Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::has_data() const
{
    return (shape !=  nullptr && shape->has_data())
	|| (share !=  nullptr && share->has_data());
}

bool Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| (shape !=  nullptr && shape->has_operation())
	|| (share !=  nullptr && share->has_operation());
}

std::string Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "share")
    {
        if(share == nullptr)
        {
            share = std::make_shared<Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share>();
        }
        return share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(share != nullptr)
    {
        children["share"] = share;
    }

    return children;
}

void Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::Shape()
    :
    weight1{YType::uint16, "weight1"},
    weight2{YType::uint16, "weight2"},
    weight3{YType::uint16, "weight3"},
    weight4{YType::uint16, "weight4"}
{
    yang_name = "shape"; yang_parent_name = "bandwidth";
}

Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::~Shape()
{
}

bool Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::has_data() const
{
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(weight1.operation)
	|| is_set(weight2.operation)
	|| is_set(weight3.operation)
	|| is_set(weight4.operation);
}

std::string Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::get_entity_path(Entity* ancestor) const
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

    if (weight1.is_set || is_set(weight1.operation)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.operation)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.operation)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.operation)) leaf_name_data.push_back(weight4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight1")
    {
        weight1 = value;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
    }
}

Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::Share()
    :
    weight1{YType::uint8, "weight1"},
    weight2{YType::uint8, "weight2"},
    weight3{YType::uint8, "weight3"},
    weight4{YType::uint8, "weight4"}
{
    yang_name = "share"; yang_parent_name = "bandwidth";
}

Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::~Share()
{
}

bool Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::has_data() const
{
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::has_operation() const
{
    return is_set(operation)
	|| is_set(weight1.operation)
	|| is_set(weight2.operation)
	|| is_set(weight3.operation)
	|| is_set(weight4.operation);
}

std::string Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "share";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Share' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.operation)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.operation)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.operation)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.operation)) leaf_name_data.push_back(weight4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight1")
    {
        weight1 = value;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
    }
}

Native::Interface::Gigabitethernet::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
{
    yang_name = "macsec"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Macsec::~Macsec()
{
}

bool Native::Interface::Gigabitethernet::Macsec::has_data() const
{
    return network_link.is_set;
}

bool Native::Interface::Gigabitethernet::Macsec::has_operation() const
{
    return is_set(operation)
	|| is_set(network_link.operation);
}

std::string Native::Interface::Gigabitethernet::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.operation)) leaf_name_data.push_back(network_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Macsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-link")
    {
        network_link = value;
    }
}

Native::Interface::Gigabitethernet::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "device-tracking"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::Gigabitethernet::DeviceTracking::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Gigabitethernet::DeviceTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Gigabitethernet::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::DeviceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceTracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::DeviceTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Gigabitethernet::Udld::Udld()
    :
    port(nullptr) // presence node
{
    yang_name = "udld"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Udld::~Udld()
{
}

bool Native::Interface::Gigabitethernet::Udld::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Gigabitethernet::Udld::has_operation() const
{
    return is_set(operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Gigabitethernet::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:udld";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Udld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udld' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Gigabitethernet::Udld::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Udld::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Udld::Port::Port()
    :
    aggressive{YType::empty, "aggressive"},
    disable{YType::empty, "disable"}
{
    yang_name = "port"; yang_parent_name = "udld";
}

Native::Interface::Gigabitethernet::Udld::Port::~Port()
{
}

bool Native::Interface::Gigabitethernet::Udld::Port::has_data() const
{
    return aggressive.is_set
	|| disable.is_set;
}

bool Native::Interface::Gigabitethernet::Udld::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(aggressive.operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Udld::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Udld::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.operation)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Udld::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Udld::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Udld::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{
    yang_name = "zone-member"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Gigabitethernet::ZoneMember::has_data() const
{
    return security.is_set;
}

bool Native::Interface::Gigabitethernet::ZoneMember::has_operation() const
{
    return is_set(operation)
	|| is_set(security.operation);
}

std::string Native::Interface::Gigabitethernet::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ZoneMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ZoneMember' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.operation)) leaf_name_data.push_back(security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::ZoneMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "security")
    {
        security = value;
    }
}

Native::Interface::Tengigabitethernet::Tengigabitethernet()
    :
    name{YType::str, "name"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    media_type{YType::enumeration, "media-type"},
    mtu{YType::uint16, "mtu"},
    port_type{YType::enumeration, "port-type"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::Tengigabitethernet::AccessSession>())
	,arp(std::make_shared<Native::Interface::Tengigabitethernet::Arp>())
	,authentication(std::make_shared<Native::Interface::Tengigabitethernet::Authentication>())
	,auto_(std::make_shared<Native::Interface::Tengigabitethernet::Auto_>())
	,backup(std::make_shared<Native::Interface::Tengigabitethernet::Backup>())
	,bandwidth(std::make_shared<Native::Interface::Tengigabitethernet::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::Tengigabitethernet::Bfd>())
	,carrier_delay(std::make_shared<Native::Interface::Tengigabitethernet::CarrierDelay>())
	,cdp(std::make_shared<Native::Interface::Tengigabitethernet::Cdp>())
	,cemoudp(std::make_shared<Native::Interface::Tengigabitethernet::Cemoudp>())
	,channel_group(std::make_shared<Native::Interface::Tengigabitethernet::ChannelGroup>())
	,crypto(std::make_shared<Native::Interface::Tengigabitethernet::Crypto>())
	,cts(std::make_shared<Native::Interface::Tengigabitethernet::Cts>())
	,cws_tunnel(std::make_shared<Native::Interface::Tengigabitethernet::CwsTunnel>())
	,dampening(nullptr) // presence node
	,datalink(std::make_shared<Native::Interface::Tengigabitethernet::Datalink>())
	,device_tracking(std::make_shared<Native::Interface::Tengigabitethernet::DeviceTracking>())
	,domain(std::make_shared<Native::Interface::Tengigabitethernet::Domain>())
	,dot1x(std::make_shared<Native::Interface::Tengigabitethernet::Dot1X>())
	,dual_active(std::make_shared<Native::Interface::Tengigabitethernet::DualActive>())
	,encapsulation(std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation>())
	,energywise(nullptr) // presence node
	,ethernet(std::make_shared<Native::Interface::Tengigabitethernet::Ethernet>())
	,fair_queue(std::make_shared<Native::Interface::Tengigabitethernet::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::Tengigabitethernet::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::Tengigabitethernet::Flowcontrol>())
	,hold_queue(std::make_shared<Native::Interface::Tengigabitethernet::HoldQueue>())
	,interface_qos(std::make_shared<Native::Interface::Tengigabitethernet::Interface_Qos>())
	,ip(std::make_shared<Native::Interface::Tengigabitethernet::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::Tengigabitethernet::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6>())
	,isis(std::make_shared<Native::Interface::Tengigabitethernet::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::Tengigabitethernet::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,lacp(std::make_shared<Native::Interface::Tengigabitethernet::Lacp>())
	,lisp(std::make_shared<Native::Interface::Tengigabitethernet::Lisp>())
	,lldp(std::make_shared<Native::Interface::Tengigabitethernet::Lldp>())
	,load_balancing(std::make_shared<Native::Interface::Tengigabitethernet::LoadBalancing>())
	,location(std::make_shared<Native::Interface::Tengigabitethernet::Location>())
	,logging(std::make_shared<Native::Interface::Tengigabitethernet::Logging>())
	,mab(nullptr) // presence node
	,mac(std::make_shared<Native::Interface::Tengigabitethernet::Mac>())
	,macro(std::make_shared<Native::Interface::Tengigabitethernet::Macro>())
	,macsec(nullptr) // presence node
	,mdix(std::make_shared<Native::Interface::Tengigabitethernet::Mdix>())
	,mka(std::make_shared<Native::Interface::Tengigabitethernet::Mka>())
	,mop(std::make_shared<Native::Interface::Tengigabitethernet::Mop>())
	,mpls(std::make_shared<Native::Interface::Tengigabitethernet::Mpls>())
	,negotiation(std::make_shared<Native::Interface::Tengigabitethernet::Negotiation>())
	,ospfv3(std::make_shared<Native::Interface::Tengigabitethernet::Ospfv3>())
	,peer(std::make_shared<Native::Interface::Tengigabitethernet::Peer>())
	,performance(std::make_shared<Native::Interface::Tengigabitethernet::Performance>())
	,plim(std::make_shared<Native::Interface::Tengigabitethernet::Plim>())
	,pm_path(std::make_shared<Native::Interface::Tengigabitethernet::PmPath>())
	,power(std::make_shared<Native::Interface::Tengigabitethernet::Power>())
	,pppoe(std::make_shared<Native::Interface::Tengigabitethernet::Pppoe>())
	,priority_queue(std::make_shared<Native::Interface::Tengigabitethernet::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::Tengigabitethernet::RcvQueue>())
	,service(std::make_shared<Native::Interface::Tengigabitethernet::Service>())
	,service_policy(std::make_shared<Native::Interface::Tengigabitethernet::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::Tengigabitethernet::Snmp>())
	,spanning_tree(std::make_shared<Native::Interface::Tengigabitethernet::SpanningTree>())
	,speed(std::make_shared<Native::Interface::Tengigabitethernet::Speed>())
	,srr_queue(std::make_shared<Native::Interface::Tengigabitethernet::SrrQueue>())
	,standby(std::make_shared<Native::Interface::Tengigabitethernet::Standby>())
	,storm_control(std::make_shared<Native::Interface::Tengigabitethernet::StormControl>())
	,switch(std::make_shared<Native::Interface::Tengigabitethernet::Switch>())
	,switchport(std::make_shared<Native::Interface::Tengigabitethernet::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::Tengigabitethernet::SwitchportConf>())
	,synchronous(std::make_shared<Native::Interface::Tengigabitethernet::Synchronous>())
	,trust(std::make_shared<Native::Interface::Tengigabitethernet::Trust>())
	,udld(std::make_shared<Native::Interface::Tengigabitethernet::Udld>())
	,utd(std::make_shared<Native::Interface::Tengigabitethernet::Utd>())
	,vrf(std::make_shared<Native::Interface::Tengigabitethernet::Vrf>())
	,xconnect(std::make_shared<Native::Interface::Tengigabitethernet::Xconnect>())
	,zone_member(std::make_shared<Native::Interface::Tengigabitethernet::ZoneMember>())
{
    access_session->parent = this;

    arp->parent = this;

    authentication->parent = this;

    auto_->parent = this;

    backup->parent = this;

    bandwidth->parent = this;

    bfd->parent = this;

    carrier_delay->parent = this;

    cdp->parent = this;

    cemoudp->parent = this;

    channel_group->parent = this;

    crypto->parent = this;

    cts->parent = this;

    cws_tunnel->parent = this;

    datalink->parent = this;

    device_tracking->parent = this;

    domain->parent = this;

    dot1x->parent = this;

    dual_active->parent = this;

    encapsulation->parent = this;

    ethernet->parent = this;

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

    lacp->parent = this;

    lisp->parent = this;

    lldp->parent = this;

    load_balancing->parent = this;

    location->parent = this;

    logging->parent = this;

    mac->parent = this;

    macro->parent = this;

    mdix->parent = this;

    mka->parent = this;

    mop->parent = this;

    mpls->parent = this;

    negotiation->parent = this;

    ospfv3->parent = this;

    peer->parent = this;

    performance->parent = this;

    plim->parent = this;

    pm_path->parent = this;

    power->parent = this;

    pppoe->parent = this;

    priority_queue->parent = this;

    rcv_queue->parent = this;

    service->parent = this;

    service_policy->parent = this;

    snmp->parent = this;

    spanning_tree->parent = this;

    speed->parent = this;

    srr_queue->parent = this;

    standby->parent = this;

    storm_control->parent = this;

    switch->parent = this;

    switchport->parent = this;

    switchport_conf->parent = this;

    synchronous->parent = this;

    trust->parent = this;

    udld->parent = this;

    utd->parent = this;

    vrf->parent = this;

    xconnect->parent = this;

    zone_member->parent = this;

    yang_name = "TenGigabitEthernet"; yang_parent_name = "interface";
}

Native::Interface::Tengigabitethernet::~Tengigabitethernet()
{
}

bool Native::Interface::Tengigabitethernet::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| channel_protocol.is_set
	|| delay.is_set
	|| description.is_set
	|| duplex.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| media_type.is_set
	|| mtu.is_set
	|| port_type.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
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
	|| (lacp !=  nullptr && lacp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switch !=  nullptr && switch->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::Tengigabitethernet::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(channel_protocol.operation)
	|| is_set(delay.operation)
	|| is_set(description.operation)
	|| is_set(duplex.operation)
	|| is_set(if_state.operation)
	|| is_set(keepalive.operation)
	|| is_set(load_interval.operation)
	|| is_set(max_reserved_bandwidth.operation)
	|| is_set(media_type.operation)
	|| is_set(mtu.operation)
	|| is_set(port_type.operation)
	|| is_set(service_insertion.operation)
	|| is_set(shutdown.operation)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
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
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switch !=  nullptr && switch->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::Tengigabitethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TenGigabitEthernet" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::get_entity_path(Entity* ancestor) const
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
    if (channel_protocol.is_set || is_set(channel_protocol.operation)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.operation)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.operation)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.operation)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::Tengigabitethernet::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Tengigabitethernet::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tengigabitethernet::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::Tengigabitethernet::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Tengigabitethernet::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tengigabitethernet::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tengigabitethernet::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::Tengigabitethernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Interface::Tengigabitethernet::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::Tengigabitethernet::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::Tengigabitethernet::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::Tengigabitethernet::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::Tengigabitethernet::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::Tengigabitethernet::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::Tengigabitethernet::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::Tengigabitethernet::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::Interface::Tengigabitethernet::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::Tengigabitethernet::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Interface::Tengigabitethernet::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::Tengigabitethernet::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::Tengigabitethernet::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Tengigabitethernet::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::Tengigabitethernet::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::Tengigabitethernet::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::Tengigabitethernet::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        if(hold_queue == nullptr)
        {
            hold_queue = std::make_shared<Native::Interface::Tengigabitethernet::HoldQueue>();
        }
        return hold_queue;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::Tengigabitethernet::Interface_Qos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Tengigabitethernet::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Tengigabitethernet::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Tengigabitethernet::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Tengigabitethernet::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::Tengigabitethernet::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<Native::Interface::Tengigabitethernet::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::Tengigabitethernet::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Interface::Tengigabitethernet::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::Tengigabitethernet::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::Tengigabitethernet::Location>();
        }
        return location;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::Tengigabitethernet::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::Tengigabitethernet::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::Tengigabitethernet::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::Tengigabitethernet::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::Tengigabitethernet::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::Tengigabitethernet::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Interface::Tengigabitethernet::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::Tengigabitethernet::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Tengigabitethernet::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::Tengigabitethernet::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Interface::Tengigabitethernet::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Tengigabitethernet::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Interface::Tengigabitethernet::Performance>();
        }
        return performance;
    }

    if(child_yang_name == "plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::Tengigabitethernet::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::Tengigabitethernet::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Interface::Tengigabitethernet::Power>();
        }
        return power;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::Tengigabitethernet::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::Tengigabitethernet::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::Tengigabitethernet::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::Tengigabitethernet::Service>();
        }
        return service;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Tengigabitethernet::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::Tengigabitethernet::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::Tengigabitethernet::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::Tengigabitethernet::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::Tengigabitethernet::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::Tengigabitethernet::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::Tengigabitethernet::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switch")
    {
        if(switch == nullptr)
        {
            switch = std::make_shared<Native::Interface::Tengigabitethernet::Switch>();
        }
        return switch;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::Tengigabitethernet::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::Tengigabitethernet::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::Tengigabitethernet::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Tengigabitethernet::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Interface::Tengigabitethernet::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::Tengigabitethernet::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Tengigabitethernet::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Tengigabitethernet::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::Tengigabitethernet::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::get_children() const
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

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
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

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(cdp != nullptr)
    {
        children["cdp"] = cdp;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(channel_group != nullptr)
    {
        children["channel-group"] = channel_group;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(device_tracking != nullptr)
    {
        children["device-tracking"] = device_tracking;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(energywise != nullptr)
    {
        children["energywise"] = energywise;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
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

    if(lacp != nullptr)
    {
        children["lacp"] = lacp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(load_balancing != nullptr)
    {
        children["load-balancing"] = load_balancing;
    }

    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(macro != nullptr)
    {
        children["macro"] = macro;
    }

    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mka != nullptr)
    {
        children["mka"] = mka;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(negotiation != nullptr)
    {
        children["negotiation"] = negotiation;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(performance != nullptr)
    {
        children["performance"] = performance;
    }

    if(plim != nullptr)
    {
        children["plim"] = plim;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(power != nullptr)
    {
        children["power"] = power;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(speed != nullptr)
    {
        children["speed"] = speed;
    }

    if(srr_queue != nullptr)
    {
        children["srr-queue"] = srr_queue;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switch != nullptr)
    {
        children["switch"] = switch;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(udld != nullptr)
    {
        children["udld"] = udld;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(zone_member != nullptr)
    {
        children["zone-member"] = zone_member;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
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
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "port-type")
    {
        port_type = value;
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

Native::Interface::Tengigabitethernet::Lacp::Lacp()
    :
    rate(std::make_shared<Native::Interface::Tengigabitethernet::Lacp::Rate>())
{
    rate->parent = this;

    yang_name = "lacp"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Lacp::~Lacp()
{
}

bool Native::Interface::Tengigabitethernet::Lacp::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Interface::Tengigabitethernet::Lacp::has_operation() const
{
    return is_set(operation)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Lacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lacp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Interface::Tengigabitethernet::Lacp::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Lacp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Lacp::Rate::Rate()
    :
    fast{YType::empty, "fast"}
{
    yang_name = "rate"; yang_parent_name = "lacp";
}

Native::Interface::Tengigabitethernet::Lacp::Rate::~Rate()
{
}

bool Native::Interface::Tengigabitethernet::Lacp::Rate::has_data() const
{
    return fast.is_set;
}

bool Native::Interface::Tengigabitethernet::Lacp::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(fast.operation);
}

std::string Native::Interface::Tengigabitethernet::Lacp::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Lacp::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast.is_set || is_set(fast.operation)) leaf_name_data.push_back(fast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Lacp::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Lacp::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Lacp::Rate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast")
    {
        fast = value;
    }
}

Native::Interface::Tengigabitethernet::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "switchport-conf"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::Tengigabitethernet::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Tengigabitethernet::SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::Tengigabitethernet::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::SwitchportConf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Switchport()
    :
    host{YType::empty, "Cisco-IOS-XE-switch:host"},
    nonegotiate{YType::empty, "Cisco-IOS-XE-switch:nonegotiate"},
    protected_{YType::empty, "Cisco-IOS-XE-switch:protected"}
    	,
    access(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Access>())
	,autostate(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Autostate>())
	,block(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Block>())
	,device_tracking(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::DeviceTracking>())
	,mode(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Priority>())
	,private_vlan(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan>())
	,trunk(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk>())
	,voice(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice>())
{
    access->parent = this;

    autostate->parent = this;

    block->parent = this;

    device_tracking->parent = this;

    mode->parent = this;

    priority->parent = this;

    private_vlan->parent = this;

    trunk->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Switchport::~Switchport()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::has_data() const
{
    return host.is_set
	|| nonegotiate.is_set
	|| protected_.is_set
	|| (access !=  nullptr && access->has_data())
	|| (autostate !=  nullptr && autostate->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(nonegotiate.operation)
	|| is_set(protected_.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (autostate !=  nullptr && autostate->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::get_entity_path(Entity* ancestor) const
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

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "autostate")
    {
        if(autostate == nullptr)
        {
            autostate = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Autostate>();
        }
        return autostate;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk>();
        }
        return trunk;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(autostate != nullptr)
    {
        children["autostate"] = autostate;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(device_tracking != nullptr)
    {
        children["device-tracking"] = device_tracking;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Access::Access()
    :
    vlan(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Access::Vlan>())
{
    vlan->parent = this;

    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Access::~Access()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Access::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Access::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::Vlan()
    :
    name{YType::str, "name"},
    vlan{YType::str, "vlan"}
{
    yang_name = "vlan"; yang_parent_name = "access";
}

Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::~Vlan()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::has_data() const
{
    return name.is_set
	|| vlan.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Block::Block()
    :
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Block::~Block()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Block::has_data() const
{
    return multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:block";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Block' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Mode()
    :
    dynamic{YType::enumeration, "dynamic"}
    	,
    access(nullptr) // presence node
	,dot1q_tunnel(nullptr) // presence node
	,private_vlan(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan>())
	,trunk(nullptr) // presence node
{
    private_vlan->parent = this;

    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Mode::~Mode()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::has_data() const
{
    return dynamic.is_set
	|| (access !=  nullptr && access->has_data())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode::Access>();
        }
        return access;
    }

    if(child_yang_name == "dot1q-tunnel")
    {
        if(dot1q_tunnel == nullptr)
        {
            dot1q_tunnel = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel>();
        }
        return dot1q_tunnel;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(dot1q_tunnel != nullptr)
    {
        children["dot1q-tunnel"] = dot1q_tunnel;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Access::Access()
{
    yang_name = "access"; yang_parent_name = "mode";
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Access::~Access()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::Access::has_data() const
{
    return false;
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::Access::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Mode::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Mode::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Mode::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Mode::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Mode::Access::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::Dot1QTunnel()
{
    yang_name = "dot1q-tunnel"; yang_parent_name = "mode";
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::~Dot1QTunnel()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::has_data() const
{
    return false;
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1QTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::PrivateVlan()
    :
    host{YType::empty, "host"},
    promiscuous{YType::empty, "promiscuous"}
{
    yang_name = "private-vlan"; yang_parent_name = "mode";
}

Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::has_data() const
{
    return host.is_set
	|| promiscuous.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(promiscuous.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (promiscuous.is_set || is_set(promiscuous.operation)) leaf_name_data.push_back(promiscuous.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "promiscuous")
    {
        promiscuous = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::Trunk()
{
    yang_name = "trunk"; yang_parent_name = "mode";
}

Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::~Trunk()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::has_data() const
{
    return false;
}

bool Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trunk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::PortSecurity()
    :
    violation{YType::enumeration, "violation"}
    	,
    aging(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging>())
	,mac_address(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress>())
	,maximum(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum>())
{
    aging->parent = this;

    mac_address->parent = this;

    maximum->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::has_data() const
{
    return violation.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(violation.operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:port-security";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"},
    type{YType::enumeration, "type"}
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| type.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| is_set(type.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::MacAddress()
    :
    hw_address{YType::str, "hw-address"},
    sticky{YType::empty, "sticky"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "mac-address"; yang_parent_name = "port-security";
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::~MacAddress()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::has_data() const
{
    return hw_address.is_set
	|| sticky.is_set
	|| vlan.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(hw_address.operation)
	|| is_set(sticky.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_address.is_set || is_set(hw_address.operation)) leaf_name_data.push_back(hw_address.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.operation)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-address")
    {
        hw_address = value;
    }
    if(value_path == "sticky")
    {
        sticky = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::Maximum()
    :
    max_addresses{YType::uint16, "max-addresses"},
    vlan{YType::str, "vlan"}
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::has_data() const
{
    return max_addresses.is_set
	|| vlan.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(max_addresses.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_addresses.is_set || is_set(max_addresses.operation)) leaf_name_data.push_back(max_addresses.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-addresses")
    {
        max_addresses = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Trunk()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    allowed(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed>())
	,native(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_>())
	,pruning(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning>())
{
    allowed->parent = this;

    native->parent = this;

    pruning->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::has_data() const
{
    return encapsulation.is_set
	|| (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data())
	|| (pruning !=  nullptr && pruning->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation())
	|| (pruning !=  nullptr && pruning->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:trunk";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trunk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_>();
        }
        return native;
    }

    if(child_yang_name == "pruning")
    {
        if(pruning == nullptr)
        {
            pruning = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning>();
        }
        return pruning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allowed != nullptr)
    {
        children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        children["native"] = native;
    }

    if(pruning != nullptr)
    {
        children["pruning"] = pruning;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Trunk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk";
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Allowed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"},
    vlans{YType::str, "vlans"}
{
    yang_name = "vlan"; yang_parent_name = "allowed";
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set
	|| vlans.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(all.operation)
	|| is_set(except.operation)
	|| is_set(none.operation)
	|| is_set(remove.operation)
	|| is_set(vlans.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (vlans.is_set || is_set(vlans.operation)) leaf_name_data.push_back(vlans.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "vlans")
    {
        vlans = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "native"; yang_parent_name = "trunk";
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Native_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Pruning()
    :
    vlan(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan>())
{
    vlan->parent = this;

    yang_name = "pruning"; yang_parent_name = "trunk";
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::~Pruning()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pruning";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pruning' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::Vlan()
    :
    add{YType::str, "add"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"},
    vlans{YType::str, "vlans"}
{
    yang_name = "vlan"; yang_parent_name = "pruning";
}

Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::~Vlan()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::has_data() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(except.operation)
	|| is_set(none.operation)
	|| is_set(remove.operation)
	|| is_set(vlans.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    auto vlans_name_datas = vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlans_name_datas.begin(), vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "vlans")
    {
        vlans.append(value);
    }
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Voice()
    :
    detect(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice::Detect>())
	,vlan(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan>())
{
    detect->parent = this;

    vlan->parent = this;

    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Voice::~Voice()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::has_data() const
{
    return (detect !=  nullptr && detect->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| (detect !=  nullptr && detect->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:voice";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voice' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::Vlan()
    :
    name{YType::str, "name"},
    vlan{YType::str, "vlan"}
{
    yang_name = "vlan"; yang_parent_name = "voice";
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::~Vlan()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::has_data() const
{
    return name.is_set
	|| vlan.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::Detect()
    :
    cisco_phone(nullptr) // presence node
{
    yang_name = "detect"; yang_parent_name = "voice";
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::~Detect()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::has_data() const
{
    return (cisco_phone !=  nullptr && cisco_phone->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::has_operation() const
{
    return is_set(operation)
	|| (cisco_phone !=  nullptr && cisco_phone->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-phone")
    {
        if(cisco_phone == nullptr)
        {
            cisco_phone = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone>();
        }
        return cisco_phone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_phone != nullptr)
    {
        children["cisco-phone"] = cisco_phone;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::CiscoPhone()
    :
    full_duplex{YType::empty, "full-duplex"}
{
    yang_name = "cisco-phone"; yang_parent_name = "detect";
}

Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::~CiscoPhone()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::has_data() const
{
    return full_duplex.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::has_operation() const
{
    return is_set(operation)
	|| is_set(full_duplex.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-phone";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoPhone' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_duplex.is_set || is_set(full_duplex.operation)) leaf_name_data.push_back(full_duplex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-duplex")
    {
        full_duplex = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Priority::Priority()
    :
    extend(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Priority::Extend>())
{
    extend->parent = this;

    yang_name = "priority"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Priority::~Priority()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Priority::has_data() const
{
    return (extend !=  nullptr && extend->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::Priority::has_operation() const
{
    return is_set(operation)
	|| (extend !=  nullptr && extend->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Priority::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::Priority::Extend>();
        }
        return extend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extend != nullptr)
    {
        children["extend"] = extend;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::Extend()
    :
    cos{YType::uint8, "cos"},
    trust{YType::empty, "trust"}
{
    yang_name = "extend"; yang_parent_name = "priority";
}

Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::~Extend()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::has_data() const
{
    return cos.is_set
	|| trust.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(trust.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extend";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Extend' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Priority::Extend::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::Autostate::Autostate()
    :
    exclude{YType::empty, "exclude"}
{
    yang_name = "autostate"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::Autostate::~Autostate()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::Autostate::has_data() const
{
    return exclude.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::Autostate::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::Autostate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:autostate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::Autostate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autostate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.operation)) leaf_name_data.push_back(exclude.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::Autostate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::Autostate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::Autostate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude")
    {
        exclude = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::PrivateVlan()
    :
    association(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association>())
	,host_association(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation>())
	,mapping(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping>())
{
    association->parent = this;

    host_association->parent = this;

    mapping->parent = this;

    yang_name = "private-vlan"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::has_data() const
{
    return (association !=  nullptr && association->has_data())
	|| (host_association !=  nullptr && host_association->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| (association !=  nullptr && association->has_operation())
	|| (host_association !=  nullptr && host_association->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association>();
        }
        return association;
    }

    if(child_yang_name == "host-association")
    {
        if(host_association == nullptr)
        {
            host_association = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation>();
        }
        return host_association;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(host_association != nullptr)
    {
        children["host-association"] = host_association;
    }

    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Association()
    :
    host(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host>())
	,mapping(std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping>())
{
    host->parent = this;

    mapping->parent = this;

    yang_name = "association"; yang_parent_name = "private-vlan";
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::~Association()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::has_data() const
{
    return (host !=  nullptr && host->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::has_operation() const
{
    return is_set(operation)
	|| (host !=  nullptr && host->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Association' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host>();
        }
        return host;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::Host()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{
    yang_name = "host"; yang_parent_name = "association";
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::~Host()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::has_data() const
{
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(primary_range.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::Mapping()
    :
    add{YType::str, "add"},
    primary_range{YType::uint16, "primary-range"},
    remove{YType::str, "remove"},
    secondary_range{YType::str, "secondary-range"}
{
    yang_name = "mapping"; yang_parent_name = "association";
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::~Mapping()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::has_data() const
{
    return add.is_set
	|| primary_range.is_set
	|| remove.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(primary_range.operation)
	|| is_set(remove.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::HostAssociation()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{
    yang_name = "host-association"; yang_parent_name = "private-vlan";
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::~HostAssociation()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::has_data() const
{
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(primary_range.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-association";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::Mapping()
    :
    add{YType::str, "add"},
    primary_range{YType::uint16, "primary-range"},
    remove{YType::str, "remove"},
    secondary_range{YType::str, "secondary-range"}
{
    yang_name = "mapping"; yang_parent_name = "private-vlan";
}

Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::~Mapping()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::has_data() const
{
    return add.is_set
	|| primary_range.is_set
	|| remove.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(primary_range.operation)
	|| is_set(remove.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "device-tracking"; yang_parent_name = "switchport";
}

Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceTracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Switchport::DeviceTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Tengigabitethernet::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "arp"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Arp::~Arp()
{
}

bool Native::Interface::Tengigabitethernet::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Tengigabitethernet::Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Tengigabitethernet::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "backup"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Backup::~Backup()
{
}

bool Native::Interface::Tengigabitethernet::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Tengigabitethernet::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Tengigabitethernet::Backup::Delay::~Delay()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Tengigabitethernet::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::Tengigabitethernet::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.operation)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup";
}

Native::Interface::Tengigabitethernet::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Tengigabitethernet::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "backup";
}

Native::Interface::Tengigabitethernet::Backup::Load::~Load()
{
}

bool Native::Interface::Tengigabitethernet::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Tengigabitethernet::Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::Tengigabitethernet::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Backup::Load::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Load' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.operation)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.operation)) leaf_name_data.push_back(kickout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Backup::Load::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kickin")
    {
        kickin = value;
    }
    if(value_path == "kickout")
    {
        kickout = value;
    }
}

Native::Interface::Tengigabitethernet::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Tengigabitethernet::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::Tengigabitethernet::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Tengigabitethernet::Cemoudp::has_operation() const
{
    return is_set(operation)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Cemoudp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cemoudp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Tengigabitethernet::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Cemoudp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{
    yang_name = "reserve"; yang_parent_name = "cemoudp";
}

Native::Interface::Tengigabitethernet::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Tengigabitethernet::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Tengigabitethernet::Cemoudp::Reserve::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation);
}

std::string Native::Interface::Tengigabitethernet::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Cemoudp::Reserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reserve' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Cemoudp::Reserve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
}

Native::Interface::Tengigabitethernet::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Tengigabitethernet::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Tengigabitethernet::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Tengigabitethernet::CwsTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Tengigabitethernet::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::CwsTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CwsTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Tengigabitethernet::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::CwsTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Tengigabitethernet::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{
    yang_name = "out"; yang_parent_name = "cws-tunnel";
}

Native::Interface::Tengigabitethernet::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Tengigabitethernet::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Tengigabitethernet::CwsTunnel::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_number.operation);
}

std::string Native::Interface::Tengigabitethernet::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::CwsTunnel::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.operation)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::CwsTunnel::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
    }
}

Native::Interface::Tengigabitethernet::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;

    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::Tengigabitethernet::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Tengigabitethernet::L2ProtocolTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Tengigabitethernet::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2ProtocolTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::L2ProtocolTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel";
}

Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DropThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel";
}

Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShutdownThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Tengigabitethernet::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;

    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Tengigabitethernet::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Tengigabitethernet::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Tengigabitethernet::Encapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1Q"; yang_parent_name = "encapsulation";
}

Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(native.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.operation)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "native")
    {
        native = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Tengigabitethernet::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "isl"; yang_parent_name = "encapsulation";
}

Native::Interface::Tengigabitethernet::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Isl::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Tengigabitethernet::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Encapsulation::Isl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Encapsulation::Isl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Tengigabitethernet::Encapsulation::Ppp::Ppp()
{
    yang_name = "ppp"; yang_parent_name = "encapsulation";
}

Native::Interface::Tengigabitethernet::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Ppp::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Encapsulation::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ppp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Encapsulation::Ppp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Encapsulation::Slip::Slip()
{
    yang_name = "slip"; yang_parent_name = "encapsulation";
}

Native::Interface::Tengigabitethernet::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Tengigabitethernet::Encapsulation::Slip::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Encapsulation::Slip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Encapsulation::Slip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{
    yang_name = "frame-relay"; yang_parent_name = "encapsulation";
}

Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf.operation);
}

std::string Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameRelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf")
    {
        ietf = value;
    }
}

Native::Interface::Tengigabitethernet::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{
    yang_name = "fair-queue-conf"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::Tengigabitethernet::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Tengigabitethernet::FairQueueConf::has_operation() const
{
    return is_set(operation)
	|| is_set(fair_queue.operation);
}

std::string Native::Interface::Tengigabitethernet::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::FairQueueConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueueConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.operation)) leaf_name_data.push_back(fair_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::FairQueueConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
    }
}

Native::Interface::Tengigabitethernet::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{
    yang_name = "fair-queue"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::FairQueue::~FairQueue()
{
}

bool Native::Interface::Tengigabitethernet::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Tengigabitethernet::FairQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(incomplete.operation);
}

std::string Native::Interface::Tengigabitethernet::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::FairQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.operation)) leaf_name_data.push_back(incomplete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::FairQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
    }
}

Native::Interface::Tengigabitethernet::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{
    yang_name = "flowcontrol"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::Tengigabitethernet::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Tengigabitethernet::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(send.operation);
}

std::string Native::Interface::Tengigabitethernet::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.operation)) leaf_name_data.push_back(send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "send")
    {
        send = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
    	,
    adjacency_filter(std::make_shared<Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter>())
	,advertise(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Advertise>())
	,authentication(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication>())
	,circuit_type(nullptr) // presence node
	,csnp_interval(std::make_shared<Native::Interface::Tengigabitethernet::Isis::CsnpInterval>())
	,hello(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Interface::Tengigabitethernet::Isis::HelloInterval>())
	,hello_multiplier(std::make_shared<Native::Interface::Tengigabitethernet::Isis::HelloMultiplier>())
	,ipv6(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Ipv6>())
	,metric(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Metric>())
	,password(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Password>())
	,priority(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Priority>())
	,three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;

    advertise->parent = this;

    authentication->parent = this;

    csnp_interval->parent = this;

    hello->parent = this;

    hello_interval->parent = this;

    hello_multiplier->parent = this;

    ipv6->parent = this;

    metric->parent = this;

    password->parent = this;

    priority->parent = this;

    yang_name = "isis"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Isis::~Isis()
{
}

bool Native::Interface::Tengigabitethernet::Isis::has_data() const
{
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::Tengigabitethernet::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_interval.operation)
	|| is_set(mesh_group.operation)
	|| is_set(network.operation)
	|| is_set(protocol.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(retransmit_throttle_interval.operation)
	|| is_set(tag.operation)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.operation)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.operation)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::Tengigabitethernet::Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::Tengigabitethernet::Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Tengigabitethernet::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::Tengigabitethernet::Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_filter != nullptr)
    {
        children["adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        children["circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        children["csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        children["hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(three_way_handshake != nullptr)
    {
        children["three-way-handshake"] = three_way_handshake;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::AdjacencyFilter()
    :
    match_all{YType::empty, "match-all"},
    name{YType::str, "name"}
{
    yang_name = "adjacency-filter"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::has_data() const
{
    return match_all.is_set
	|| name.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(match_all.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_all.is_set || is_set(match_all.operation)) leaf_name_data.push_back(match_all.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-all")
    {
        match_all = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{
    yang_name = "advertise"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Advertise::~Advertise()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Advertise::has_data() const
{
    return prefix.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::~Authentication()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "md5"; yang_parent_name = "mode";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "text"; yang_parent_name = "mode";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Text' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{
    yang_name = "key-chain-list"; yang_parent_name = "key-chain";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChainList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "send-only"; yang_parent_name = "authentication";
}

Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "circuit-type"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::Tengigabitethernet::Isis::CircuitType::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::CircuitType::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::CircuitType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::CircuitType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
{
    yang_name = "csnp-interval"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::Tengigabitethernet::Isis::CsnpInterval::has_data() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::CsnpInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        for(auto const & c : csnp_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList>();
        c->parent = this;
        csnp_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csnp_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::CsnpInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{
    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval";
}

Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpIntervalList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Hello::~Hello()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::Tengigabitethernet::Isis::Hello::has_operation() const
{
    return is_set(operation)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hello' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Hello::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::ControlDirectionEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::ControlDirectionEnum::in {1, "in"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::HostModeEnum::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::HostModeEnum::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::HostModeEnum::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::HostModeEnum::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::PortControlEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::PortControlEnum::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::PortControlEnum::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::ViolationEnum::replace {1, "replace"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::ViolationEnum::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Authentication::ViolationEnum::shutdown {3, "shutdown"};

const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::BpdufilterEnum::disable {0, "disable"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::BpdufilterEnum::enable {1, "enable"};

const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::GuardEnum::loop {0, "loop"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::GuardEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::GuardEnum::root {2, "root"};

const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::LinkTypeEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::LinkTypeEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::LinkTypeEnum::point_to_point {2, "point-to-point"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::LinkTypeEnum::root {3, "root"};
const Enum::YLeaf Native::Interface::Gigabitethernet::SpanningTree::LinkTypeEnum::shared {4, "shared"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::InputOutputEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::InputOutputEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::ApplyToEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::ApplyToEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::MediaTypeEnum::auto_select {0, "auto-select"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::MediaTypeEnum::rj45 {1, "rj45"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::MediaTypeEnum::sfp {2, "sfp"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::PortTypeEnum::nni {0, "nni"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::IfStateEnum::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::ServiceInsertionEnum::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::ChannelProtocolEnum::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::ChannelProtocolEnum::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::DuplexEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::DuplexEnum::full {1, "full"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::DuplexEnum::half {2, "half"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::VlanEnum::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Mode::DynamicEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Mode::DynamicEnum::desirable {1, "desirable"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::PortSecurity::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::PortSecurity::ViolationEnum::restrict {1, "restrict"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::PortSecurity::ViolationEnum::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::TypeEnum::absolute {0, "absolute"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::TypeEnum::inactivity {1, "inactivity"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Trunk::EncapsulationEnum::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Trunk::EncapsulationEnum::isl {1, "isl"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Trunk::EncapsulationEnum::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::VlanEnum::tag {0, "tag"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::VlanEnum::dot1p {0, "dot1p"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::VlanEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::VlanEnum::untagged {2, "untagged"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Backup::Delay::FailureEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Backup::Delay::SecondaryDisableEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Backup::Load::KickinEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Backup::Load::KickoutEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Flowcontrol::ReceiveEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Flowcontrol::ReceiveEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Flowcontrol::ReceiveEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Flowcontrol::SendEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Flowcontrol::SendEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Flowcontrol::SendEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::MeshGroupEnum::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::NetworkEnum::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::ProtocolEnum::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::CircuitType::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::CircuitType::LevelsEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::CircuitType::LevelsEnum::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum::level_2 {1, "level-2"};


}
}

