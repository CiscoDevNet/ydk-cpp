
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_0.hpp"
#include "openconfig_mpls_1.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls {

Mpls::Mpls()
    :
    global(std::make_shared<Mpls::Global>())
    , te_global_attributes(std::make_shared<Mpls::TeGlobalAttributes>())
    , te_interface_attributes(std::make_shared<Mpls::TeInterfaceAttributes>())
    , signaling_protocols(std::make_shared<Mpls::SignalingProtocols>())
    , lsps(std::make_shared<Mpls::Lsps>())
{
    global->parent = this;
    te_global_attributes->parent = this;
    te_interface_attributes->parent = this;
    signaling_protocols->parent = this;
    lsps->parent = this;

    yang_name = "mpls"; yang_parent_name = "openconfig-mpls"; is_top_level_class = true; has_list_ancestor = false; 
}

Mpls::~Mpls()
{
}

bool Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_data())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_data())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_data())
	|| (lsps !=  nullptr && lsps->has_data());
}

bool Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (te_global_attributes !=  nullptr && te_global_attributes->has_operation())
	|| (te_interface_attributes !=  nullptr && te_interface_attributes->has_operation())
	|| (signaling_protocols !=  nullptr && signaling_protocols->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation());
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

std::shared_ptr<ydk::Entity> Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Mpls::Global>();
        }
        return global;
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

    if(child_yang_name == "signaling-protocols")
    {
        if(signaling_protocols == nullptr)
        {
            signaling_protocols = std::make_shared<Mpls::SignalingProtocols>();
        }
        return signaling_protocols;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<Mpls::Lsps>();
        }
        return lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(te_global_attributes != nullptr)
    {
        _children["te-global-attributes"] = te_global_attributes;
    }

    if(te_interface_attributes != nullptr)
    {
        _children["te-interface-attributes"] = te_interface_attributes;
    }

    if(signaling_protocols != nullptr)
    {
        _children["signaling-protocols"] = signaling_protocols;
    }

    if(lsps != nullptr)
    {
        _children["lsps"] = lsps;
    }

    return _children;
}

void Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Mpls::clone_ptr() const
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
    if(name == "global" || name == "te-global-attributes" || name == "te-interface-attributes" || name == "signaling-protocols" || name == "lsps")
        return true;
    return false;
}

Mpls::Global::Global()
    :
    config(std::make_shared<Mpls::Global::Config>())
    , state(std::make_shared<Mpls::Global::State>())
    , interface_attributes(std::make_shared<Mpls::Global::InterfaceAttributes>())
    , reserved_label_blocks(std::make_shared<Mpls::Global::ReservedLabelBlocks>())
{
    config->parent = this;
    state->parent = this;
    interface_attributes->parent = this;
    reserved_label_blocks->parent = this;

    yang_name = "global"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Global::~Global()
{
}

bool Mpls::Global::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_attributes !=  nullptr && interface_attributes->has_data())
	|| (reserved_label_blocks !=  nullptr && reserved_label_blocks->has_data());
}

bool Mpls::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_attributes !=  nullptr && interface_attributes->has_operation())
	|| (reserved_label_blocks !=  nullptr && reserved_label_blocks->has_operation());
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

std::shared_ptr<ydk::Entity> Mpls::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Global::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-attributes")
    {
        if(interface_attributes == nullptr)
        {
            interface_attributes = std::make_shared<Mpls::Global::InterfaceAttributes>();
        }
        return interface_attributes;
    }

    if(child_yang_name == "reserved-label-blocks")
    {
        if(reserved_label_blocks == nullptr)
        {
            reserved_label_blocks = std::make_shared<Mpls::Global::ReservedLabelBlocks>();
        }
        return reserved_label_blocks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::get_children() const
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

    if(interface_attributes != nullptr)
    {
        _children["interface-attributes"] = interface_attributes;
    }

    if(reserved_label_blocks != nullptr)
    {
        _children["reserved-label-blocks"] = reserved_label_blocks;
    }

    return _children;
}

void Mpls::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-attributes" || name == "reserved-label-blocks")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Mpls::Global::InterfaceAttributes::InterfaceAttributes()
    :
    interface(this, {"interface_id"})
{

    yang_name = "interface-attributes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Global::InterfaceAttributes::~InterfaceAttributes()
{
}

bool Mpls::Global::InterfaceAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Global::InterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Global::InterfaceAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::InterfaceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Mpls::Global::InterfaceAttributes::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Global::InterfaceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Global::InterfaceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Global::InterfaceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::Global::InterfaceAttributes::Interface::Interface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<Mpls::Global::InterfaceAttributes::Interface::Config>())
    , state(std::make_shared<Mpls::Global::InterfaceAttributes::Interface::State>())
    , interface_ref(std::make_shared<Mpls::Global::InterfaceAttributes::Interface::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Global::InterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::Global::InterfaceAttributes::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool Mpls::Global::InterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string Mpls::Global::InterfaceAttributes::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/interface-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::InterfaceAttributes::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Global::InterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Global::InterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Mpls::Global::InterfaceAttributes::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::Interface::get_children() const
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

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void Mpls::Global::InterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::InterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::Global::InterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "interface-id")
        return true;
    return false;
}

Mpls::Global::InterfaceAttributes::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"},
    mpls_enabled{YType::boolean, "mpls-enabled"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::InterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::Global::InterfaceAttributes::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| mpls_enabled.is_set;
}

bool Mpls::Global::InterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(mpls_enabled.yfilter);
}

std::string Mpls::Global::InterfaceAttributes::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (mpls_enabled.is_set || is_set(mpls_enabled.yfilter)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Global::InterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
        mpls_enabled.value_namespace = name_space;
        mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::InterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled.yfilter = yfilter;
    }
}

bool Mpls::Global::InterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "mpls-enabled")
        return true;
    return false;
}

Mpls::Global::InterfaceAttributes::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"},
    mpls_enabled{YType::boolean, "mpls-enabled"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::InterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::Global::InterfaceAttributes::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| mpls_enabled.is_set;
}

bool Mpls::Global::InterfaceAttributes::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(mpls_enabled.yfilter);
}

std::string Mpls::Global::InterfaceAttributes::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (mpls_enabled.is_set || is_set(mpls_enabled.yfilter)) leaf_name_data.push_back(mpls_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Global::InterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled = value;
        mpls_enabled.value_namespace = name_space;
        mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::InterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "mpls-enabled")
    {
        mpls_enabled.yfilter = yfilter;
    }
}

