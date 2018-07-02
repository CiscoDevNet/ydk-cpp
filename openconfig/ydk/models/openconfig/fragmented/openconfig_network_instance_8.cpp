
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_8.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::State()
    :
    sid_id{YType::str, "sid-id"},
    protection_eligible{YType::boolean, "protection-eligible"},
    group{YType::boolean, "group"},
    neighbor{YType::str, "neighbor"},
    allocated_dynamic_local{YType::str, "allocated-dynamic-local"}
{

    yang_name = "state"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::has_data() const
{
    if (is_presence_container) return true;
    return sid_id.is_set
	|| protection_eligible.is_set
	|| group.is_set
	|| neighbor.is_set
	|| allocated_dynamic_local.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_id.yfilter)
	|| ydk::is_set(protection_eligible.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(allocated_dynamic_local.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_id.is_set || is_set(sid_id.yfilter)) leaf_name_data.push_back(sid_id.get_name_leafdata());
    if (protection_eligible.is_set || is_set(protection_eligible.yfilter)) leaf_name_data.push_back(protection_eligible.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (allocated_dynamic_local.is_set || is_set(allocated_dynamic_local.yfilter)) leaf_name_data.push_back(allocated_dynamic_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-id")
    {
        sid_id = value;
        sid_id.value_namespace = name_space;
        sid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-eligible")
    {
        protection_eligible = value;
        protection_eligible.value_namespace = name_space;
        protection_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-dynamic-local")
    {
        allocated_dynamic_local = value;
        allocated_dynamic_local.value_namespace = name_space;
        allocated_dynamic_local.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-id")
    {
        sid_id.yfilter = yfilter;
    }
    if(value_path == "protection-eligible")
    {
        protection_eligible.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "allocated-dynamic-local")
    {
        allocated_dynamic_local.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-id" || name == "protection-eligible" || name == "group" || name == "neighbor" || name == "allocated-dynamic-local")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::HelloAuthentication()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State>())
    , key(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key>())
    , keychain(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain>())
{
    config->parent = this;
    state->parent = this;
    key->parent = this;
    keychain->parent = this;

    yang_name = "hello-authentication"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::~HelloAuthentication()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (keychain !=  nullptr && keychain->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State>();
        }
        return state;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key>();
        }
        return key;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain>();
        }
        return keychain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "key" || name == "keychain")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::Config()
    :
    hello_authentication{YType::boolean, "hello-authentication"}
{

    yang_name = "config"; yang_parent_name = "hello-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::has_data() const
{
    if (is_presence_container) return true;
    return hello_authentication.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_authentication.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_authentication.is_set || is_set(hello_authentication.yfilter)) leaf_name_data.push_back(hello_authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-authentication")
    {
        hello_authentication = value;
        hello_authentication.value_namespace = name_space;
        hello_authentication.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-authentication")
    {
        hello_authentication.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-authentication")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::State()
    :
    hello_authentication{YType::boolean, "hello-authentication"}
{

    yang_name = "state"; yang_parent_name = "hello-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::has_data() const
{
    if (is_presence_container) return true;
    return hello_authentication.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_authentication.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_authentication.is_set || is_set(hello_authentication.yfilter)) leaf_name_data.push_back(hello_authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-authentication")
    {
        hello_authentication = value;
        hello_authentication.value_namespace = name_space;
        hello_authentication.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-authentication")
    {
        hello_authentication.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-authentication")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Key()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "key"; yang_parent_name = "hello-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::~Key()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::Config()
    :
    auth_password{YType::str, "auth-password"}
{

    yang_name = "config"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::has_data() const
{
    if (is_presence_container) return true;
    return auth_password.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_password.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-password")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::State()
    :
    auth_password{YType::str, "auth-password"}
{

    yang_name = "state"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::has_data() const
{
    if (is_presence_container) return true;
    return auth_password.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_password.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-password")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::Keychain()
{

    yang_name = "keychain"; yang_parent_name = "hello-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::~Keychain()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::has_operation() const
{
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Timers()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "timers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::~Timers()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::Config()
    :
    csnp_interval{YType::uint16, "csnp-interval"},
    lsp_pacing_interval{YType::uint64, "lsp-pacing-interval"}
{

    yang_name = "config"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::has_data() const
{
    if (is_presence_container) return true;
    return csnp_interval.is_set
	|| lsp_pacing_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csnp_interval.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csnp_interval.is_set || is_set(csnp_interval.yfilter)) leaf_name_data.push_back(csnp_interval.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csnp-interval")
    {
        csnp_interval = value;
        csnp_interval.value_namespace = name_space;
        csnp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csnp-interval")
    {
        csnp_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval" || name == "lsp-pacing-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::State()
    :
    csnp_interval{YType::uint16, "csnp-interval"},
    lsp_pacing_interval{YType::uint64, "lsp-pacing-interval"}
{

    yang_name = "state"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::has_data() const
{
    if (is_presence_container) return true;
    return csnp_interval.is_set
	|| lsp_pacing_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csnp_interval.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csnp_interval.is_set || is_set(csnp_interval.yfilter)) leaf_name_data.push_back(csnp_interval.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csnp-interval")
    {
        csnp_interval = value;
        csnp_interval.value_namespace = name_space;
        csnp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csnp-interval")
    {
        csnp_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval" || name == "lsp-pacing-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Bfd()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::~Bfd()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::Config()
    :
    bfd_tlv{YType::boolean, "bfd-tlv"}
{

    yang_name = "config"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::has_data() const
{
    if (is_presence_container) return true;
    return bfd_tlv.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_tlv.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_tlv.is_set || is_set(bfd_tlv.yfilter)) leaf_name_data.push_back(bfd_tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-tlv")
    {
        bfd_tlv = value;
        bfd_tlv.value_namespace = name_space;
        bfd_tlv.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-tlv")
    {
        bfd_tlv.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-tlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::State()
    :
    bfd_tlv{YType::boolean, "bfd-tlv"}
{

    yang_name = "state"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::has_data() const
{
    if (is_presence_container) return true;
    return bfd_tlv.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_tlv.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_tlv.is_set || is_set(bfd_tlv.yfilter)) leaf_name_data.push_back(bfd_tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-tlv")
    {
        bfd_tlv = value;
        bfd_tlv.value_namespace = name_space;
        bfd_tlv.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-tlv")
    {
        bfd_tlv.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-tlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::SidId::DYNAMIC {0, "DYNAMIC"};


}
}

