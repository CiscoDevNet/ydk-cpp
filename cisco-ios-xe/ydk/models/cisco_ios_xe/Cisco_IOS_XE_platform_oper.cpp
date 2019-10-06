
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_platform_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_platform_oper {

Components::Components()
    :
    component(this, {"cname"})
{

    yang_name = "components"; yang_parent_name = "Cisco-IOS-XE-platform-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Components::~Components()
{
}

bool Components::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<component.len(); index++)
    {
        if(component[index]->has_data())
            return true;
    }
    return false;
}

bool Components::has_operation() const
{
    for (std::size_t index=0; index<component.len(); index++)
    {
        if(component[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Components::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-oper:components";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component")
    {
        auto ent_ = std::make_shared<Components::Component>();
        ent_->parent = this;
        component.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : component.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Components::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Components::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Components::clone_ptr() const
{
    return std::make_shared<Components>();
}

std::string Components::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Components::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Components::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Components::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Components::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component")
        return true;
    return false;
}

Components::Component::Component()
    :
    cname{YType::str, "cname"}
        ,
    state(std::make_shared<Components::Component::State>())
    , platform_properties(std::make_shared<Components::Component::PlatformProperties>())
    , platform_subcomponents(std::make_shared<Components::Component::PlatformSubcomponents>())
{
    state->parent = this;
    platform_properties->parent = this;
    platform_subcomponents->parent = this;

    yang_name = "component"; yang_parent_name = "components"; is_top_level_class = false; has_list_ancestor = false; 
}

Components::Component::~Component()
{
}

bool Components::Component::has_data() const
{
    if (is_presence_container) return true;
    return cname.is_set
	|| (state !=  nullptr && state->has_data())
	|| (platform_properties !=  nullptr && platform_properties->has_data())
	|| (platform_subcomponents !=  nullptr && platform_subcomponents->has_data());
}

bool Components::Component::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cname.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (platform_properties !=  nullptr && platform_properties->has_operation())
	|| (platform_subcomponents !=  nullptr && platform_subcomponents->has_operation());
}

std::string Components::Component::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-oper:components/" << get_segment_path();
    return path_buffer.str();
}

std::string Components::Component::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component";
    ADD_KEY_TOKEN(cname, "cname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cname.is_set || is_set(cname.yfilter)) leaf_name_data.push_back(cname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Components::Component::State>();
        }
        return state;
    }

    if(child_yang_name == "platform-properties")
    {
        if(platform_properties == nullptr)
        {
            platform_properties = std::make_shared<Components::Component::PlatformProperties>();
        }
        return platform_properties;
    }

    if(child_yang_name == "platform-subcomponents")
    {
        if(platform_subcomponents == nullptr)
        {
            platform_subcomponents = std::make_shared<Components::Component::PlatformSubcomponents>();
        }
        return platform_subcomponents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(platform_properties != nullptr)
    {
        _children["platform-properties"] = platform_properties;
    }

    if(platform_subcomponents != nullptr)
    {
        _children["platform-subcomponents"] = platform_subcomponents;
    }

    return _children;
}

void Components::Component::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cname")
    {
        cname = value;
        cname.value_namespace = name_space;
        cname.value_namespace_prefix = name_space_prefix;
    }
}

void Components::Component::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cname")
    {
        cname.yfilter = yfilter;
    }
}

bool Components::Component::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "platform-properties" || name == "platform-subcomponents" || name == "cname")
        return true;
    return false;
}

Components::Component::State::State()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    description{YType::str, "description"},
    mfg_name{YType::str, "mfg-name"},
    version{YType::str, "version"},
    serial_no{YType::str, "serial-no"},
    part_no{YType::str, "part-no"}
        ,
    temp(std::make_shared<Components::Component::State::Temp>())
{
    temp->parent = this;

    yang_name = "state"; yang_parent_name = "component"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::State::~State()
{
}

bool Components::Component::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| description.is_set
	|| mfg_name.is_set
	|| version.is_set
	|| serial_no.is_set
	|| part_no.is_set
	|| (temp !=  nullptr && temp->has_data());
}

bool Components::Component::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mfg_name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(serial_no.yfilter)
	|| ydk::is_set(part_no.yfilter)
	|| (temp !=  nullptr && temp->has_operation());
}

