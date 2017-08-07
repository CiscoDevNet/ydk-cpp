
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_179.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::HwSwitch::HwSwitch()
    :
    switch_(std::make_shared<Native::HwSwitch::Switch_>())
{
    switch_->parent = this;

    yang_name = "hw-switch"; yang_parent_name = "native";
}

Native::HwSwitch::~HwSwitch()
{
}

bool Native::HwSwitch::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::HwSwitch::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::HwSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:hw-switch";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::HwSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::HwSwitch::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::HwSwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::HwSwitch::Switch_::Switch_()
{
    yang_name = "switch"; yang_parent_name = "hw-switch";
}

Native::HwSwitch::Switch_::~Switch_()
{
}

bool Native::HwSwitch::Switch_::has_data() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return false;
}

bool Native::HwSwitch::Switch_::has_operation() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::HwSwitch::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-number")
    {
        for(auto const & c : switch_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::HwSwitch::Switch_::SwitchNumber>();
        c->parent = this;
        switch_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::HwSwitch::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-number")
        return true;
    return false;
}

Native::HwSwitch::Switch_::SwitchNumber::SwitchNumber()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    logging(std::make_shared<Native::HwSwitch::Switch_::SwitchNumber::Logging>())
{
    logging->parent = this;

    yang_name = "switch-number"; yang_parent_name = "switch";
}

Native::HwSwitch::Switch_::SwitchNumber::~SwitchNumber()
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::has_data() const
{
    return switch_number.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::HwSwitch::Switch_::SwitchNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::HwSwitch::Switch_::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number" <<"[switch-number='" <<switch_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch_::SwitchNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::HwSwitch::Switch_::SwitchNumber::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::HwSwitch::Switch_::SwitchNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwSwitch::Switch_::SwitchNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::HwSwitch::Switch_::SwitchNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "switch-number")
        return true;
    return false;
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::Logging()
    :
    onboard(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "switch-number";
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::~Logging()
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::has_data() const
{
    return (onboard !=  nullptr && onboard->has_data());
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string Native::HwSwitch::Switch_::SwitchNumber::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch_::SwitchNumber::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::SwitchNumber::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::SwitchNumber::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(onboard != nullptr)
    {
        children["onboard"] = onboard;
    }

    return children;
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onboard")
        return true;
    return false;
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::Onboard()
    :
    counter{YType::empty, "counter"},
    environment{YType::empty, "environment"},
    message{YType::empty, "message"},
    poe{YType::empty, "poe"},
    temperature{YType::empty, "temperature"},
    voltage{YType::empty, "voltage"}
{
    yang_name = "onboard"; yang_parent_name = "logging";
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::~Onboard()
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::has_data() const
{
    return counter.is_set
	|| environment.is_set
	|| message.is_set
	|| poe.is_set
	|| temperature.is_set
	|| voltage.is_set;
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(environment.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(poe.yfilter)
	|| ydk::is_set(temperature.yfilter)
	|| ydk::is_set(voltage.yfilter);
}

std::string Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Onboard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (environment.is_set || is_set(environment.yfilter)) leaf_name_data.push_back(environment.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (poe.is_set || is_set(poe.yfilter)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (voltage.is_set || is_set(voltage.yfilter)) leaf_name_data.push_back(voltage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environment")
    {
        environment = value;
        environment.value_namespace = name_space;
        environment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poe")
    {
        poe = value;
        poe.value_namespace = name_space;
        poe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voltage")
    {
        voltage = value;
        voltage.value_namespace = name_space;
        voltage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "environment")
    {
        environment.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "poe")
    {
        poe.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
    if(value_path == "voltage")
    {
        voltage.yfilter = yfilter;
    }
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "environment" || name == "message" || name == "poe" || name == "temperature" || name == "voltage")
        return true;
    return false;
}

Native::Utd::Utd()
{
    yang_name = "utd"; yang_parent_name = "native";
}

Native::Utd::~Utd()
{
}

bool Native::Utd::has_data() const
{
    return false;
}

bool Native::Utd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";

    return path_buffer.str();

}

const EntityPath Native::Utd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::UtdEngine::UtdEngine()
    :
    utd(std::make_shared<Native::UtdEngine::Utd>())
{
    utd->parent = this;

    yang_name = "utd-engine"; yang_parent_name = "native";
}

Native::UtdEngine::~UtdEngine()
{
}

bool Native::UtdEngine::has_data() const
{
    return (utd !=  nullptr && utd->has_data());
}

bool Native::UtdEngine::has_operation() const
{
    return is_set(yfilter)
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::UtdEngine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd-engine";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::UtdEngine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::UtdEngine::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    return children;
}

void Native::UtdEngine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utd")
        return true;
    return false;
}

Native::UtdEngine::Utd::Utd()
    :
    engine(std::make_shared<Native::UtdEngine::Utd::Engine>())
	,whitelist(std::make_shared<Native::UtdEngine::Utd::Whitelist>())
{
    engine->parent = this;

    whitelist->parent = this;

    yang_name = "utd"; yang_parent_name = "utd-engine";
}

Native::UtdEngine::Utd::~Utd()
{
}

bool Native::UtdEngine::Utd::has_data() const
{
    return (engine !=  nullptr && engine->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdEngine::Utd::has_operation() const
{
    return is_set(yfilter)
	|| (engine !=  nullptr && engine->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdEngine::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::UtdEngine::Utd::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdEngine::Utd::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(engine != nullptr)
    {
        children["engine"] = engine;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::UtdEngine::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "engine" || name == "whitelist")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Engine()
    :
    advanced(std::make_shared<Native::UtdEngine::Utd::Engine::Advanced>())
	,standard(std::make_shared<Native::UtdEngine::Utd::Engine::Standard>())
{
    advanced->parent = this;

    standard->parent = this;

    yang_name = "engine"; yang_parent_name = "utd";
}

Native::UtdEngine::Utd::Engine::~Engine()
{
}

bool Native::UtdEngine::Utd::Engine::has_data() const
{
    return (advanced !=  nullptr && advanced->has_data())
	|| (standard !=  nullptr && standard->has_data());
}

bool Native::UtdEngine::Utd::Engine::has_operation() const
{
    return is_set(yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (standard !=  nullptr && standard->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "standard")
    {
        if(standard == nullptr)
        {
            standard = std::make_shared<Native::UtdEngine::Utd::Engine::Standard>();
        }
        return standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advanced != nullptr)
    {
        children["advanced"] = advanced;
    }

    if(standard != nullptr)
    {
        children["standard"] = standard;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "standard")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Advanced()
    :
    default_(std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_>())
	,threat(nullptr) // presence node
{
    default_->parent = this;

    yang_name = "advanced"; yang_parent_name = "engine";
}

Native::UtdEngine::Utd::Engine::Advanced::~Advanced()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (threat !=  nullptr && threat->has_data());
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "threat")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Default_()
    :
    threat(nullptr) // presence node
{
    yang_name = "default"; yang_parent_name = "advanced";
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::~Default_()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_data() const
{
    return (threat !=  nullptr && threat->has_data());
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threat")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::Threat()
{
    yang_name = "threat"; yang_parent_name = "default";
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::~Threat()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_data() const
{
    return false;
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Threat::Threat()
    :
    detection{YType::empty, "detection"}
{
    yang_name = "threat"; yang_parent_name = "advanced";
}

Native::UtdEngine::Utd::Engine::Advanced::Threat::~Threat()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_data() const
{
    return detection.is_set;
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::Threat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Threat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Advanced::Threat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Standard()
    :
    policy{YType::enumeration, "policy"},
    threat{YType::enumeration, "threat"},
    whitelist{YType::empty, "whitelist"}
    	,
    default_(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Default_>())
	,logging(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging>())
	,signature(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature>())
{
    default_->parent = this;

    logging->parent = this;

    signature->parent = this;

    yang_name = "standard"; yang_parent_name = "engine";
}

Native::UtdEngine::Utd::Engine::Standard::~Standard()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::has_data() const
{
    return policy.is_set
	|| threat.is_set
	|| whitelist.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signature !=  nullptr && signature->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(threat.yfilter)
	|| ydk::is_set(whitelist.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());
    if (whitelist.is_set || is_set(whitelist.yfilter)) leaf_name_data.push_back(whitelist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "whitelist")
    {
        whitelist = value;
        whitelist.value_namespace = name_space;
        whitelist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
    if(value_path == "whitelist")
    {
        whitelist.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "logging" || name == "signature" || name == "policy" || name == "threat" || name == "whitelist")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Default_::Default_()
    :
    policy{YType::empty, "policy"},
    threat{YType::empty, "threat"}
{
    yang_name = "default"; yang_parent_name = "standard";
}

Native::UtdEngine::Utd::Engine::Standard::Default_::~Default_()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_data() const
{
    return policy.is_set
	|| threat.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(threat.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "threat")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Logging()
    :
    server(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Server>())
	,syslog(nullptr) // presence node
{
    server->parent = this;

    yang_name = "logging"; yang_parent_name = "standard";
}

Native::UtdEngine::Utd::Engine::Standard::Logging::~Logging()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Server>();
        }
        return server;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "syslog")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Server::Server()
    :
    level{YType::enumeration, "level"},
    name{YType::str, "name"},
    syslog{YType::empty, "syslog"}
{
    yang_name = "server"; yang_parent_name = "logging";
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Server::~Server()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_data() const
{
    return level.is_set
	|| name.is_set
	|| syslog.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "name" || name == "syslog")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::Syslog()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "syslog"; yang_parent_name = "logging";
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::~Syslog()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_data() const
{
    return level.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Signature()
    :
    update(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update>())
{
    update->parent = this;

    yang_name = "signature"; yang_parent_name = "standard";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::~Signature()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_data() const
{
    return (update !=  nullptr && update->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_operation() const
{
    return is_set(yfilter)
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Update()
    :
    occur_at(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt>())
	,server(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server>())
{
    occur_at->parent = this;

    server->parent = this;

    yang_name = "update"; yang_parent_name = "signature";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::~Update()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_data() const
{
    return (occur_at !=  nullptr && occur_at->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_operation() const
{
    return is_set(yfilter)
	|| (occur_at !=  nullptr && occur_at->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "occur-at")
    {
        if(occur_at == nullptr)
        {
            occur_at = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt>();
        }
        return occur_at;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(occur_at != nullptr)
    {
        children["occur-at"] = occur_at;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "occur-at" || name == "server")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::OccurAt()
    :
    daily(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily>())
	,monthly(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly>())
	,weekly(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly>())
{
    daily->parent = this;

    monthly->parent = this;

    weekly->parent = this;

    yang_name = "occur-at"; yang_parent_name = "update";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::~OccurAt()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "occur-at";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::Daily()
    :
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{
    yang_name = "daily"; yang_parent_name = "occur-at";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::~Daily()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_data() const
{
    return hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::Monthly()
    :
    days{YType::str, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{
    yang_name = "monthly"; yang_parent_name = "occur-at";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::~Monthly()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::Weekly()
    :
    days{YType::str, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{
    yang_name = "weekly"; yang_parent_name = "occur-at";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::~Weekly()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Server()
    :
    cisco(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco>())
	,url(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url>())
{
    cisco->parent = this;

    url->parent = this;

    yang_name = "server"; yang_parent_name = "update";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::~Server()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_data() const
{
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco != nullptr)
    {
        children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "url")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::Cisco()
    :
    password{YType::str, "password"},
    username{YType::str, "username"}
{
    yang_name = "cisco"; yang_parent_name = "server";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::~Cisco()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_data() const
{
    return password.is_set
	|| username.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::Url()
    :
    name{YType::str, "name"}
    	,
    all(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All>())
{
    all->parent = this;

    yang_name = "url"; yang_parent_name = "server";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::~Url()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_data() const
{
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/" << get_segment_path();
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

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "name")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::All()
    :
    name{YType::str, "name"},
    password{YType::str, "password"},
    username{YType::str, "username"}
{
    yang_name = "all"; yang_parent_name = "url";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::~All()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_data() const
{
    return name.is_set
	|| password.is_set
	|| username.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/url/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "username")
        return true;
    return false;
}

Native::UtdEngine::Utd::Whitelist::Whitelist()
    :
    signature(std::make_shared<Native::UtdEngine::Utd::Whitelist::Signature>())
{
    signature->parent = this;

    yang_name = "whitelist"; yang_parent_name = "utd";
}

Native::UtdEngine::Utd::Whitelist::~Whitelist()
{
}

bool Native::UtdEngine::Utd::Whitelist::has_data() const
{
    return (signature !=  nullptr && signature->has_data());
}

bool Native::UtdEngine::Utd::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdEngine::Utd::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Whitelist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdEngine::Utd::Whitelist::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    return children;
}

void Native::UtdEngine::Utd::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature")
        return true;
    return false;
}

Native::UtdEngine::Utd::Whitelist::Signature::Signature()
    :
    comment{YType::str, "comment"},
    id{YType::uint64, "id"}
{
    yang_name = "signature"; yang_parent_name = "whitelist";
}

Native::UtdEngine::Utd::Whitelist::Signature::~Signature()
{
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_data() const
{
    return comment.is_set
	|| id.is_set;
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comment.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::UtdEngine::Utd::Whitelist::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Whitelist::Signature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/whitelist/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Whitelist::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Whitelist::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Whitelist::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Whitelist::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comment" || name == "id")
        return true;
    return false;
}

Native::Voice::Voice()
{
    yang_name = "voice"; yang_parent_name = "native";
}

Native::Voice::~Voice()
{
}

bool Native::Voice::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Voice::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice";

    return path_buffer.str();

}

const EntityPath Native::Voice::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Voice::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Voice::Service::Service()
    :
    type{YType::enumeration, "type"}
    	,
    fax(std::make_shared<Native::Voice::Service::Fax>())
{
    fax->parent = this;

    yang_name = "service"; yang_parent_name = "voice";
}

Native::Voice::Service::~Service()
{
}

bool Native::Voice::Service::has_data() const
{
    return type.is_set
	|| (fax !=  nullptr && fax->has_data());
}

bool Native::Voice::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fax !=  nullptr && fax->has_operation());
}

std::string Native::Voice::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath Native::Voice::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-voice:voice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Voice::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fax")
    {
        if(fax == nullptr)
        {
            fax = std::make_shared<Native::Voice::Service::Fax>();
        }
        return fax;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fax != nullptr)
    {
        children["fax"] = fax;
    }

    return children;
}

void Native::Voice::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Voice::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fax" || name == "type")
        return true;
    return false;
}

Native::Voice::Service::Fax::Fax()
    :
    codec{YType::enumeration, "codec"},
    fallback{YType::enumeration, "fallback"},
    hs_redundancy{YType::uint8, "hs-redundancy"},
    ls_redundancy{YType::uint8, "ls-redundancy"},
    protocol{YType::enumeration, "protocol"},
    version{YType::enumeration, "version"}
{
    yang_name = "fax"; yang_parent_name = "service";
}

Native::Voice::Service::Fax::~Fax()
{
}

bool Native::Voice::Service::Fax::has_data() const
{
    return codec.is_set
	|| fallback.is_set
	|| hs_redundancy.is_set
	|| ls_redundancy.is_set
	|| protocol.is_set
	|| version.is_set;
}

bool Native::Voice::Service::Fax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(codec.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(hs_redundancy.yfilter)
	|| ydk::is_set(ls_redundancy.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Voice::Service::Fax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fax";

    return path_buffer.str();

}

const EntityPath Native::Voice::Service::Fax::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fax' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (codec.is_set || is_set(codec.yfilter)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (hs_redundancy.is_set || is_set(hs_redundancy.yfilter)) leaf_name_data.push_back(hs_redundancy.get_name_leafdata());
    if (ls_redundancy.is_set || is_set(ls_redundancy.yfilter)) leaf_name_data.push_back(ls_redundancy.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Voice::Service::Fax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::Fax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Voice::Service::Fax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "codec")
    {
        codec = value;
        codec.value_namespace = name_space;
        codec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy = value;
        hs_redundancy.value_namespace = name_space;
        hs_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy = value;
        ls_redundancy.value_namespace = name_space;
        ls_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::Fax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "codec")
    {
        codec.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy.yfilter = yfilter;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Voice::Service::Fax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "codec" || name == "fallback" || name == "hs-redundancy" || name == "ls-redundancy" || name == "protocol" || name == "version")
        return true;
    return false;
}

Native::VoiceCard::VoiceCard()
    :
    slot{YType::uint8, "slot"}
{
    yang_name = "voice-card"; yang_parent_name = "native";
}

Native::VoiceCard::~VoiceCard()
{
}

bool Native::VoiceCard::has_data() const
{
    return slot.is_set;
}

bool Native::VoiceCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::VoiceCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice-card" <<"[slot='" <<slot <<"']";

    return path_buffer.str();

}

const EntityPath Native::VoiceCard::get_entity_path(Entity* ancestor) const
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

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VoiceCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VoiceCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VoiceCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VoiceCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::VoiceCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Native::Vpdn::Vpdn()
    :
    authen_before_forward{YType::empty, "authen-before-forward"},
    enable{YType::empty, "enable"},
    search_order{YType::enumeration, "search-order"}
{
    yang_name = "vpdn"; yang_parent_name = "native";
}

Native::Vpdn::~Vpdn()
{
}

bool Native::Vpdn::has_data() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_before_forward.is_set
	|| enable.is_set;
}

bool Native::Vpdn::has_operation() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authen_before_forward.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(search_order.yfilter);
}

std::string Native::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vpdn:vpdn";

    return path_buffer.str();

}

const EntityPath Native::Vpdn::get_entity_path(Entity* ancestor) const
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

    if (authen_before_forward.is_set || is_set(authen_before_forward.yfilter)) leaf_name_data.push_back(authen_before_forward.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    auto search_order_name_datas = search_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_order_name_datas.begin(), search_order_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward = value;
        authen_before_forward.value_namespace = name_space;
        authen_before_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "search-order")
    {
        search_order.append(value);
    }
}

void Native::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "search-order")
    {
        search_order.yfilter = yfilter;
    }
}

bool Native::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-before-forward" || name == "enable" || name == "search-order")
        return true;
    return false;
}

Native::Vstack::Vstack()
    :
    director{YType::str, "director"}
{
    yang_name = "vstack"; yang_parent_name = "native";
}

Native::Vstack::~Vstack()
{
}

bool Native::Vstack::has_data() const
{
    return director.is_set;
}

bool Native::Vstack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(director.yfilter);
}

std::string Native::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vstack:vstack";

    return path_buffer.str();

}

const EntityPath Native::Vstack::get_entity_path(Entity* ancestor) const
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

    if (director.is_set || is_set(director.yfilter)) leaf_name_data.push_back(director.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vstack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "director")
    {
        director = value;
        director.value_namespace = name_space;
        director.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vstack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "director")
    {
        director.yfilter = yfilter;
    }
}

bool Native::Vstack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "director")
        return true;
    return false;
}

const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Policy::balanced {0, "balanced"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Policy::connectivity {1, "connectivity"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Policy::security {2, "security"};

const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Threat::detection {0, "detection"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Threat::protection {1, "protection"};

const Enum::YLeaf Native::Voice::Service::Type::pots {0, "pots"};
const Enum::YLeaf Native::Voice::Service::Type::saf {1, "saf"};
const Enum::YLeaf Native::Voice::Service::Type::voatm {2, "voatm"};
const Enum::YLeaf Native::Voice::Service::Type::vofr {3, "vofr"};
const Enum::YLeaf Native::Voice::Service::Type::voip {4, "voip"};

const Enum::YLeaf Native::Voice::Service::Fax::Protocol::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::pass_through {2, "pass-through"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::t38 {3, "t38"};

const Enum::YLeaf Native::Voice::Service::Fax::Fallback::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::pass_through {2, "pass-through"};

const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711ulaw {1, "g711ulaw"};

const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_0 {0, "0"};
const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_3 {1, "3"};

const Enum::YLeaf Native::Vpdn::SearchOrder::dnis {0, "dnis"};
const Enum::YLeaf Native::Vpdn::SearchOrder::domain {1, "domain"};
const Enum::YLeaf Native::Vpdn::SearchOrder::multihop_hostname {2, "multihop-hostname"};


}
}

