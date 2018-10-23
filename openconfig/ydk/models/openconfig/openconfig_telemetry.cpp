
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_telemetry.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_telemetry {

TelemetrySystem::TelemetrySystem()
    :
    sensor_groups(std::make_shared<TelemetrySystem::SensorGroups>())
    , destination_groups(std::make_shared<TelemetrySystem::DestinationGroups>())
    , subscriptions(std::make_shared<TelemetrySystem::Subscriptions>())
{
    sensor_groups->parent = this;
    destination_groups->parent = this;
    subscriptions->parent = this;

    yang_name = "telemetry-system"; yang_parent_name = "openconfig-telemetry"; is_top_level_class = true; has_list_ancestor = false; 
}

TelemetrySystem::~TelemetrySystem()
{
}

bool TelemetrySystem::has_data() const
{
    if (is_presence_container) return true;
    return (sensor_groups !=  nullptr && sensor_groups->has_data())
	|| (destination_groups !=  nullptr && destination_groups->has_data())
	|| (subscriptions !=  nullptr && subscriptions->has_data());
}

bool TelemetrySystem::has_operation() const
{
    return is_set(yfilter)
	|| (sensor_groups !=  nullptr && sensor_groups->has_operation())
	|| (destination_groups !=  nullptr && destination_groups->has_operation())
	|| (subscriptions !=  nullptr && subscriptions->has_operation());
}

std::string TelemetrySystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-groups")
    {
        if(sensor_groups == nullptr)
        {
            sensor_groups = std::make_shared<TelemetrySystem::SensorGroups>();
        }
        return sensor_groups;
    }

    if(child_yang_name == "destination-groups")
    {
        if(destination_groups == nullptr)
        {
            destination_groups = std::make_shared<TelemetrySystem::DestinationGroups>();
        }
        return destination_groups;
    }

    if(child_yang_name == "subscriptions")
    {
        if(subscriptions == nullptr)
        {
            subscriptions = std::make_shared<TelemetrySystem::Subscriptions>();
        }
        return subscriptions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sensor_groups != nullptr)
    {
        _children["sensor-groups"] = sensor_groups;
    }

    if(destination_groups != nullptr)
    {
        _children["destination-groups"] = destination_groups;
    }

    if(subscriptions != nullptr)
    {
        _children["subscriptions"] = subscriptions;
    }

    return _children;
}

void TelemetrySystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> TelemetrySystem::clone_ptr() const
{
    return std::make_shared<TelemetrySystem>();
}