std::string Components::Component::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mfg_name.is_set || is_set(mfg_name.yfilter)) leaf_name_data.push_back(mfg_name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (serial_no.is_set || is_set(serial_no.yfilter)) leaf_name_data.push_back(serial_no.get_name_leafdata());
    if (part_no.is_set || is_set(part_no.yfilter)) leaf_name_data.push_back(part_no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "temp")
    {
        if(temp == nullptr)
        {
            temp = std::make_shared<Components::Component::State::Temp>();
        }
        return temp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(temp != nullptr)
    {
        _children["temp"] = temp;
    }

    return _children;
}

void Components::Component::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-name")
    {
        mfg_name = value;
        mfg_name.value_namespace = name_space;
        mfg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-no")
    {
        serial_no = value;
        serial_no.value_namespace = name_space;
        serial_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-no")
    {
        part_no = value;
        part_no.value_namespace = name_space;
        part_no.value_namespace_prefix = name_space_prefix;
    }
}

void Components::Component::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mfg-name")
    {
        mfg_name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "serial-no")
    {
        serial_no.yfilter = yfilter;
    }
    if(value_path == "part-no")
    {
        part_no.yfilter = yfilter;
    }
}

bool Components::Component::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "temp" || name == "type" || name == "id" || name == "description" || name == "mfg-name" || name == "version" || name == "serial-no" || name == "part-no")
        return true;
    return false;
}

Components::Component::State::Temp::Temp()
    :
    temp_instant{YType::str, "temp-instant"},
    temp_avg{YType::str, "temp-avg"},
    temp_max{YType::str, "temp-max"},
    temp_min{YType::str, "temp-min"}
{

    yang_name = "temp"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::State::Temp::~Temp()
{
}

bool Components::Component::State::Temp::has_data() const
{
    if (is_presence_container) return true;
    return temp_instant.is_set
	|| temp_avg.is_set
	|| temp_max.is_set
	|| temp_min.is_set;
}

bool Components::Component::State::Temp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(temp_instant.yfilter)
	|| ydk::is_set(temp_avg.yfilter)
	|| ydk::is_set(temp_max.yfilter)
	|| ydk::is_set(temp_min.yfilter);
}

std::string Components::Component::State::Temp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::State::Temp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (temp_instant.is_set || is_set(temp_instant.yfilter)) leaf_name_data.push_back(temp_instant.get_name_leafdata());
    if (temp_avg.is_set || is_set(temp_avg.yfilter)) leaf_name_data.push_back(temp_avg.get_name_leafdata());
    if (temp_max.is_set || is_set(temp_max.yfilter)) leaf_name_data.push_back(temp_max.get_name_leafdata());
    if (temp_min.is_set || is_set(temp_min.yfilter)) leaf_name_data.push_back(temp_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::State::Temp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::State::Temp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Components::Component::State::Temp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "temp-instant")
    {
        temp_instant = value;
        temp_instant.value_namespace = name_space;
        temp_instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-avg")
    {
        temp_avg = value;
        temp_avg.value_namespace = name_space;
        temp_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-max")
    {
        temp_max = value;
        temp_max.value_namespace = name_space;
        temp_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-min")
    {
        temp_min = value;
        temp_min.value_namespace = name_space;
        temp_min.value_namespace_prefix = name_space_prefix;
    }
}

void Components::Component::State::Temp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "temp-instant")
    {
        temp_instant.yfilter = yfilter;
    }
    if(value_path == "temp-avg")
    {
        temp_avg.yfilter = yfilter;
    }
    if(value_path == "temp-max")
    {
        temp_max.yfilter = yfilter;
    }
    if(value_path == "temp-min")
    {
        temp_min.yfilter = yfilter;
    }
}

bool Components::Component::State::Temp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "temp-instant" || name == "temp-avg" || name == "temp-max" || name == "temp-min")
        return true;
    return false;
}

Components::Component::PlatformProperties::PlatformProperties()
    :
    platform_property(this, {"name"})
{

    yang_name = "platform-properties"; yang_parent_name = "component"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::PlatformProperties::~PlatformProperties()
{
}

bool Components::Component::PlatformProperties::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<platform_property.len(); index++)
    {
        if(platform_property[index]->has_data())
            return true;
    }
    return false;
}

