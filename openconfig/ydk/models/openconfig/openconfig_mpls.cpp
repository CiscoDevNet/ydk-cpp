
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls {

Mpls::Mpls()
    :
    global(std::make_shared<Mpls::Global>())
	,lsps(std::make_shared<Mpls::Lsps>())
	,signaling_protocols(std::make_shared<Mpls::SignalingProtocols>())
	,te_global_attributes(std::make_shared<Mpls::TeGlobalAttributes>())
	,te_interface_attributes(std::make_shared<Mpls::TeInterfaceAttributes>())
{
    global->parent = this;
    lsps->parent = this;
    signaling_protocols->parent = this;
    te_global_attributes->parent = this;
    te_interface_attributes->parent = this;

    yang_name = "mpls"; yang_parent_name = "openconfig-mpls"; is_top_level_class = true; has_list_ancestor = false;
}

Mpls::~Mpls()
{
}

bool Mpls::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (lsps !=  nullptr && lsps->has_data())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_data())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_data())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_data());
}

bool Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_operation())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_operation())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_operation());
}

std::string Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Mpls::Global>();
        }
        return global;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<Mpls::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "signaling-protocols")
    {
        if(signaling_protocols == nullptr)
        {
            signaling_protocols = std::make_shared<Mpls::SignalingProtocols>();
        }
        return signaling_protocols;
    }

    if(child_yang_name == "te-global-attributes")
    {
        if(te_global_attributes == nullptr)
        {
            te_global_attributes = std::make_shared<Mpls::TeGlobalAttributes>();
        }
        return te_global_attributes;
    }

    if(child_yang_name == "te-interface-attributes")
    {
        if(te_interface_attributes == nullptr)
        {
            te_interface_attributes = std::make_shared<Mpls::TeInterfaceAttributes>();
        }
        return te_interface_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    if(signaling_protocols != nullptr)
    {
        children["signaling-protocols"] = signaling_protocols;
    }

    if(te_global_attributes != nullptr)
    {
        children["te-global-attributes"] = te_global_attributes;
    }

    if(te_interface_attributes != nullptr)
    {
        children["te-interface-attributes"] = te_interface_attributes;
    }

    return children;
}

void Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Mpls::clone_ptr() const
{
    return std::make_shared<Mpls>();
}

std::string Mpls::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Mpls::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Mpls::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mpls::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "lsps" || name == "signaling-protocols" || name == "te-global-attributes" || name == "te-interface-attributes")
        return true;
    return false;
}

Mpls::Global::Global()
    :
    config(std::make_shared<Mpls::Global::Config>())
	,mpls_interface_attributes(std::make_shared<Mpls::Global::MplsInterfaceAttributes>())
	,state(std::make_shared<Mpls::Global::State>())
{
    config->parent = this;
    mpls_interface_attributes->parent = this;
    state->parent = this;

    yang_name = "global"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Global::~Global()
{
}

bool Mpls::Global::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (mpls_interface_attributes !=  nullptr && mpls_interface_attributes->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (mpls_interface_attributes !=  nullptr && mpls_interface_attributes->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "mpls-interface-attributes")
    {
        if(mpls_interface_attributes == nullptr)
        {
            mpls_interface_attributes = std::make_shared<Mpls::Global::MplsInterfaceAttributes>();
        }
        return mpls_interface_attributes;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Global::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(mpls_interface_attributes != nullptr)
    {
        children["mpls-interface-attributes"] = mpls_interface_attributes;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "mpls-interface-attributes" || name == "state")
        return true;
    return false;
}

Mpls::Global::Config::Config()
    :
    null_label{YType::identityref, "null-label"}
{

    yang_name = "config"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Global::Config::~Config()
{
}

bool Mpls::Global::Config::has_data() const
{
    return null_label.is_set;
}

bool Mpls::Global::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_label.yfilter);
}

std::string Mpls::Global::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_label.is_set || is_set(null_label.yfilter)) leaf_name_data.push_back(null_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Global::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-label")
    {
        null_label = value;
        null_label.value_namespace = name_space;
        null_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-label")
    {
        null_label.yfilter = yfilter;
    }
}

bool Mpls::Global::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-label")
        return true;
    return false;
}

Mpls::Global::MplsInterfaceAttributes::MplsInterfaceAttributes()
{

    yang_name = "mpls-interface-attributes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Global::MplsInterfaceAttributes::~MplsInterfaceAttributes()
{
}

bool Mpls::Global::MplsInterfaceAttributes::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Global::MplsInterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Global::MplsInterfaceAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::MplsInterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::MplsInterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::MplsInterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Global::MplsInterfaceAttributes::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::MplsInterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::Global::MplsInterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Global::MplsInterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Global::MplsInterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::Global::MplsInterfaceAttributes::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Mpls::Global::MplsInterfaceAttributes::Interface::Config>())
	,state(std::make_shared<Mpls::Global::MplsInterfaceAttributes::Interface::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface"; yang_parent_name = "mpls-interface-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Global::MplsInterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/mpls-interface-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::MplsInterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::MplsInterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Global::MplsInterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Global::MplsInterfaceAttributes::Interface::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::MplsInterfaceAttributes::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Global::MplsInterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::MplsInterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "name")
        return true;
    return false;
}