std::string TelemetrySystem::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string TelemetrySystem::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function TelemetrySystem::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TelemetrySystem::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool TelemetrySystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-groups" || name == "destination-groups" || name == "subscriptions")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroups()
    :
    sensor_group(this, {"sensor_group_id"})
{

    yang_name = "sensor-groups"; yang_parent_name = "telemetry-system"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::SensorGroups::~SensorGroups()
{
}

bool TelemetrySystem::SensorGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_group.len(); index++)
    {
        if(sensor_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::SensorGroups::has_operation() const
{
    for (std::size_t index=0; index<sensor_group.len(); index++)
    {
        if(sensor_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::SensorGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::SensorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-group")
    {
        auto ent_ = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup>();
        ent_->parent = this;
        sensor_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::SensorGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::SensorGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::SensorGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::SensorGroup()
    :
    sensor_group_id{YType::str, "sensor-group-id"}
        ,
    config(std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::Config>())
    , state(std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::State>())
    , sensor_paths(std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths>())
{
    config->parent = this;
    state->parent = this;
    sensor_paths->parent = this;

    yang_name = "sensor-group"; yang_parent_name = "sensor-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::SensorGroups::SensorGroup::~SensorGroup()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::has_data() const
{
    if (is_presence_container) return true;
    return sensor_group_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (sensor_paths !=  nullptr && sensor_paths->has_data());
}

bool TelemetrySystem::SensorGroups::SensorGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (sensor_paths !=  nullptr && sensor_paths->has_operation());
}

std::string TelemetrySystem::SensorGroups::SensorGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/sensor-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::SensorGroups::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group";
    ADD_KEY_TOKEN(sensor_group_id, "sensor-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.yfilter)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::State>();
        }
        return state;
    }

    if(child_yang_name == "sensor-paths")
    {
        if(sensor_paths == nullptr)
        {
            sensor_paths = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths>();
        }
        return sensor_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(sensor_paths != nullptr)
    {
        _children["sensor-paths"] = sensor_paths;
    }

    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
        sensor_group_id.value_namespace = name_space;
        sensor_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::SensorGroups::SensorGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::SensorGroups::SensorGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "sensor-paths" || name == "sensor-group-id")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::Config::Config()
    :
    sensor_group_id{YType::str, "sensor-group-id"}
{

    yang_name = "config"; yang_parent_name = "sensor-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::SensorGroups::SensorGroup::Config::~Config()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::Config::has_data() const
{
    if (is_presence_container) return true;
    return sensor_group_id.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group_id.yfilter);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.yfilter)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
        sensor_group_id.value_namespace = name_space;
        sensor_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::SensorGroups::SensorGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::SensorGroups::SensorGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group-id")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::State::State()
    :
    sensor_group_id{YType::str, "sensor-group-id"}
{

    yang_name = "state"; yang_parent_name = "sensor-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::SensorGroups::SensorGroup::State::~State()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::State::has_data() const
{
    if (is_presence_container) return true;
    return sensor_group_id.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group_id.yfilter);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.yfilter)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
        sensor_group_id.value_namespace = name_space;
        sensor_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::SensorGroups::SensorGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::SensorGroups::SensorGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group-id")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPaths()
    :
    sensor_path(this, {"path"})
{

    yang_name = "sensor-paths"; yang_parent_name = "sensor-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::~SensorPaths()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_path.len(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.len(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-path")
    {
        auto ent_ = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath>();
        ent_->parent = this;
        sensor_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-path")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::SensorPath()
    :
    path{YType::str, "path"}
        ,
    config(std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config>())
    , state(std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "sensor-path"; yang_parent_name = "sensor-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::~SensorPath()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path";
    ADD_KEY_TOKEN(path, "path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "path")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::Config()
    :
    path{YType::str, "path"},
    exclude_filter{YType::str, "exclude-filter"}
{

    yang_name = "config"; yang_parent_name = "sensor-path"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::~Config()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| exclude_filter.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(exclude_filter.yfilter);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (exclude_filter.is_set || is_set(exclude_filter.yfilter)) leaf_name_data.push_back(exclude_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-filter")
    {
        exclude_filter = value;
        exclude_filter.value_namespace = name_space;
        exclude_filter.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "exclude-filter")
    {
        exclude_filter.yfilter = yfilter;
    }
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "exclude-filter")
        return true;
    return false;
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::State()
    :
    path{YType::str, "path"},
    exclude_filter{YType::str, "exclude-filter"}
{

    yang_name = "state"; yang_parent_name = "sensor-path"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::~State()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| exclude_filter.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(exclude_filter.yfilter);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (exclude_filter.is_set || is_set(exclude_filter.yfilter)) leaf_name_data.push_back(exclude_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-filter")
    {
        exclude_filter = value;
        exclude_filter.value_namespace = name_space;
        exclude_filter.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "exclude-filter")
    {
        exclude_filter.yfilter = yfilter;
    }
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "exclude-filter")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroups()
    :
    destination_group(this, {"group_id"})
{

    yang_name = "destination-groups"; yang_parent_name = "telemetry-system"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::DestinationGroups::~DestinationGroups()
{
}

bool TelemetrySystem::DestinationGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_group.len(); index++)
    {
        if(destination_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::DestinationGroups::has_operation() const
{
    for (std::size_t index=0; index<destination_group.len(); index++)
    {
        if(destination_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::DestinationGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::DestinationGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-group")
    {
        auto ent_ = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup>();
        ent_->parent = this;
        destination_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::DestinationGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::DestinationGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::DestinationGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-group")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::DestinationGroup()
    :
    group_id{YType::str, "group-id"}
        ,
    config(std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Config>())
    , state(std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::State>())
    , destinations(std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations>())
{
    config->parent = this;
    state->parent = this;
    destinations->parent = this;

    yang_name = "destination-group"; yang_parent_name = "destination-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::~DestinationGroup()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (destinations !=  nullptr && destinations->has_data());
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (destinations !=  nullptr && destinations->has_operation());
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/destination-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::State>();
        }
        return state;
    }

    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations>();
        }
        return destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(destinations != nullptr)
    {
        _children["destinations"] = destinations;
    }

    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::DestinationGroups::DestinationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "destinations" || name == "group-id")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::Config::Config()
    :
    group_id{YType::str, "group-id"}
{

    yang_name = "config"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::Config::~Config()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Config::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::State::State()
    :
    group_id{YType::str, "group-id"}
{

    yang_name = "state"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::State::~State()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::State::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::DestinationGroups::DestinationGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destinations()
    :
    destination(this, {"destination_address", "destination_port"})
{

    yang_name = "destinations"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::~Destinations()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::str, "destination-port"}
        ,
    config(std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config>())
    , state(std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::~Destination()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| destination_port.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(destination_port, "destination-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "destination-address" || name == "destination-port")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::Config()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    destination_protocol{YType::enumeration, "destination-protocol"}
{

    yang_name = "config"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::~Config()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| destination_port.is_set
	|| destination_protocol.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(destination_protocol.yfilter);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (destination_protocol.is_set || is_set(destination_protocol.yfilter)) leaf_name_data.push_back(destination_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol = value;
        destination_protocol.value_namespace = name_space;
        destination_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol.yfilter = yfilter;
    }
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "destination-protocol")
        return true;
    return false;
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::State()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    destination_protocol{YType::enumeration, "destination-protocol"}
{

    yang_name = "state"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::~State()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| destination_port.is_set
	|| destination_protocol.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(destination_protocol.yfilter);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (destination_protocol.is_set || is_set(destination_protocol.yfilter)) leaf_name_data.push_back(destination_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol = value;
        destination_protocol.value_namespace = name_space;
        destination_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol.yfilter = yfilter;
    }
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "destination-protocol")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Subscriptions()
    :
    persistent(std::make_shared<TelemetrySystem::Subscriptions::Persistent>())
    , dynamic(std::make_shared<TelemetrySystem::Subscriptions::Dynamic>())
{
    persistent->parent = this;
    dynamic->parent = this;

    yang_name = "subscriptions"; yang_parent_name = "telemetry-system"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::Subscriptions::~Subscriptions()
{
}

bool TelemetrySystem::Subscriptions::has_data() const
{
    if (is_presence_container) return true;
    return (persistent !=  nullptr && persistent->has_data())
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool TelemetrySystem::Subscriptions::has_operation() const
{
    return is_set(yfilter)
	|| (persistent !=  nullptr && persistent->has_operation())
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string TelemetrySystem::Subscriptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::Subscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<TelemetrySystem::Subscriptions::Persistent>();
        }
        return persistent;
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<TelemetrySystem::Subscriptions::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(persistent != nullptr)
    {
        _children["persistent"] = persistent;
    }

    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::Subscriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::Subscriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent" || name == "dynamic")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Persistent()
    :
    subscription(this, {"subscription_id"})
{

    yang_name = "persistent"; yang_parent_name = "subscriptions"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::Subscriptions::Persistent::~Persistent()
{
}

bool TelemetrySystem::Subscriptions::Persistent::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Persistent::has_operation() const
{
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::Subscriptions::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        auto ent_ = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription>();
        ent_->parent = this;
        subscription.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscription.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::Subscriptions::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::Subscriptions::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::Subscription()
    :
    subscription_id{YType::str, "subscription-id"}
        ,
    config(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::Config>())
    , state(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::State>())
    , sensor_profiles(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles>())
    , destination_groups(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups>())
{
    config->parent = this;
    state->parent = this;
    sensor_profiles->parent = this;
    destination_groups->parent = this;

    yang_name = "subscription"; yang_parent_name = "persistent"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::~Subscription()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::has_data() const
{
    if (is_presence_container) return true;
    return subscription_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (sensor_profiles !=  nullptr && sensor_profiles->has_data())
	|| (destination_groups !=  nullptr && destination_groups->has_data());
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (sensor_profiles !=  nullptr && sensor_profiles->has_operation())
	|| (destination_groups !=  nullptr && destination_groups->has_operation());
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/persistent/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    ADD_KEY_TOKEN(subscription_id, "subscription-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::State>();
        }
        return state;
    }

    if(child_yang_name == "sensor-profiles")
    {
        if(sensor_profiles == nullptr)
        {
            sensor_profiles = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles>();
        }
        return sensor_profiles;
    }

    if(child_yang_name == "destination-groups")
    {
        if(destination_groups == nullptr)
        {
            destination_groups = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups>();
        }
        return destination_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(sensor_profiles != nullptr)
    {
        _children["sensor-profiles"] = sensor_profiles;
    }

    if(destination_groups != nullptr)
    {
        _children["destination-groups"] = destination_groups;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "sensor-profiles" || name == "destination-groups" || name == "subscription-id")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::Config::Config()
    :
    subscription_id{YType::uint64, "subscription-id"},
    local_source_address{YType::str, "local-source-address"},
    originated_qos_marking{YType::uint8, "originated-qos-marking"}
{

    yang_name = "config"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::Config::~Config()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::Config::has_data() const
{
    if (is_presence_container) return true;
    return subscription_id.is_set
	|| local_source_address.is_set
	|| originated_qos_marking.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(local_source_address.yfilter)
	|| ydk::is_set(originated_qos_marking.yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.yfilter)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (originated_qos_marking.is_set || is_set(originated_qos_marking.yfilter)) leaf_name_data.push_back(originated_qos_marking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
        local_source_address.value_namespace = name_space;
        local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking = value;
        originated_qos_marking.value_namespace = name_space;
        originated_qos_marking.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "local-source-address")
    {
        local_source_address.yfilter = yfilter;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-id" || name == "local-source-address" || name == "originated-qos-marking")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::State::State()
    :
    subscription_id{YType::uint64, "subscription-id"},
    local_source_address{YType::str, "local-source-address"},
    originated_qos_marking{YType::uint8, "originated-qos-marking"}
{

    yang_name = "state"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::State::has_data() const
{
    if (is_presence_container) return true;
    return subscription_id.is_set
	|| local_source_address.is_set
	|| originated_qos_marking.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(local_source_address.yfilter)
	|| ydk::is_set(originated_qos_marking.yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.yfilter)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (originated_qos_marking.is_set || is_set(originated_qos_marking.yfilter)) leaf_name_data.push_back(originated_qos_marking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
        local_source_address.value_namespace = name_space;
        local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking = value;
        originated_qos_marking.value_namespace = name_space;
        originated_qos_marking.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "local-source-address")
    {
        local_source_address.yfilter = yfilter;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-id" || name == "local-source-address" || name == "originated-qos-marking")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfiles()
    :
    sensor_profile(this, {"sensor_group"})
{

    yang_name = "sensor-profiles"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::~SensorProfiles()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_profile.len(); index++)
    {
        if(sensor_profile[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::has_operation() const
{
    for (std::size_t index=0; index<sensor_profile.len(); index++)
    {
        if(sensor_profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-profile")
    {
        auto ent_ = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile>();
        ent_->parent = this;
        sensor_profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-profile")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::SensorProfile()
    :
    sensor_group{YType::str, "sensor-group"}
        ,
    config(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config>())
    , state(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "sensor-profile"; yang_parent_name = "sensor-profiles"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::~SensorProfile()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::has_data() const
{
    if (is_presence_container) return true;
    return sensor_group.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profile";
    ADD_KEY_TOKEN(sensor_group, "sensor-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group.is_set || is_set(sensor_group.yfilter)) leaf_name_data.push_back(sensor_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group")
    {
        sensor_group = value;
        sensor_group.value_namespace = name_space;
        sensor_group.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group")
    {
        sensor_group.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "sensor-group")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::Config()
    :
    sensor_group{YType::str, "sensor-group"},
    sample_interval{YType::uint64, "sample-interval"},
    heartbeat_interval{YType::uint64, "heartbeat-interval"},
    suppress_redundant{YType::boolean, "suppress-redundant"}
{

    yang_name = "config"; yang_parent_name = "sensor-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::~Config()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::has_data() const
{
    if (is_presence_container) return true;
    return sensor_group.is_set
	|| sample_interval.is_set
	|| heartbeat_interval.is_set
	|| suppress_redundant.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(heartbeat_interval.yfilter)
	|| ydk::is_set(suppress_redundant.yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group.is_set || is_set(sensor_group.yfilter)) leaf_name_data.push_back(sensor_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (heartbeat_interval.is_set || is_set(heartbeat_interval.yfilter)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.yfilter)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group")
    {
        sensor_group = value;
        sensor_group.value_namespace = name_space;
        sensor_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
        heartbeat_interval.value_namespace = name_space;
        heartbeat_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
        suppress_redundant.value_namespace = name_space;
        suppress_redundant.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group")
    {
        sensor_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval.yfilter = yfilter;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group" || name == "sample-interval" || name == "heartbeat-interval" || name == "suppress-redundant")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::State()
    :
    sensor_group{YType::str, "sensor-group"},
    sample_interval{YType::uint64, "sample-interval"},
    heartbeat_interval{YType::uint64, "heartbeat-interval"},
    suppress_redundant{YType::boolean, "suppress-redundant"}
{

    yang_name = "state"; yang_parent_name = "sensor-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::has_data() const
{
    if (is_presence_container) return true;
    return sensor_group.is_set
	|| sample_interval.is_set
	|| heartbeat_interval.is_set
	|| suppress_redundant.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(heartbeat_interval.yfilter)
	|| ydk::is_set(suppress_redundant.yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group.is_set || is_set(sensor_group.yfilter)) leaf_name_data.push_back(sensor_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (heartbeat_interval.is_set || is_set(heartbeat_interval.yfilter)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.yfilter)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group")
    {
        sensor_group = value;
        sensor_group.value_namespace = name_space;
        sensor_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
        heartbeat_interval.value_namespace = name_space;
        heartbeat_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
        suppress_redundant.value_namespace = name_space;
        suppress_redundant.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group")
    {
        sensor_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval.yfilter = yfilter;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group" || name == "sample-interval" || name == "heartbeat-interval" || name == "suppress-redundant")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroups()
    :
    destination_group(this, {"group_id"})
{

    yang_name = "destination-groups"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::~DestinationGroups()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_group.len(); index++)
    {
        if(destination_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::has_operation() const
{
    for (std::size_t index=0; index<destination_group.len(); index++)
    {
        if(destination_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-group")
    {
        auto ent_ = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup>();
        ent_->parent = this;
        destination_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-group")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::DestinationGroup()
    :
    group_id{YType::str, "group-id"}
        ,
    config(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config>())
    , state(std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "destination-group"; yang_parent_name = "destination-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::~DestinationGroup()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "group-id")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::Config()
    :
    group_id{YType::str, "group-id"}
{

    yang_name = "config"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::~Config()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::State()
    :
    group_id{YType::str, "group-id"}
{

    yang_name = "state"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Dynamic::Dynamic()
    :
    subscription(this, {"subscription_id"})
{

    yang_name = "dynamic"; yang_parent_name = "subscriptions"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::Subscriptions::Dynamic::~Dynamic()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Dynamic::has_operation() const
{
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::Subscriptions::Dynamic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::Subscriptions::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        auto ent_ = std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription>();
        ent_->parent = this;
        subscription.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscription.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::Subscriptions::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::Subscriptions::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::Subscription()
    :
    subscription_id{YType::str, "subscription-id"}
        ,
    state(std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::State>())
    , sensor_paths(std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths>())
{
    state->parent = this;
    sensor_paths->parent = this;

    yang_name = "subscription"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = false; 
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::~Subscription()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::has_data() const
{
    if (is_presence_container) return true;
    return subscription_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (sensor_paths !=  nullptr && sensor_paths->has_data());
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (sensor_paths !=  nullptr && sensor_paths->has_operation());
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/dynamic/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    ADD_KEY_TOKEN(subscription_id, "subscription-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Dynamic::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Dynamic::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::State>();
        }
        return state;
    }

    if(child_yang_name == "sensor-paths")
    {
        if(sensor_paths == nullptr)
        {
            sensor_paths = std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths>();
        }
        return sensor_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Dynamic::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(sensor_paths != nullptr)
    {
        _children["sensor-paths"] = sensor_paths;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "sensor-paths" || name == "subscription-id")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::State::State()
    :
    subscription_id{YType::uint64, "subscription-id"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    destination_protocol{YType::enumeration, "destination-protocol"},
    sample_interval{YType::uint64, "sample-interval"},
    heartbeat_interval{YType::uint64, "heartbeat-interval"},
    suppress_redundant{YType::boolean, "suppress-redundant"},
    originated_qos_marking{YType::uint8, "originated-qos-marking"}
{

    yang_name = "state"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::State::has_data() const
{
    if (is_presence_container) return true;
    return subscription_id.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| destination_protocol.is_set
	|| sample_interval.is_set
	|| heartbeat_interval.is_set
	|| suppress_redundant.is_set
	|| originated_qos_marking.is_set;
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(destination_protocol.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(heartbeat_interval.yfilter)
	|| ydk::is_set(suppress_redundant.yfilter)
	|| ydk::is_set(originated_qos_marking.yfilter);
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (destination_protocol.is_set || is_set(destination_protocol.yfilter)) leaf_name_data.push_back(destination_protocol.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (heartbeat_interval.is_set || is_set(heartbeat_interval.yfilter)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.yfilter)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());
    if (originated_qos_marking.is_set || is_set(originated_qos_marking.yfilter)) leaf_name_data.push_back(originated_qos_marking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol = value;
        destination_protocol.value_namespace = name_space;
        destination_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
        heartbeat_interval.value_namespace = name_space;
        heartbeat_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
        suppress_redundant.value_namespace = name_space;
        suppress_redundant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking = value;
        originated_qos_marking.value_namespace = name_space;
        originated_qos_marking.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval.yfilter = yfilter;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant.yfilter = yfilter;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-id" || name == "destination-address" || name == "destination-port" || name == "destination-protocol" || name == "sample-interval" || name == "heartbeat-interval" || name == "suppress-redundant" || name == "originated-qos-marking")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPaths()
    :
    sensor_path(this, {"path"})
{

    yang_name = "sensor-paths"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::~SensorPaths()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_path.len(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.len(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-path")
    {
        auto ent_ = std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath>();
        ent_->parent = this;
        sensor_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-path")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::SensorPath()
    :
    path{YType::str, "path"}
        ,
    state(std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State>())
{
    state->parent = this;

    yang_name = "sensor-path"; yang_parent_name = "sensor-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::~SensorPath()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path";
    ADD_KEY_TOKEN(path, "path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "path")
        return true;
    return false;
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::State()
    :
    path{YType::str, "path"},
    exclude_filter{YType::str, "exclude-filter"}
{

    yang_name = "state"; yang_parent_name = "sensor-path"; is_top_level_class = false; has_list_ancestor = true; 
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| exclude_filter.is_set;
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(exclude_filter.yfilter);
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (exclude_filter.is_set || is_set(exclude_filter.yfilter)) leaf_name_data.push_back(exclude_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-filter")
    {
        exclude_filter = value;
        exclude_filter.value_namespace = name_space;
        exclude_filter.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "exclude-filter")
    {
        exclude_filter.yfilter = yfilter;
    }
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "exclude-filter")
        return true;
    return false;
}

const Enum::YLeaf TelemetryStreamProtocol::TCP {0, "TCP"};
const Enum::YLeaf TelemetryStreamProtocol::UDP {1, "UDP"};


}
}