bool Components::Component::PlatformProperties::has_operation() const
{
    for (std::size_t index=0; index<platform_property.len(); index++)
    {
        if(platform_property[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Components::Component::PlatformProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::PlatformProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::PlatformProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "platform-property")
    {
        auto ent_ = std::make_shared<Components::Component::PlatformProperties::PlatformProperty>();
        ent_->parent = this;
        platform_property.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::PlatformProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : platform_property.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Components::Component::PlatformProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Components::Component::PlatformProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Components::Component::PlatformProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-property")
        return true;
    return false;
}

Components::Component::PlatformProperties::PlatformProperty::PlatformProperty()
    :
    name{YType::str, "name"},
    configurable{YType::boolean, "configurable"}
        ,
    value_(std::make_shared<Components::Component::PlatformProperties::PlatformProperty::Value>())
{
    value_->parent = this;

    yang_name = "platform-property"; yang_parent_name = "platform-properties"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::PlatformProperties::PlatformProperty::~PlatformProperty()
{
}

bool Components::Component::PlatformProperties::PlatformProperty::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configurable.is_set
	|| (value_ !=  nullptr && value_->has_data());
}

bool Components::Component::PlatformProperties::PlatformProperty::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configurable.yfilter)
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Components::Component::PlatformProperties::PlatformProperty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-property";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::PlatformProperties::PlatformProperty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configurable.is_set || is_set(configurable.yfilter)) leaf_name_data.push_back(configurable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::PlatformProperties::PlatformProperty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Components::Component::PlatformProperties::PlatformProperty::Value>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::PlatformProperties::PlatformProperty::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(value_ != nullptr)
    {
        _children["value"] = value_;
    }

    return _children;
}

void Components::Component::PlatformProperties::PlatformProperty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurable")
    {
        configurable = value;
        configurable.value_namespace = name_space;
        configurable.value_namespace_prefix = name_space_prefix;
    }
}

void Components::Component::PlatformProperties::PlatformProperty::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configurable")
    {
        configurable.yfilter = yfilter;
    }
}

bool Components::Component::PlatformProperties::PlatformProperty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "name" || name == "configurable")
        return true;
    return false;
}

Components::Component::PlatformProperties::PlatformProperty::Value::Value()
    :
    string{YType::str, "string"},
    boolean{YType::boolean, "boolean"},
    intsixfour{YType::int64, "intsixfour"},
    uintsixfour{YType::uint64, "uintsixfour"},
    decimal{YType::str, "decimal"}
{

    yang_name = "value"; yang_parent_name = "platform-property"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::PlatformProperties::PlatformProperty::Value::~Value()
{
}

bool Components::Component::PlatformProperties::PlatformProperty::Value::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set
	|| boolean.is_set
	|| intsixfour.is_set
	|| uintsixfour.is_set
	|| decimal.is_set;
}

bool Components::Component::PlatformProperties::PlatformProperty::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(boolean.yfilter)
	|| ydk::is_set(intsixfour.yfilter)
	|| ydk::is_set(uintsixfour.yfilter)
	|| ydk::is_set(decimal.yfilter);
}

std::string Components::Component::PlatformProperties::PlatformProperty::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::PlatformProperties::PlatformProperty::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (boolean.is_set || is_set(boolean.yfilter)) leaf_name_data.push_back(boolean.get_name_leafdata());
    if (intsixfour.is_set || is_set(intsixfour.yfilter)) leaf_name_data.push_back(intsixfour.get_name_leafdata());
    if (uintsixfour.is_set || is_set(uintsixfour.yfilter)) leaf_name_data.push_back(uintsixfour.get_name_leafdata());
    if (decimal.is_set || is_set(decimal.yfilter)) leaf_name_data.push_back(decimal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::PlatformProperties::PlatformProperty::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::PlatformProperties::PlatformProperty::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Components::Component::PlatformProperties::PlatformProperty::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boolean")
    {
        boolean = value;
        boolean.value_namespace = name_space;
        boolean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intsixfour")
    {
        intsixfour = value;
        intsixfour.value_namespace = name_space;
        intsixfour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uintsixfour")
    {
        uintsixfour = value;
        uintsixfour.value_namespace = name_space;
        uintsixfour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decimal")
    {
        decimal = value;
        decimal.value_namespace = name_space;
        decimal.value_namespace_prefix = name_space_prefix;
    }
}

void Components::Component::PlatformProperties::PlatformProperty::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "boolean")
    {
        boolean.yfilter = yfilter;
    }
    if(value_path == "intsixfour")
    {
        intsixfour.yfilter = yfilter;
    }
    if(value_path == "uintsixfour")
    {
        uintsixfour.yfilter = yfilter;
    }
    if(value_path == "decimal")
    {
        decimal.yfilter = yfilter;
    }
}

bool Components::Component::PlatformProperties::PlatformProperty::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string" || name == "boolean" || name == "intsixfour" || name == "uintsixfour" || name == "decimal")
        return true;
    return false;
}

