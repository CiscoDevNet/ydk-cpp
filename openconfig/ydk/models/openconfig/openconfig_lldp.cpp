
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_lldp.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_lldp {

Lldp::Lldp()
    :
    config(std::make_shared<Lldp::Config>())
	,state(std::make_shared<Lldp::State>())
	,interfaces(std::make_shared<Lldp::Interfaces>())
{
    config->parent = this;
    state->parent = this;
    interfaces->parent = this;

    yang_name = "lldp"; yang_parent_name = "openconfig-lldp"; is_top_level_class = true; has_list_ancestor = false;
}

Lldp::~Lldp()
{
}

bool Lldp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Lldp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lldp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lldp::State>();
        }
        return state;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Lldp::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::get_children() const
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

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Lldp::clone_ptr() const
{
    return std::make_shared<Lldp>();
}

std::string Lldp::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Lldp::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Lldp::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lldp::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interfaces")
        return true;
    return false;
}

Lldp::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    hello_timer{YType::uint64, "hello-timer"},
    suppress_tlv_advertisement{YType::identityref, "suppress-tlv-advertisement"},
    system_name{YType::str, "system-name"},
    system_description{YType::str, "system-description"},
    chassis_id{YType::str, "chassis-id"},
    chassis_id_type{YType::enumeration, "chassis-id-type"}
{

    yang_name = "config"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::Config::~Config()
{
}

bool Lldp::Config::has_data() const
{
    for (auto const & leaf : suppress_tlv_advertisement.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| hello_timer.is_set
	|| system_name.is_set
	|| system_description.is_set
	|| chassis_id.is_set
	|| chassis_id_type.is_set;
}

bool Lldp::Config::has_operation() const
{
    for (auto const & leaf : suppress_tlv_advertisement.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(hello_timer.yfilter)
	|| ydk::is_set(suppress_tlv_advertisement.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(chassis_id_type.yfilter);
}

std::string Lldp::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lldp:lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (hello_timer.is_set || is_set(hello_timer.yfilter)) leaf_name_data.push_back(hello_timer.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_type.is_set || is_set(chassis_id_type.yfilter)) leaf_name_data.push_back(chassis_id_type.get_name_leafdata());

    auto suppress_tlv_advertisement_name_datas = suppress_tlv_advertisement.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), suppress_tlv_advertisement_name_datas.begin(), suppress_tlv_advertisement_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer")
    {
        hello_timer = value;
        hello_timer.value_namespace = name_space;
        hello_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-tlv-advertisement")
    {
        Identity identity{name_space, name_space_prefix, value};
        suppress_tlv_advertisement.append(identity);
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type = value;
        chassis_id_type.value_namespace = name_space;
        chassis_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "hello-timer")
    {
        hello_timer.yfilter = yfilter;
    }
    if(value_path == "suppress-tlv-advertisement")
    {
        suppress_tlv_advertisement.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type.yfilter = yfilter;
    }
}

bool Lldp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "hello-timer" || name == "suppress-tlv-advertisement" || name == "system-name" || name == "system-description" || name == "chassis-id" || name == "chassis-id-type")
        return true;
    return false;
}

Lldp::State::State()
    :
    enabled{YType::boolean, "enabled"},
    hello_timer{YType::uint64, "hello-timer"},
    suppress_tlv_advertisement{YType::identityref, "suppress-tlv-advertisement"},
    system_name{YType::str, "system-name"},
    system_description{YType::str, "system-description"},
    chassis_id{YType::str, "chassis-id"},
    chassis_id_type{YType::enumeration, "chassis-id-type"}
    	,
    counters(std::make_shared<Lldp::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::State::~State()
{
}

bool Lldp::State::has_data() const
{
    for (auto const & leaf : suppress_tlv_advertisement.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| hello_timer.is_set
	|| system_name.is_set
	|| system_description.is_set
	|| chassis_id.is_set
	|| chassis_id_type.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Lldp::State::has_operation() const
{
    for (auto const & leaf : suppress_tlv_advertisement.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(hello_timer.yfilter)
	|| ydk::is_set(suppress_tlv_advertisement.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(chassis_id_type.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Lldp::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lldp:lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (hello_timer.is_set || is_set(hello_timer.yfilter)) leaf_name_data.push_back(hello_timer.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_type.is_set || is_set(chassis_id_type.yfilter)) leaf_name_data.push_back(chassis_id_type.get_name_leafdata());

    auto suppress_tlv_advertisement_name_datas = suppress_tlv_advertisement.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), suppress_tlv_advertisement_name_datas.begin(), suppress_tlv_advertisement_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Lldp::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Lldp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer")
    {
        hello_timer = value;
        hello_timer.value_namespace = name_space;
        hello_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-tlv-advertisement")
    {
        Identity identity{name_space, name_space_prefix, value};
        suppress_tlv_advertisement.append(identity);
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type = value;
        chassis_id_type.value_namespace = name_space;
        chassis_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "hello-timer")
    {
        hello_timer.yfilter = yfilter;
    }
    if(value_path == "suppress-tlv-advertisement")
    {
        suppress_tlv_advertisement.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type.yfilter = yfilter;
    }
}

bool Lldp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "enabled" || name == "hello-timer" || name == "suppress-tlv-advertisement" || name == "system-name" || name == "system-description" || name == "chassis-id" || name == "chassis-id-type")
        return true;
    return false;
}

Lldp::State::Counters::Counters()
    :
    frame_in{YType::uint64, "frame-in"},
    frame_out{YType::uint64, "frame-out"},
    frame_error_in{YType::uint64, "frame-error-in"},
    frame_discard{YType::uint64, "frame-discard"},
    tlv_discard{YType::uint64, "tlv-discard"},
    tlv_unknown{YType::uint64, "tlv-unknown"},
    last_clear{YType::str, "last-clear"},
    tlv_accepted{YType::uint64, "tlv-accepted"},
    entries_aged_out{YType::uint64, "entries-aged-out"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::State::Counters::~Counters()
{
}

bool Lldp::State::Counters::has_data() const
{
    return frame_in.is_set
	|| frame_out.is_set
	|| frame_error_in.is_set
	|| frame_discard.is_set
	|| tlv_discard.is_set
	|| tlv_unknown.is_set
	|| last_clear.is_set
	|| tlv_accepted.is_set
	|| entries_aged_out.is_set;
}

bool Lldp::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frame_in.yfilter)
	|| ydk::is_set(frame_out.yfilter)
	|| ydk::is_set(frame_error_in.yfilter)
	|| ydk::is_set(frame_discard.yfilter)
	|| ydk::is_set(tlv_discard.yfilter)
	|| ydk::is_set(tlv_unknown.yfilter)
	|| ydk::is_set(last_clear.yfilter)
	|| ydk::is_set(tlv_accepted.yfilter)
	|| ydk::is_set(entries_aged_out.yfilter);
}

std::string Lldp::State::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lldp:lldp/state/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frame_in.is_set || is_set(frame_in.yfilter)) leaf_name_data.push_back(frame_in.get_name_leafdata());
    if (frame_out.is_set || is_set(frame_out.yfilter)) leaf_name_data.push_back(frame_out.get_name_leafdata());
    if (frame_error_in.is_set || is_set(frame_error_in.yfilter)) leaf_name_data.push_back(frame_error_in.get_name_leafdata());
    if (frame_discard.is_set || is_set(frame_discard.yfilter)) leaf_name_data.push_back(frame_discard.get_name_leafdata());
    if (tlv_discard.is_set || is_set(tlv_discard.yfilter)) leaf_name_data.push_back(tlv_discard.get_name_leafdata());
    if (tlv_unknown.is_set || is_set(tlv_unknown.yfilter)) leaf_name_data.push_back(tlv_unknown.get_name_leafdata());
    if (last_clear.is_set || is_set(last_clear.yfilter)) leaf_name_data.push_back(last_clear.get_name_leafdata());
    if (tlv_accepted.is_set || is_set(tlv_accepted.yfilter)) leaf_name_data.push_back(tlv_accepted.get_name_leafdata());
    if (entries_aged_out.is_set || is_set(entries_aged_out.yfilter)) leaf_name_data.push_back(entries_aged_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frame-in")
    {
        frame_in = value;
        frame_in.value_namespace = name_space;
        frame_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-out")
    {
        frame_out = value;
        frame_out.value_namespace = name_space;
        frame_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-error-in")
    {
        frame_error_in = value;
        frame_error_in.value_namespace = name_space;
        frame_error_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-discard")
    {
        frame_discard = value;
        frame_discard.value_namespace = name_space;
        frame_discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-discard")
    {
        tlv_discard = value;
        tlv_discard.value_namespace = name_space;
        tlv_discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-unknown")
    {
        tlv_unknown = value;
        tlv_unknown.value_namespace = name_space;
        tlv_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear")
    {
        last_clear = value;
        last_clear.value_namespace = name_space;
        last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-accepted")
    {
        tlv_accepted = value;
        tlv_accepted.value_namespace = name_space;
        tlv_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entries-aged-out")
    {
        entries_aged_out = value;
        entries_aged_out.value_namespace = name_space;
        entries_aged_out.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frame-in")
    {
        frame_in.yfilter = yfilter;
    }
    if(value_path == "frame-out")
    {
        frame_out.yfilter = yfilter;
    }
    if(value_path == "frame-error-in")
    {
        frame_error_in.yfilter = yfilter;
    }
    if(value_path == "frame-discard")
    {
        frame_discard.yfilter = yfilter;
    }
    if(value_path == "tlv-discard")
    {
        tlv_discard.yfilter = yfilter;
    }
    if(value_path == "tlv-unknown")
    {
        tlv_unknown.yfilter = yfilter;
    }
    if(value_path == "last-clear")
    {
        last_clear.yfilter = yfilter;
    }
    if(value_path == "tlv-accepted")
    {
        tlv_accepted.yfilter = yfilter;
    }
    if(value_path == "entries-aged-out")
    {
        entries_aged_out.yfilter = yfilter;
    }
}

bool Lldp::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame-in" || name == "frame-out" || name == "frame-error-in" || name == "frame-discard" || name == "tlv-discard" || name == "tlv-unknown" || name == "last-clear" || name == "tlv-accepted" || name == "entries-aged-out")
        return true;
    return false;
}

Lldp::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::Interfaces::~Interfaces()
{
}

bool Lldp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lldp:lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Lldp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Lldp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Lldp::Interfaces::Interface::Config>())
	,state(std::make_shared<Lldp::Interfaces::Interface::State>())
	,neighbors(std::make_shared<Lldp::Interfaces::Interface::Neighbors>())
{
    config->parent = this;
    state->parent = this;
    neighbors->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::Interfaces::Interface::~Interface()
{
}

bool Lldp::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Lldp::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Lldp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lldp:lldp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lldp::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lldp::Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Lldp::Interfaces::Interface::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::get_children() const
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

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Lldp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "neighbors" || name == "name")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Config::Config()
    :
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Config::~Config()
{
}

bool Lldp::Interfaces::Interface::Config::has_data() const
{
    return name.is_set
	|| enabled.is_set;
}

bool Lldp::Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Lldp::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enabled")
        return true;
    return false;
}

Lldp::Interfaces::Interface::State::State()
    :
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"}
    	,
    counters(std::make_shared<Lldp::Interfaces::Interface::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::State::~State()
{
}

bool Lldp::Interfaces::Interface::State::has_data() const
{
    return name.is_set
	|| enabled.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Lldp::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Lldp::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Lldp::Interfaces::Interface::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Lldp::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "name" || name == "enabled")
        return true;
    return false;
}

Lldp::Interfaces::Interface::State::Counters::Counters()
    :
    frame_in{YType::uint64, "frame-in"},
    frame_out{YType::uint64, "frame-out"},
    frame_error_in{YType::uint64, "frame-error-in"},
    frame_discard{YType::uint64, "frame-discard"},
    tlv_discard{YType::uint64, "tlv-discard"},
    tlv_unknown{YType::uint64, "tlv-unknown"},
    last_clear{YType::str, "last-clear"},
    frame_error_out{YType::uint64, "frame-error-out"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::State::Counters::~Counters()
{
}

bool Lldp::Interfaces::Interface::State::Counters::has_data() const
{
    return frame_in.is_set
	|| frame_out.is_set
	|| frame_error_in.is_set
	|| frame_discard.is_set
	|| tlv_discard.is_set
	|| tlv_unknown.is_set
	|| last_clear.is_set
	|| frame_error_out.is_set;
}

bool Lldp::Interfaces::Interface::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frame_in.yfilter)
	|| ydk::is_set(frame_out.yfilter)
	|| ydk::is_set(frame_error_in.yfilter)
	|| ydk::is_set(frame_discard.yfilter)
	|| ydk::is_set(tlv_discard.yfilter)
	|| ydk::is_set(tlv_unknown.yfilter)
	|| ydk::is_set(last_clear.yfilter)
	|| ydk::is_set(frame_error_out.yfilter);
}

std::string Lldp::Interfaces::Interface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frame_in.is_set || is_set(frame_in.yfilter)) leaf_name_data.push_back(frame_in.get_name_leafdata());
    if (frame_out.is_set || is_set(frame_out.yfilter)) leaf_name_data.push_back(frame_out.get_name_leafdata());
    if (frame_error_in.is_set || is_set(frame_error_in.yfilter)) leaf_name_data.push_back(frame_error_in.get_name_leafdata());
    if (frame_discard.is_set || is_set(frame_discard.yfilter)) leaf_name_data.push_back(frame_discard.get_name_leafdata());
    if (tlv_discard.is_set || is_set(tlv_discard.yfilter)) leaf_name_data.push_back(tlv_discard.get_name_leafdata());
    if (tlv_unknown.is_set || is_set(tlv_unknown.yfilter)) leaf_name_data.push_back(tlv_unknown.get_name_leafdata());
    if (last_clear.is_set || is_set(last_clear.yfilter)) leaf_name_data.push_back(last_clear.get_name_leafdata());
    if (frame_error_out.is_set || is_set(frame_error_out.yfilter)) leaf_name_data.push_back(frame_error_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frame-in")
    {
        frame_in = value;
        frame_in.value_namespace = name_space;
        frame_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-out")
    {
        frame_out = value;
        frame_out.value_namespace = name_space;
        frame_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-error-in")
    {
        frame_error_in = value;
        frame_error_in.value_namespace = name_space;
        frame_error_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-discard")
    {
        frame_discard = value;
        frame_discard.value_namespace = name_space;
        frame_discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-discard")
    {
        tlv_discard = value;
        tlv_discard.value_namespace = name_space;
        tlv_discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-unknown")
    {
        tlv_unknown = value;
        tlv_unknown.value_namespace = name_space;
        tlv_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear")
    {
        last_clear = value;
        last_clear.value_namespace = name_space;
        last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-error-out")
    {
        frame_error_out = value;
        frame_error_out.value_namespace = name_space;
        frame_error_out.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frame-in")
    {
        frame_in.yfilter = yfilter;
    }
    if(value_path == "frame-out")
    {
        frame_out.yfilter = yfilter;
    }
    if(value_path == "frame-error-in")
    {
        frame_error_in.yfilter = yfilter;
    }
    if(value_path == "frame-discard")
    {
        frame_discard.yfilter = yfilter;
    }
    if(value_path == "tlv-discard")
    {
        tlv_discard.yfilter = yfilter;
    }
    if(value_path == "tlv-unknown")
    {
        tlv_unknown.yfilter = yfilter;
    }
    if(value_path == "last-clear")
    {
        last_clear.yfilter = yfilter;
    }
    if(value_path == "frame-error-out")
    {
        frame_error_out.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame-in" || name == "frame-out" || name == "frame-error-in" || name == "frame-discard" || name == "tlv-discard" || name == "tlv-unknown" || name == "last-clear" || name == "frame-error-out")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::~Neighbors()
{
}

bool Lldp::Interfaces::Interface::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Interfaces::Interface::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Lldp::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::Interface::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::Interface::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Neighbor()
    :
    id{YType::str, "id"}
    	,
    config(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Config>())
	,state(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::State>())
	,custom_tlvs(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs>())
	,capabilities(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities>())
{
    config->parent = this;
    state->parent = this;
    custom_tlvs->parent = this;
    capabilities->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::~Neighbor()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::has_data() const
{
    return id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (custom_tlvs !=  nullptr && custom_tlvs->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data());
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (custom_tlvs !=  nullptr && custom_tlvs->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation());
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::State>();
        }
        return state;
    }

    if(child_yang_name == "custom-tlvs")
    {
        if(custom_tlvs == nullptr)
        {
            custom_tlvs = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs>();
        }
        return custom_tlvs;
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities>();
        }
        return capabilities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::get_children() const
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

    if(custom_tlvs != nullptr)
    {
        children["custom-tlvs"] = custom_tlvs;
    }

    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "custom-tlvs" || name == "capabilities" || name == "id")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::Config()
{

    yang_name = "config"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::~Config()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::has_data() const
{
    return false;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::State::State()
    :
    system_name{YType::str, "system-name"},
    system_description{YType::str, "system-description"},
    chassis_id{YType::str, "chassis-id"},
    chassis_id_type{YType::enumeration, "chassis-id-type"},
    id{YType::str, "id"},
    age{YType::uint64, "age"},
    last_update{YType::int64, "last-update"},
    port_id{YType::str, "port-id"},
    port_id_type{YType::enumeration, "port-id-type"},
    port_description{YType::str, "port-description"},
    management_address{YType::str, "management-address"},
    management_address_type{YType::str, "management-address-type"}
{

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::State::~State()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::State::has_data() const
{
    return system_name.is_set
	|| system_description.is_set
	|| chassis_id.is_set
	|| chassis_id_type.is_set
	|| id.is_set
	|| age.is_set
	|| last_update.is_set
	|| port_id.is_set
	|| port_id_type.is_set
	|| port_description.is_set
	|| management_address.is_set
	|| management_address_type.is_set;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(chassis_id_type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(last_update.yfilter)
	|| ydk::is_set(port_id.yfilter)
	|| ydk::is_set(port_id_type.yfilter)
	|| ydk::is_set(port_description.yfilter)
	|| ydk::is_set(management_address.yfilter)
	|| ydk::is_set(management_address_type.yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_type.is_set || is_set(chassis_id_type.yfilter)) leaf_name_data.push_back(chassis_id_type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (last_update.is_set || is_set(last_update.yfilter)) leaf_name_data.push_back(last_update.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.yfilter)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (port_id_type.is_set || is_set(port_id_type.yfilter)) leaf_name_data.push_back(port_id_type.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.yfilter)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (management_address.is_set || is_set(management_address.yfilter)) leaf_name_data.push_back(management_address.get_name_leafdata());
    if (management_address_type.is_set || is_set(management_address_type.yfilter)) leaf_name_data.push_back(management_address_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type = value;
        chassis_id_type.value_namespace = name_space;
        chassis_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update")
    {
        last_update = value;
        last_update.value_namespace = name_space;
        last_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id")
    {
        port_id = value;
        port_id.value_namespace = name_space;
        port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-type")
    {
        port_id_type = value;
        port_id_type.value_namespace = name_space;
        port_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-description")
    {
        port_description = value;
        port_description.value_namespace = name_space;
        port_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-address")
    {
        management_address = value;
        management_address.value_namespace = name_space;
        management_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-address-type")
    {
        management_address_type = value;
        management_address_type.value_namespace = name_space;
        management_address_type.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "last-update")
    {
        last_update.yfilter = yfilter;
    }
    if(value_path == "port-id")
    {
        port_id.yfilter = yfilter;
    }
    if(value_path == "port-id-type")
    {
        port_id_type.yfilter = yfilter;
    }
    if(value_path == "port-description")
    {
        port_description.yfilter = yfilter;
    }
    if(value_path == "management-address")
    {
        management_address.yfilter = yfilter;
    }
    if(value_path == "management-address-type")
    {
        management_address_type.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-name" || name == "system-description" || name == "chassis-id" || name == "chassis-id-type" || name == "id" || name == "age" || name == "last-update" || name == "port-id" || name == "port-id-type" || name == "port-description" || name == "management-address" || name == "management-address-type")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::CustomTlvs()
{

    yang_name = "custom-tlvs"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::~CustomTlvs()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom-tlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Tlv()
    :
    type{YType::str, "type"},
    oui{YType::str, "oui"},
    oui_subtype{YType::str, "oui-subtype"}
    	,
    config(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config>())
	,state(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "tlv"; yang_parent_name = "custom-tlvs"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::~Tlv()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::has_data() const
{
    return type.is_set
	|| oui.is_set
	|| oui_subtype.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(oui_subtype.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv" <<"[type='" <<type <<"']" <<"[oui='" <<oui <<"']" <<"[oui-subtype='" <<oui_subtype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (oui_subtype.is_set || is_set(oui_subtype.yfilter)) leaf_name_data.push_back(oui_subtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::get_children() const
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

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui-subtype")
    {
        oui_subtype = value;
        oui_subtype.value_namespace = name_space;
        oui_subtype.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "oui-subtype")
    {
        oui_subtype.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "type" || name == "oui" || name == "oui-subtype")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::Config()
{

    yang_name = "config"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::~Config()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::has_data() const
{
    return false;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::State()
    :
    type{YType::int32, "type"},
    oui{YType::str, "oui"},
    oui_subtype{YType::str, "oui-subtype"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::~State()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::has_data() const
{
    return type.is_set
	|| oui.is_set
	|| oui_subtype.is_set
	|| value_.is_set;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(oui_subtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (oui_subtype.is_set || is_set(oui_subtype.yfilter)) leaf_name_data.push_back(oui_subtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui-subtype")
    {
        oui_subtype = value;
        oui_subtype.value_namespace = name_space;
        oui_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "oui-subtype")
    {
        oui_subtype.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "oui" || name == "oui-subtype" || name == "value")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capabilities()
{

    yang_name = "capabilities"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::~Capabilities()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::has_data() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability")
    {
        auto c = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability>();
        c->parent = this;
        capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Capability()
    :
    name{YType::identityref, "name"}
    	,
    config(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config>())
	,state(std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "capability"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::~Capability()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::get_children() const
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

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "name")
        return true;
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::Config()
{

    yang_name = "config"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::~Config()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::has_data() const
{
    return false;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::State()
    :
    name{YType::identityref, "name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true;
}

Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::~State()
{
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::has_data() const
{
    return name.is_set
	|| enabled.is_set;
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enabled")
        return true;
    return false;
}


}
}