bool Mpls::Global::InterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "mpls-enabled")
        return true;
    return false;
}

Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config>())
    , state(std::make_shared<Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::~InterfaceRef()
{
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::get_children() const
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

void Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::~Config()
{
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::~State()
{
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlocks()
    :
    reserved_label_block(this, {"local_id"})
{

    yang_name = "reserved-label-blocks"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Global::ReservedLabelBlocks::~ReservedLabelBlocks()
{
}

bool Mpls::Global::ReservedLabelBlocks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reserved_label_block.len(); index++)
    {
        if(reserved_label_block[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Global::ReservedLabelBlocks::has_operation() const
{
    for (std::size_t index=0; index<reserved_label_block.len(); index++)
    {
        if(reserved_label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Global::ReservedLabelBlocks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::ReservedLabelBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserved-label-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::ReservedLabelBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::ReservedLabelBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserved-label-block")
    {
        auto ent_ = std::make_shared<Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock>();
        ent_->parent = this;
        reserved_label_block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::ReservedLabelBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reserved_label_block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Global::ReservedLabelBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Global::ReservedLabelBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Global::ReservedLabelBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserved-label-block")
        return true;
    return false;
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::ReservedLabelBlock()
    :
    local_id{YType::str, "local-id"}
        ,
    config(std::make_shared<Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config>())
    , state(std::make_shared<Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "reserved-label-block"; yang_parent_name = "reserved-label-blocks"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::~ReservedLabelBlock()
{
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/global/reserved-label-blocks/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserved-label-block";
    ADD_KEY_TOKEN(local_id, "local-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::get_children() const
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

void Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local-id")
        return true;
    return false;
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::Config()
    :
    local_id{YType::str, "local-id"},
    lower_bound{YType::str, "lower-bound"},
    upper_bound{YType::str, "upper-bound"}
{

    yang_name = "config"; yang_parent_name = "reserved-label-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::~Config()
{
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| lower_bound.is_set
	|| upper_bound.is_set;
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
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

void Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::State()
    :
    local_id{YType::str, "local-id"},
    lower_bound{YType::str, "lower-bound"},
    upper_bound{YType::str, "upper-bound"}
{

    yang_name = "state"; yang_parent_name = "reserved-label-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::~State()
{
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| lower_bound.is_set
	|| upper_bound.is_set;
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
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

void Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::TeGlobalAttributes()
    :
    srlgs(std::make_shared<Mpls::TeGlobalAttributes::Srlgs>())
    , mpls_admin_groups(std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups>())
    , te_lsp_timers(std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers>())
{
    srlgs->parent = this;
    mpls_admin_groups->parent = this;
    te_lsp_timers->parent = this;

    yang_name = "te-global-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeGlobalAttributes::~TeGlobalAttributes()
{
}

bool Mpls::TeGlobalAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (srlgs !=  nullptr && srlgs->has_data())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_data())
	|| (te_lsp_timers !=  nullptr && te_lsp_timers->has_data());
}

bool Mpls::TeGlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (mpls_admin_groups !=  nullptr && mpls_admin_groups->has_operation())
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

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<Mpls::TeGlobalAttributes::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "mpls-admin-groups")
    {
        if(mpls_admin_groups == nullptr)
        {
            mpls_admin_groups = std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups>();
        }
        return mpls_admin_groups;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srlgs != nullptr)
    {
        _children["srlgs"] = srlgs;
    }

    if(mpls_admin_groups != nullptr)
    {
        _children["mpls-admin-groups"] = mpls_admin_groups;
    }

    if(te_lsp_timers != nullptr)
    {
        _children["te-lsp-timers"] = te_lsp_timers;
    }

    return _children;
}

void Mpls::TeGlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlgs" || name == "mpls-admin-groups" || name == "te-lsp-timers")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlgs()
    :
    srlg(this, {"name"})
{

    yang_name = "srlgs"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeGlobalAttributes::Srlgs::~Srlgs()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto ent_ = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg>();
        ent_->parent = this;
        srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::Srlg()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::Config>())
    , state(std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::State>())
    , static_srlg_members(std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers>())
{
    config->parent = this;
    state->parent = this;
    static_srlg_members->parent = this;

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::~Srlg()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_operation());
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/te-global-attributes/srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::State>();
        }
        return state;
    }

    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members == nullptr)
        {
            static_srlg_members = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers>();
        }
        return static_srlg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::get_children() const
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

    if(static_srlg_members != nullptr)
    {
        _children["static-srlg-members"] = static_srlg_members;
    }

    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "static-srlg-members" || name == "name")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::Config()
    :
    name{YType::str, "name"},
    value_{YType::uint32, "value"},
    cost{YType::uint32, "cost"},
    flooding_type{YType::enumeration, "flooding-type"}
{

    yang_name = "config"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| value_.is_set
	|| cost.is_set
	|| flooding_type.is_set;
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flooding_type.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.yfilter)) leaf_name_data.push_back(flooding_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flooding-type")
    {
        flooding_type.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value" || name == "cost" || name == "flooding-type")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::State::State()
    :
    name{YType::str, "name"},
    value_{YType::uint32, "value"},
    cost{YType::uint32, "cost"},
    flooding_type{YType::enumeration, "flooding-type"}
{

    yang_name = "state"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::State::~State()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| value_.is_set
	|| cost.is_set
	|| flooding_type.is_set;
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flooding_type.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flooding_type.is_set || is_set(flooding_type.yfilter)) leaf_name_data.push_back(flooding_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flooding-type")
    {
        flooding_type.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value" || name == "cost" || name == "flooding-type")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::StaticSrlgMembers()
    :
    members_list(this, {"from_address"})
{

    yang_name = "static-srlg-members"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<members_list.len(); index++)
    {
        if(members_list[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<members_list.len(); index++)
    {
        if(members_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members-list")
    {
        auto ent_ = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList>();
        ent_->parent = this;
        members_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : members_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members-list")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::MembersList()
    :
    from_address{YType::str, "from-address"}
        ,
    config(std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config>())
    , state(std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "members-list"; yang_parent_name = "static-srlg-members"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::~MembersList()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members-list";
    ADD_KEY_TOKEN(from_address, "from-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::get_children() const
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

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "from-address")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::Config()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "config"; yang_parent_name = "members-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| to_address.is_set;
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::State()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "state"; yang_parent_name = "members-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::~State()
{
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| to_address.is_set;
}

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::MplsAdminGroups::MplsAdminGroups()
    :
    admin_group(this, {"admin_group_name"})
{

    yang_name = "mpls-admin-groups"; yang_parent_name = "te-global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeGlobalAttributes::MplsAdminGroups::~MplsAdminGroups()
{
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_group.len(); index++)
    {
        if(admin_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeGlobalAttributes::MplsAdminGroups::has_operation() const
{
    for (std::size_t index=0; index<admin_group.len(); index++)
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

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-group")
    {
        auto ent_ = std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup>();
        ent_->parent = this;
        admin_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : admin_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , state(std::make_shared<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>())
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
    if (is_presence_container) return true;
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
    path_buffer << "admin-group";
    ADD_KEY_TOKEN(admin_group_name, "admin-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group_name.is_set || is_set(admin_group_name.yfilter)) leaf_name_data.push_back(admin_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::get_children() const
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Mpls::TeGlobalAttributes::TeLspTimers::TeLspTimers()
    :
    config(std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers::Config>())
    , state(std::make_shared<Mpls::TeGlobalAttributes::TeLspTimers::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::TeLspTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::TeLspTimers::get_children() const
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
    install_delay{YType::uint16, "install-delay"},
    cleanup_delay{YType::uint16, "cleanup-delay"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"}
{

    yang_name = "config"; yang_parent_name = "te-lsp-timers"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeGlobalAttributes::TeLspTimers::Config::~Config()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_data() const
{
    if (is_presence_container) return true;
    return install_delay.is_set
	|| cleanup_delay.is_set
	|| reoptimize_timer.is_set;
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
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

    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::TeLspTimers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::TeLspTimers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::TeLspTimers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-delay" || name == "cleanup-delay" || name == "reoptimize-timer")
        return true;
    return false;
}

Mpls::TeGlobalAttributes::TeLspTimers::State::State()
    :
    install_delay{YType::uint16, "install-delay"},
    cleanup_delay{YType::uint16, "cleanup-delay"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"}
{

    yang_name = "state"; yang_parent_name = "te-lsp-timers"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeGlobalAttributes::TeLspTimers::State::~State()
{
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_data() const
{
    if (is_presence_container) return true;
    return install_delay.is_set
	|| cleanup_delay.is_set
	|| reoptimize_timer.is_set;
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
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

    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeGlobalAttributes::TeLspTimers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeGlobalAttributes::TeLspTimers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeGlobalAttributes::TeLspTimers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
}

bool Mpls::TeGlobalAttributes::TeLspTimers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-delay" || name == "cleanup-delay" || name == "reoptimize-timer")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::TeInterfaceAttributes()
    :
    interface(this, {"interface_id"})
{

    yang_name = "te-interface-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeInterfaceAttributes::~TeInterfaceAttributes()
{
}

bool Mpls::TeInterfaceAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::TeInterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Mpls::TeInterfaceAttributes::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<Mpls::TeInterfaceAttributes::Interface::Config>())
    , state(std::make_shared<Mpls::TeInterfaceAttributes::Interface::State>())
    , interface_ref(std::make_shared<Mpls::TeInterfaceAttributes::Interface::InterfaceRef>())
    , igp_flooding_bandwidth(std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;
    igp_flooding_bandwidth->parent = this;

    yang_name = "interface"; yang_parent_name = "te-interface-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::TeInterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::TeInterfaceAttributes::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_data());
}

bool Mpls::TeInterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (igp_flooding_bandwidth !=  nullptr && igp_flooding_bandwidth->has_operation());
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
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeInterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeInterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Mpls::TeInterfaceAttributes::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "igp-flooding-bandwidth")
    {
        if(igp_flooding_bandwidth == nullptr)
        {
            igp_flooding_bandwidth = std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>();
        }
        return igp_flooding_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::get_children() const
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

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    if(igp_flooding_bandwidth != nullptr)
    {
        _children["igp-flooding-bandwidth"] = igp_flooding_bandwidth;
    }

    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::TeInterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "igp-flooding-bandwidth" || name == "interface-id")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"},
    te_metric{YType::uint32, "te-metric"},
    srlg_membership{YType::str, "srlg-membership"},
    admin_group{YType::str, "admin-group"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_id.is_set
	|| te_metric.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_operation() const
{
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(srlg_membership.yfilter)
	|| ydk::is_set(admin_group.yfilter);
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

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());
    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void Mpls::TeInterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "te-metric" || name == "srlg-membership" || name == "admin-group")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"},
    te_metric{YType::uint32, "te-metric"},
    srlg_membership{YType::str, "srlg-membership"},
    admin_group{YType::str, "admin-group"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_id.is_set
	|| te_metric.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_operation() const
{
    for (auto const & leaf : srlg_membership.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(srlg_membership.yfilter)
	|| ydk::is_set(admin_group.yfilter);
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

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto srlg_membership_name_datas = srlg_membership.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_membership_name_datas.begin(), srlg_membership_name_datas.end());
    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.append(value);
    }
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void Mpls::TeInterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "srlg-membership")
    {
        srlg_membership.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "te-metric" || name == "srlg-membership" || name == "admin-group")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config>())
    , state(std::make_shared<Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::InterfaceRef::~InterfaceRef()
{
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::InterfaceRef::get_children() const
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

void Mpls::TeInterfaceAttributes::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::TeInterfaceAttributes::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::IgpFloodingBandwidth()
    :
    config(std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>())
    , state(std::make_shared<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::get_children() const
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
    threshold_type{YType::enumeration, "threshold-type"},
    delta_percentage{YType::uint8, "delta-percentage"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    up_thresholds{YType::uint8, "up-thresholds"},
    down_thresholds{YType::uint8, "down-thresholds"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"}
{

    yang_name = "config"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::~Config()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
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
    return threshold_type.is_set
	|| delta_percentage.is_set
	|| threshold_specification.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_operation() const
{
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
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
    return is_set(yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(up_thresholds.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter);
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

    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());

    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-type" || name == "delta-percentage" || name == "threshold-specification" || name == "up-thresholds" || name == "down-thresholds" || name == "up-down-thresholds")
        return true;
    return false;
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::State()
    :
    threshold_type{YType::enumeration, "threshold-type"},
    delta_percentage{YType::uint8, "delta-percentage"},
    threshold_specification{YType::enumeration, "threshold-specification"},
    up_thresholds{YType::uint8, "up-thresholds"},
    down_thresholds{YType::uint8, "down-thresholds"},
    up_down_thresholds{YType::uint8, "up-down-thresholds"}
{

    yang_name = "state"; yang_parent_name = "igp-flooding-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::~State()
{
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
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
    return threshold_type.is_set
	|| delta_percentage.is_set
	|| threshold_specification.is_set;
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_operation() const
{
    for (auto const & leaf : up_thresholds.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
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
    return is_set(yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(delta_percentage.yfilter)
	|| ydk::is_set(threshold_specification.yfilter)
	|| ydk::is_set(up_thresholds.yfilter)
	|| ydk::is_set(down_thresholds.yfilter)
	|| ydk::is_set(up_down_thresholds.yfilter);
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

    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (delta_percentage.is_set || is_set(delta_percentage.yfilter)) leaf_name_data.push_back(delta_percentage.get_name_leafdata());
    if (threshold_specification.is_set || is_set(threshold_specification.yfilter)) leaf_name_data.push_back(threshold_specification.get_name_leafdata());

    auto up_thresholds_name_datas = up_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_thresholds_name_datas.begin(), up_thresholds_name_datas.end());
    auto down_thresholds_name_datas = down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_thresholds_name_datas.begin(), down_thresholds_name_datas.end());
    auto up_down_thresholds_name_datas = up_down_thresholds.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_down_thresholds_name_datas.begin(), up_down_thresholds_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage = value;
        delta_percentage.value_namespace = name_space;
        delta_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification = value;
        threshold_specification.value_namespace = name_space;
        threshold_specification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.append(value);
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.append(value);
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.append(value);
    }
}

void Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "delta-percentage")
    {
        delta_percentage.yfilter = yfilter;
    }
    if(value_path == "threshold-specification")
    {
        threshold_specification.yfilter = yfilter;
    }
    if(value_path == "up-thresholds")
    {
        up_thresholds.yfilter = yfilter;
    }
    if(value_path == "down-thresholds")
    {
        down_thresholds.yfilter = yfilter;
    }
    if(value_path == "up-down-thresholds")
    {
        up_down_thresholds.yfilter = yfilter;
    }
}

bool Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-type" || name == "delta-percentage" || name == "threshold-specification" || name == "up-thresholds" || name == "down-thresholds" || name == "up-down-thresholds")
        return true;
    return false;
}

Mpls::SignalingProtocols::SignalingProtocols()
    :
    rsvp_te(std::make_shared<Mpls::SignalingProtocols::RsvpTe>())
    , ldp(std::make_shared<Mpls::SignalingProtocols::Ldp>())
    , segment_routing(std::make_shared<Mpls::SignalingProtocols::SegmentRouting>())
{
    rsvp_te->parent = this;
    ldp->parent = this;
    segment_routing->parent = this;

    yang_name = "signaling-protocols"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::~SignalingProtocols()
{
}

bool Mpls::SignalingProtocols::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_te !=  nullptr && rsvp_te->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Mpls::SignalingProtocols::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_te !=  nullptr && rsvp_te->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te")
    {
        if(rsvp_te == nullptr)
        {
            rsvp_te = std::make_shared<Mpls::SignalingProtocols::RsvpTe>();
        }
        return rsvp_te;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Mpls::SignalingProtocols::Ldp>();
        }
        return ldp;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_te != nullptr)
    {
        _children["rsvp-te"] = rsvp_te;
    }

    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void Mpls::SignalingProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te" || name == "ldp" || name == "segment-routing")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::RsvpTe()
    :
    sessions(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions>())
    , neighbors(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors>())
    , global(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global>())
    , interface_attributes(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>())
{
    sessions->parent = this;
    neighbors->parent = this;
    global->parent = this;
    interface_attributes->parent = this;

    yang_name = "rsvp-te"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::~RsvpTe()
{
}

bool Mpls::SignalingProtocols::RsvpTe::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interface_attributes !=  nullptr && interface_attributes->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interface_attributes !=  nullptr && interface_attributes->has_operation());
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors>();
        }
        return neighbors;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(interface_attributes != nullptr)
    {
        _children["interface-attributes"] = interface_attributes;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "neighbors" || name == "global" || name == "interface-attributes")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Sessions()
    :
    session(this, {"local_index"})
{

    yang_name = "sessions"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::~Sessions()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::Session()
    :
    local_index{YType::str, "local-index"}
        ,
    record_route_objects(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State>())
{
    record_route_objects->parent = this;
    state->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::~Session()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return local_index.is_set
	|| (record_route_objects !=  nullptr && record_route_objects->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_index.yfilter)
	|| (record_route_objects !=  nullptr && record_route_objects->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(local_index, "local-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_index.is_set || is_set(local_index.yfilter)) leaf_name_data.push_back(local_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "record-route-objects")
    {
        if(record_route_objects == nullptr)
        {
            record_route_objects = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects>();
        }
        return record_route_objects;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(record_route_objects != nullptr)
    {
        _children["record-route-objects"] = record_route_objects;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-index")
    {
        local_index = value;
        local_index.value_namespace = name_space;
        local_index.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-index")
    {
        local_index.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-route-objects" || name == "state" || name == "local-index")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObjects()
    :
    record_route_object(this, {"index_"})
{

    yang_name = "record-route-objects"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::~RecordRouteObjects()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<record_route_object.len(); index++)
    {
        if(record_route_object[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::has_operation() const
{
    for (std::size_t index=0; index<record_route_object.len(); index++)
    {
        if(record_route_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "record-route-object")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject>();
        ent_->parent = this;
        record_route_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : record_route_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-route-object")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::RecordRouteObject()
    :
    index_{YType::str, "index"}
        ,
    state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State>())
{
    state->parent = this;

    yang_name = "record-route-object"; yang_parent_name = "record-route-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::~RecordRouteObject()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route-object";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "index")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::State()
    :
    index_{YType::uint8, "index"},
    address{YType::str, "address"},
    reported_label{YType::str, "reported-label"},
    reported_flags{YType::uint8, "reported-flags"}
{

    yang_name = "state"; yang_parent_name = "record-route-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| address.is_set
	|| reported_label.is_set
	|| reported_flags.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reported_label.yfilter)
	|| ydk::is_set(reported_flags.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reported_label.is_set || is_set(reported_label.yfilter)) leaf_name_data.push_back(reported_label.get_name_leafdata());
    if (reported_flags.is_set || is_set(reported_flags.yfilter)) leaf_name_data.push_back(reported_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-label")
    {
        reported_label = value;
        reported_label.value_namespace = name_space;
        reported_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-flags")
    {
        reported_flags = value;
        reported_flags.value_namespace = name_space;
        reported_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reported-label")
    {
        reported_label.yfilter = yfilter;
    }
    if(value_path == "reported-flags")
    {
        reported_flags.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "address" || name == "reported-label" || name == "reported-flags")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::State()
    :
    local_index{YType::uint64, "local-index"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    session_name{YType::str, "session-name"},
    status{YType::enumeration, "status"},
    type{YType::identityref, "type"},
    protection_requested{YType::identityref, "protection-requested"},
    label_in{YType::str, "label-in"},
    label_out{YType::str, "label-out"}
        ,
    sender_tspec(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec>())
{
    sender_tspec->parent = this;

    yang_name = "state"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::has_data() const
{
    if (is_presence_container) return true;
    return local_index.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| session_name.is_set
	|| status.is_set
	|| type.is_set
	|| protection_requested.is_set
	|| label_in.is_set
	|| label_out.is_set
	|| (sender_tspec !=  nullptr && sender_tspec->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_index.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(protection_requested.yfilter)
	|| ydk::is_set(label_in.yfilter)
	|| ydk::is_set(label_out.yfilter)
	|| (sender_tspec !=  nullptr && sender_tspec->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_index.is_set || is_set(local_index.yfilter)) leaf_name_data.push_back(local_index.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (protection_requested.is_set || is_set(protection_requested.yfilter)) leaf_name_data.push_back(protection_requested.get_name_leafdata());
    if (label_in.is_set || is_set(label_in.yfilter)) leaf_name_data.push_back(label_in.get_name_leafdata());
    if (label_out.is_set || is_set(label_out.yfilter)) leaf_name_data.push_back(label_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-tspec")
    {
        if(sender_tspec == nullptr)
        {
            sender_tspec = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec>();
        }
        return sender_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sender_tspec != nullptr)
    {
        _children["sender-tspec"] = sender_tspec;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-index")
    {
        local_index = value;
        local_index.value_namespace = name_space;
        local_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-requested")
    {
        protection_requested = value;
        protection_requested.value_namespace = name_space;
        protection_requested.value_namespace_prefix = name_space_prefix;
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
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-index")
    {
        local_index.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "protection-requested")
    {
        protection_requested.yfilter = yfilter;
    }
    if(value_path == "label-in")
    {
        label_in.yfilter = yfilter;
    }
    if(value_path == "label-out")
    {
        label_out.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-tspec" || name == "local-index" || name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lsp-id" || name == "session-name" || name == "status" || name == "type" || name == "protection-requested" || name == "label-in" || name == "label-out")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::SenderTspec()
    :
    rate{YType::str, "rate"},
    size{YType::str, "size"},
    peak_data_rate{YType::str, "peak-data-rate"}
{

    yang_name = "sender-tspec"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::~SenderTspec()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set
	|| size.is_set
	|| peak_data_rate.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(peak_data_rate.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (peak_data_rate.is_set || is_set(peak_data_rate.yfilter)) leaf_name_data.push_back(peak_data_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-data-rate")
    {
        peak_data_rate = value;
        peak_data_rate.value_namespace = name_space;
        peak_data_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "peak-data-rate")
    {
        peak_data_rate.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "size" || name == "peak-data-rate")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbors()
    :
    neighbor(this, {"address"})
{

    yang_name = "neighbors"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::~Neighbors()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::Neighbor()
    :
    address{YType::str, "address"}
        ,
    state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State>())
{
    state->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::~Neighbor()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/rsvp-te/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "address")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::State()
    :
    address{YType::str, "address"},
    detected_interface{YType::str, "detected-interface"},
    neighbor_status{YType::enumeration, "neighbor-status"},
    refresh_reduction{YType::boolean, "refresh-reduction"}
{

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| detected_interface.is_set
	|| neighbor_status.is_set
	|| refresh_reduction.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(detected_interface.yfilter)
	|| ydk::is_set(neighbor_status.yfilter)
	|| ydk::is_set(refresh_reduction.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (detected_interface.is_set || is_set(detected_interface.yfilter)) leaf_name_data.push_back(detected_interface.get_name_leafdata());
    if (neighbor_status.is_set || is_set(neighbor_status.yfilter)) leaf_name_data.push_back(neighbor_status.get_name_leafdata());
    if (refresh_reduction.is_set || is_set(refresh_reduction.yfilter)) leaf_name_data.push_back(refresh_reduction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "detected-interface" || name == "neighbor-status" || name == "refresh-reduction")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::Global()
    :
    graceful_restart(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>())
    , soft_preemption(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>())
    , hellos(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::State>())
{
    graceful_restart->parent = this;
    soft_preemption->parent = this;
    hellos->parent = this;
    state->parent = this;

    yang_name = "global"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Global::~Global()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (hellos !=  nullptr && hellos->has_operation())
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "hellos")
    {
        if(hellos == nullptr)
        {
            hellos = std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>();
        }
        return hellos;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(soft_preemption != nullptr)
    {
        _children["soft-preemption"] = soft_preemption;
    }

    if(hellos != nullptr)
    {
        _children["hellos"] = hellos;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "soft-preemption" || name == "hellos" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::get_children() const
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
    restart_time{YType::uint32, "restart-time"},
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| restart_time.is_set
	|| recovery_time.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter);
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
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "restart-time" || name == "recovery-time")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::State()
    :
    enable{YType::boolean, "enable"},
    restart_time{YType::uint32, "restart-time"},
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| restart_time.is_set
	|| recovery_time.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter);
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
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "restart-time" || name == "recovery-time")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::SoftPreemption()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::get_children() const
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Hellos()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::get_children() const
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
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
    path_timeouts{YType::uint64, "path-timeouts"},
    reservation_timeouts{YType::uint64, "reservation-timeouts"},
    rate_limited_messages{YType::uint64, "rate-limited-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::~Counters()
{
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return path_timeouts.is_set
	|| reservation_timeouts.is_set
	|| rate_limited_messages.is_set
	|| in_path_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_hello_messages.is_set
	|| in_srefresh_messages.is_set
	|| in_ack_messages.is_set
	|| out_path_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_hello_messages.is_set
	|| out_srefresh_messages.is_set
	|| out_ack_messages.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_timeouts.yfilter)
	|| ydk::is_set(reservation_timeouts.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter);
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

    if (path_timeouts.is_set || is_set(path_timeouts.yfilter)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.yfilter)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
        path_timeouts.value_namespace = name_space;
        path_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
        reservation_timeouts.value_namespace = name_space;
        reservation_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-timeouts")
    {
        path_timeouts.yfilter = yfilter;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-timeouts" || name == "reservation-timeouts" || name == "rate-limited-messages" || name == "in-path-messages" || name == "in-path-error-messages" || name == "in-path-tear-messages" || name == "in-reservation-messages" || name == "in-reservation-error-messages" || name == "in-reservation-tear-messages" || name == "in-hello-messages" || name == "in-srefresh-messages" || name == "in-ack-messages" || name == "out-path-messages" || name == "out-path-error-messages" || name == "out-path-tear-messages" || name == "out-reservation-messages" || name == "out-reservation-error-messages" || name == "out-reservation-tear-messages" || name == "out-hello-messages" || name == "out-srefresh-messages" || name == "out-ack-messages")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::InterfaceAttributes()
    :
    interface(this, {"interface_id"})
{

    yang_name = "interface-attributes"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::~InterfaceAttributes()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>())
    , interface_ref(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef>())
    , bandwidth_reservations(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations>())
    , hellos(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>())
    , authentication(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>())
    , subscription(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>())
    , protection(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;
    bandwidth_reservations->parent = this;
    hellos->parent = this;
    authentication->parent = this;
    subscription->parent = this;
    protection->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::~Interface()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (bandwidth_reservations !=  nullptr && bandwidth_reservations->has_data())
	|| (hellos !=  nullptr && hellos->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (subscription !=  nullptr && subscription->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (bandwidth_reservations !=  nullptr && bandwidth_reservations->has_operation())
	|| (hellos !=  nullptr && hellos->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (subscription !=  nullptr && subscription->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
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
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "bandwidth-reservations")
    {
        if(bandwidth_reservations == nullptr)
        {
            bandwidth_reservations = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations>();
        }
        return bandwidth_reservations;
    }

    if(child_yang_name == "hellos")
    {
        if(hellos == nullptr)
        {
            hellos = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>();
        }
        return hellos;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "subscription")
    {
        if(subscription == nullptr)
        {
            subscription = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>();
        }
        return subscription;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::get_children() const
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

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    if(bandwidth_reservations != nullptr)
    {
        _children["bandwidth-reservations"] = bandwidth_reservations;
    }

    if(hellos != nullptr)
    {
        _children["hellos"] = hellos;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(subscription != nullptr)
    {
        _children["subscription"] = subscription;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "bandwidth-reservations" || name == "hellos" || name == "authentication" || name == "subscription" || name == "protection" || name == "interface-id")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter);
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

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"}
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
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
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

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "interface-id")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::Counters()
    :
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::~Counters()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return in_path_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_hello_messages.is_set
	|| in_srefresh_messages.is_set
	|| in_ack_messages.is_set
	|| out_path_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_hello_messages.is_set
	|| out_srefresh_messages.is_set
	|| out_ack_messages.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter);
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

    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-path-messages" || name == "in-path-error-messages" || name == "in-path-tear-messages" || name == "in-reservation-messages" || name == "in-reservation-error-messages" || name == "in-reservation-tear-messages" || name == "in-hello-messages" || name == "in-srefresh-messages" || name == "in-ack-messages" || name == "out-path-messages" || name == "out-path-error-messages" || name == "out-path-tear-messages" || name == "out-reservation-messages" || name == "out-reservation-error-messages" || name == "out-reservation-tear-messages" || name == "out-hello-messages" || name == "out-srefresh-messages" || name == "out-ack-messages")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::~InterfaceRef()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::get_children() const
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservations()
    :
    bandwidth_reservation(this, {"priority"})
{

    yang_name = "bandwidth-reservations"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::~BandwidthReservations()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bandwidth_reservation.len(); index++)
    {
        if(bandwidth_reservation[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_reservation.len(); index++)
    {
        if(bandwidth_reservation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-reservations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-reservation")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation>();
        ent_->parent = this;
        bandwidth_reservation.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bandwidth_reservation.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-reservation")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::BandwidthReservation()
    :
    priority{YType::str, "priority"}
        ,
    state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State>())
{
    state->parent = this;

    yang_name = "bandwidth-reservation"; yang_parent_name = "bandwidth-reservations"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::~BandwidthReservation()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-reservation";
    ADD_KEY_TOKEN(priority, "priority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "priority")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::State()
    :
    priority{YType::str, "priority"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"},
    active_reservations_count{YType::uint64, "active-reservations-count"},
    highwater_mark{YType::uint64, "highwater-mark"}
{

    yang_name = "state"; yang_parent_name = "bandwidth-reservation"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set
	|| active_reservations_count.is_set
	|| highwater_mark.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(active_reservations_count.yfilter)
	|| ydk::is_set(highwater_mark.yfilter);
}

std::string Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (active_reservations_count.is_set || is_set(active_reservations_count.yfilter)) leaf_name_data.push_back(active_reservations_count.get_name_leafdata());
    if (highwater_mark.is_set || is_set(highwater_mark.yfilter)) leaf_name_data.push_back(highwater_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "active-reservations-count")
    {
        active_reservations_count = value;
        active_reservations_count.value_namespace = name_space;
        active_reservations_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark = value;
        highwater_mark.value_namespace = name_space;
        highwater_mark.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "active-reservations-count")
    {
        active_reservations_count.yfilter = yfilter;
    }
    if(value_path == "highwater-mark")
    {
        highwater_mark.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "available-bandwidth" || name == "reserved-bandwidth" || name == "active-reservations-count" || name == "highwater-mark")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Hellos()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::get_children() const
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Authentication()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::get_children() const
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
    enable{YType::boolean, "enable"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "config"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| authentication_key.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
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

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "authentication-key")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::State()
    :
    enable{YType::boolean, "enable"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "state"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| authentication_key.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
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

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "authentication-key")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Subscription()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::get_children() const
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    subscription{YType::uint8, "subscription"},
    calculated_absolute_subscription_bw{YType::uint64, "calculated-absolute-subscription-bw"}
{

    yang_name = "state"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_data() const
{
    if (is_presence_container) return true;
    return subscription.is_set
	|| calculated_absolute_subscription_bw.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription.yfilter)
	|| ydk::is_set(calculated_absolute_subscription_bw.yfilter);
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
    if (calculated_absolute_subscription_bw.is_set || is_set(calculated_absolute_subscription_bw.yfilter)) leaf_name_data.push_back(calculated_absolute_subscription_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription")
    {
        subscription = value;
        subscription.value_namespace = name_space;
        subscription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calculated-absolute-subscription-bw")
    {
        calculated_absolute_subscription_bw = value;
        calculated_absolute_subscription_bw.value_namespace = name_space;
        calculated_absolute_subscription_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription")
    {
        subscription.yfilter = yfilter;
    }
    if(value_path == "calculated-absolute-subscription-bw")
    {
        calculated_absolute_subscription_bw.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription" || name == "calculated-absolute-subscription-bw")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Protection()
    :
    config(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::get_children() const
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
    link_protection_style_requested{YType::identityref, "link-protection-style-requested"},
    bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"}
{

    yang_name = "config"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::~Config()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_data() const
{
    if (is_presence_container) return true;
    return link_protection_style_requested.is_set
	|| bypass_optimize_interval.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protection_style_requested.yfilter)
	|| ydk::is_set(bypass_optimize_interval.yfilter);
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

    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.yfilter)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());
    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.yfilter)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
        link_protection_style_requested.value_namespace = name_space;
        link_protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
        bypass_optimize_interval.value_namespace = name_space;
        bypass_optimize_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protection-style-requested" || name == "bypass-optimize-interval")
        return true;
    return false;
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::State()
    :
    link_protection_style_requested{YType::identityref, "link-protection-style-requested"},
    bypass_optimize_interval{YType::uint16, "bypass-optimize-interval"}
{

    yang_name = "state"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::~State()
{
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_data() const
{
    if (is_presence_container) return true;
    return link_protection_style_requested.is_set
	|| bypass_optimize_interval.is_set;
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protection_style_requested.yfilter)
	|| ydk::is_set(bypass_optimize_interval.yfilter);
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

    if (link_protection_style_requested.is_set || is_set(link_protection_style_requested.yfilter)) leaf_name_data.push_back(link_protection_style_requested.get_name_leafdata());
    if (bypass_optimize_interval.is_set || is_set(bypass_optimize_interval.yfilter)) leaf_name_data.push_back(bypass_optimize_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested = value;
        link_protection_style_requested.value_namespace = name_space;
        link_protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval = value;
        bypass_optimize_interval.value_namespace = name_space;
        bypass_optimize_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protection-style-requested")
    {
        link_protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "bypass-optimize-interval")
    {
        bypass_optimize_interval.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protection-style-requested" || name == "bypass-optimize-interval")
        return true;
    return false;
}

Mpls::SignalingProtocols::Ldp::Ldp()
{

    yang_name = "ldp"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::Ldp::~Ldp()
{
}

bool Mpls::SignalingProtocols::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Mpls::SignalingProtocols::Ldp::has_operation() const
{
    return is_set(yfilter);
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::SegmentRouting()
    :
    aggregate_sid_counters(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters>())
    , interfaces(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces>())
{
    aggregate_sid_counters->parent = this;
    interfaces->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "signaling-protocols"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::SegmentRouting::~SegmentRouting()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (aggregate_sid_counters !=  nullptr && aggregate_sid_counters->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate_sid_counters !=  nullptr && aggregate_sid_counters->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
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

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-sid-counters")
    {
        if(aggregate_sid_counters == nullptr)
        {
            aggregate_sid_counters = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters>();
        }
        return aggregate_sid_counters;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregate_sid_counters != nullptr)
    {
        _children["aggregate-sid-counters"] = aggregate_sid_counters;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-sid-counters" || name == "interfaces")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounters()
    :
    aggregate_sid_counter(this, {"mpls_label"})
{

    yang_name = "aggregate-sid-counters"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::~AggregateSidCounters()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate_sid_counter.len(); index++)
    {
        if(aggregate_sid_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::has_operation() const
{
    for (std::size_t index=0; index<aggregate_sid_counter.len(); index++)
    {
        if(aggregate_sid_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-sid-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-sid-counter")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter>();
        ent_->parent = this;
        aggregate_sid_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggregate_sid_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-sid-counter")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::AggregateSidCounter()
    :
    mpls_label{YType::str, "mpls-label"}
        ,
    state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State>())
{
    state->parent = this;

    yang_name = "aggregate-sid-counter"; yang_parent_name = "aggregate-sid-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::~AggregateSidCounter()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/aggregate-sid-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-sid-counter";
    ADD_KEY_TOKEN(mpls_label, "mpls-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "mpls-label")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::State()
    :
    mpls_label{YType::str, "mpls-label"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "aggregate-sid-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-label" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interfaces()
    :
    interface(this, {"interface_id"})
{

    yang_name = "interfaces"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::~Interfaces()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Interface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State>())
    , sid_counters(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters>())
    , interface_ref(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    sid_counters->parent = this;
    interface_ref->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::~Interface()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (sid_counters !=  nullptr && sid_counters->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (sid_counters !=  nullptr && sid_counters->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/signaling-protocols/segment-routing/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "sid-counters")
    {
        if(sid_counters == nullptr)
        {
            sid_counters = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters>();
        }
        return sid_counters;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_children() const
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

    if(sid_counters != nullptr)
    {
        _children["sid-counters"] = sid_counters;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "sid-counters" || name == "interface-ref" || name == "interface-id")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounters()
    :
    sid_counter(this, {"mpls_label"})
{

    yang_name = "sid-counters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::~SidCounters()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid_counter.len(); index++)
    {
        if(sid_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::has_operation() const
{
    for (std::size_t index=0; index<sid_counter.len(); index++)
    {
        if(sid_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-counter")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter>();
        ent_->parent = this;
        sid_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-counter")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::SidCounter()
    :
    mpls_label{YType::str, "mpls-label"}
        ,
    state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State>())
    , forwarding_classes(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses>())
{
    state->parent = this;
    forwarding_classes->parent = this;

    yang_name = "sid-counter"; yang_parent_name = "sid-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::~SidCounter()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| (state !=  nullptr && state->has_data())
	|| (forwarding_classes !=  nullptr && forwarding_classes->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (forwarding_classes !=  nullptr && forwarding_classes->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-counter";
    ADD_KEY_TOKEN(mpls_label, "mpls-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State>();
        }
        return state;
    }

    if(child_yang_name == "forwarding-classes")
    {
        if(forwarding_classes == nullptr)
        {
            forwarding_classes = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses>();
        }
        return forwarding_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(forwarding_classes != nullptr)
    {
        _children["forwarding-classes"] = forwarding_classes;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "forwarding-classes" || name == "mpls-label")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::State()
    :
    mpls_label{YType::str, "mpls-label"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "sid-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-label" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClasses()
    :
    forwarding_class(this, {"exp"})
{

    yang_name = "forwarding-classes"; yang_parent_name = "sid-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::~ForwardingClasses()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_class.len(); index++)
    {
        if(forwarding_class[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::has_operation() const
{
    for (std::size_t index=0; index<forwarding_class.len(); index++)
    {
        if(forwarding_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-class")
    {
        auto ent_ = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass>();
        ent_->parent = this;
        forwarding_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : forwarding_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-class")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::ForwardingClass()
    :
    exp{YType::str, "exp"}
        ,
    state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State>())
{
    state->parent = this;

    yang_name = "forwarding-class"; yang_parent_name = "forwarding-classes"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::~ForwardingClass()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-class";
    ADD_KEY_TOKEN(exp, "exp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "exp")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::State()
    :
    exp{YType::uint8, "exp"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "forwarding-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config>())
    , state(std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::~InterfaceRef()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_children() const
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

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::~Config()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::~State()
{
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Mpls::Lsps::Lsps()
    :
    constrained_path(std::make_shared<Mpls::Lsps::ConstrainedPath>())
    , unconstrained_path(std::make_shared<Mpls::Lsps::UnconstrainedPath>())
    , static_lsps(std::make_shared<Mpls::Lsps::StaticLsps>())
{
    constrained_path->parent = this;
    unconstrained_path->parent = this;
    static_lsps->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::~Lsps()
{
}

bool Mpls::Lsps::has_data() const
{
    if (is_presence_container) return true;
    return (constrained_path !=  nullptr && constrained_path->has_data())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_data())
	|| (static_lsps !=  nullptr && static_lsps->has_data());
}

bool Mpls::Lsps::has_operation() const
{
    return is_set(yfilter)
	|| (constrained_path !=  nullptr && constrained_path->has_operation())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_operation())
	|| (static_lsps !=  nullptr && static_lsps->has_operation());
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

std::shared_ptr<ydk::Entity> Mpls::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constrained-path")
    {
        if(constrained_path == nullptr)
        {
            constrained_path = std::make_shared<Mpls::Lsps::ConstrainedPath>();
        }
        return constrained_path;
    }

    if(child_yang_name == "unconstrained-path")
    {
        if(unconstrained_path == nullptr)
        {
            unconstrained_path = std::make_shared<Mpls::Lsps::UnconstrainedPath>();
        }
        return unconstrained_path;
    }

    if(child_yang_name == "static-lsps")
    {
        if(static_lsps == nullptr)
        {
            static_lsps = std::make_shared<Mpls::Lsps::StaticLsps>();
        }
        return static_lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(constrained_path != nullptr)
    {
        _children["constrained-path"] = constrained_path;
    }

    if(unconstrained_path != nullptr)
    {
        _children["unconstrained-path"] = unconstrained_path;
    }

    if(static_lsps != nullptr)
    {
        _children["static-lsps"] = static_lsps;
    }

    return _children;
}

void Mpls::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constrained-path" || name == "unconstrained-path" || name == "static-lsps")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::ConstrainedPath()
    :
    named_explicit_paths(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths>())
    , tunnels(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels>())
{
    named_explicit_paths->parent = this;
    tunnels->parent = this;

    yang_name = "constrained-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::ConstrainedPath::~ConstrainedPath()
{
}

bool Mpls::Lsps::ConstrainedPath::has_data() const
{
    if (is_presence_container) return true;
    return (named_explicit_paths !=  nullptr && named_explicit_paths->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool Mpls::Lsps::ConstrainedPath::has_operation() const
{
    return is_set(yfilter)
	|| (named_explicit_paths !=  nullptr && named_explicit_paths->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
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

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-explicit-paths")
    {
        if(named_explicit_paths == nullptr)
        {
            named_explicit_paths = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths>();
        }
        return named_explicit_paths;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(named_explicit_paths != nullptr)
    {
        _children["named-explicit-paths"] = named_explicit_paths;
    }

    if(tunnels != nullptr)
    {
        _children["tunnels"] = tunnels;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-explicit-paths" || name == "tunnels")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPaths()
    :
    named_explicit_path(this, {"name"})
{

    yang_name = "named-explicit-paths"; yang_parent_name = "constrained-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::~NamedExplicitPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_explicit_path.len(); index++)
    {
        if(named_explicit_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<named_explicit_path.len(); index++)
    {
        if(named_explicit_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
    path_buffer << "named-explicit-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-explicit-path")
    {
        auto ent_ = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath>();
        ent_->parent = this;
        named_explicit_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_explicit_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-explicit-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::NamedExplicitPath()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State>())
    , explicit_route_objects(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects>())
{
    config->parent = this;
    state->parent = this;
    explicit_route_objects->parent = this;

    yang_name = "named-explicit-path"; yang_parent_name = "named-explicit-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::~NamedExplicitPath()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (explicit_route_objects !=  nullptr && explicit_route_objects->has_data());
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (explicit_route_objects !=  nullptr && explicit_route_objects->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/named-explicit-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-explicit-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State>();
        }
        return state;
    }

    if(child_yang_name == "explicit-route-objects")
    {
        if(explicit_route_objects == nullptr)
        {
            explicit_route_objects = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects>();
        }
        return explicit_route_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_children() const
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

    if(explicit_route_objects != nullptr)
    {
        _children["explicit-route-objects"] = explicit_route_objects;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "explicit-route-objects" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::Config()
    :
    name{YType::str, "name"},
    sid_selection_mode{YType::enumeration, "sid-selection-mode"},
    sid_protection_required{YType::boolean, "sid-protection-required"}
{

    yang_name = "config"; yang_parent_name = "named-explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| sid_selection_mode.is_set
	|| sid_protection_required.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sid_selection_mode.yfilter)
	|| ydk::is_set(sid_protection_required.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sid_selection_mode.is_set || is_set(sid_selection_mode.yfilter)) leaf_name_data.push_back(sid_selection_mode.get_name_leafdata());
    if (sid_protection_required.is_set || is_set(sid_protection_required.yfilter)) leaf_name_data.push_back(sid_protection_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode = value;
        sid_selection_mode.value_namespace = name_space;
        sid_selection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required = value;
        sid_protection_required.value_namespace = name_space;
        sid_protection_required.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode.yfilter = yfilter;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "sid-selection-mode" || name == "sid-protection-required")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::State()
    :
    name{YType::str, "name"},
    sid_selection_mode{YType::enumeration, "sid-selection-mode"},
    sid_protection_required{YType::boolean, "sid-protection-required"}
{

    yang_name = "state"; yang_parent_name = "named-explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| sid_selection_mode.is_set
	|| sid_protection_required.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sid_selection_mode.yfilter)
	|| ydk::is_set(sid_protection_required.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sid_selection_mode.is_set || is_set(sid_selection_mode.yfilter)) leaf_name_data.push_back(sid_selection_mode.get_name_leafdata());
    if (sid_protection_required.is_set || is_set(sid_protection_required.yfilter)) leaf_name_data.push_back(sid_protection_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode = value;
        sid_selection_mode.value_namespace = name_space;
        sid_selection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required = value;
        sid_protection_required.value_namespace = name_space;
        sid_protection_required.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode.yfilter = yfilter;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "sid-selection-mode" || name == "sid-protection-required")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObjects()
    :
    explicit_route_object(this, {"index_"})
{

    yang_name = "explicit-route-objects"; yang_parent_name = "named-explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::~ExplicitRouteObjects()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<explicit_route_object.len(); index++)
    {
        if(explicit_route_object[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::has_operation() const
{
    for (std::size_t index=0; index<explicit_route_object.len(); index++)
    {
        if(explicit_route_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-route-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-route-object")
    {
        auto ent_ = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject>();
        ent_->parent = this;
        explicit_route_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : explicit_route_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-route-object")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::ExplicitRouteObject()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "explicit-route-object"; yang_parent_name = "explicit-route-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::~ExplicitRouteObject()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-route-object";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_children() const
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

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "index")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::Config()
    :
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    index_{YType::uint8, "index"}
{

    yang_name = "config"; yang_parent_name = "explicit-route-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hop-type" || name == "index")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::State()
    :
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    index_{YType::uint8, "index"}
{

    yang_name = "state"; yang_parent_name = "explicit-route-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hop-type" || name == "index")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnels()
    :
    tunnel(this, {"name"})
{

    yang_name = "tunnels"; yang_parent_name = "constrained-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::~Tunnels()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State>())
    , bandwidth(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth>())
    , p2p_tunnel_attributes(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes>())
{
    config->parent = this;
    state->parent = this;
    bandwidth->parent = this;
    p2p_tunnel_attributes->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::~Tunnel()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/constrained-path/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State>();
        }
        return state;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "p2p-tunnel-attributes")
    {
        if(p2p_tunnel_attributes == nullptr)
        {
            p2p_tunnel_attributes = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes>();
        }
        return p2p_tunnel_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_children() const
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

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(p2p_tunnel_attributes != nullptr)
    {
        _children["p2p-tunnel-attributes"] = p2p_tunnel_attributes;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "bandwidth" || name == "p2p-tunnel-attributes" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::Config()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    description{YType::str, "description"},
    admin_status{YType::identityref, "admin-status"},
    preference{YType::uint8, "preference"},
    metric_type{YType::identityref, "metric-type"},
    metric{YType::int32, "metric"},
    shortcut_eligible{YType::boolean, "shortcut-eligible"},
    protection_style_requested{YType::identityref, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    source{YType::str, "source"},
    soft_preemption{YType::boolean, "soft-preemption"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"}
{

    yang_name = "config"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| signaling_protocol.is_set
	|| description.is_set
	|| admin_status.is_set
	|| preference.is_set
	|| metric_type.is_set
	|| metric.is_set
	|| shortcut_eligible.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| source.is_set
	|| soft_preemption.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(shortcut_eligible.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (shortcut_eligible.is_set || is_set(shortcut_eligible.yfilter)) leaf_name_data.push_back(shortcut_eligible.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible = value;
        shortcut_eligible.value_namespace = name_space;
        shortcut_eligible.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "signaling-protocol" || name == "description" || name == "admin-status" || name == "preference" || name == "metric-type" || name == "metric" || name == "shortcut-eligible" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "source" || name == "soft-preemption" || name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::State()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    description{YType::str, "description"},
    admin_status{YType::identityref, "admin-status"},
    preference{YType::uint8, "preference"},
    metric_type{YType::identityref, "metric-type"},
    metric{YType::int32, "metric"},
    shortcut_eligible{YType::boolean, "shortcut-eligible"},
    protection_style_requested{YType::identityref, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    source{YType::str, "source"},
    soft_preemption{YType::boolean, "soft-preemption"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    oper_status{YType::identityref, "oper-status"},
    role{YType::identityref, "role"}
        ,
    counters(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| signaling_protocol.is_set
	|| description.is_set
	|| admin_status.is_set
	|| preference.is_set
	|| metric_type.is_set
	|| metric.is_set
	|| shortcut_eligible.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| source.is_set
	|| soft_preemption.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| oper_status.is_set
	|| role.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(shortcut_eligible.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(role.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (shortcut_eligible.is_set || is_set(shortcut_eligible.yfilter)) leaf_name_data.push_back(shortcut_eligible.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible = value;
        shortcut_eligible.value_namespace = name_space;
        shortcut_eligible.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "name" || name == "type" || name == "signaling-protocol" || name == "description" || name == "admin-status" || name == "preference" || name == "metric-type" || name == "metric" || name == "shortcut-eligible" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "source" || name == "soft-preemption" || name == "setup-priority" || name == "hold-priority" || name == "oper-status" || name == "role")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::Counters()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"},
    path_changes{YType::uint64, "path-changes"},
    state_changes{YType::uint64, "state-changes"},
    online_time{YType::str, "online-time"},
    current_path_time{YType::str, "current-path-time"},
    next_reoptimization_time{YType::str, "next-reoptimization-time"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::~Counters()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return bytes.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set
	|| online_time.is_set
	|| current_path_time.is_set
	|| next_reoptimization_time.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(path_changes.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(online_time.yfilter)
	|| ydk::is_set(current_path_time.yfilter)
	|| ydk::is_set(next_reoptimization_time.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.yfilter)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.yfilter)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.yfilter)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.yfilter)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "online-time")
    {
        online_time = value;
        online_time.value_namespace = name_space;
        online_time.value_namespace_prefix = name_space_prefix;
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
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
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
    if(value_path == "online-time")
    {
        online_time.yfilter = yfilter;
    }
    if(value_path == "current-path-time")
    {
        current_path_time.yfilter = yfilter;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "path-changes" || name == "state-changes" || name == "online-time" || name == "current-path-time" || name == "next-reoptimization-time")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Bandwidth()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State>())
    , auto_bandwidth(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth>())
{
    config->parent = this;
    state->parent = this;
    auto_bandwidth->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State>();
        }
        return state;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_children() const
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

    if(auto_bandwidth != nullptr)
    {
        _children["auto-bandwidth"] = auto_bandwidth;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "auto-bandwidth")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::Config()
    :
    specification_type{YType::enumeration, "specification-type"},
    set_bandwidth{YType::uint64, "set-bandwidth"}
{

    yang_name = "config"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    return specification_type.is_set
	|| set_bandwidth.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specification_type.yfilter)
	|| ydk::is_set(set_bandwidth.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specification_type.is_set || is_set(specification_type.yfilter)) leaf_name_data.push_back(specification_type.get_name_leafdata());
    if (set_bandwidth.is_set || is_set(set_bandwidth.yfilter)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specification-type")
    {
        specification_type = value;
        specification_type.value_namespace = name_space;
        specification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
        set_bandwidth.value_namespace = name_space;
        set_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specification-type")
    {
        specification_type.yfilter = yfilter;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specification-type" || name == "set-bandwidth")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::State()
    :
    specification_type{YType::enumeration, "specification-type"},
    set_bandwidth{YType::uint64, "set-bandwidth"},
    signaled_bandwidth{YType::uint64, "signaled-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return specification_type.is_set
	|| set_bandwidth.is_set
	|| signaled_bandwidth.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specification_type.yfilter)
	|| ydk::is_set(set_bandwidth.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specification_type.is_set || is_set(specification_type.yfilter)) leaf_name_data.push_back(specification_type.get_name_leafdata());
    if (set_bandwidth.is_set || is_set(set_bandwidth.yfilter)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specification-type")
    {
        specification_type = value;
        specification_type.value_namespace = name_space;
        specification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
        set_bandwidth.value_namespace = name_space;
        set_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specification-type")
    {
        specification_type.yfilter = yfilter;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specification-type" || name == "set-bandwidth" || name == "signaled-bandwidth")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::AutoBandwidth()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State>())
    , overflow(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow>())
    , underflow(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow>())
{
    config->parent = this;
    state->parent = this;
    overflow->parent = this;
    underflow->parent = this;

    yang_name = "auto-bandwidth"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::~AutoBandwidth()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State>();
        }
        return state;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_children() const
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

    if(overflow != nullptr)
    {
        _children["overflow"] = overflow;
    }

    if(underflow != nullptr)
    {
        _children["underflow"] = underflow;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "overflow" || name == "underflow")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    min_bw{YType::uint64, "min-bw"},
    max_bw{YType::uint64, "max-bw"},
    adjust_interval{YType::uint32, "adjust-interval"},
    adjust_threshold{YType::uint8, "adjust-threshold"}
{

    yang_name = "config"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| min_bw.is_set
	|| max_bw.is_set
	|| adjust_interval.is_set
	|| adjust_threshold.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(adjust_interval.yfilter)
	|| ydk::is_set(adjust_threshold.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (adjust_interval.is_set || is_set(adjust_interval.yfilter)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.yfilter)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
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
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "adjust-interval")
    {
        adjust_interval.yfilter = yfilter;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "min-bw" || name == "max-bw" || name == "adjust-interval" || name == "adjust-threshold")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::State()
    :
    enabled{YType::boolean, "enabled"},
    min_bw{YType::uint64, "min-bw"},
    max_bw{YType::uint64, "max-bw"},
    adjust_interval{YType::uint32, "adjust-interval"},
    adjust_threshold{YType::uint8, "adjust-threshold"}
{

    yang_name = "state"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| min_bw.is_set
	|| max_bw.is_set
	|| adjust_interval.is_set
	|| adjust_threshold.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(adjust_interval.yfilter)
	|| ydk::is_set(adjust_threshold.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (adjust_interval.is_set || is_set(adjust_interval.yfilter)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.yfilter)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
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
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "adjust-interval")
    {
        adjust_interval.yfilter = yfilter;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "min-bw" || name == "max-bw" || name == "adjust-interval" || name == "adjust-threshold")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Overflow()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::~Overflow()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_children() const
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    overflow_threshold{YType::uint8, "overflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "config"; yang_parent_name = "overflow"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "overflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::State()
    :
    enabled{YType::boolean, "enabled"},
    overflow_threshold{YType::uint8, "overflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "state"; yang_parent_name = "overflow"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "overflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Underflow()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::~Underflow()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_children() const
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    underflow_threshold{YType::uint8, "underflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "config"; yang_parent_name = "underflow"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| underflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(underflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.yfilter)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
        underflow_threshold.value_namespace = name_space;
        underflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "underflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::State()
    :
    enabled{YType::boolean, "enabled"},
    underflow_threshold{YType::uint8, "underflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "state"; yang_parent_name = "underflow"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| underflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(underflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.yfilter)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
        underflow_threshold.value_namespace = name_space;
        underflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "underflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pTunnelAttributes()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State>())
    , p2p_primary_path(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath>())
    , p2p_secondary_paths(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths>())
{
    config->parent = this;
    state->parent = this;
    p2p_primary_path->parent = this;
    p2p_secondary_paths->parent = this;

    yang_name = "p2p-tunnel-attributes"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::~P2pTunnelAttributes()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (p2p_primary_path !=  nullptr && p2p_primary_path->has_data())
	|| (p2p_secondary_paths !=  nullptr && p2p_secondary_paths->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (p2p_primary_path !=  nullptr && p2p_primary_path->has_operation())
	|| (p2p_secondary_paths !=  nullptr && p2p_secondary_paths->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State>();
        }
        return state;
    }

    if(child_yang_name == "p2p-primary-path")
    {
        if(p2p_primary_path == nullptr)
        {
            p2p_primary_path = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath>();
        }
        return p2p_primary_path;
    }

    if(child_yang_name == "p2p-secondary-paths")
    {
        if(p2p_secondary_paths == nullptr)
        {
            p2p_secondary_paths = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths>();
        }
        return p2p_secondary_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_children() const
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

    if(p2p_primary_path != nullptr)
    {
        _children["p2p-primary-path"] = p2p_primary_path;
    }

    if(p2p_secondary_paths != nullptr)
    {
        _children["p2p-secondary-paths"] = p2p_secondary_paths;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "p2p-primary-path" || name == "p2p-secondary-paths")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::Config()
    :
    destination{YType::str, "destination"}
{

    yang_name = "config"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::State()
    :
    destination{YType::str, "destination"}
{

    yang_name = "state"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath()
    :
    p2p_primary_path(this, {"name"})
{

    yang_name = "p2p-primary-path"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::~P2pPrimaryPath()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2p_primary_path.len(); index++)
    {
        if(p2p_primary_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::has_operation() const
{
    for (std::size_t index=0; index<p2p_primary_path.len(); index++)
    {
        if(p2p_primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-primary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-primary-path")
    {
        auto ent_ = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_>();
        ent_->parent = this;
        p2p_primary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : p2p_primary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-primary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::P2pPrimaryPath_()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State>())
    , candidate_secondary_paths(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths>())
    , admin_groups(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups>())
{
    config->parent = this;
    state->parent = this;
    candidate_secondary_paths->parent = this;
    admin_groups->parent = this;

    yang_name = "p2p-primary-path"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::~P2pPrimaryPath_()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_data())
	|| (admin_groups !=  nullptr && admin_groups->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_operation())
	|| (admin_groups !=  nullptr && admin_groups->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-primary-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State>();
        }
        return state;
    }

    if(child_yang_name == "candidate-secondary-paths")
    {
        if(candidate_secondary_paths == nullptr)
        {
            candidate_secondary_paths = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths>();
        }
        return candidate_secondary_paths;
    }

    if(child_yang_name == "admin-groups")
    {
        if(admin_groups == nullptr)
        {
            admin_groups = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups>();
        }
        return admin_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_children() const
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

    if(candidate_secondary_paths != nullptr)
    {
        _children["candidate-secondary-paths"] = candidate_secondary_paths;
    }

    if(admin_groups != nullptr)
    {
        _children["admin-groups"] = admin_groups;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "candidate-secondary-paths" || name == "admin-groups" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::Config()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"}
{

    yang_name = "config"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::State()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"},
    associated_rsvp_session{YType::str, "associated-rsvp-session"}
{

    yang_name = "state"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set
	|| associated_rsvp_session.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(associated_rsvp_session.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (associated_rsvp_session.is_set || is_set(associated_rsvp_session.yfilter)) leaf_name_data.push_back(associated_rsvp_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session = value;
        associated_rsvp_session.value_namespace = name_space;
        associated_rsvp_session.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer" || name == "associated-rsvp-session")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPaths()
    :
    candidate_secondary_path(this, {"secondary_path"})
{

    yang_name = "candidate-secondary-paths"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::~CandidateSecondaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<candidate_secondary_path.len(); index++)
    {
        if(candidate_secondary_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::has_operation() const
{
    for (std::size_t index=0; index<candidate_secondary_path.len(); index++)
    {
        if(candidate_secondary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-secondary-path")
    {
        auto ent_ = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath>();
        ent_->parent = this;
        candidate_secondary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : candidate_secondary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::CandidateSecondaryPath()
    :
    secondary_path{YType::str, "secondary-path"}
        ,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "candidate-secondary-path"; yang_parent_name = "candidate-secondary-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::~CandidateSecondaryPath()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::has_data() const
{
    if (is_presence_container) return true;
    return secondary_path.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-path";
    ADD_KEY_TOKEN(secondary_path, "secondary-path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_children() const
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::Config()
    :
    secondary_path{YType::str, "secondary-path"},
    priority{YType::uint16, "priority"}
{

    yang_name = "config"; yang_parent_name = "candidate-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return secondary_path.is_set
	|| priority.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-path" || name == "priority")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::State()
    :
    secondary_path{YType::str, "secondary-path"},
    priority{YType::uint16, "priority"},
    active{YType::boolean, "active"}
{

    yang_name = "state"; yang_parent_name = "candidate-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_data() const
{
    if (is_presence_container) return true;
    return secondary_path.is_set
	|| priority.is_set
	|| active.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-path" || name == "priority" || name == "active")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::AdminGroups()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-groups"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::~AdminGroups()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_children() const
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::Config()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "config"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::has_data() const
{
    if (is_presence_container) return true;
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

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::has_operation() const
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

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::State()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "state"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::has_data() const
{
    if (is_presence_container) return true;
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

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::has_operation() const
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

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPaths()
    :
    p2p_secondary_path(this, {"name"})
{

    yang_name = "p2p-secondary-paths"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::~P2pSecondaryPaths()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2p_secondary_path.len(); index++)
    {
        if(p2p_secondary_path[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::has_operation() const
{
    for (std::size_t index=0; index<p2p_secondary_path.len(); index++)
    {
        if(p2p_secondary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-secondary-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-secondary-path")
    {
        auto ent_ = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath>();
        ent_->parent = this;
        p2p_secondary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : p2p_secondary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-secondary-path")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::P2pSecondaryPath()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State>())
    , admin_groups(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups>())
{
    config->parent = this;
    state->parent = this;
    admin_groups->parent = this;

    yang_name = "p2p-secondary-path"; yang_parent_name = "p2p-secondary-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::~P2pSecondaryPath()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (admin_groups !=  nullptr && admin_groups->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (admin_groups !=  nullptr && admin_groups->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-secondary-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State>();
        }
        return state;
    }

    if(child_yang_name == "admin-groups")
    {
        if(admin_groups == nullptr)
        {
            admin_groups = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups>();
        }
        return admin_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_children() const
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

    if(admin_groups != nullptr)
    {
        _children["admin-groups"] = admin_groups;
    }

    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "admin-groups" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::Config()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"}
{

    yang_name = "config"; yang_parent_name = "p2p-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer")
        return true;
    return false;
}

const Enum::YLeaf MplsSrlgFloodingType::FLOODED_SRLG {0, "FLOODED_SRLG"};
const Enum::YLeaf MplsSrlgFloodingType::STATIC_SRLG {1, "STATIC_SRLG"};

const Enum::YLeaf MplsHopType::LOOSE {0, "LOOSE"};
const Enum::YLeaf MplsHopType::STRICT {1, "STRICT"};

const Enum::YLeaf CspfTieBreaking::RANDOM {0, "RANDOM"};
const Enum::YLeaf CspfTieBreaking::LEAST_FILL {1, "LEAST_FILL"};
const Enum::YLeaf CspfTieBreaking::MOST_FILL {2, "MOST_FILL"};

const Enum::YLeaf TeMetricType::IGP {0, "IGP"};

const Enum::YLeaf TeBandwidthType::SPECIFIED {0, "SPECIFIED"};
const Enum::YLeaf TeBandwidthType::AUTO {1, "AUTO"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD_CROSSED"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED_UP_DOWN"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE_UP_DOWN"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType::DELTA {0, "DELTA"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType::THRESHOLD_CROSSED {1, "THRESHOLD_CROSSED"};

const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification::MIRRORED_UP_DOWN {0, "MIRRORED_UP_DOWN"};
const Enum::YLeaf Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification::SEPARATE_UP_DOWN {1, "SEPARATE_UP_DOWN"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::Status::UP {0, "UP"};
const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::Status::DOWN {1, "DOWN"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::PeakDataRate::INFINITY {0, "INFINITY"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::NeighborStatus::UP {0, "UP"};
const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::NeighborStatus::DOWN {1, "DOWN"};

const Enum::YLeaf Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::Priority::ALL {0, "ALL"};

const Enum::YLeaf Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::SidSelectionMode::ADJ_SID_ONLY {0, "ADJ_SID_ONLY"};
const Enum::YLeaf Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::SidSelectionMode::MIXED_MODE {1, "MIXED_MODE"};

const Enum::YLeaf Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::SidSelectionMode::ADJ_SID_ONLY {0, "ADJ_SID_ONLY"};
const Enum::YLeaf Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::SidSelectionMode::MIXED_MODE {1, "MIXED_MODE"};


}
}