Mpls::Global::MplsInterfaceAttributes::Interface::Config::Config()
    :
    mpls_enabled{YType::boolean, "mpls-enabled"},
    name{YType::str, "name"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Global::MplsInterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::Config::has_data() const
{
    return mpls_enabled.is_set
	|| name.is_set;
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_enabled.is_set || is_set(mpls_enabled.yfilter)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::MplsInterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Global::MplsInterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
        mpls_enabled.value_namespace = name_space;
        mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::MplsInterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-enabled")
    {
        mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-enabled" || name == "name")
        return true;
    return false;
}

Mpls::Global::MplsInterfaceAttributes::Interface::State::State()
    :
    mpls_enabled{YType::boolean, "mpls-enabled"},
    name{YType::str, "name"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Global::MplsInterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::State::has_data() const
{
    return mpls_enabled.is_set
	|| name.is_set;
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Mpls::Global::MplsInterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::MplsInterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_enabled.is_set || is_set(mpls_enabled.yfilter)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::MplsInterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::MplsInterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Global::MplsInterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
        mpls_enabled.value_namespace = name_space;
        mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::MplsInterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-enabled")
    {
        mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Global::MplsInterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-enabled" || name == "name")
        return true;
    return false;
}

Mpls::Global::State::State()
    :
    null_label{YType::identityref, "null-label"}
{

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Global::State::~State()
{
}

bool Mpls::Global::State::has_data() const
{
    return null_label.is_set;
}

bool Mpls::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_label.yfilter);
}

std::string Mpls::Global::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_label.is_set || is_set(null_label.yfilter)) leaf_name_data.push_back(null_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-label")
    {
        null_label = value;
        null_label.value_namespace = name_space;
        null_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-label")
    {
        null_label.yfilter = yfilter;
    }
}

bool Mpls::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-label")
        return true;
    return false;
}

Mpls::Lsps::Lsps()
    :
    constrained_path(std::make_shared<Mpls::Lsps::ConstrainedPath>())
	,static_lsps(std::make_shared<Mpls::Lsps::StaticLsps>())
	,unconstrained_path(std::make_shared<Mpls::Lsps::UnconstrainedPath>())
{
    constrained_path->parent = this;
    static_lsps->parent = this;
    unconstrained_path->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::~Lsps()
{
}

bool Mpls::Lsps::has_data() const
{
    return (constrained_path !=  nullptr && constrained_path->has_data())
	|| (static_lsps !=  nullptr && static_lsps->has_data())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_data());
}

bool Mpls::Lsps::has_operation() const
{
    return is_set(yfilter)
	|| (constrained_path !=  nullptr && constrained_path->has_operation())
	|| (static_lsps !=  nullptr && static_lsps->has_operation())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_operation());
}

std::string Mpls::Lsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constrained-path")
    {
        if(constrained_path == nullptr)
        {
            constrained_path = std::make_shared<Mpls::Lsps::ConstrainedPath>();
        }
        return constrained_path;
    }

    if(child_yang_name == "static-lsps")
    {
        if(static_lsps == nullptr)
        {
            static_lsps = std::make_shared<Mpls::Lsps::StaticLsps>();
        }
        return static_lsps;
    }

    if(child_yang_name == "unconstrained-path")
    {
        if(unconstrained_path == nullptr)
        {
            unconstrained_path = std::make_shared<Mpls::Lsps::UnconstrainedPath>();
        }
        return unconstrained_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(constrained_path != nullptr)
    {
        children["constrained-path"] = constrained_path;
    }

    if(static_lsps != nullptr)
    {
        children["static-lsps"] = static_lsps;
    }

    if(unconstrained_path != nullptr)
    {
        children["unconstrained-path"] = unconstrained_path;
    }

    return children;
}

void Mpls::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constrained-path" || name == "static-lsps" || name == "unconstrained-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::ConstrainedPath()
{

    yang_name = "constrained-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::ConstrainedPath::~ConstrainedPath()
{
}

bool Mpls::Lsps::ConstrainedPath::has_data() const
{
    for (std::size_t index=0; index<named_explicit_paths.size(); index++)
    {
        if(named_explicit_paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::has_operation() const
{
    for (std::size_t index=0; index<named_explicit_paths.size(); index++)
    {
        if(named_explicit_paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::ConstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constrained-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-explicit-paths")
    {
        for(auto const & c : named_explicit_paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths>();
        c->parent = this;
        named_explicit_paths.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_explicit_paths)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-explicit-paths" || name == "tunnel")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPaths()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "named-explicit-paths"; yang_parent_name = "constrained-path"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::~NamedExplicitPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_data() const
{
    for (std::size_t index=0; index<explicit_route_objects.size(); index++)
    {
        if(explicit_route_objects[index]->has_data())
            return true;
    }
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<explicit_route_objects.size(); index++)
    {
        if(explicit_route_objects[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-explicit-paths" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "explicit-route-objects")
    {
        for(auto const & c : explicit_route_objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects>();
        c->parent = this;
        explicit_route_objects.push_back(c);
        return c;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    for (auto const & c : explicit_route_objects)
    {
        children[c->get_segment_path()] = c;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "explicit-route-objects" || name == "state" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::Config()
    :
    name{YType::str, "name"}
{

    yang_name = "config"; yang_parent_name = "named-explicit-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::has_data() const
{
    return name.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::ExplicitRouteObjects()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "explicit-route-objects"; yang_parent_name = "named-explicit-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::~ExplicitRouteObjects()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-route-objects" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "index")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::Config()
    :
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    index_{YType::uint8, "index"}
{

    yang_name = "config"; yang_parent_name = "explicit-route-objects"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::has_data() const
{
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hop-type" || name == "index")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::State()
    :
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    index_{YType::uint8, "index"}
{

    yang_name = "state"; yang_parent_name = "explicit-route-objects"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::has_data() const
{
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hop-type" || name == "index")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::State()
    :
    name{YType::str, "name"}
{

    yang_name = "state"; yang_parent_name = "named-explicit-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::has_data() const
{
    return name.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Tunnel()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"}
    	,
    bandwidth(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth>())
	,config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Config>())
	,p2p_tunnel_attributes(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::State>())
{
    bandwidth->parent = this;
    config->parent = this;
    p2p_tunnel_attributes->parent = this;
    state->parent = this;

    yang_name = "tunnel"; yang_parent_name = "constrained-path"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::has_data() const
{
    return name.is_set
	|| type.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Config>();
        }
        return config;
    }

    if(child_yang_name == "p2p-tunnel-attributes")
    {
        if(p2p_tunnel_attributes == nullptr)
        {
            p2p_tunnel_attributes = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes>();
        }
        return p2p_tunnel_attributes;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(p2p_tunnel_attributes != nullptr)
    {
        children["p2p-tunnel-attributes"] = p2p_tunnel_attributes;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "config" || name == "p2p-tunnel-attributes" || name == "state" || name == "name" || name == "type")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Bandwidth()
    :
    auto_bandwidth(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth>())
	,config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State>())
{
    auto_bandwidth->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::has_data() const
{
    return (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

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

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bandwidth" || name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::AutoBandwidth()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config>())
	,overflow(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State>())
	,underflow(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow>())
{
    config->parent = this;
    overflow->parent = this;
    state->parent = this;
    underflow->parent = this;

    yang_name = "auto-bandwidth"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::~AutoBandwidth()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State>();
        }
        return state;
    }

    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(overflow != nullptr)
    {
        children["overflow"] = overflow;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(underflow != nullptr)
    {
        children["underflow"] = underflow;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "overflow" || name == "state" || name == "underflow")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::Config()
    :
    adjust_interval{YType::uint32, "adjust-interval"},
    adjust_threshold{YType::uint8, "adjust-threshold"},
    enabled{YType::boolean, "enabled"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
{

    yang_name = "config"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::has_data() const
{
    return adjust_interval.is_set
	|| adjust_threshold.is_set
	|| enabled.is_set
	|| max_bw.is_set
	|| min_bw.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_interval.yfilter)
	|| ydk::is_set(adjust_threshold.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_interval.is_set || is_set(adjust_interval.yfilter)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.yfilter)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-interval")
    {
        adjust_interval = value;
        adjust_interval.value_namespace = name_space;
        adjust_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold = value;
        adjust_threshold.value_namespace = name_space;
        adjust_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-interval")
    {
        adjust_interval.yfilter = yfilter;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-interval" || name == "adjust-threshold" || name == "enabled" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Overflow()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::~Overflow()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    overflow_threshold{YType::uint8, "overflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "config"; yang_parent_name = "overflow"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_data() const
{
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "overflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::State()
    :
    enabled{YType::boolean, "enabled"},
    overflow_threshold{YType::uint8, "overflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "state"; yang_parent_name = "overflow"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_data() const
{
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "overflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::State()
    :
    adjust_interval{YType::uint32, "adjust-interval"},
    adjust_threshold{YType::uint8, "adjust-threshold"},
    enabled{YType::boolean, "enabled"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
{

    yang_name = "state"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::has_data() const
{
    return adjust_interval.is_set
	|| adjust_threshold.is_set
	|| enabled.is_set
	|| max_bw.is_set
	|| min_bw.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_interval.yfilter)
	|| ydk::is_set(adjust_threshold.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_interval.is_set || is_set(adjust_interval.yfilter)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.yfilter)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-interval")
    {
        adjust_interval = value;
        adjust_interval.value_namespace = name_space;
        adjust_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold = value;
        adjust_threshold.value_namespace = name_space;
        adjust_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-interval")
    {
        adjust_interval.yfilter = yfilter;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-interval" || name == "adjust-threshold" || name == "enabled" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Underflow()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::~Underflow()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    trigger_event_count{YType::uint16, "trigger-event-count"},
    underflow_threshold{YType::uint8, "underflow-threshold"}
{

    yang_name = "config"; yang_parent_name = "underflow"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_data() const
{
    return enabled.is_set
	|| trigger_event_count.is_set
	|| underflow_threshold.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter)
	|| ydk::is_set(underflow_threshold.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.yfilter)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
        underflow_threshold.value_namespace = name_space;
        underflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "trigger-event-count" || name == "underflow-threshold")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::State()
    :
    enabled{YType::boolean, "enabled"},
    trigger_event_count{YType::uint16, "trigger-event-count"},
    underflow_threshold{YType::uint8, "underflow-threshold"}
{

    yang_name = "state"; yang_parent_name = "underflow"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_data() const
{
    return enabled.is_set
	|| trigger_event_count.is_set
	|| underflow_threshold.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter)
	|| ydk::is_set(underflow_threshold.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.yfilter)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
        underflow_threshold.value_namespace = name_space;
        underflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "trigger-event-count" || name == "underflow-threshold")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::Config()
    :
    set_bandwidth{YType::uint32, "set-bandwidth"},
    specification_type{YType::enumeration, "specification-type"}
{

    yang_name = "config"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::has_data() const
{
    return set_bandwidth.is_set
	|| specification_type.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_bandwidth.yfilter)
	|| ydk::is_set(specification_type.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_bandwidth.is_set || is_set(set_bandwidth.yfilter)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());
    if (specification_type.is_set || is_set(specification_type.yfilter)) leaf_name_data.push_back(specification_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
        set_bandwidth.value_namespace = name_space;
        set_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "specification-type")
    {
        specification_type = value;
        specification_type.value_namespace = name_space;
        specification_type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-bandwidth")
    {
        set_bandwidth.yfilter = yfilter;
    }
    if(value_path == "specification-type")
    {
        specification_type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-bandwidth" || name == "specification-type")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::State()
    :
    set_bandwidth{YType::uint32, "set-bandwidth"},
    specification_type{YType::enumeration, "specification-type"}
{

    yang_name = "state"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::has_data() const
{
    return set_bandwidth.is_set
	|| specification_type.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_bandwidth.yfilter)
	|| ydk::is_set(specification_type.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_bandwidth.is_set || is_set(set_bandwidth.yfilter)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());
    if (specification_type.is_set || is_set(specification_type.yfilter)) leaf_name_data.push_back(specification_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
        set_bandwidth.value_namespace = name_space;
        set_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "specification-type")
    {
        specification_type = value;
        specification_type.value_namespace = name_space;
        specification_type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-bandwidth")
    {
        set_bandwidth.yfilter = yfilter;
    }
    if(value_path == "specification-type")
    {
        specification_type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-bandwidth" || name == "specification-type")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Config::Config()
    :
    admin_status{YType::identityref, "admin-status"},
    description{YType::str, "description"},
    hold_priority{YType::uint8, "hold-priority"},
    local_id{YType::str, "local-id"},
    metric{YType::str, "metric"},
    name{YType::str, "name"},
    preference{YType::uint8, "preference"},
    protection_style_requested{YType::identityref, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    setup_priority{YType::uint8, "setup-priority"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    soft_preemption{YType::boolean, "soft-preemption"},
    source{YType::str, "source"},
    type{YType::identityref, "type"}
{

    yang_name = "config"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Config::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| hold_priority.is_set
	|| local_id.is_set
	|| metric.is_set
	|| name.is_set
	|| preference.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| setup_priority.is_set
	|| signaling_protocol.is_set
	|| soft_preemption.is_set
	|| source.is_set
	|| type.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
        protection_style_requested.value_namespace = name_space;
        protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-status" || name == "description" || name == "hold-priority" || name == "local-id" || name == "metric" || name == "name" || name == "preference" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "setup-priority" || name == "signaling-protocol" || name == "soft-preemption" || name == "source" || name == "type")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PTunnelAttributes()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "p2p-tunnel-attributes"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::~P2PTunnelAttributes()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::has_data() const
{
    for (std::size_t index=0; index<p2p_primary_paths.size(); index++)
    {
        if(p2p_primary_paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<p2p_secondary_paths.size(); index++)
    {
        if(p2p_secondary_paths[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2p_primary_paths.size(); index++)
    {
        if(p2p_primary_paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<p2p_secondary_paths.size(); index++)
    {
        if(p2p_secondary_paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config>();
        }
        return config;
    }

    if(child_yang_name == "p2p-primary-paths")
    {
        for(auto const & c : p2p_primary_paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths>();
        c->parent = this;
        p2p_primary_paths.push_back(c);
        return c;
    }

    if(child_yang_name == "p2p-secondary-paths")
    {
        for(auto const & c : p2p_secondary_paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths>();
        c->parent = this;
        p2p_secondary_paths.push_back(c);
        return c;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    for (auto const & c : p2p_primary_paths)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : p2p_secondary_paths)
    {
        children[c->get_segment_path()] = c;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "p2p-primary-paths" || name == "p2p-secondary-paths" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::Config()
    :
    destination{YType::str, "destination"}
{

    yang_name = "config"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::has_data() const
{
    return destination.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::P2PPrimaryPaths()
    :
    name{YType::str, "name"}
    	,
    admin_groups(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups>())
	,candidate_secondary_paths(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths>())
	,config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State>())
{
    admin_groups->parent = this;
    candidate_secondary_paths->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "p2p-primary-paths"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::~P2PPrimaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::has_data() const
{
    return name.is_set
	|| (admin_groups !=  nullptr && admin_groups->has_data())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (admin_groups !=  nullptr && admin_groups->has_operation())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-primary-paths" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-groups")
    {
        if(admin_groups == nullptr)
        {
            admin_groups = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups>();
        }
        return admin_groups;
    }

    if(child_yang_name == "candidate-secondary-paths")
    {
        if(candidate_secondary_paths == nullptr)
        {
            candidate_secondary_paths = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths>();
        }
        return candidate_secondary_paths;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_groups != nullptr)
    {
        children["admin-groups"] = admin_groups;
    }

    if(candidate_secondary_paths != nullptr)
    {
        children["candidate-secondary-paths"] = candidate_secondary_paths;
    }

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

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-groups" || name == "candidate-secondary-paths" || name == "config" || name == "state" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::AdminGroups()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-groups"; yang_parent_name = "p2p-primary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::~AdminGroups()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::Config()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "config"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::has_data() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::State()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "state"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::has_data() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPaths()
{

    yang_name = "candidate-secondary-paths"; yang_parent_name = "p2p-primary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::~CandidateSecondaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::has_data() const
{
    for (std::size_t index=0; index<candidate_secondary_path.size(); index++)
    {
        if(candidate_secondary_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::has_operation() const
{
    for (std::size_t index=0; index<candidate_secondary_path.size(); index++)
    {
        if(candidate_secondary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-secondary-path")
    {
        for(auto const & c : candidate_secondary_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath>();
        c->parent = this;
        candidate_secondary_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_secondary_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::CandidateSecondaryPath()
    :
    secondary_path{YType::str, "secondary-path"}
    	,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "candidate-secondary-path"; yang_parent_name = "candidate-secondary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::~CandidateSecondaryPath()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::has_data() const
{
    return secondary_path.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-path" <<"[secondary-path='" <<secondary_path <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::Config()
    :
    priority{YType::uint16, "priority"},
    secondary_path{YType::str, "secondary-path"}
{

    yang_name = "config"; yang_parent_name = "candidate-secondary-path"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_data() const
{
    return priority.is_set
	|| secondary_path.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(secondary_path.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::State()
    :
    active{YType::boolean, "active"},
    priority{YType::uint16, "priority"},
    secondary_path{YType::str, "secondary-path"}
{

    yang_name = "state"; yang_parent_name = "candidate-secondary-path"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_data() const
{
    return active.is_set
	|| priority.is_set
	|| secondary_path.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(secondary_path.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "priority" || name == "secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::Config()
    :
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    explicit_path_name{YType::str, "explicit-path-name"},
    hold_priority{YType::uint8, "hold-priority"},
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    path_computation_server{YType::str, "path-computation-server"},
    preference{YType::uint8, "preference"},
    retry_timer{YType::uint16, "retry-timer"},
    setup_priority{YType::uint8, "setup-priority"},
    use_cspf{YType::boolean, "use-cspf"}
{

    yang_name = "config"; yang_parent_name = "p2p-primary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(use_cspf.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-tiebreaker" || name == "explicit-path-name" || name == "hold-priority" || name == "name" || name == "path-computation-method" || name == "path-computation-server" || name == "preference" || name == "retry-timer" || name == "setup-priority" || name == "use-cspf")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::State()
    :
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    explicit_path_name{YType::str, "explicit-path-name"},
    hold_priority{YType::uint8, "hold-priority"},
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    path_computation_server{YType::str, "path-computation-server"},
    preference{YType::uint8, "preference"},
    retry_timer{YType::uint16, "retry-timer"},
    setup_priority{YType::uint8, "setup-priority"},
    use_cspf{YType::boolean, "use-cspf"}
{

    yang_name = "state"; yang_parent_name = "p2p-primary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(use_cspf.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-tiebreaker" || name == "explicit-path-name" || name == "hold-priority" || name == "name" || name == "path-computation-method" || name == "path-computation-server" || name == "preference" || name == "retry-timer" || name == "setup-priority" || name == "use-cspf")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::P2PSecondaryPaths()
    :
    name{YType::str, "name"}
    	,
    admin_groups(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups>())
	,config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State>())
{
    admin_groups->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "p2p-secondary-paths"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::~P2PSecondaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::has_data() const
{
    return name.is_set
	|| (admin_groups !=  nullptr && admin_groups->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (admin_groups !=  nullptr && admin_groups->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-secondary-paths" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-groups")
    {
        if(admin_groups == nullptr)
        {
            admin_groups = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups>();
        }
        return admin_groups;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_groups != nullptr)
    {
        children["admin-groups"] = admin_groups;
    }

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

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-groups" || name == "config" || name == "state" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::AdminGroups()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config>())
	,state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-groups"; yang_parent_name = "p2p-secondary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::~AdminGroups()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::Config()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "config"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::has_data() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::State()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "state"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::has_data() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::Config()
    :
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    explicit_path_name{YType::str, "explicit-path-name"},
    hold_priority{YType::uint8, "hold-priority"},
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    path_computation_server{YType::str, "path-computation-server"},
    preference{YType::uint8, "preference"},
    retry_timer{YType::uint16, "retry-timer"},
    setup_priority{YType::uint8, "setup-priority"},
    use_cspf{YType::boolean, "use-cspf"}
{

    yang_name = "config"; yang_parent_name = "p2p-secondary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(use_cspf.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-tiebreaker" || name == "explicit-path-name" || name == "hold-priority" || name == "name" || name == "path-computation-method" || name == "path-computation-server" || name == "preference" || name == "retry-timer" || name == "setup-priority" || name == "use-cspf")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::State()
    :
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    explicit_path_name{YType::str, "explicit-path-name"},
    hold_priority{YType::uint8, "hold-priority"},
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    path_computation_server{YType::str, "path-computation-server"},
    preference{YType::uint8, "preference"},
    retry_timer{YType::uint16, "retry-timer"},
    setup_priority{YType::uint8, "setup-priority"},
    use_cspf{YType::boolean, "use-cspf"}
{

    yang_name = "state"; yang_parent_name = "p2p-secondary-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::has_data() const
{
    return cspf_tiebreaker.is_set
	|| explicit_path_name.is_set
	|| hold_priority.is_set
	|| name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set
	|| preference.is_set
	|| retry_timer.is_set
	|| setup_priority.is_set
	|| use_cspf.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(use_cspf.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-tiebreaker" || name == "explicit-path-name" || name == "hold-priority" || name == "name" || name == "path-computation-method" || name == "path-computation-server" || name == "preference" || name == "retry-timer" || name == "setup-priority" || name == "use-cspf")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::State()
    :
    destination{YType::str, "destination"}
{

    yang_name = "state"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::has_data() const
{
    return destination.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::State()
    :
    admin_status{YType::identityref, "admin-status"},
    description{YType::str, "description"},
    hold_priority{YType::uint8, "hold-priority"},
    local_id{YType::str, "local-id"},
    metric{YType::str, "metric"},
    name{YType::str, "name"},
    oper_status{YType::identityref, "oper-status"},
    preference{YType::uint8, "preference"},
    protection_style_requested{YType::identityref, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    role{YType::identityref, "role"},
    setup_priority{YType::uint8, "setup-priority"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    soft_preemption{YType::boolean, "soft-preemption"},
    source{YType::str, "source"},
    type{YType::identityref, "type"}
    	,
    counters(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| hold_priority.is_set
	|| local_id.is_set
	|| metric.is_set
	|| name.is_set
	|| oper_status.is_set
	|| preference.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| role.is_set
	|| setup_priority.is_set
	|| signaling_protocol.is_set
	|| soft_preemption.is_set
	|| source.is_set
	|| type.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
        protection_style_requested.value_namespace = name_space;
        protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "admin-status" || name == "description" || name == "hold-priority" || name == "local-id" || name == "metric" || name == "name" || name == "oper-status" || name == "preference" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "role" || name == "setup-priority" || name == "signaling-protocol" || name == "soft-preemption" || name == "source" || name == "type")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::Counters()
    :
    bytes{YType::uint64, "bytes"},
    current_path_time{YType::str, "current-path-time"},
    next_reoptimization_time{YType::str, "next-reoptimization-time"},
    online_time{YType::str, "online-time"},
    packets{YType::uint64, "packets"},
    path_changes{YType::uint64, "path-changes"},
    state_changes{YType::uint64, "state-changes"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::~Counters()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::has_data() const
{
    return bytes.is_set
	|| current_path_time.is_set
	|| next_reoptimization_time.is_set
	|| online_time.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(current_path_time.yfilter)
	|| ydk::is_set(next_reoptimization_time.yfilter)
	|| ydk::is_set(online_time.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(path_changes.yfilter)
	|| ydk::is_set(state_changes.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.yfilter)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.yfilter)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.yfilter)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.yfilter)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-path-time")
    {
        current_path_time = value;
        current_path_time.value_namespace = name_space;
        current_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time = value;
        next_reoptimization_time.value_namespace = name_space;
        next_reoptimization_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "online-time")
    {
        online_time = value;
        online_time.value_namespace = name_space;
        online_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-changes")
    {
        path_changes = value;
        path_changes.value_namespace = name_space;
        path_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "current-path-time")
    {
        current_path_time.yfilter = yfilter;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time.yfilter = yfilter;
    }
    if(value_path == "online-time")
    {
        online_time.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "path-changes")
    {
        path_changes.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "current-path-time" || name == "next-reoptimization-time" || name == "online-time" || name == "packets" || name == "path-changes" || name == "state-changes")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsps()
{

    yang_name = "static-lsps"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::StaticLsps::~StaticLsps()
{
}

bool Mpls::Lsps::StaticLsps::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::StaticLsps::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::StaticLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::StaticLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_switched_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::Lsps::StaticLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::StaticLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::StaticLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-path")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::LabelSwitchedPath()
    :
    name{YType::str, "name"}
    	,
    egress(std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress>())
	,ingress(std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress>())
	,transit(std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit>())
{
    egress->parent = this;
    ingress->parent = this;
    transit->parent = this;

    yang_name = "label-switched-path"; yang_parent_name = "static-lsps"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::has_data() const
{
    return name.is_set
	|| (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data())
	|| (transit !=  nullptr && transit->has_data());
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (transit !=  nullptr && transit->has_operation());
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/static-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress>();
        }
        return egress;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "transit")
    {
        if(transit == nullptr)
        {
            transit = std::make_shared<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit>();
        }
        return transit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::LabelSwitchedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    if(transit != nullptr)
    {
        children["transit"] = transit;
    }

    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "ingress" || name == "transit" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::Egress()
    :
    incoming_label{YType::str, "incoming-label"},
    next_hop{YType::str, "next-hop"},
    push_label{YType::str, "push-label"}
{

    yang_name = "egress"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::~Egress()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::has_data() const
{
    return incoming_label.is_set
	|| next_hop.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-label" || name == "next-hop" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::Ingress()
    :
    incoming_label{YType::str, "incoming-label"},
    next_hop{YType::str, "next-hop"},
    push_label{YType::str, "push-label"}
{

    yang_name = "ingress"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::~Ingress()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::has_data() const
{
    return incoming_label.is_set
	|| next_hop.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-label" || name == "next-hop" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::Transit()
    :
    incoming_label{YType::str, "incoming-label"},
    next_hop{YType::str, "next-hop"},
    push_label{YType::str, "push-label"}
{

    yang_name = "transit"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::~Transit()
{
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::has_data() const
{
    return incoming_label.is_set
	|| next_hop.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-label" || name == "next-hop" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::UnconstrainedPath()
    :
    path_setup_protocol(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>())
{
    path_setup_protocol->parent = this;

    yang_name = "unconstrained-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::~UnconstrainedPath()
{
}

bool Mpls::Lsps::UnconstrainedPath::has_data() const
{
    return (path_setup_protocol !=  nullptr && path_setup_protocol->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::has_operation() const
{
    return is_set(yfilter)
	|| (path_setup_protocol !=  nullptr && path_setup_protocol->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unconstrained-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-setup-protocol")
    {
        if(path_setup_protocol == nullptr)
        {
            path_setup_protocol = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>();
        }
        return path_setup_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_setup_protocol != nullptr)
    {
        children["path-setup-protocol"] = path_setup_protocol;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-setup-protocol")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::PathSetupProtocol()
    :
    ldp(nullptr) // presence node
	,segment_routing(nullptr) // presence node
{

    yang_name = "path-setup-protocol"; yang_parent_name = "unconstrained-path"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::~PathSetupProtocol()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp" || name == "segment-routing")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Ldp()
    :
    tunnel(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel>())
{
    tunnel->parent = this;

    yang_name = "ldp"; yang_parent_name = "path-setup-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::~Ldp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_data() const
{
    return (tunnel !=  nullptr && tunnel->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Tunnel()
    :
    ldp_type{YType::enumeration, "ldp-type"},
    tunnel_type{YType::enumeration, "tunnel-type"}
    	,
    mp2mp_lsp(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp>())
	,p2mp_lsp(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp>())
	,p2p_lsp(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp>())
{
    mp2mp_lsp->parent = this;
    p2mp_lsp->parent = this;
    p2p_lsp->parent = this;

    yang_name = "tunnel"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::has_data() const
{
    return ldp_type.is_set
	|| tunnel_type.is_set
	|| (mp2mp_lsp !=  nullptr && mp2mp_lsp->has_data())
	|| (p2mp_lsp !=  nullptr && p2mp_lsp->has_data())
	|| (p2p_lsp !=  nullptr && p2p_lsp->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp_type.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| (mp2mp_lsp !=  nullptr && mp2mp_lsp->has_operation())
	|| (p2mp_lsp !=  nullptr && p2mp_lsp->has_operation())
	|| (p2p_lsp !=  nullptr && p2p_lsp->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_type.is_set || is_set(ldp_type.yfilter)) leaf_name_data.push_back(ldp_type.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-lsp")
    {
        if(mp2mp_lsp == nullptr)
        {
            mp2mp_lsp = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp>();
        }
        return mp2mp_lsp;
    }

    if(child_yang_name == "p2mp-lsp")
    {
        if(p2mp_lsp == nullptr)
        {
            p2mp_lsp = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp>();
        }
        return p2mp_lsp;
    }

    if(child_yang_name == "p2p-lsp")
    {
        if(p2p_lsp == nullptr)
        {
            p2p_lsp = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp>();
        }
        return p2p_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mp2mp_lsp != nullptr)
    {
        children["mp2mp-lsp"] = mp2mp_lsp;
    }

    if(p2mp_lsp != nullptr)
    {
        children["p2mp-lsp"] = p2mp_lsp;
    }

    if(p2p_lsp != nullptr)
    {
        children["p2p-lsp"] = p2p_lsp;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-type")
    {
        ldp_type = value;
        ldp_type.value_namespace = name_space;
        ldp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-type")
    {
        ldp_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-lsp" || name == "p2mp-lsp" || name == "p2p-lsp" || name == "ldp-type" || name == "tunnel-type")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::Mp2MpLsp()
{

    yang_name = "mp2mp-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::~Mp2MpLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::has_data() const
{
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::has_operation() const
{
    return is_set(yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::P2MpLsp()
{

    yang_name = "p2mp-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::~P2MpLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::has_data() const
{
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::has_operation() const
{
    return is_set(yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::P2PLsp()
    :
    fec_address{YType::str, "fec-address"}
{

    yang_name = "p2p-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::~P2PLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::has_data() const
{
    for (auto const & leaf : fec_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::has_operation() const
{
    for (auto const & leaf : fec_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fec_address.yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/ldp/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto fec_address_name_datas = fec_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fec_address_name_datas.begin(), fec_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-address")
    {
        fec_address.append(value);
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-address")
    {
        fec_address.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-address")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::SegmentRouting()
    :
    tunnel(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel>())
{
    tunnel->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "path-setup-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::~SegmentRouting()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::has_data() const
{
    return (tunnel !=  nullptr && tunnel->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::Tunnel()
    :
    tunnel_type{YType::enumeration, "tunnel-type"}
    	,
    p2p_lsp(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp>())
{
    p2p_lsp->parent = this;

    yang_name = "tunnel"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::has_data() const
{
    return tunnel_type.is_set
	|| (p2p_lsp !=  nullptr && p2p_lsp->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| (p2p_lsp !=  nullptr && p2p_lsp->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-lsp")
    {
        if(p2p_lsp == nullptr)
        {
            p2p_lsp = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp>();
        }
        return p2p_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2p_lsp != nullptr)
    {
        children["p2p-lsp"] = p2p_lsp;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-lsp" || name == "tunnel-type")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::P2PLsp()
{

    yang_name = "p2p-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::~P2PLsp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::has_data() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::has_operation() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/segment-routing/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        for(auto const & c : fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec>();
        c->parent = this;
        fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Fec()
    :
    fec_address{YType::str, "fec-address"}
    	,
    config(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config>())
	,prefix_sid(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid>())
	,state(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State>())
{
    config->parent = this;
    prefix_sid->parent = this;
    state->parent = this;

    yang_name = "fec"; yang_parent_name = "p2p-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::~Fec()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::has_data() const
{
    return fec_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/segment-routing/tunnel/p2p-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec" <<"[fec-address='" <<fec_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_address.is_set || is_set(fec_address.yfilter)) leaf_name_data.push_back(fec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config>();
        }
        return config;
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid == nullptr)
        {
            prefix_sid = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid>();
        }
        return prefix_sid;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(prefix_sid != nullptr)
    {
        children["prefix-sid"] = prefix_sid;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-address")
    {
        fec_address = value;
        fec_address.value_namespace = name_space;
        fec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-address")
    {
        fec_address.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "prefix-sid" || name == "state" || name == "fec-address")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::Config()
    :
    fec_address{YType::str, "fec-address"}
{

    yang_name = "config"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::~Config()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::has_data() const
{
    return fec_address.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_address.yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_address.is_set || is_set(fec_address.yfilter)) leaf_name_data.push_back(fec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-address")
    {
        fec_address = value;
        fec_address.value_namespace = name_space;
        fec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-address")
    {
        fec_address.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-address")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::PrefixSid()
    :
    config(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config>())
	,state(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::~PrefixSid()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::Config()
    :
    last_hop_behavior{YType::enumeration, "last-hop-behavior"},
    node_flag{YType::boolean, "node-flag"},
    type{YType::enumeration, "type"}
{

    yang_name = "config"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::~Config()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::has_data() const
{
    return last_hop_behavior.is_set
	|| node_flag.is_set
	|| type.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_hop_behavior.yfilter)
	|| ydk::is_set(node_flag.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_hop_behavior.is_set || is_set(last_hop_behavior.yfilter)) leaf_name_data.push_back(last_hop_behavior.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.yfilter)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-hop-behavior")
    {
        last_hop_behavior = value;
        last_hop_behavior.value_namespace = name_space;
        last_hop_behavior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
        node_flag.value_namespace = name_space;
        node_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-hop-behavior")
    {
        last_hop_behavior.yfilter = yfilter;
    }
    if(value_path == "node-flag")
    {
        node_flag.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-hop-behavior" || name == "node-flag" || name == "type")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::State()
    :
    last_hop_behavior{YType::enumeration, "last-hop-behavior"},
    node_flag{YType::boolean, "node-flag"},
    type{YType::enumeration, "type"}
{

    yang_name = "state"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::~State()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::has_data() const
{
    return last_hop_behavior.is_set
	|| node_flag.is_set
	|| type.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_hop_behavior.yfilter)
	|| ydk::is_set(node_flag.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_hop_behavior.is_set || is_set(last_hop_behavior.yfilter)) leaf_name_data.push_back(last_hop_behavior.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.yfilter)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-hop-behavior")
    {
        last_hop_behavior = value;
        last_hop_behavior.value_namespace = name_space;
        last_hop_behavior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
        node_flag.value_namespace = name_space;
        node_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-hop-behavior")
    {
        last_hop_behavior.yfilter = yfilter;
    }
    if(value_path == "node-flag")
    {
        node_flag.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-hop-behavior" || name == "node-flag" || name == "type")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::State()
    :
    fec_address{YType::str, "fec-address"}
{

    yang_name = "state"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::~State()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::has_data() const
{
    return fec_address.is_set;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_address.yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_address.is_set || is_set(fec_address.yfilter)) leaf_name_data.push_back(fec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-address")
    {
        fec_address = value;
        fec_address.value_namespace = name_space;
        fec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-address")
    {
        fec_address.yfilter = yfilter;
    }
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-address")
        return true;
    return false;
}

Mpls::SignalingProtocols::SignalingProtocols()
    :
    ldp(std::make_shared<Mpls::SignalingProtocols::Ldp>())
	,rsvp_te(std::make_shared<Mpls::SignalingProtocols::RsvpTe>())
	,segment_routing(std::make_shared<Mpls::SignalingProtocols::SegmentRouting>())
{
    ldp->parent = this;
    rsvp_te->parent = this;
    segment_routing->parent = this;

    yang_name = "signaling-protocols"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::~SignalingProtocols()
{
}

bool Mpls::SignalingProtocols::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (rsvp_te !=  nullptr && rsvp_te->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Mpls::SignalingProtocols::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (rsvp_te !=  nullptr && rsvp_te->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Mpls::SignalingProtocols::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Mpls::SignalingProtocols::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "rsvp-te")
    {
        if(rsvp_te == nullptr)
        {
            rsvp_te = std::make_shared<Mpls::SignalingProtocols::RsvpTe>();
        }
        return rsvp_te;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Mpls::SignalingProtocols::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(rsvp_te != nullptr)
    {
        children["rsvp-te"] = rsvp_te;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Mpls::SignalingProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp" || name == "rsvp-te" || name == "segment-routing")
        return true;
    return false;
}

Mpls::SignalingProtocols::Ldp::Ldp()
    :
    timers(std::make_shared<Mpls::SignalingProtocols::Ldp::Timers>())
{
    timers->parent = this;

    yang_name = "ldp"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::Ldp::~Ldp()
{
}

bool Mpls::SignalingProtocols::Ldp::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Mpls::SignalingProtocols::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Mpls::SignalingProtocols::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Mpls::SignalingProtocols::Ldp::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Mpls::SignalingProtocols::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Mpls::SignalingProtocols::Ldp::Timers::Timers()
{

    yang_name = "timers"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::Ldp::Timers::~Timers()
{
}

bool Mpls::SignalingProtocols::Ldp::Timers::has_data() const
{
    return false;
}

bool Mpls::SignalingProtocols::Ldp::Timers::has_operation() const
{
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::Ldp::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::Ldp::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::Ldp::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::Ldp::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::Ldp::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::Ldp::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::Ldp::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::Ldp::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::SignalingProtocols::RsvpTe::RsvpTe()
    :
    global(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global>())
	,interface_attributes(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>())
	,neighbors(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors>())
	,sessions(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions>())
{
    global->parent = this;
    interface_attributes->parent = this;
    neighbors->parent = this;
    sessions->parent = this;

    yang_name = "rsvp-te"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::~RsvpTe()
{
}

bool Mpls::SignalingProtocols::RsvpTe::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (interface_attributes !=  nullptr && interface_attributes->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (interface_attributes !=  nullptr && interface_attributes->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global>();
        }
        return global;
    }

    if(child_yang_name == "interface-attributes")
    {
        if(interface_attributes == nullptr)
        {
            interface_attributes = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>();
        }
        return interface_attributes;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interface_attributes != nullptr)
    {
        children["interface-attributes"] = interface_attributes;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "interface-attributes" || name == "neighbors" || name == "sessions")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Global()
    :
    graceful_restart(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>())
	,hellos(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>())
	,soft_preemption(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::State>())
{
    graceful_restart->parent = this;
    hellos->parent = this;
    soft_preemption->parent = this;
    state->parent = this;

    yang_name = "global"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::~Global()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_data() const
{
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (hellos !=  nullptr && hellos->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "hellos")
    {
        if(hellos == nullptr)
        {
            hellos = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>();
        }
        return hellos;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(hellos != nullptr)
    {
        children["hellos"] = hellos;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "hellos" || name == "soft-preemption" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::~GracefulRestart()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::Config()
    :
    enable{YType::boolean, "enable"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_time{YType::uint32, "restart-time"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_data() const
{
    return enable.is_set
	|| recovery_time.is_set
	|| restart_time.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(restart_time.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "recovery-time" || name == "restart-time")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::State()
    :
    enable{YType::boolean, "enable"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_time{YType::uint32, "restart-time"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_data() const
{
    return enable.is_set
	|| recovery_time.is_set
	|| restart_time.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(restart_time.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "recovery-time" || name == "restart-time")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Hellos()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "hellos"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::~Hellos()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hellos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::Config()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "config"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/hellos/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::State()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "state"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/hellos/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::SoftPreemption()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::~SoftPreemption()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::Config()
    :
    enable{YType::boolean, "enable"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"}
{

    yang_name = "config"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_data() const
{
    return enable.is_set
	|| soft_preemption_timeout.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/soft-preemption/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "soft-preemption-timeout")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::State()
    :
    enable{YType::boolean, "enable"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"}
{

    yang_name = "state"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_data() const
{
    return enable.is_set
	|| soft_preemption_timeout.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/soft-preemption/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "soft-preemption-timeout")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::State::State()
    :
    counters(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::has_data() const
{
    return (counters !=  nullptr && counters->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::Counters()
    :
    in_ack_messages{YType::uint64, "in-ack-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    path_timeouts{YType::uint64, "path-timeouts"},
    rate_limited_messages{YType::uint64, "rate-limited-messages"},
    reservation_timeouts{YType::uint64, "reservation-timeouts"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::~Counters()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_data() const
{
    return in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set
	|| path_timeouts.is_set
	|| rate_limited_messages.is_set
	|| reservation_timeouts.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(path_timeouts.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(reservation_timeouts.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/global/state/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (path_timeouts.is_set || is_set(path_timeouts.yfilter)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.yfilter)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
        path_timeouts.value_namespace = name_space;
        path_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
        reservation_timeouts.value_namespace = name_space;
        reservation_timeouts.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "path-timeouts")
    {
        path_timeouts.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-ack-messages" || name == "in-hello-messages" || name == "in-path-error-messages" || name == "in-path-messages" || name == "in-path-tear-messages" || name == "in-reservation-error-messages" || name == "in-reservation-messages" || name == "in-reservation-tear-messages" || name == "in-srefresh-messages" || name == "out-ack-messages" || name == "out-hello-messages" || name == "out-path-error-messages" || name == "out-path-messages" || name == "out-path-tear-messages" || name == "out-reservation-error-messages" || name == "out-reservation-messages" || name == "out-reservation-tear-messages" || name == "out-srefresh-messages" || name == "path-timeouts" || name == "rate-limited-messages" || name == "reservation-timeouts")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::InterfaceAttributes()
{

    yang_name = "interface-attributes"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::~InterfaceAttributes()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    authentication(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>())
	,config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>())
	,hellos(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>())
	,protection(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>())
	,subscription(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>())
{
    authentication->parent = this;
    config->parent = this;
    hellos->parent = this;
    protection->parent = this;
    state->parent = this;
    subscription->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_data() const
{
    return interface_name.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (subscription !=  nullptr && subscription->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (hellos !=  nullptr && hellos->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (subscription !=  nullptr && subscription->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/interface-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "hellos")
    {
        if(hellos == nullptr)
        {
            hellos = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>();
        }
        return hellos;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "subscription")
    {
        if(subscription == nullptr)
        {
            subscription = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>();
        }
        return subscription;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(hellos != nullptr)
    {
        children["hellos"] = hellos;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(subscription != nullptr)
    {
        children["subscription"] = subscription;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "config" || name == "hellos" || name == "protection" || name == "state" || name == "subscription" || name == "interface-name")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Authentication()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::~Authentication()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::Config()
    :
    authentication_key{YType::str, "authentication-key"},
    enable{YType::boolean, "enable"}
{

    yang_name = "config"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_data() const
{
    return authentication_key.is_set
	|| enable.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "enable")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::State()
    :
    authentication_key{YType::str, "authentication-key"},
    enable{YType::boolean, "enable"}
{

    yang_name = "state"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_data() const
{
    return authentication_key.is_set
	|| enable.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "enable")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::Config()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_data() const
{
    return interface_name.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Hellos()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "hellos"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::~Hellos()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hellos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::Config()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "config"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::State()
    :
    hello_interval{YType::uint16, "hello-interval"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "state"; yang_parent_name = "hellos"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_data() const
{
    return hello_interval.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "refresh-reduction")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Protection()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "protection"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::~Protection()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::Config()
    :
    bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"},
    link_protection_style_requested{YType::identityref, "link-protection-style-requested"}
{

    yang_name = "config"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_data() const
{
    return bypass_optimize_interval.is_set
	|| link_protection_style_requested.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypass_optimize_interval.yfilter)
	|| ydk::is_set(link_protection_style_requested.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.yfilter)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());
    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.yfilter)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
        bypass_optimize_interval.value_namespace = name_space;
        bypass_optimize_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
        link_protection_style_requested.value_namespace = name_space;
        link_protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval.yfilter = yfilter;
    }
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypass-optimize-interval" || name == "link-protection-style-requested")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::State()
    :
    bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"},
    link_protection_style_requested{YType::identityref, "link-protection-style-requested"}
{

    yang_name = "state"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_data() const
{
    return bypass_optimize_interval.is_set
	|| link_protection_style_requested.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypass_optimize_interval.yfilter)
	|| ydk::is_set(link_protection_style_requested.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.yfilter)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());
    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.yfilter)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
        bypass_optimize_interval.value_namespace = name_space;
        bypass_optimize_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
        link_protection_style_requested.value_namespace = name_space;
        link_protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval.yfilter = yfilter;
    }
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypass-optimize-interval" || name == "link-protection-style-requested")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::State()
    :
    active_reservation_count{YType::uint64, "active-reservation-count"},
    highwater_mark{YType::uint64, "highwater-mark"}
    	,
    counters(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_data() const
{
    for (std::size_t index=0; index<bandwidth.size(); index++)
    {
        if(bandwidth[index]->has_data())
            return true;
    }
    return active_reservation_count.is_set
	|| highwater_mark.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_operation() const
{
    for (std::size_t index=0; index<bandwidth.size(); index++)
    {
        if(bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_reservation_count.yfilter)
	|| ydk::is_set(highwater_mark.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_reservation_count.is_set || is_set(active_reservation_count.yfilter)) leaf_name_data.push_back(active_reservation_count.get_name_leafdata());
    if (highwater_mark.is_set || is_set(highwater_mark.yfilter)) leaf_name_data.push_back(highwater_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        for(auto const & c : bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth>();
        c->parent = this;
        bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-reservation-count")
    {
        active_reservation_count = value;
        active_reservation_count.value_namespace = name_space;
        active_reservation_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark = value;
        highwater_mark.value_namespace = name_space;
        highwater_mark.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-reservation-count")
    {
        active_reservation_count.yfilter = yfilter;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "counters" || name == "active-reservation-count" || name == "highwater-mark")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::Bandwidth()
    :
    priority{YType::uint8, "priority"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::~Bandwidth()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::has_data() const
{
    return priority.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth" <<"[priority='" <<priority <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "available-bandwidth" || name == "reserved-bandwidth")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::Counters()
    :
    in_ack_messages{YType::uint64, "in-ack-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::~Counters()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_data() const
{
    return in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-ack-messages" || name == "in-hello-messages" || name == "in-path-error-messages" || name == "in-path-messages" || name == "in-path-tear-messages" || name == "in-reservation-error-messages" || name == "in-reservation-messages" || name == "in-reservation-tear-messages" || name == "in-srefresh-messages" || name == "out-ack-messages" || name == "out-hello-messages" || name == "out-path-error-messages" || name == "out-path-messages" || name == "out-path-tear-messages" || name == "out-reservation-error-messages" || name == "out-reservation-messages" || name == "out-reservation-tear-messages" || name == "out-srefresh-messages")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Subscription()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "subscription"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::~Subscription()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::Config()
    :
    subscription{YType::uint8, "subscription"}
{

    yang_name = "config"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_data() const
{
    return subscription.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription.is_set || is_set(subscription.yfilter)) leaf_name_data.push_back(subscription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription")
    {
        subscription = value;
        subscription.value_namespace = name_space;
        subscription.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription")
    {
        subscription.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::State()
    :
    subscription{YType::uint8, "subscription"}
{

    yang_name = "state"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_data() const
{
    return subscription.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription.is_set || is_set(subscription.yfilter)) leaf_name_data.push_back(subscription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription")
    {
        subscription = value;
        subscription.value_namespace = name_space;
        subscription.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription")
    {
        subscription.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbors()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "neighbors"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::~Neighbors()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::Config()
{

    yang_name = "config"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::has_data() const
{
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::State()
{

    yang_name = "state"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    detected_interface{YType::str, "detected-interface"},
    neighbor_status{YType::enumeration, "neighbor-status"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "neighbor"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::~Neighbor()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::has_data() const
{
    return address.is_set
	|| detected_interface.is_set
	|| neighbor_status.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(detected_interface.yfilter)
	|| ydk::is_set(neighbor_status.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/state/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (detected_interface.is_set || is_set(detected_interface.yfilter)) leaf_name_data.push_back(detected_interface.get_name_leafdata());
    if (neighbor_status.is_set || is_set(neighbor_status.yfilter)) leaf_name_data.push_back(neighbor_status.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detected-interface")
    {
        detected_interface = value;
        detected_interface.value_namespace = name_space;
        detected_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-status")
    {
        neighbor_status = value;
        neighbor_status.value_namespace = name_space;
        neighbor_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction = value;
        refresh_reduction.value_namespace = name_space;
        refresh_reduction.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "detected-interface")
    {
        detected_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-status")
    {
        neighbor_status.yfilter = yfilter;
    }
    if(value_path == "refresh-reduction")
    {
        refresh_reduction.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "detected-interface" || name == "neighbor-status" || name == "refresh-reduction")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Sessions()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "sessions"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::~Sessions()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::RsvpTe::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Config::Config()
{

    yang_name = "config"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Config::has_data() const
{
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::State()
{

    yang_name = "state"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Session()
    :
    source_port{YType::uint16, "source-port"},
    destination_port{YType::uint16, "destination-port"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    associated_lsps{YType::str, "associated-lsps"},
    label_in{YType::str, "label-in"},
    label_out{YType::str, "label-out"},
    status{YType::enumeration, "status"},
    tunnel_id{YType::uint16, "tunnel-id"},
    type{YType::enumeration, "type"}
{

    yang_name = "session"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::~Session()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::has_data() const
{
    for (auto const & leaf : associated_lsps.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_port.is_set
	|| destination_port.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| label_in.is_set
	|| label_out.is_set
	|| status.is_set
	|| tunnel_id.is_set
	|| type.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::has_operation() const
{
    for (auto const & leaf : associated_lsps.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(associated_lsps.yfilter)
	|| ydk::is_set(label_in.yfilter)
	|| ydk::is_set(label_out.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/state/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[source-port='" <<source_port <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (label_in.is_set || is_set(label_in.yfilter)) leaf_name_data.push_back(label_in.get_name_leafdata());
    if (label_out.is_set || is_set(label_out.yfilter)) leaf_name_data.push_back(label_out.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto associated_lsps_name_datas = associated_lsps.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), associated_lsps_name_datas.begin(), associated_lsps_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-lsps")
    {
        associated_lsps.append(value);
    }
    if(value_path == "label-in")
    {
        label_in = value;
        label_in.value_namespace = name_space;
        label_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-out")
    {
        label_out = value;
        label_out.value_namespace = name_space;
        label_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "associated-lsps")
    {
        associated_lsps.yfilter = yfilter;
    }
    if(value_path == "label-in")
    {
        label_in.yfilter = yfilter;
    }
    if(value_path == "label-out")
    {
        label_out.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-port" || name == "destination-port" || name == "source-address" || name == "destination-address" || name == "associated-lsps" || name == "label-in" || name == "label-out" || name == "status" || name == "tunnel-id" || name == "type")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::SegmentRouting()
{

    yang_name = "segment-routing"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::SegmentRouting::~SegmentRouting()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::has_data() const
{
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb.size(); index++)
    {
        if(srgb[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::has_operation() const
{
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb.size(); index++)
    {
        if(srgb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        for(auto const & c : interfaces)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces>();
        c->parent = this;
        interfaces.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb")
    {
        for(auto const & c : srgb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Srgb>();
        c->parent = this;
        srgb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interfaces)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srgb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "srgb")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"}
    	,
    adjacency_sid(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid>())
	,config(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::State>())
{
    adjacency_sid->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "interfaces"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::~Interfaces()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_data() const
{
    return interface.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

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

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "config" || name == "state" || name == "interface")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::AdjacencySid()
    :
    config(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::~AdjacencySid()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::Config()
    :
    advertise{YType::enumeration, "advertise"},
    groups{YType::uint32, "groups"}
{

    yang_name = "config"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::has_data() const
{
    for (auto const & leaf : advertise.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : groups.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::has_operation() const
{
    for (auto const & leaf : advertise.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : groups.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(groups.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto advertise_name_datas = advertise.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), advertise_name_datas.begin(), advertise_name_datas.end());
    auto groups_name_datas = groups.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), groups_name_datas.begin(), groups_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise.append(value);
    }
    if(value_path == "groups")
    {
        groups.append(value);
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "groups")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::State()
    :
    advertise{YType::enumeration, "advertise"},
    groups{YType::uint32, "groups"}
{

    yang_name = "state"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::has_data() const
{
    for (auto const & leaf : advertise.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : groups.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::has_operation() const
{
    for (auto const & leaf : advertise.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : groups.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(groups.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto advertise_name_datas = advertise.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), advertise_name_datas.begin(), advertise_name_datas.end());
    auto groups_name_datas = groups.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), groups_name_datas.begin(), groups_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise.append(value);
    }
    if(value_path == "groups")
    {
        groups.append(value);
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "groups")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::Config()
    :
    interface{YType::str, "interface"}
{

    yang_name = "config"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::has_data() const
{
    return interface.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::State()
    :
    interface{YType::str, "interface"}
{

    yang_name = "state"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::has_data() const
{
    return interface.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Srgb()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
    	,
    config(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Srgb::Config>())
	,state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Srgb::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "srgb"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::~Srgb()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb" <<"[lower-bound='" <<lower_bound <<"']" <<"[upper-bound='" <<upper_bound <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Srgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Srgb::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Srgb::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Srgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::SignalingProtocols::SegmentRouting::Srgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::Config()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "config"; yang_parent_name = "srgb"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::State::State()
    :
    free{YType::uint32, "free"},
    lower_bound{YType::uint32, "lower-bound"},
    size{YType::uint32, "size"},
    upper_bound{YType::uint32, "upper-bound"},
    used{YType::uint32, "used"}
{

    yang_name = "state"; yang_parent_name = "srgb"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::SignalingProtocols::SegmentRouting::Srgb::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::State::has_data() const
{
    return free.is_set
	|| lower_bound.is_set
	|| size.is_set
	|| upper_bound.is_set
	|| used.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(upper_bound.yfilter)
	|| ydk::is_set(used.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::SignalingProtocols::SegmentRouting::Srgb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Srgb::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Srgb::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free" || name == "lower-bound" || name == "size" || name == "upper-bound" || name == "used")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::TeGlobalAttributes()
    :
    igp_flooding_bandwidth(std::make_shared<Mpls::TeGlobalAttributes::IgpFloodingBandwidth>())
	,mpls_admin_groups(std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups>())
	,srlg(std::make_shared<Mpls::TeGlobalAttributes::Srlg>())
	,te_lsp_timers(std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers>())
{
    igp_flooding_bandwidth->parent = this;
    mpls_admin_groups->parent = this;
    srlg->parent = this;
    te_lsp_timers->parent = this;

    yang_name = "te-global-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::~TeGlobalAttributes()
{
}

bool Mpls::TeGlobalAttributes::has_data() const
{
    return (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_data())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_data())
	|| (srlg !=  nullptr && srlg->has_data())
	|| (te_lsp_timers !=  nullptr && te_lsp_timers->has_data());
}

bool Mpls::TeGlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_operation())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation())
	|| (te_lsp_timers !=  nullptr && te_lsp_timers->has_operation());
}

std::string Mpls::TeGlobalAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-global-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-flooding-bandwidth")
    {
        if(igp_flooding_bandwidth == nullptr)
        {
            igp_flooding_bandwidth = std::make_shared<Mpls::TeGlobalAttributes::IgpFloodingBandwidth>();
        }
        return igp_flooding_bandwidth;
    }

    if(child_yang_name == "mpls-admin-groups")
    {
        if(mpls_admin_groups == nullptr)
        {
            mpls_admin_groups = std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups>();
        }
        return mpls_admin_groups;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<Mpls::TeGlobalAttributes::Srlg>();
        }
        return srlg;
    }

    if(child_yang_name == "te-lsp-timers")
    {
        if(te_lsp_timers == nullptr)
        {
            te_lsp_timers = std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers>();
        }
        return te_lsp_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_flooding_bandwidth != nullptr)
    {
        children["igp-flooding-bandwidth"] = igp_flooding_bandwidth;
    }

    if(mpls_admin_groups != nullptr)
    {
        children["mpls-admin-groups"] = mpls_admin_groups;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    if(te_lsp_timers != nullptr)
    {
        children["te-lsp-timers"] = te_lsp_timers;
    }

    return children;
}

void Mpls::TeGlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-flooding-bandwidth" || name == "mpls-admin-groups" || name == "srlg" || name == "te-lsp-timers")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::IgpFloodingBandwidth()
    :
    config(std::make_shared<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config>())
	,state(std::make_shared<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "igp-flooding-bandwidth"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::~IgpFloodingBandwidth()
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-flooding-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::IgpFloodingBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::Config()
    :
    delta_percentage{YType::uint8, "delta-percentage"},
    down_thresholds{YType::uint8, "down-thresholds"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    threshold_type{YType::enumeration, "threshold-type"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"},
    up_thresholds{YType::uint8, "up-thresholds"}
{

    yang_name = "config"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::has_data() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::has_operation() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter)
	|| ydk::is_set(up_thresholds.yfilter);
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/igp-flooding-bandwidth/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-percentage" || name == "down-thresholds" || name == "threshold-specification" || name == "threshold-type" || name == "up-down-thresholds" || name == "up-thresholds")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::State()
    :
    delta_percentage{YType::uint8, "delta-percentage"},
    down_thresholds{YType::uint8, "down-thresholds"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    threshold_type{YType::enumeration, "threshold-type"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"},
    up_thresholds{YType::uint8, "up-thresholds"}
{

    yang_name = "state"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::~State()
{
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::has_data() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::has_operation() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter)
	|| ydk::is_set(up_thresholds.yfilter);
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/igp-flooding-bandwidth/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

void Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-percentage" || name == "down-thresholds" || name == "threshold-specification" || name == "threshold-type" || name == "up-down-thresholds" || name == "up-thresholds")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::MplsAdminGroups()
{

    yang_name = "mpls-admin-groups"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::~MplsAdminGroups()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_data() const
{
    for (std::size_t index=0; index<admin_group.size(); index++)
    {
        if(admin_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_operation() const
{
    for (std::size_t index=0; index<admin_group.size(); index++)
    {
        if(admin_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::MplsAdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-group")
    {
        for(auto const & c : admin_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup>();
        c->parent = this;
        admin_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : admin_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::AdminGroup()
    :
    admin_group_name{YType::str, "admin-group-name"}
    	,
    config(std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>())
	,state(std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-group"; yang_parent_name = "mpls-admin-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::~AdminGroup()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_data() const
{
    return admin_group_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_group_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/mpls-admin-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-group" <<"[admin-group-name='" <<admin_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
        admin_group_name.value_namespace = name_space;
        admin_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "admin-group-name")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::Config()
    :
    admin_group_name{YType::str, "admin-group-name"},
    bit_position{YType::uint32, "bit-position"}
{

    yang_name = "config"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_data() const
{
    return admin_group_name.is_set
	|| bit_position.is_set;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_group_name.yfilter)
	|| ydk::is_set(bit_position.yfilter);
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.yfilter)) leaf_name_data.push_back(bit_position.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
        admin_group_name.value_namespace = name_space;
        admin_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
        bit_position.value_namespace = name_space;
        bit_position.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name.yfilter = yfilter;
    }
    if(value_path == "bit-position")
    {
        bit_position.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group-name" || name == "bit-position")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::State()
    :
    admin_group_name{YType::str, "admin-group-name"},
    bit_position{YType::uint32, "bit-position"}
{

    yang_name = "state"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::~State()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_data() const
{
    return admin_group_name.is_set
	|| bit_position.is_set;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_group_name.yfilter)
	|| ydk::is_set(bit_position.yfilter);
}

std::string Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.yfilter)) leaf_name_data.push_back(bit_position.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name = value;
        admin_group_name.value_namespace = name_space;
        admin_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
        bit_position.value_namespace = name_space;
        bit_position.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group-name")
    {
        admin_group_name.yfilter = yfilter;
    }
    if(value_path == "bit-position")
    {
        bit_position.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group-name" || name == "bit-position")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg()
{

    yang_name = "srlg"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::Srlg::~Srlg()
{
}

bool Mpls::TeGlobalAttributes::Srlg::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::Srlg_()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::Config>())
	,state(std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::State>())
	,static_srlg_members(std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers>())
{
    config->parent = this;
    state->parent = this;
    static_srlg_members->parent = this;

    yang_name = "srlg"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::~Srlg_()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_operation());
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::State>();
        }
        return state;
    }

    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members == nullptr)
        {
            static_srlg_members = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers>();
        }
        return static_srlg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(static_srlg_members != nullptr)
    {
        children["static-srlg-members"] = static_srlg_members;
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "static-srlg-members" || name == "name")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::Config()
    :
    cost{YType::uint32, "cost"},
    flooding_type{YType::enumeration, "flooding-type"},
    name{YType::str, "name"},
    value_{YType::uint32, "value"}
{

    yang_name = "config"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::has_data() const
{
    return cost.is_set
	|| flooding_type.is_set
	|| name.is_set
	|| value_.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flooding_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.yfilter)) leaf_name_data.push_back(flooding_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-type")
    {
        flooding_type = value;
        flooding_type.value_namespace = name_space;
        flooding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flooding-type")
    {
        flooding_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "flooding-type" || name == "name" || name == "value")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::State::State()
    :
    cost{YType::uint32, "cost"},
    flooding_type{YType::enumeration, "flooding-type"},
    name{YType::str, "name"},
    value_{YType::uint32, "value"}
{

    yang_name = "state"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::State::~State()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::State::has_data() const
{
    return cost.is_set
	|| flooding_type.is_set
	|| name.is_set
	|| value_.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flooding_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.yfilter)) leaf_name_data.push_back(flooding_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-type")
    {
        flooding_type = value;
        flooding_type.value_namespace = name_space;
        flooding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flooding-type")
    {
        flooding_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "flooding-type" || name == "name" || name == "value")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::StaticSrlgMembers()
{

    yang_name = "static-srlg-members"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::has_data() const
{
    for (std::size_t index=0; index<members_list.size(); index++)
    {
        if(members_list[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<members_list.size(); index++)
    {
        if(members_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members-list")
    {
        for(auto const & c : members_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList>();
        c->parent = this;
        members_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : members_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members-list")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::MembersList()
    :
    from_address{YType::str, "from-address"}
    	,
    config(std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config>())
	,state(std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "members-list"; yang_parent_name = "static-srlg-members"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::~MembersList()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::has_data() const
{
    return from_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members-list" <<"[from-address='" <<from_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "from-address")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::Config()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "config"; yang_parent_name = "members-list"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::has_data() const
{
    return from_address.is_set
	|| to_address.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::State()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "state"; yang_parent_name = "members-list"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::~State()
{
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::has_data() const
{
    return from_address.is_set
	|| to_address.is_set;
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::TeLspTimers::TeLspTimers()
    :
    config(std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers::Config>())
	,state(std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "te-lsp-timers"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::TeLspTimers::~TeLspTimers()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::TeLspTimers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-lsp-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::TeLspTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::TeLspTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::TeLspTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::TeGlobalAttributes::TeLspTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::TeLspTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::TeLspTimers::Config::Config()
    :
    cleanup_delay{YType::uint16, "cleanup-delay"},
    install_delay{YType::uint16, "install-delay"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"}
{

    yang_name = "config"; yang_parent_name = "te-lsp-timers"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::TeLspTimers::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_data() const
{
    return cleanup_delay.is_set
	|| install_delay.is_set
	|| reoptimize_timer.is_set;
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter);
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/te-lsp-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::TeLspTimers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::TeLspTimers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::TeLspTimers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::TeLspTimers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup-delay" || name == "install-delay" || name == "reoptimize-timer")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::TeLspTimers::State::State()
    :
    cleanup_delay{YType::uint16, "cleanup-delay"},
    install_delay{YType::uint16, "install-delay"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"}
{

    yang_name = "state"; yang_parent_name = "te-lsp-timers"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeGlobalAttributes::TeLspTimers::State::~State()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_data() const
{
    return cleanup_delay.is_set
	|| install_delay.is_set
	|| reoptimize_timer.is_set;
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter);
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/te-lsp-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::TeLspTimers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::TeLspTimers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeGlobalAttributes::TeLspTimers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeGlobalAttributes::TeLspTimers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::TeLspTimers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup-delay" || name == "install-delay" || name == "reoptimize-timer")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::TeInterfaceAttributes()
{

    yang_name = "te-interface-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeInterfaceAttributes::~TeInterfaceAttributes()
{
}

bool Mpls::TeInterfaceAttributes::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeInterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::TeInterfaceAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeInterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpls::TeInterfaceAttributes::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpls::TeInterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeInterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeInterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Mpls::TeInterfaceAttributes::Interface::Config>())
	,igp_flooding_bandwidth(std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>())
	,state(std::make_shared<Mpls::TeInterfaceAttributes::Interface::State>())
{
    config->parent = this;
    igp_flooding_bandwidth->parent = this;
    state->parent = this;

    yang_name = "interface"; yang_parent_name = "te-interface-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpls::TeInterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::TeInterfaceAttributes::Interface::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeInterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeInterfaceAttributes::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-interface-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeInterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeInterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "igp-flooding-bandwidth")
    {
        if(igp_flooding_bandwidth == nullptr)
        {
            igp_flooding_bandwidth = std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>();
        }
        return igp_flooding_bandwidth;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeInterfaceAttributes::Interface::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(igp_flooding_bandwidth != nullptr)
    {
        children["igp-flooding-bandwidth"] = igp_flooding_bandwidth;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Mpls::TeInterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeInterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "igp-flooding-bandwidth" || name == "state" || name == "name")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::Config::Config()
    :
    admin_group{YType::str, "admin-group"},
    name{YType::str, "name"},
    srlg_membership{YType::str, "srlg-membership"},
    te_metric{YType::uint32, "te-metric"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeInterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_data() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| te_metric.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_operation() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_group.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srlg_membership.yfilter)
	|| ydk::is_set(te_metric.yfilter);
}

std::string Mpls::TeInterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeInterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group" || name == "name" || name == "srlg-membership" || name == "te-metric")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::IgpFloodingBandwidth()
    :
    config(std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>())
	,state(std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "igp-flooding-bandwidth"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::~IgpFloodingBandwidth()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-flooding-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::Config()
    :
    delta_percentage{YType::uint8, "delta-percentage"},
    down_thresholds{YType::uint8, "down-thresholds"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    threshold_type{YType::enumeration, "threshold-type"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"},
    up_thresholds{YType::uint8, "up-thresholds"}
{

    yang_name = "config"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_data() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_operation() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter)
	|| ydk::is_set(up_thresholds.yfilter);
}

std::string Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-percentage" || name == "down-thresholds" || name == "threshold-specification" || name == "threshold-type" || name == "up-down-thresholds" || name == "up-thresholds")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::State()
    :
    delta_percentage{YType::uint8, "delta-percentage"},
    down_thresholds{YType::uint8, "down-thresholds"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    threshold_type{YType::enumeration, "threshold-type"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"},
    up_thresholds{YType::uint8, "up-thresholds"}
{

    yang_name = "state"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_data() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return delta_percentage.is_set
	|| threshold_specification.is_set
	|| threshold_type.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_operation() const
{
    for (auto const & leaf : down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_down_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter)
	|| ydk::is_set(up_thresholds.yfilter);
}

std::string Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());

    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-percentage" || name == "down-thresholds" || name == "threshold-specification" || name == "threshold-type" || name == "up-down-thresholds" || name == "up-thresholds")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::State::State()
    :
    admin_group{YType::str, "admin-group"},
    name{YType::str, "name"},
    srlg_membership{YType::str, "srlg-membership"},
    te_metric{YType::uint32, "te-metric"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mpls::TeInterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_data() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| te_metric.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_operation() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_group.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srlg_membership.yfilter)
	|| ydk::is_set(te_metric.yfilter);
}

std::string Mpls::TeInterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::TeInterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::TeInterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpls::TeInterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeInterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group" || name == "name" || name == "srlg-membership" || name == "te-metric")
        return true;
    return false;
}

PathComputationMethod::PathComputationMethod()
     : Identity("http://openconfig.net/yang/mpls", "openconfig-mpls", "openconfig-mpls:path-computation-method")
{

}

PathComputationMethod::~PathComputationMethod()
{
}

ExplicitlyDefined::ExplicitlyDefined()
     : Identity("http://openconfig.net/yang/mpls", "openconfig-mpls", "openconfig-mpls:explicitly-defined")
{

}

ExplicitlyDefined::~ExplicitlyDefined()
{
}

ExternallyQueried::ExternallyQueried()
     : Identity("http://openconfig.net/yang/mpls", "openconfig-mpls", "openconfig-mpls:externally-queried")
{

}

ExternallyQueried::~ExternallyQueried()
{
}

LocallyComputed::LocallyComputed()
     : Identity("http://openconfig.net/yang/mpls", "openconfig-mpls", "openconfig-mpls:locally-computed")
{

}

LocallyComputed::~LocallyComputed()
{
}

const Enum::YLeaf MplsSrlgFloodingType::FLOODED_SRLG {0, "FLOODED-SRLG"};
const Enum::YLeaf MplsSrlgFloodingType::STATIC_SRLG {1, "STATIC-SRLG"};

const Enum::YLeaf MplsHopType::LOOSE {0, "LOOSE"};
const Enum::YLeaf MplsHopType::STRICT {1, "STRICT"};

const Enum::YLeaf TeBandwidthType::SPECIFIED {0, "SPECIFIED"};
const Enum::YLeaf TeBandwidthType::AUTO {1, "AUTO"};

const Enum::YLeaf TeMetricType::IGP {0, "IGP"};

const Enum::YLeaf CspfTieBreaking::RANDOM {0, "RANDOM"};
const Enum::YLeaf CspfTieBreaking::LEAST_FILL {1, "LEAST_FILL"};
const Enum::YLeaf CspfTieBreaking::MOST_FILL {2, "MOST_FILL"};

const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::LdpType::BASIC {0, "BASIC"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::LdpType::TARGETED {1, "TARGETED"};

const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::Type::INDEX {0, "INDEX"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::Type::ABSOLUTE {1, "ABSOLUTE"};

const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehavior::EXPLICIT_NULL {0, "EXPLICIT-NULL"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehavior::UNCHANGED {1, "UNCHANGED"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehavior::PHP {2, "PHP"};

const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::Type::INDEX {0, "INDEX"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::Type::ABSOLUTE {1, "ABSOLUTE"};

const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehavior::EXPLICIT_NULL {0, "EXPLICIT-NULL"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehavior::UNCHANGED {1, "UNCHANGED"};
const Enum::YLeaf Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehavior::PHP {2, "PHP"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::NeighborStatus::UP {0, "UP"};
const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::NeighborStatus::DOWN {1, "DOWN"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Status::UP {0, "UP"};
const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Status::DOWN {1, "DOWN"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Type::SOURCE {0, "SOURCE"};
const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Type::TRANSIT {1, "TRANSIT"};
const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Type::DESTINATION {2, "DESTINATION"};

const Enum::YLeaf Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::Advertise::PROTECTED {0, "PROTECTED"};
const Enum::YLeaf Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::Advertise::UNPROTECTED {1, "UNPROTECTED"};

const Enum::YLeaf Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::Advertise::PROTECTED {0, "PROTECTED"};
const Enum::YLeaf Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::Advertise::UNPROTECTED {1, "UNPROTECTED"};

const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::YLeaf Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD-CROSSED"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED-UP-DOWN"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE-UP-DOWN"};


}
}