Components::Component::PlatformSubcomponents::PlatformSubcomponents()
    :
    platform_subcomponent(this, {"name"})
{

    yang_name = "platform-subcomponents"; yang_parent_name = "component"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::PlatformSubcomponents::~PlatformSubcomponents()
{
}

bool Components::Component::PlatformSubcomponents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<platform_subcomponent.len(); index++)
    {
        if(platform_subcomponent[index]->has_data())
            return true;
    }
    return false;
}

bool Components::Component::PlatformSubcomponents::has_operation() const
{
    for (std::size_t index=0; index<platform_subcomponent.len(); index++)
    {
        if(platform_subcomponent[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Components::Component::PlatformSubcomponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-subcomponents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::PlatformSubcomponents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::PlatformSubcomponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "platform-subcomponent")
    {
        auto ent_ = std::make_shared<Components::Component::PlatformSubcomponents::PlatformSubcomponent>();
        ent_->parent = this;
        platform_subcomponent.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::PlatformSubcomponents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : platform_subcomponent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Components::Component::PlatformSubcomponents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Components::Component::PlatformSubcomponents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Components::Component::PlatformSubcomponents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-subcomponent")
        return true;
    return false;
}

Components::Component::PlatformSubcomponents::PlatformSubcomponent::PlatformSubcomponent()
    :
    name{YType::str, "name"}
{

    yang_name = "platform-subcomponent"; yang_parent_name = "platform-subcomponents"; is_top_level_class = false; has_list_ancestor = true; 
}

Components::Component::PlatformSubcomponents::PlatformSubcomponent::~PlatformSubcomponent()
{
}

bool Components::Component::PlatformSubcomponents::PlatformSubcomponent::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Components::Component::PlatformSubcomponents::PlatformSubcomponent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Components::Component::PlatformSubcomponents::PlatformSubcomponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-subcomponent";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Components::Component::PlatformSubcomponents::PlatformSubcomponent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Components::Component::PlatformSubcomponents::PlatformSubcomponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Components::Component::PlatformSubcomponents::PlatformSubcomponent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Components::Component::PlatformSubcomponents::PlatformSubcomponent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Components::Component::PlatformSubcomponents::PlatformSubcomponent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Components::Component::PlatformSubcomponents::PlatformSubcomponent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

const Enum::YLeaf PlatformPropValueType::property_string {0, "property-string"};
const Enum::YLeaf PlatformPropValueType::property_boolean {1, "property-boolean"};
const Enum::YLeaf PlatformPropValueType::property_int64 {2, "property-int64"};
const Enum::YLeaf PlatformPropValueType::property_uint64 {3, "property-uint64"};
const Enum::YLeaf PlatformPropValueType::property_decimal64 {4, "property-decimal64"};

const Enum::YLeaf PlatformCompType::comp_chassis {0, "comp-chassis"};
const Enum::YLeaf PlatformCompType::comp_backplane {1, "comp-backplane"};
const Enum::YLeaf PlatformCompType::comp_power_supply {2, "comp-power-supply"};
const Enum::YLeaf PlatformCompType::comp_fan {3, "comp-fan"};
const Enum::YLeaf PlatformCompType::comp_sensor {4, "comp-sensor"};
const Enum::YLeaf PlatformCompType::comp_module {5, "comp-module"};
const Enum::YLeaf PlatformCompType::comp_linecard {6, "comp-linecard"};
const Enum::YLeaf PlatformCompType::comp_port {7, "comp-port"};
const Enum::YLeaf PlatformCompType::comp_cpu {8, "comp-cpu"};
const Enum::YLeaf PlatformCompType::comp_operating_system {9, "comp-operating-system"};
const Enum::YLeaf PlatformCompType::comp_optical_channel {10, "comp-optical-channel"};
const Enum::YLeaf PlatformCompType::comp_container {11, "comp-container"};


}
}

