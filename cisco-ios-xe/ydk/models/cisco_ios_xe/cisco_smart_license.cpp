
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_smart_license.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_smart_license {

RegisterIdToken::RegisterIdToken()
    :
    input(std::make_shared<RegisterIdToken::Input>())
    , output(std::make_shared<RegisterIdToken::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "register-id-token"; yang_parent_name = "cisco-smart-license"; is_top_level_class = true; has_list_ancestor = false; 
}

RegisterIdToken::~RegisterIdToken()
{
}

bool RegisterIdToken::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool RegisterIdToken::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string RegisterIdToken::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:register-id-token";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RegisterIdToken::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RegisterIdToken::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RegisterIdToken::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<RegisterIdToken::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RegisterIdToken::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void RegisterIdToken::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RegisterIdToken::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RegisterIdToken::clone_ptr() const
{
    return std::make_shared<RegisterIdToken>();
}

std::string RegisterIdToken::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RegisterIdToken::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RegisterIdToken::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RegisterIdToken::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RegisterIdToken::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

RegisterIdToken::Input::Input()
    :
    id_token{YType::str, "id-token"},
    force{YType::boolean, "force"}
{

    yang_name = "input"; yang_parent_name = "register-id-token"; is_top_level_class = false; has_list_ancestor = false; 
}

RegisterIdToken::Input::~Input()
{
}

bool RegisterIdToken::Input::has_data() const
{
    if (is_presence_container) return true;
    return id_token.is_set
	|| force.is_set;
}

bool RegisterIdToken::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id_token.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string RegisterIdToken::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:register-id-token/" << get_segment_path();
    return path_buffer.str();
}

std::string RegisterIdToken::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RegisterIdToken::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id_token.is_set || is_set(id_token.yfilter)) leaf_name_data.push_back(id_token.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RegisterIdToken::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RegisterIdToken::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RegisterIdToken::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-token")
    {
        id_token = value;
        id_token.value_namespace = name_space;
        id_token.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void RegisterIdToken::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-token")
    {
        id_token.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool RegisterIdToken::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-token" || name == "force")
        return true;
    return false;
}

RegisterIdToken::Output::Output()
    :
    return_code{YType::enumeration, "return-code"}
{

    yang_name = "output"; yang_parent_name = "register-id-token"; is_top_level_class = false; has_list_ancestor = false; 
}

RegisterIdToken::Output::~Output()
{
}

bool RegisterIdToken::Output::has_data() const
{
    if (is_presence_container) return true;
    return return_code.is_set;
}

bool RegisterIdToken::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string RegisterIdToken::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:register-id-token/" << get_segment_path();
    return path_buffer.str();
}

std::string RegisterIdToken::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RegisterIdToken::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RegisterIdToken::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RegisterIdToken::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RegisterIdToken::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void RegisterIdToken::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool RegisterIdToken::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "return-code")
        return true;
    return false;
}

DeRegister::DeRegister()
    :
    output(std::make_shared<DeRegister::Output>())
{
    output->parent = this;

    yang_name = "de-register"; yang_parent_name = "cisco-smart-license"; is_top_level_class = true; has_list_ancestor = false; 
}

DeRegister::~DeRegister()
{
}

bool DeRegister::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data());
}

bool DeRegister::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string DeRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:de-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DeRegister::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DeRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DeRegister::clone_ptr() const
{
    return std::make_shared<DeRegister>();
}

std::string DeRegister::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DeRegister::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DeRegister::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeRegister::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DeRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

DeRegister::Output::Output()
    :
    return_code{YType::enumeration, "return-code"}
{

    yang_name = "output"; yang_parent_name = "de-register"; is_top_level_class = false; has_list_ancestor = false; 
}

DeRegister::Output::~Output()
{
}

bool DeRegister::Output::has_data() const
{
    if (is_presence_container) return true;
    return return_code.is_set;
}

bool DeRegister::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string DeRegister::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:de-register/" << get_segment_path();
    return path_buffer.str();
}

std::string DeRegister::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeRegister::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeRegister::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeRegister::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeRegister::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void DeRegister::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool DeRegister::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "return-code")
        return true;
    return false;
}

RenewId::RenewId()
    :
    output(std::make_shared<RenewId::Output>())
{
    output->parent = this;

    yang_name = "renew-id"; yang_parent_name = "cisco-smart-license"; is_top_level_class = true; has_list_ancestor = false; 
}

RenewId::~RenewId()
{
}

bool RenewId::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data());
}

bool RenewId::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string RenewId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:renew-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RenewId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RenewId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<RenewId::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RenewId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void RenewId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RenewId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RenewId::clone_ptr() const
{
    return std::make_shared<RenewId>();
}

std::string RenewId::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RenewId::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RenewId::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RenewId::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RenewId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

RenewId::Output::Output()
    :
    return_code{YType::enumeration, "return-code"}
{

    yang_name = "output"; yang_parent_name = "renew-id"; is_top_level_class = false; has_list_ancestor = false; 
}

RenewId::Output::~Output()
{
}

bool RenewId::Output::has_data() const
{
    if (is_presence_container) return true;
    return return_code.is_set;
}

bool RenewId::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string RenewId::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:renew-id/" << get_segment_path();
    return path_buffer.str();
}

std::string RenewId::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RenewId::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RenewId::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RenewId::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RenewId::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void RenewId::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool RenewId::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "return-code")
        return true;
    return false;
}

RenewAuth::RenewAuth()
    :
    output(std::make_shared<RenewAuth::Output>())
{
    output->parent = this;

    yang_name = "renew-auth"; yang_parent_name = "cisco-smart-license"; is_top_level_class = true; has_list_ancestor = false; 
}

RenewAuth::~RenewAuth()
{
}

bool RenewAuth::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data());
}

bool RenewAuth::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string RenewAuth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:renew-auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RenewAuth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RenewAuth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<RenewAuth::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RenewAuth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void RenewAuth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RenewAuth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RenewAuth::clone_ptr() const
{
    return std::make_shared<RenewAuth>();
}

std::string RenewAuth::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RenewAuth::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RenewAuth::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RenewAuth::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RenewAuth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

RenewAuth::Output::Output()
    :
    return_code{YType::enumeration, "return-code"}
{

    yang_name = "output"; yang_parent_name = "renew-auth"; is_top_level_class = false; has_list_ancestor = false; 
}

RenewAuth::Output::~Output()
{
}

bool RenewAuth::Output::has_data() const
{
    if (is_presence_container) return true;
    return return_code.is_set;
}

bool RenewAuth::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string RenewAuth::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:renew-auth/" << get_segment_path();
    return path_buffer.str();
}

std::string RenewAuth::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RenewAuth::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RenewAuth::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RenewAuth::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RenewAuth::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void RenewAuth::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool RenewAuth::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "return-code")
        return true;
    return false;
}

Licensing::Licensing()
    :
    config(std::make_shared<Licensing::Config>())
    , state(std::make_shared<Licensing::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "licensing"; yang_parent_name = "cisco-smart-license"; is_top_level_class = true; has_list_ancestor = false; 
}

Licensing::~Licensing()
{
}

bool Licensing::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Licensing::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Licensing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Licensing::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Licensing::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::get_children() const
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

void Licensing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Licensing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Licensing::clone_ptr() const
{
    return std::make_shared<Licensing>();
}

std::string Licensing::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Licensing::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Licensing::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Licensing::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Licensing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Licensing::Config::Config()
    :
    enable{YType::boolean, "enable"},
    custom_id{YType::str, "custom-id"}
        ,
    privacy(std::make_shared<Licensing::Config::Privacy>())
    , utility(std::make_shared<Licensing::Config::Utility>())
    , transport(std::make_shared<Licensing::Config::Transport>())
{
    privacy->parent = this;
    utility->parent = this;
    transport->parent = this;

    yang_name = "config"; yang_parent_name = "licensing"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::~Config()
{
}

bool Licensing::Config::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| custom_id.is_set
	|| (privacy !=  nullptr && privacy->has_data())
	|| (utility !=  nullptr && utility->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Licensing::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(custom_id.yfilter)
	|| (privacy !=  nullptr && privacy->has_operation())
	|| (utility !=  nullptr && utility->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Licensing::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (custom_id.is_set || is_set(custom_id.yfilter)) leaf_name_data.push_back(custom_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "privacy")
    {
        if(privacy == nullptr)
        {
            privacy = std::make_shared<Licensing::Config::Privacy>();
        }
        return privacy;
    }

    if(child_yang_name == "utility")
    {
        if(utility == nullptr)
        {
            utility = std::make_shared<Licensing::Config::Utility>();
        }
        return utility;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Licensing::Config::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(privacy != nullptr)
    {
        children["privacy"] = privacy;
    }

    if(utility != nullptr)
    {
        children["utility"] = utility;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Licensing::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "custom-id")
    {
        custom_id = value;
        custom_id.value_namespace = name_space;
        custom_id.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "custom-id")
    {
        custom_id.yfilter = yfilter;
    }
}

bool Licensing::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "privacy" || name == "utility" || name == "transport" || name == "enable" || name == "custom-id")
        return true;
    return false;
}

Licensing::Config::Privacy::Privacy()
    :
    hostname{YType::boolean, "hostname"},
    version{YType::boolean, "version"}
{

    yang_name = "privacy"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::Privacy::~Privacy()
{
}

bool Licensing::Config::Privacy::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| version.is_set;
}

bool Licensing::Config::Privacy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Licensing::Config::Privacy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::Privacy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privacy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::Privacy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::Privacy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::Privacy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::Config::Privacy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::Privacy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Licensing::Config::Privacy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "version")
        return true;
    return false;
}

Licensing::Config::Utility::Utility()
    :
    utility_enable{YType::boolean, "utility-enable"}
        ,
    customer_info(std::make_shared<Licensing::Config::Utility::CustomerInfo>())
{
    customer_info->parent = this;

    yang_name = "utility"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::Utility::~Utility()
{
}

bool Licensing::Config::Utility::has_data() const
{
    if (is_presence_container) return true;
    return utility_enable.is_set
	|| (customer_info !=  nullptr && customer_info->has_data());
}

bool Licensing::Config::Utility::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(utility_enable.yfilter)
	|| (customer_info !=  nullptr && customer_info->has_operation());
}

std::string Licensing::Config::Utility::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::Utility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::Utility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (utility_enable.is_set || is_set(utility_enable.yfilter)) leaf_name_data.push_back(utility_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::Utility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer-info")
    {
        if(customer_info == nullptr)
        {
            customer_info = std::make_shared<Licensing::Config::Utility::CustomerInfo>();
        }
        return customer_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::Utility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(customer_info != nullptr)
    {
        children["customer-info"] = customer_info;
    }

    return children;
}

void Licensing::Config::Utility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "utility-enable")
    {
        utility_enable = value;
        utility_enable.value_namespace = name_space;
        utility_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::Utility::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "utility-enable")
    {
        utility_enable.yfilter = yfilter;
    }
}

bool Licensing::Config::Utility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer-info" || name == "utility-enable")
        return true;
    return false;
}

Licensing::Config::Utility::CustomerInfo::CustomerInfo()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    street{YType::str, "street"},
    city{YType::str, "city"},
    state{YType::str, "state"},
    country{YType::str, "country"},
    postal_code{YType::str, "postal-code"}
{

    yang_name = "customer-info"; yang_parent_name = "utility"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::Utility::CustomerInfo::~CustomerInfo()
{
}

bool Licensing::Config::Utility::CustomerInfo::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| street.is_set
	|| city.is_set
	|| state.is_set
	|| country.is_set
	|| postal_code.is_set;
}

bool Licensing::Config::Utility::CustomerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(street.yfilter)
	|| ydk::is_set(city.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(country.yfilter)
	|| ydk::is_set(postal_code.yfilter);
}

std::string Licensing::Config::Utility::CustomerInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/config/utility/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::Utility::CustomerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::Utility::CustomerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (street.is_set || is_set(street.yfilter)) leaf_name_data.push_back(street.get_name_leafdata());
    if (city.is_set || is_set(city.yfilter)) leaf_name_data.push_back(city.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());
    if (postal_code.is_set || is_set(postal_code.yfilter)) leaf_name_data.push_back(postal_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::Utility::CustomerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::Utility::CustomerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::Config::Utility::CustomerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "street")
    {
        street = value;
        street.value_namespace = name_space;
        street.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "city")
    {
        city = value;
        city.value_namespace = name_space;
        city.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postal-code")
    {
        postal_code = value;
        postal_code.value_namespace = name_space;
        postal_code.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::Utility::CustomerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "street")
    {
        street.yfilter = yfilter;
    }
    if(value_path == "city")
    {
        city.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
    if(value_path == "postal-code")
    {
        postal_code.yfilter = yfilter;
    }
}

bool Licensing::Config::Utility::CustomerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "street" || name == "city" || name == "state" || name == "country" || name == "postal-code")
        return true;
    return false;
}

Licensing::Config::Transport::Transport()
    :
    transport_type{YType::enumeration, "transport-type"}
        ,
    transport_smart(std::make_shared<Licensing::Config::Transport::TransportSmart>())
{
    transport_smart->parent = this;

    yang_name = "transport"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::Transport::~Transport()
{
}

bool Licensing::Config::Transport::has_data() const
{
    if (is_presence_container) return true;
    return transport_type.is_set
	|| (transport_smart !=  nullptr && transport_smart->has_data());
}

bool Licensing::Config::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_type.yfilter)
	|| (transport_smart !=  nullptr && transport_smart->has_operation());
}

std::string Licensing::Config::Transport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_type.is_set || is_set(transport_type.yfilter)) leaf_name_data.push_back(transport_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-smart")
    {
        if(transport_smart == nullptr)
        {
            transport_smart = std::make_shared<Licensing::Config::Transport::TransportSmart>();
        }
        return transport_smart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transport_smart != nullptr)
    {
        children["transport-smart"] = transport_smart;
    }

    return children;
}

void Licensing::Config::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-type")
    {
        transport_type = value;
        transport_type.value_namespace = name_space;
        transport_type.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-type")
    {
        transport_type.yfilter = yfilter;
    }
}

bool Licensing::Config::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-smart" || name == "transport-type")
        return true;
    return false;
}

Licensing::Config::Transport::TransportSmart::TransportSmart()
    :
    url_default{YType::boolean, "url-default"}
        ,
    urls(std::make_shared<Licensing::Config::Transport::TransportSmart::Urls>())
{
    urls->parent = this;

    yang_name = "transport-smart"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::Transport::TransportSmart::~TransportSmart()
{
}

bool Licensing::Config::Transport::TransportSmart::has_data() const
{
    if (is_presence_container) return true;
    return url_default.is_set
	|| (urls !=  nullptr && urls->has_data());
}

bool Licensing::Config::Transport::TransportSmart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url_default.yfilter)
	|| (urls !=  nullptr && urls->has_operation());
}

std::string Licensing::Config::Transport::TransportSmart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/config/transport/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::Transport::TransportSmart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-smart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::Transport::TransportSmart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url_default.is_set || is_set(url_default.yfilter)) leaf_name_data.push_back(url_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::Transport::TransportSmart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "urls")
    {
        if(urls == nullptr)
        {
            urls = std::make_shared<Licensing::Config::Transport::TransportSmart::Urls>();
        }
        return urls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::Transport::TransportSmart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(urls != nullptr)
    {
        children["urls"] = urls;
    }

    return children;
}

void Licensing::Config::Transport::TransportSmart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url-default")
    {
        url_default = value;
        url_default.value_namespace = name_space;
        url_default.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::Transport::TransportSmart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url-default")
    {
        url_default.yfilter = yfilter;
    }
}

bool Licensing::Config::Transport::TransportSmart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "urls" || name == "url-default")
        return true;
    return false;
}

Licensing::Config::Transport::TransportSmart::Urls::Urls()
    :
    url_registration{YType::str, "url-registration"},
    url_utility{YType::str, "url-utility"}
{

    yang_name = "urls"; yang_parent_name = "transport-smart"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::Config::Transport::TransportSmart::Urls::~Urls()
{
}

bool Licensing::Config::Transport::TransportSmart::Urls::has_data() const
{
    if (is_presence_container) return true;
    return url_registration.is_set
	|| url_utility.is_set;
}

bool Licensing::Config::Transport::TransportSmart::Urls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url_registration.yfilter)
	|| ydk::is_set(url_utility.yfilter);
}

std::string Licensing::Config::Transport::TransportSmart::Urls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/config/transport/transport-smart/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::Config::Transport::TransportSmart::Urls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "urls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::Config::Transport::TransportSmart::Urls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url_registration.is_set || is_set(url_registration.yfilter)) leaf_name_data.push_back(url_registration.get_name_leafdata());
    if (url_utility.is_set || is_set(url_utility.yfilter)) leaf_name_data.push_back(url_utility.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::Config::Transport::TransportSmart::Urls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::Config::Transport::TransportSmart::Urls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::Config::Transport::TransportSmart::Urls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url-registration")
    {
        url_registration = value;
        url_registration.value_namespace = name_space;
        url_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-utility")
    {
        url_utility = value;
        url_utility.value_namespace = name_space;
        url_utility.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::Config::Transport::TransportSmart::Urls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url-registration")
    {
        url_registration.yfilter = yfilter;
    }
    if(value_path == "url-utility")
    {
        url_utility.yfilter = yfilter;
    }
}

bool Licensing::Config::Transport::TransportSmart::Urls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url-registration" || name == "url-utility")
        return true;
    return false;
}

Licensing::State::State()
    :
    always_enabled{YType::boolean, "always-enabled"},
    smart_enabled{YType::boolean, "smart-enabled"},
    version{YType::str, "version"}
        ,
    state_info(std::make_shared<Licensing::State::StateInfo>())
{
    state_info->parent = this;

    yang_name = "state"; yang_parent_name = "licensing"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::~State()
{
}

bool Licensing::State::has_data() const
{
    if (is_presence_container) return true;
    return always_enabled.is_set
	|| smart_enabled.is_set
	|| version.is_set
	|| (state_info !=  nullptr && state_info->has_data());
}

bool Licensing::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_enabled.yfilter)
	|| ydk::is_set(smart_enabled.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (state_info !=  nullptr && state_info->has_operation());
}

std::string Licensing::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_enabled.is_set || is_set(always_enabled.yfilter)) leaf_name_data.push_back(always_enabled.get_name_leafdata());
    if (smart_enabled.is_set || is_set(smart_enabled.yfilter)) leaf_name_data.push_back(smart_enabled.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-info")
    {
        if(state_info == nullptr)
        {
            state_info = std::make_shared<Licensing::State::StateInfo>();
        }
        return state_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state_info != nullptr)
    {
        children["state-info"] = state_info;
    }

    return children;
}

void Licensing::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-enabled")
    {
        always_enabled = value;
        always_enabled.value_namespace = name_space;
        always_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smart-enabled")
    {
        smart_enabled = value;
        smart_enabled.value_namespace = name_space;
        smart_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-enabled")
    {
        always_enabled.yfilter = yfilter;
    }
    if(value_path == "smart-enabled")
    {
        smart_enabled.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Licensing::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-info" || name == "always-enabled" || name == "smart-enabled" || name == "version")
        return true;
    return false;
}

Licensing::State::StateInfo::StateInfo()
    :
    custom_id{YType::str, "custom-id"}
        ,
    registration(std::make_shared<Licensing::State::StateInfo::Registration>())
    , authorization(std::make_shared<Licensing::State::StateInfo::Authorization>())
    , utility(std::make_shared<Licensing::State::StateInfo::Utility>())
    , transport(std::make_shared<Licensing::State::StateInfo::Transport>())
    , privacy(std::make_shared<Licensing::State::StateInfo::Privacy>())
    , evaluation(std::make_shared<Licensing::State::StateInfo::Evaluation>())
    , udi(std::make_shared<Licensing::State::StateInfo::Udi>())
    , usage(this, {"entitlement_tag"})
{
    registration->parent = this;
    authorization->parent = this;
    utility->parent = this;
    transport->parent = this;
    privacy->parent = this;
    evaluation->parent = this;
    udi->parent = this;

    yang_name = "state-info"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::~StateInfo()
{
}

bool Licensing::State::StateInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return custom_id.is_set
	|| (registration !=  nullptr && registration->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (utility !=  nullptr && utility->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (privacy !=  nullptr && privacy->has_data())
	|| (evaluation !=  nullptr && evaluation->has_data())
	|| (udi !=  nullptr && udi->has_data());
}

bool Licensing::State::StateInfo::has_operation() const
{
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(custom_id.yfilter)
	|| (registration !=  nullptr && registration->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (utility !=  nullptr && utility->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (privacy !=  nullptr && privacy->has_operation())
	|| (evaluation !=  nullptr && evaluation->has_operation())
	|| (udi !=  nullptr && udi->has_operation());
}

std::string Licensing::State::StateInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (custom_id.is_set || is_set(custom_id.yfilter)) leaf_name_data.push_back(custom_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Licensing::State::StateInfo::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Licensing::State::StateInfo::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "utility")
    {
        if(utility == nullptr)
        {
            utility = std::make_shared<Licensing::State::StateInfo::Utility>();
        }
        return utility;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Licensing::State::StateInfo::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "privacy")
    {
        if(privacy == nullptr)
        {
            privacy = std::make_shared<Licensing::State::StateInfo::Privacy>();
        }
        return privacy;
    }

    if(child_yang_name == "evaluation")
    {
        if(evaluation == nullptr)
        {
            evaluation = std::make_shared<Licensing::State::StateInfo::Evaluation>();
        }
        return evaluation;
    }

    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Licensing::State::StateInfo::Udi>();
        }
        return udi;
    }

    if(child_yang_name == "usage")
    {
        auto c = std::make_shared<Licensing::State::StateInfo::Usage>();
        c->parent = this;
        usage.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(utility != nullptr)
    {
        children["utility"] = utility;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(privacy != nullptr)
    {
        children["privacy"] = privacy;
    }

    if(evaluation != nullptr)
    {
        children["evaluation"] = evaluation;
    }

    if(udi != nullptr)
    {
        children["udi"] = udi;
    }

    count = 0;
    for (auto c : usage.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Licensing::State::StateInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "custom-id")
    {
        custom_id = value;
        custom_id.value_namespace = name_space;
        custom_id.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "custom-id")
    {
        custom_id.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration" || name == "authorization" || name == "utility" || name == "transport" || name == "privacy" || name == "evaluation" || name == "udi" || name == "usage" || name == "custom-id")
        return true;
    return false;
}

Licensing::State::StateInfo::Registration::Registration()
    :
    registration_state{YType::enumeration, "registration-state"},
    export_control_allowed{YType::boolean, "export-control-allowed"}
        ,
    registration_in_progress(std::make_shared<Licensing::State::StateInfo::Registration::RegistrationInProgress>())
    , registration_failed(std::make_shared<Licensing::State::StateInfo::Registration::RegistrationFailed>())
    , registration_retry(std::make_shared<Licensing::State::StateInfo::Registration::RegistrationRetry>())
    , registration_complete(std::make_shared<Licensing::State::StateInfo::Registration::RegistrationComplete>())
{
    registration_in_progress->parent = this;
    registration_failed->parent = this;
    registration_retry->parent = this;
    registration_complete->parent = this;

    yang_name = "registration"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Registration::~Registration()
{
}

bool Licensing::State::StateInfo::Registration::has_data() const
{
    if (is_presence_container) return true;
    return registration_state.is_set
	|| export_control_allowed.is_set
	|| (registration_in_progress !=  nullptr && registration_in_progress->has_data())
	|| (registration_failed !=  nullptr && registration_failed->has_data())
	|| (registration_retry !=  nullptr && registration_retry->has_data())
	|| (registration_complete !=  nullptr && registration_complete->has_data());
}

bool Licensing::State::StateInfo::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(registration_state.yfilter)
	|| ydk::is_set(export_control_allowed.yfilter)
	|| (registration_in_progress !=  nullptr && registration_in_progress->has_operation())
	|| (registration_failed !=  nullptr && registration_failed->has_operation())
	|| (registration_retry !=  nullptr && registration_retry->has_operation())
	|| (registration_complete !=  nullptr && registration_complete->has_operation());
}

std::string Licensing::State::StateInfo::Registration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registration_state.is_set || is_set(registration_state.yfilter)) leaf_name_data.push_back(registration_state.get_name_leafdata());
    if (export_control_allowed.is_set || is_set(export_control_allowed.yfilter)) leaf_name_data.push_back(export_control_allowed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration-in-progress")
    {
        if(registration_in_progress == nullptr)
        {
            registration_in_progress = std::make_shared<Licensing::State::StateInfo::Registration::RegistrationInProgress>();
        }
        return registration_in_progress;
    }

    if(child_yang_name == "registration-failed")
    {
        if(registration_failed == nullptr)
        {
            registration_failed = std::make_shared<Licensing::State::StateInfo::Registration::RegistrationFailed>();
        }
        return registration_failed;
    }

    if(child_yang_name == "registration-retry")
    {
        if(registration_retry == nullptr)
        {
            registration_retry = std::make_shared<Licensing::State::StateInfo::Registration::RegistrationRetry>();
        }
        return registration_retry;
    }

    if(child_yang_name == "registration-complete")
    {
        if(registration_complete == nullptr)
        {
            registration_complete = std::make_shared<Licensing::State::StateInfo::Registration::RegistrationComplete>();
        }
        return registration_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(registration_in_progress != nullptr)
    {
        children["registration-in-progress"] = registration_in_progress;
    }

    if(registration_failed != nullptr)
    {
        children["registration-failed"] = registration_failed;
    }

    if(registration_retry != nullptr)
    {
        children["registration-retry"] = registration_retry;
    }

    if(registration_complete != nullptr)
    {
        children["registration-complete"] = registration_complete;
    }

    return children;
}

void Licensing::State::StateInfo::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "registration-state")
    {
        registration_state = value;
        registration_state.value_namespace = name_space;
        registration_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-control-allowed")
    {
        export_control_allowed = value;
        export_control_allowed.value_namespace = name_space;
        export_control_allowed.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "registration-state")
    {
        registration_state.yfilter = yfilter;
    }
    if(value_path == "export-control-allowed")
    {
        export_control_allowed.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration-in-progress" || name == "registration-failed" || name == "registration-retry" || name == "registration-complete" || name == "registration-state" || name == "export-control-allowed")
        return true;
    return false;
}

Licensing::State::StateInfo::Registration::RegistrationInProgress::RegistrationInProgress()
    :
    start_time{YType::str, "start-time"}
{

    yang_name = "registration-in-progress"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Registration::RegistrationInProgress::~RegistrationInProgress()
{
}

bool Licensing::State::StateInfo::Registration::RegistrationInProgress::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set;
}

bool Licensing::State::StateInfo::Registration::RegistrationInProgress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Licensing::State::StateInfo::Registration::RegistrationInProgress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/registration/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Registration::RegistrationInProgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration-in-progress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Registration::RegistrationInProgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Registration::RegistrationInProgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Registration::RegistrationInProgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Registration::RegistrationInProgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Registration::RegistrationInProgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Registration::RegistrationInProgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Registration::RegistrationFailed::RegistrationFailed()
    :
    fail_time{YType::str, "fail-time"},
    fail_message{YType::str, "fail-message"}
{

    yang_name = "registration-failed"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Registration::RegistrationFailed::~RegistrationFailed()
{
}

bool Licensing::State::StateInfo::Registration::RegistrationFailed::has_data() const
{
    if (is_presence_container) return true;
    return fail_time.is_set
	|| fail_message.is_set;
}

bool Licensing::State::StateInfo::Registration::RegistrationFailed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_time.yfilter)
	|| ydk::is_set(fail_message.yfilter);
}

std::string Licensing::State::StateInfo::Registration::RegistrationFailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/registration/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Registration::RegistrationFailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration-failed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Registration::RegistrationFailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_time.is_set || is_set(fail_time.yfilter)) leaf_name_data.push_back(fail_time.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Registration::RegistrationFailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Registration::RegistrationFailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Registration::RegistrationFailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-time")
    {
        fail_time = value;
        fail_time.value_namespace = name_space;
        fail_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Registration::RegistrationFailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-time")
    {
        fail_time.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Registration::RegistrationFailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail-time" || name == "fail-message")
        return true;
    return false;
}

Licensing::State::StateInfo::Registration::RegistrationRetry::RegistrationRetry()
    :
    retry_next_time{YType::str, "retry-next-time"},
    fail_time{YType::str, "fail-time"},
    fail_message{YType::str, "fail-message"}
{

    yang_name = "registration-retry"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Registration::RegistrationRetry::~RegistrationRetry()
{
}

bool Licensing::State::StateInfo::Registration::RegistrationRetry::has_data() const
{
    if (is_presence_container) return true;
    return retry_next_time.is_set
	|| fail_time.is_set
	|| fail_message.is_set;
}

bool Licensing::State::StateInfo::Registration::RegistrationRetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_next_time.yfilter)
	|| ydk::is_set(fail_time.yfilter)
	|| ydk::is_set(fail_message.yfilter);
}

std::string Licensing::State::StateInfo::Registration::RegistrationRetry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/registration/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Registration::RegistrationRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration-retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Registration::RegistrationRetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry_next_time.is_set || is_set(retry_next_time.yfilter)) leaf_name_data.push_back(retry_next_time.get_name_leafdata());
    if (fail_time.is_set || is_set(fail_time.yfilter)) leaf_name_data.push_back(fail_time.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Registration::RegistrationRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Registration::RegistrationRetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Registration::RegistrationRetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-next-time")
    {
        retry_next_time = value;
        retry_next_time.value_namespace = name_space;
        retry_next_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-time")
    {
        fail_time = value;
        fail_time.value_namespace = name_space;
        fail_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Registration::RegistrationRetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-next-time")
    {
        retry_next_time.yfilter = yfilter;
    }
    if(value_path == "fail-time")
    {
        fail_time.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Registration::RegistrationRetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry-next-time" || name == "fail-time" || name == "fail-message")
        return true;
    return false;
}

Licensing::State::StateInfo::Registration::RegistrationComplete::RegistrationComplete()
    :
    complete_time{YType::str, "complete-time"},
    last_renew_time{YType::str, "last-renew-time"},
    next_renew_time{YType::str, "next-renew-time"},
    expire_time{YType::str, "expire-time"},
    last_renew_success{YType::boolean, "last-renew-success"},
    fail_message{YType::str, "fail-message"},
    smart_account{YType::str, "smart-account"},
    virtual_account{YType::str, "virtual-account"}
{

    yang_name = "registration-complete"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Registration::RegistrationComplete::~RegistrationComplete()
{
}

bool Licensing::State::StateInfo::Registration::RegistrationComplete::has_data() const
{
    if (is_presence_container) return true;
    return complete_time.is_set
	|| last_renew_time.is_set
	|| next_renew_time.is_set
	|| expire_time.is_set
	|| last_renew_success.is_set
	|| fail_message.is_set
	|| smart_account.is_set
	|| virtual_account.is_set;
}

bool Licensing::State::StateInfo::Registration::RegistrationComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_time.yfilter)
	|| ydk::is_set(last_renew_time.yfilter)
	|| ydk::is_set(next_renew_time.yfilter)
	|| ydk::is_set(expire_time.yfilter)
	|| ydk::is_set(last_renew_success.yfilter)
	|| ydk::is_set(fail_message.yfilter)
	|| ydk::is_set(smart_account.yfilter)
	|| ydk::is_set(virtual_account.yfilter);
}

std::string Licensing::State::StateInfo::Registration::RegistrationComplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/registration/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Registration::RegistrationComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Registration::RegistrationComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_time.is_set || is_set(complete_time.yfilter)) leaf_name_data.push_back(complete_time.get_name_leafdata());
    if (last_renew_time.is_set || is_set(last_renew_time.yfilter)) leaf_name_data.push_back(last_renew_time.get_name_leafdata());
    if (next_renew_time.is_set || is_set(next_renew_time.yfilter)) leaf_name_data.push_back(next_renew_time.get_name_leafdata());
    if (expire_time.is_set || is_set(expire_time.yfilter)) leaf_name_data.push_back(expire_time.get_name_leafdata());
    if (last_renew_success.is_set || is_set(last_renew_success.yfilter)) leaf_name_data.push_back(last_renew_success.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());
    if (smart_account.is_set || is_set(smart_account.yfilter)) leaf_name_data.push_back(smart_account.get_name_leafdata());
    if (virtual_account.is_set || is_set(virtual_account.yfilter)) leaf_name_data.push_back(virtual_account.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Registration::RegistrationComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Registration::RegistrationComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Registration::RegistrationComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-time")
    {
        complete_time = value;
        complete_time.value_namespace = name_space;
        complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-renew-time")
    {
        last_renew_time = value;
        last_renew_time.value_namespace = name_space;
        last_renew_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-renew-time")
    {
        next_renew_time = value;
        next_renew_time.value_namespace = name_space;
        next_renew_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expire-time")
    {
        expire_time = value;
        expire_time.value_namespace = name_space;
        expire_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-renew-success")
    {
        last_renew_success = value;
        last_renew_success.value_namespace = name_space;
        last_renew_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smart-account")
    {
        smart_account = value;
        smart_account.value_namespace = name_space;
        smart_account.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-account")
    {
        virtual_account = value;
        virtual_account.value_namespace = name_space;
        virtual_account.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Registration::RegistrationComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-time")
    {
        complete_time.yfilter = yfilter;
    }
    if(value_path == "last-renew-time")
    {
        last_renew_time.yfilter = yfilter;
    }
    if(value_path == "next-renew-time")
    {
        next_renew_time.yfilter = yfilter;
    }
    if(value_path == "expire-time")
    {
        expire_time.yfilter = yfilter;
    }
    if(value_path == "last-renew-success")
    {
        last_renew_success.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
    if(value_path == "smart-account")
    {
        smart_account.yfilter = yfilter;
    }
    if(value_path == "virtual-account")
    {
        virtual_account.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Registration::RegistrationComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-time" || name == "last-renew-time" || name == "next-renew-time" || name == "expire-time" || name == "last-renew-success" || name == "fail-message" || name == "smart-account" || name == "virtual-account")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::Authorization()
    :
    authorization_state{YType::enumeration, "authorization-state"}
        ,
    authorization_none(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationNone>())
    , authorization_eval(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationEval>())
    , authorization_eval_expired(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired>())
    , authorization_authorized(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationAuthorized>())
    , authorization_authorized_reservation(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation>())
    , authorization_out_of_compliance(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance>())
    , authorization_authorization_expired(std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired>())
{
    authorization_none->parent = this;
    authorization_eval->parent = this;
    authorization_eval_expired->parent = this;
    authorization_authorized->parent = this;
    authorization_authorized_reservation->parent = this;
    authorization_out_of_compliance->parent = this;
    authorization_authorization_expired->parent = this;

    yang_name = "authorization"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::~Authorization()
{
}

bool Licensing::State::StateInfo::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return authorization_state.is_set
	|| (authorization_none !=  nullptr && authorization_none->has_data())
	|| (authorization_eval !=  nullptr && authorization_eval->has_data())
	|| (authorization_eval_expired !=  nullptr && authorization_eval_expired->has_data())
	|| (authorization_authorized !=  nullptr && authorization_authorized->has_data())
	|| (authorization_authorized_reservation !=  nullptr && authorization_authorized_reservation->has_data())
	|| (authorization_out_of_compliance !=  nullptr && authorization_out_of_compliance->has_data())
	|| (authorization_authorization_expired !=  nullptr && authorization_authorization_expired->has_data());
}

bool Licensing::State::StateInfo::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization_state.yfilter)
	|| (authorization_none !=  nullptr && authorization_none->has_operation())
	|| (authorization_eval !=  nullptr && authorization_eval->has_operation())
	|| (authorization_eval_expired !=  nullptr && authorization_eval_expired->has_operation())
	|| (authorization_authorized !=  nullptr && authorization_authorized->has_operation())
	|| (authorization_authorized_reservation !=  nullptr && authorization_authorized_reservation->has_operation())
	|| (authorization_out_of_compliance !=  nullptr && authorization_out_of_compliance->has_operation())
	|| (authorization_authorization_expired !=  nullptr && authorization_authorization_expired->has_operation());
}

std::string Licensing::State::StateInfo::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization_state.is_set || is_set(authorization_state.yfilter)) leaf_name_data.push_back(authorization_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization-none")
    {
        if(authorization_none == nullptr)
        {
            authorization_none = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationNone>();
        }
        return authorization_none;
    }

    if(child_yang_name == "authorization-eval")
    {
        if(authorization_eval == nullptr)
        {
            authorization_eval = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationEval>();
        }
        return authorization_eval;
    }

    if(child_yang_name == "authorization-eval-expired")
    {
        if(authorization_eval_expired == nullptr)
        {
            authorization_eval_expired = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired>();
        }
        return authorization_eval_expired;
    }

    if(child_yang_name == "authorization-authorized")
    {
        if(authorization_authorized == nullptr)
        {
            authorization_authorized = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationAuthorized>();
        }
        return authorization_authorized;
    }

    if(child_yang_name == "authorization-authorized-reservation")
    {
        if(authorization_authorized_reservation == nullptr)
        {
            authorization_authorized_reservation = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation>();
        }
        return authorization_authorized_reservation;
    }

    if(child_yang_name == "authorization-out-of-compliance")
    {
        if(authorization_out_of_compliance == nullptr)
        {
            authorization_out_of_compliance = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance>();
        }
        return authorization_out_of_compliance;
    }

    if(child_yang_name == "authorization-authorization-expired")
    {
        if(authorization_authorization_expired == nullptr)
        {
            authorization_authorization_expired = std::make_shared<Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired>();
        }
        return authorization_authorization_expired;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authorization_none != nullptr)
    {
        children["authorization-none"] = authorization_none;
    }

    if(authorization_eval != nullptr)
    {
        children["authorization-eval"] = authorization_eval;
    }

    if(authorization_eval_expired != nullptr)
    {
        children["authorization-eval-expired"] = authorization_eval_expired;
    }

    if(authorization_authorized != nullptr)
    {
        children["authorization-authorized"] = authorization_authorized;
    }

    if(authorization_authorized_reservation != nullptr)
    {
        children["authorization-authorized-reservation"] = authorization_authorized_reservation;
    }

    if(authorization_out_of_compliance != nullptr)
    {
        children["authorization-out-of-compliance"] = authorization_out_of_compliance;
    }

    if(authorization_authorization_expired != nullptr)
    {
        children["authorization-authorization-expired"] = authorization_authorization_expired;
    }

    return children;
}

void Licensing::State::StateInfo::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization-state")
    {
        authorization_state = value;
        authorization_state.value_namespace = name_space;
        authorization_state.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization-state")
    {
        authorization_state.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization-none" || name == "authorization-eval" || name == "authorization-eval-expired" || name == "authorization-authorized" || name == "authorization-authorized-reservation" || name == "authorization-out-of-compliance" || name == "authorization-authorization-expired" || name == "authorization-state")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationNone::AuthorizationNone()
{

    yang_name = "authorization-none"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationNone::~AuthorizationNone()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationNone::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationNone::has_operation() const
{
    return is_set(yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationNone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-none";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationNone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationNone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationNone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Licensing::State::StateInfo::Authorization::AuthorizationNone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationNone::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationEval::AuthorizationEval()
    :
    seconds_left{YType::uint64, "seconds-left"}
{

    yang_name = "authorization-eval"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationEval::~AuthorizationEval()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationEval::has_data() const
{
    if (is_presence_container) return true;
    return seconds_left.is_set;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationEval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds_left.yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationEval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationEval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-eval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationEval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_left.is_set || is_set(seconds_left.yfilter)) leaf_name_data.push_back(seconds_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationEval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationEval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationEval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds-left")
    {
        seconds_left = value;
        seconds_left.value_namespace = name_space;
        seconds_left.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::AuthorizationEval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds-left")
    {
        seconds_left.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::AuthorizationEval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds-left")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::AuthorizationEvalExpired()
    :
    expire_time{YType::str, "expire-time"}
{

    yang_name = "authorization-eval-expired"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::~AuthorizationEvalExpired()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::has_data() const
{
    if (is_presence_container) return true;
    return expire_time.is_set;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expire_time.yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-eval-expired";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expire_time.is_set || is_set(expire_time.yfilter)) leaf_name_data.push_back(expire_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expire-time")
    {
        expire_time = value;
        expire_time.value_namespace = name_space;
        expire_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expire-time")
    {
        expire_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expire-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::AuthorizationAuthorized()
    :
    last_comm_status_success{YType::boolean, "last-comm-status-success"},
    fail_message{YType::str, "fail-message"},
    last_comm_time{YType::str, "last-comm-time"},
    next_comm_time{YType::str, "next-comm-time"},
    comm_deadline_time{YType::str, "comm-deadline-time"}
{

    yang_name = "authorization-authorized"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::~AuthorizationAuthorized()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::has_data() const
{
    if (is_presence_container) return true;
    return last_comm_status_success.is_set
	|| fail_message.is_set
	|| last_comm_time.is_set
	|| next_comm_time.is_set
	|| comm_deadline_time.is_set;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_comm_status_success.yfilter)
	|| ydk::is_set(fail_message.yfilter)
	|| ydk::is_set(last_comm_time.yfilter)
	|| ydk::is_set(next_comm_time.yfilter)
	|| ydk::is_set(comm_deadline_time.yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-authorized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_comm_status_success.is_set || is_set(last_comm_status_success.yfilter)) leaf_name_data.push_back(last_comm_status_success.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());
    if (last_comm_time.is_set || is_set(last_comm_time.yfilter)) leaf_name_data.push_back(last_comm_time.get_name_leafdata());
    if (next_comm_time.is_set || is_set(next_comm_time.yfilter)) leaf_name_data.push_back(next_comm_time.get_name_leafdata());
    if (comm_deadline_time.is_set || is_set(comm_deadline_time.yfilter)) leaf_name_data.push_back(comm_deadline_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-comm-status-success")
    {
        last_comm_status_success = value;
        last_comm_status_success.value_namespace = name_space;
        last_comm_status_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-comm-time")
    {
        last_comm_time = value;
        last_comm_time.value_namespace = name_space;
        last_comm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-comm-time")
    {
        next_comm_time = value;
        next_comm_time.value_namespace = name_space;
        next_comm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-deadline-time")
    {
        comm_deadline_time = value;
        comm_deadline_time.value_namespace = name_space;
        comm_deadline_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-comm-status-success")
    {
        last_comm_status_success.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
    if(value_path == "last-comm-time")
    {
        last_comm_time.yfilter = yfilter;
    }
    if(value_path == "next-comm-time")
    {
        next_comm_time.yfilter = yfilter;
    }
    if(value_path == "comm-deadline-time")
    {
        comm_deadline_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-comm-status-success" || name == "fail-message" || name == "last-comm-time" || name == "next-comm-time" || name == "comm-deadline-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::AuthorizationAuthorizedReservation()
    :
    reservation_time{YType::str, "reservation-time"}
{

    yang_name = "authorization-authorized-reservation"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::~AuthorizationAuthorizedReservation()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::has_data() const
{
    if (is_presence_container) return true;
    return reservation_time.is_set;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_time.yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-authorized-reservation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_time.is_set || is_set(reservation_time.yfilter)) leaf_name_data.push_back(reservation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-time")
    {
        reservation_time = value;
        reservation_time.value_namespace = name_space;
        reservation_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-time")
    {
        reservation_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::AuthorizationOutOfCompliance()
    :
    last_comm_status_success{YType::boolean, "last-comm-status-success"},
    fail_message{YType::str, "fail-message"},
    last_comm_time{YType::str, "last-comm-time"},
    next_comm_time{YType::str, "next-comm-time"},
    comm_deadline_time{YType::str, "comm-deadline-time"},
    ooc_time{YType::str, "ooc-time"}
{

    yang_name = "authorization-out-of-compliance"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::~AuthorizationOutOfCompliance()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::has_data() const
{
    if (is_presence_container) return true;
    return last_comm_status_success.is_set
	|| fail_message.is_set
	|| last_comm_time.is_set
	|| next_comm_time.is_set
	|| comm_deadline_time.is_set
	|| ooc_time.is_set;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_comm_status_success.yfilter)
	|| ydk::is_set(fail_message.yfilter)
	|| ydk::is_set(last_comm_time.yfilter)
	|| ydk::is_set(next_comm_time.yfilter)
	|| ydk::is_set(comm_deadline_time.yfilter)
	|| ydk::is_set(ooc_time.yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-out-of-compliance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_comm_status_success.is_set || is_set(last_comm_status_success.yfilter)) leaf_name_data.push_back(last_comm_status_success.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());
    if (last_comm_time.is_set || is_set(last_comm_time.yfilter)) leaf_name_data.push_back(last_comm_time.get_name_leafdata());
    if (next_comm_time.is_set || is_set(next_comm_time.yfilter)) leaf_name_data.push_back(next_comm_time.get_name_leafdata());
    if (comm_deadline_time.is_set || is_set(comm_deadline_time.yfilter)) leaf_name_data.push_back(comm_deadline_time.get_name_leafdata());
    if (ooc_time.is_set || is_set(ooc_time.yfilter)) leaf_name_data.push_back(ooc_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-comm-status-success")
    {
        last_comm_status_success = value;
        last_comm_status_success.value_namespace = name_space;
        last_comm_status_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-comm-time")
    {
        last_comm_time = value;
        last_comm_time.value_namespace = name_space;
        last_comm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-comm-time")
    {
        next_comm_time = value;
        next_comm_time.value_namespace = name_space;
        next_comm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-deadline-time")
    {
        comm_deadline_time = value;
        comm_deadline_time.value_namespace = name_space;
        comm_deadline_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ooc-time")
    {
        ooc_time = value;
        ooc_time.value_namespace = name_space;
        ooc_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-comm-status-success")
    {
        last_comm_status_success.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
    if(value_path == "last-comm-time")
    {
        last_comm_time.yfilter = yfilter;
    }
    if(value_path == "next-comm-time")
    {
        next_comm_time.yfilter = yfilter;
    }
    if(value_path == "comm-deadline-time")
    {
        comm_deadline_time.yfilter = yfilter;
    }
    if(value_path == "ooc-time")
    {
        ooc_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-comm-status-success" || name == "fail-message" || name == "last-comm-time" || name == "next-comm-time" || name == "comm-deadline-time" || name == "ooc-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::AuthorizationAuthorizationExpired()
    :
    last_comm_status_success{YType::boolean, "last-comm-status-success"},
    fail_message{YType::str, "fail-message"},
    last_comm_time{YType::str, "last-comm-time"},
    next_comm_time{YType::str, "next-comm-time"},
    comm_deadline_time{YType::str, "comm-deadline-time"}
{

    yang_name = "authorization-authorization-expired"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::~AuthorizationAuthorizationExpired()
{
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::has_data() const
{
    if (is_presence_container) return true;
    return last_comm_status_success.is_set
	|| fail_message.is_set
	|| last_comm_time.is_set
	|| next_comm_time.is_set
	|| comm_deadline_time.is_set;
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_comm_status_success.yfilter)
	|| ydk::is_set(fail_message.yfilter)
	|| ydk::is_set(last_comm_time.yfilter)
	|| ydk::is_set(next_comm_time.yfilter)
	|| ydk::is_set(comm_deadline_time.yfilter);
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-authorization-expired";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_comm_status_success.is_set || is_set(last_comm_status_success.yfilter)) leaf_name_data.push_back(last_comm_status_success.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());
    if (last_comm_time.is_set || is_set(last_comm_time.yfilter)) leaf_name_data.push_back(last_comm_time.get_name_leafdata());
    if (next_comm_time.is_set || is_set(next_comm_time.yfilter)) leaf_name_data.push_back(next_comm_time.get_name_leafdata());
    if (comm_deadline_time.is_set || is_set(comm_deadline_time.yfilter)) leaf_name_data.push_back(comm_deadline_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-comm-status-success")
    {
        last_comm_status_success = value;
        last_comm_status_success.value_namespace = name_space;
        last_comm_status_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-comm-time")
    {
        last_comm_time = value;
        last_comm_time.value_namespace = name_space;
        last_comm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-comm-time")
    {
        next_comm_time = value;
        next_comm_time.value_namespace = name_space;
        next_comm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-deadline-time")
    {
        comm_deadline_time = value;
        comm_deadline_time.value_namespace = name_space;
        comm_deadline_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-comm-status-success")
    {
        last_comm_status_success.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
    if(value_path == "last-comm-time")
    {
        last_comm_time.yfilter = yfilter;
    }
    if(value_path == "next-comm-time")
    {
        next_comm_time.yfilter = yfilter;
    }
    if(value_path == "comm-deadline-time")
    {
        comm_deadline_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-comm-status-success" || name == "fail-message" || name == "last-comm-time" || name == "next-comm-time" || name == "comm-deadline-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Utility::Utility()
    :
    enabled{YType::boolean, "enabled"},
    reporting{YType::enumeration, "reporting"}
        ,
    reporting_times(std::make_shared<Licensing::State::StateInfo::Utility::ReportingTimes>())
    , customer_info(std::make_shared<Licensing::State::StateInfo::Utility::CustomerInfo>())
{
    reporting_times->parent = this;
    customer_info->parent = this;

    yang_name = "utility"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Utility::~Utility()
{
}

bool Licensing::State::StateInfo::Utility::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| reporting.is_set
	|| (reporting_times !=  nullptr && reporting_times->has_data())
	|| (customer_info !=  nullptr && customer_info->has_data());
}

bool Licensing::State::StateInfo::Utility::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(reporting.yfilter)
	|| (reporting_times !=  nullptr && reporting_times->has_operation())
	|| (customer_info !=  nullptr && customer_info->has_operation());
}

std::string Licensing::State::StateInfo::Utility::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Utility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Utility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (reporting.is_set || is_set(reporting.yfilter)) leaf_name_data.push_back(reporting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Utility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reporting-times")
    {
        if(reporting_times == nullptr)
        {
            reporting_times = std::make_shared<Licensing::State::StateInfo::Utility::ReportingTimes>();
        }
        return reporting_times;
    }

    if(child_yang_name == "customer-info")
    {
        if(customer_info == nullptr)
        {
            customer_info = std::make_shared<Licensing::State::StateInfo::Utility::CustomerInfo>();
        }
        return customer_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Utility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reporting_times != nullptr)
    {
        children["reporting-times"] = reporting_times;
    }

    if(customer_info != nullptr)
    {
        children["customer-info"] = customer_info;
    }

    return children;
}

void Licensing::State::StateInfo::Utility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting")
    {
        reporting = value;
        reporting.value_namespace = name_space;
        reporting.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Utility::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "reporting")
    {
        reporting.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Utility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-times" || name == "customer-info" || name == "enabled" || name == "reporting")
        return true;
    return false;
}

Licensing::State::StateInfo::Utility::ReportingTimes::ReportingTimes()
    :
    last_report_time{YType::str, "last-report-time"},
    last_report_success{YType::boolean, "last-report-success"},
    fail_message{YType::str, "fail-message"},
    next_report_time{YType::str, "next-report-time"}
{

    yang_name = "reporting-times"; yang_parent_name = "utility"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Utility::ReportingTimes::~ReportingTimes()
{
}

bool Licensing::State::StateInfo::Utility::ReportingTimes::has_data() const
{
    if (is_presence_container) return true;
    return last_report_time.is_set
	|| last_report_success.is_set
	|| fail_message.is_set
	|| next_report_time.is_set;
}

bool Licensing::State::StateInfo::Utility::ReportingTimes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_report_time.yfilter)
	|| ydk::is_set(last_report_success.yfilter)
	|| ydk::is_set(fail_message.yfilter)
	|| ydk::is_set(next_report_time.yfilter);
}

std::string Licensing::State::StateInfo::Utility::ReportingTimes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/utility/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Utility::ReportingTimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reporting-times";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Utility::ReportingTimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_report_time.is_set || is_set(last_report_time.yfilter)) leaf_name_data.push_back(last_report_time.get_name_leafdata());
    if (last_report_success.is_set || is_set(last_report_success.yfilter)) leaf_name_data.push_back(last_report_success.get_name_leafdata());
    if (fail_message.is_set || is_set(fail_message.yfilter)) leaf_name_data.push_back(fail_message.get_name_leafdata());
    if (next_report_time.is_set || is_set(next_report_time.yfilter)) leaf_name_data.push_back(next_report_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Utility::ReportingTimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Utility::ReportingTimes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Utility::ReportingTimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-report-time")
    {
        last_report_time = value;
        last_report_time.value_namespace = name_space;
        last_report_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-report-success")
    {
        last_report_success = value;
        last_report_success.value_namespace = name_space;
        last_report_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-message")
    {
        fail_message = value;
        fail_message.value_namespace = name_space;
        fail_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-report-time")
    {
        next_report_time = value;
        next_report_time.value_namespace = name_space;
        next_report_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Utility::ReportingTimes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-report-time")
    {
        last_report_time.yfilter = yfilter;
    }
    if(value_path == "last-report-success")
    {
        last_report_success.yfilter = yfilter;
    }
    if(value_path == "fail-message")
    {
        fail_message.yfilter = yfilter;
    }
    if(value_path == "next-report-time")
    {
        next_report_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Utility::ReportingTimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-report-time" || name == "last-report-success" || name == "fail-message" || name == "next-report-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Utility::CustomerInfo::CustomerInfo()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    street{YType::str, "street"},
    city{YType::str, "city"},
    state{YType::str, "state"},
    country{YType::str, "country"},
    postal_code{YType::str, "postal-code"}
{

    yang_name = "customer-info"; yang_parent_name = "utility"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Utility::CustomerInfo::~CustomerInfo()
{
}

bool Licensing::State::StateInfo::Utility::CustomerInfo::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| street.is_set
	|| city.is_set
	|| state.is_set
	|| country.is_set
	|| postal_code.is_set;
}

bool Licensing::State::StateInfo::Utility::CustomerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(street.yfilter)
	|| ydk::is_set(city.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(country.yfilter)
	|| ydk::is_set(postal_code.yfilter);
}

std::string Licensing::State::StateInfo::Utility::CustomerInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/utility/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Utility::CustomerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Utility::CustomerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (street.is_set || is_set(street.yfilter)) leaf_name_data.push_back(street.get_name_leafdata());
    if (city.is_set || is_set(city.yfilter)) leaf_name_data.push_back(city.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());
    if (postal_code.is_set || is_set(postal_code.yfilter)) leaf_name_data.push_back(postal_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Utility::CustomerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Utility::CustomerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Utility::CustomerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "street")
    {
        street = value;
        street.value_namespace = name_space;
        street.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "city")
    {
        city = value;
        city.value_namespace = name_space;
        city.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postal-code")
    {
        postal_code = value;
        postal_code.value_namespace = name_space;
        postal_code.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Utility::CustomerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "street")
    {
        street.yfilter = yfilter;
    }
    if(value_path == "city")
    {
        city.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
    if(value_path == "postal-code")
    {
        postal_code.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Utility::CustomerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "street" || name == "city" || name == "state" || name == "country" || name == "postal-code")
        return true;
    return false;
}

Licensing::State::StateInfo::Transport::Transport()
    :
    transport_type{YType::enumeration, "transport-type"}
        ,
    url_settings(std::make_shared<Licensing::State::StateInfo::Transport::UrlSettings>())
{
    url_settings->parent = this;

    yang_name = "transport"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Transport::~Transport()
{
}

bool Licensing::State::StateInfo::Transport::has_data() const
{
    if (is_presence_container) return true;
    return transport_type.is_set
	|| (url_settings !=  nullptr && url_settings->has_data());
}

bool Licensing::State::StateInfo::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_type.yfilter)
	|| (url_settings !=  nullptr && url_settings->has_operation());
}

std::string Licensing::State::StateInfo::Transport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_type.is_set || is_set(transport_type.yfilter)) leaf_name_data.push_back(transport_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url-settings")
    {
        if(url_settings == nullptr)
        {
            url_settings = std::make_shared<Licensing::State::StateInfo::Transport::UrlSettings>();
        }
        return url_settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url_settings != nullptr)
    {
        children["url-settings"] = url_settings;
    }

    return children;
}

void Licensing::State::StateInfo::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-type")
    {
        transport_type = value;
        transport_type.value_namespace = name_space;
        transport_type.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-type")
    {
        transport_type.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url-settings" || name == "transport-type")
        return true;
    return false;
}

Licensing::State::StateInfo::Transport::UrlSettings::UrlSettings()
    :
    url_registration{YType::str, "url-registration"},
    url_utility{YType::str, "url-utility"}
{

    yang_name = "url-settings"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Transport::UrlSettings::~UrlSettings()
{
}

bool Licensing::State::StateInfo::Transport::UrlSettings::has_data() const
{
    if (is_presence_container) return true;
    return url_registration.is_set
	|| url_utility.is_set;
}

bool Licensing::State::StateInfo::Transport::UrlSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url_registration.yfilter)
	|| ydk::is_set(url_utility.yfilter);
}

std::string Licensing::State::StateInfo::Transport::UrlSettings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/transport/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Transport::UrlSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Transport::UrlSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url_registration.is_set || is_set(url_registration.yfilter)) leaf_name_data.push_back(url_registration.get_name_leafdata());
    if (url_utility.is_set || is_set(url_utility.yfilter)) leaf_name_data.push_back(url_utility.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Transport::UrlSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Transport::UrlSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Transport::UrlSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url-registration")
    {
        url_registration = value;
        url_registration.value_namespace = name_space;
        url_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-utility")
    {
        url_utility = value;
        url_utility.value_namespace = name_space;
        url_utility.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Transport::UrlSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url-registration")
    {
        url_registration.yfilter = yfilter;
    }
    if(value_path == "url-utility")
    {
        url_utility.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Transport::UrlSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url-registration" || name == "url-utility")
        return true;
    return false;
}

Licensing::State::StateInfo::Privacy::Privacy()
    :
    hostname{YType::boolean, "hostname"},
    version{YType::boolean, "version"}
{

    yang_name = "privacy"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Privacy::~Privacy()
{
}

bool Licensing::State::StateInfo::Privacy::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| version.is_set;
}

bool Licensing::State::StateInfo::Privacy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Licensing::State::StateInfo::Privacy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Privacy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privacy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Privacy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Privacy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Privacy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Privacy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Privacy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Privacy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "version")
        return true;
    return false;
}

Licensing::State::StateInfo::Evaluation::Evaluation()
    :
    eval_in_use{YType::boolean, "eval-in-use"},
    eval_expired{YType::boolean, "eval-expired"}
        ,
    eval_period_left(std::make_shared<Licensing::State::StateInfo::Evaluation::EvalPeriodLeft>())
    , eval_expire_time(std::make_shared<Licensing::State::StateInfo::Evaluation::EvalExpireTime>())
{
    eval_period_left->parent = this;
    eval_expire_time->parent = this;

    yang_name = "evaluation"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Evaluation::~Evaluation()
{
}

bool Licensing::State::StateInfo::Evaluation::has_data() const
{
    if (is_presence_container) return true;
    return eval_in_use.is_set
	|| eval_expired.is_set
	|| (eval_period_left !=  nullptr && eval_period_left->has_data())
	|| (eval_expire_time !=  nullptr && eval_expire_time->has_data());
}

bool Licensing::State::StateInfo::Evaluation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eval_in_use.yfilter)
	|| ydk::is_set(eval_expired.yfilter)
	|| (eval_period_left !=  nullptr && eval_period_left->has_operation())
	|| (eval_expire_time !=  nullptr && eval_expire_time->has_operation());
}

std::string Licensing::State::StateInfo::Evaluation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Evaluation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evaluation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Evaluation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eval_in_use.is_set || is_set(eval_in_use.yfilter)) leaf_name_data.push_back(eval_in_use.get_name_leafdata());
    if (eval_expired.is_set || is_set(eval_expired.yfilter)) leaf_name_data.push_back(eval_expired.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Evaluation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eval-period-left")
    {
        if(eval_period_left == nullptr)
        {
            eval_period_left = std::make_shared<Licensing::State::StateInfo::Evaluation::EvalPeriodLeft>();
        }
        return eval_period_left;
    }

    if(child_yang_name == "eval-expire-time")
    {
        if(eval_expire_time == nullptr)
        {
            eval_expire_time = std::make_shared<Licensing::State::StateInfo::Evaluation::EvalExpireTime>();
        }
        return eval_expire_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Evaluation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eval_period_left != nullptr)
    {
        children["eval-period-left"] = eval_period_left;
    }

    if(eval_expire_time != nullptr)
    {
        children["eval-expire-time"] = eval_expire_time;
    }

    return children;
}

void Licensing::State::StateInfo::Evaluation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eval-in-use")
    {
        eval_in_use = value;
        eval_in_use.value_namespace = name_space;
        eval_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eval-expired")
    {
        eval_expired = value;
        eval_expired.value_namespace = name_space;
        eval_expired.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Evaluation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eval-in-use")
    {
        eval_in_use.yfilter = yfilter;
    }
    if(value_path == "eval-expired")
    {
        eval_expired.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Evaluation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eval-period-left" || name == "eval-expire-time" || name == "eval-in-use" || name == "eval-expired")
        return true;
    return false;
}

Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::EvalPeriodLeft()
    :
    time_left{YType::uint32, "time-left"}
{

    yang_name = "eval-period-left"; yang_parent_name = "evaluation"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::~EvalPeriodLeft()
{
}

bool Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::has_data() const
{
    if (is_presence_container) return true;
    return time_left.is_set;
}

bool Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_left.yfilter);
}

std::string Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/evaluation/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eval-period-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Evaluation::EvalPeriodLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-left")
        return true;
    return false;
}

Licensing::State::StateInfo::Evaluation::EvalExpireTime::EvalExpireTime()
    :
    expire_time{YType::str, "expire-time"}
{

    yang_name = "eval-expire-time"; yang_parent_name = "evaluation"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Evaluation::EvalExpireTime::~EvalExpireTime()
{
}

bool Licensing::State::StateInfo::Evaluation::EvalExpireTime::has_data() const
{
    if (is_presence_container) return true;
    return expire_time.is_set;
}

bool Licensing::State::StateInfo::Evaluation::EvalExpireTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expire_time.yfilter);
}

std::string Licensing::State::StateInfo::Evaluation::EvalExpireTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/evaluation/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Evaluation::EvalExpireTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eval-expire-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Evaluation::EvalExpireTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expire_time.is_set || is_set(expire_time.yfilter)) leaf_name_data.push_back(expire_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Evaluation::EvalExpireTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Evaluation::EvalExpireTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Evaluation::EvalExpireTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expire-time")
    {
        expire_time = value;
        expire_time.value_namespace = name_space;
        expire_time.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Evaluation::EvalExpireTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expire-time")
    {
        expire_time.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Evaluation::EvalExpireTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expire-time")
        return true;
    return false;
}

Licensing::State::StateInfo::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"},
    vid{YType::str, "vid"},
    uuid{YType::str, "uuid"},
    suvi{YType::str, "suvi"},
    host_identifier{YType::str, "host-identifier"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "udi"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Udi::~Udi()
{
}

bool Licensing::State::StateInfo::Udi::has_data() const
{
    if (is_presence_container) return true;
    return pid.is_set
	|| sn.is_set
	|| vid.is_set
	|| uuid.is_set
	|| suvi.is_set
	|| host_identifier.is_set
	|| mac_address.is_set;
}

bool Licensing::State::StateInfo::Udi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| ydk::is_set(suvi.yfilter)
	|| ydk::is_set(host_identifier.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Licensing::State::StateInfo::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());
    if (suvi.is_set || is_set(suvi.yfilter)) leaf_name_data.push_back(suvi.get_name_leafdata());
    if (host_identifier.is_set || is_set(host_identifier.yfilter)) leaf_name_data.push_back(host_identifier.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suvi")
    {
        suvi = value;
        suvi.value_namespace = name_space;
        suvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-identifier")
    {
        host_identifier = value;
        host_identifier.value_namespace = name_space;
        host_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "sn")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
    if(value_path == "suvi")
    {
        suvi.yfilter = yfilter;
    }
    if(value_path == "host-identifier")
    {
        host_identifier.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "sn" || name == "vid" || name == "uuid" || name == "suvi" || name == "host-identifier" || name == "mac-address")
        return true;
    return false;
}

Licensing::State::StateInfo::Usage::Usage()
    :
    entitlement_tag{YType::str, "entitlement-tag"},
    short_name{YType::str, "short-name"},
    license_name{YType::str, "license-name"},
    description{YType::str, "description"},
    count{YType::uint32, "count"},
    enforcement_mode{YType::enumeration, "enforcement-mode"},
    post_paid{YType::boolean, "post-paid"},
    subscription_id{YType::str, "subscription-id"}
{

    yang_name = "usage"; yang_parent_name = "state-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Licensing::State::StateInfo::Usage::~Usage()
{
}

bool Licensing::State::StateInfo::Usage::has_data() const
{
    if (is_presence_container) return true;
    return entitlement_tag.is_set
	|| short_name.is_set
	|| license_name.is_set
	|| description.is_set
	|| count.is_set
	|| enforcement_mode.is_set
	|| post_paid.is_set
	|| subscription_id.is_set;
}

bool Licensing::State::StateInfo::Usage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entitlement_tag.yfilter)
	|| ydk::is_set(short_name.yfilter)
	|| ydk::is_set(license_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(enforcement_mode.yfilter)
	|| ydk::is_set(post_paid.yfilter)
	|| ydk::is_set(subscription_id.yfilter);
}

std::string Licensing::State::StateInfo::Usage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-smart-license:licensing/state/state-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Licensing::State::StateInfo::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";
    ADD_KEY_TOKEN(entitlement_tag, "entitlement-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Licensing::State::StateInfo::Usage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entitlement_tag.is_set || is_set(entitlement_tag.yfilter)) leaf_name_data.push_back(entitlement_tag.get_name_leafdata());
    if (short_name.is_set || is_set(short_name.yfilter)) leaf_name_data.push_back(short_name.get_name_leafdata());
    if (license_name.is_set || is_set(license_name.yfilter)) leaf_name_data.push_back(license_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (enforcement_mode.is_set || is_set(enforcement_mode.yfilter)) leaf_name_data.push_back(enforcement_mode.get_name_leafdata());
    if (post_paid.is_set || is_set(post_paid.yfilter)) leaf_name_data.push_back(post_paid.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Licensing::State::StateInfo::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Licensing::State::StateInfo::Usage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Licensing::State::StateInfo::Usage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entitlement-tag")
    {
        entitlement_tag = value;
        entitlement_tag.value_namespace = name_space;
        entitlement_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-name")
    {
        short_name = value;
        short_name.value_namespace = name_space;
        short_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "license-name")
    {
        license_name = value;
        license_name.value_namespace = name_space;
        license_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforcement-mode")
    {
        enforcement_mode = value;
        enforcement_mode.value_namespace = name_space;
        enforcement_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-paid")
    {
        post_paid = value;
        post_paid.value_namespace = name_space;
        post_paid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void Licensing::State::StateInfo::Usage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entitlement-tag")
    {
        entitlement_tag.yfilter = yfilter;
    }
    if(value_path == "short-name")
    {
        short_name.yfilter = yfilter;
    }
    if(value_path == "license-name")
    {
        license_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "enforcement-mode")
    {
        enforcement_mode.yfilter = yfilter;
    }
    if(value_path == "post-paid")
    {
        post_paid.yfilter = yfilter;
    }
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool Licensing::State::StateInfo::Usage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entitlement-tag" || name == "short-name" || name == "license-name" || name == "description" || name == "count" || name == "enforcement-mode" || name == "post-paid" || name == "subscription-id")
        return true;
    return false;
}

const Enum::YLeaf TransportTypeEnum::transport_type_callhome {0, "transport-type-callhome"};
const Enum::YLeaf TransportTypeEnum::transport_type_smart {1, "transport-type-smart"};

const Enum::YLeaf ErrorEnum::success {0, "success"};
const Enum::YLeaf ErrorEnum::malloc {1, "malloc"};
const Enum::YLeaf ErrorEnum::nullpointer {2, "nullpointer"};
const Enum::YLeaf ErrorEnum::error3 {3, "error3"};
const Enum::YLeaf ErrorEnum::error4 {4, "error4"};
const Enum::YLeaf ErrorEnum::error5 {5, "error5"};
const Enum::YLeaf ErrorEnum::BadInputParams {6, "BadInputParams"};
const Enum::YLeaf ErrorEnum::error7 {7, "error7"};
const Enum::YLeaf ErrorEnum::badhandle {8, "badhandle"};
const Enum::YLeaf ErrorEnum::notfound {9, "notfound"};
const Enum::YLeaf ErrorEnum::notsupported {10, "notsupported"};
const Enum::YLeaf ErrorEnum::alreadyinit {11, "alreadyinit"};
const Enum::YLeaf ErrorEnum::notinit {12, "notinit"};
const Enum::YLeaf ErrorEnum::smfailtocreate {13, "smfailtocreate"};
const Enum::YLeaf ErrorEnum::smfailtorun {14, "smfailtorun"};
const Enum::YLeaf ErrorEnum::smfailtoinit {15, "smfailtoinit"};
const Enum::YLeaf ErrorEnum::smfailtodestroy {16, "smfailtodestroy"};
const Enum::YLeaf ErrorEnum::msgparse {17, "msgparse"};
const Enum::YLeaf ErrorEnum::msgbuild {18, "msgbuild"};
const Enum::YLeaf ErrorEnum::notenabled {19, "notenabled"};
const Enum::YLeaf ErrorEnum::invalidrequest {20, "invalidrequest"};
const Enum::YLeaf ErrorEnum::init {21, "init"};
const Enum::YLeaf ErrorEnum::failtosetstate {22, "failtosetstate"};
const Enum::YLeaf ErrorEnum::unsupportedresponse {23, "unsupportedresponse"};
const Enum::YLeaf ErrorEnum::invalidresponse {24, "invalidresponse"};
const Enum::YLeaf ErrorEnum::storagefailtostore {25, "storagefailtostore"};
const Enum::YLeaf ErrorEnum::storagefailtoretrieve {26, "storagefailtoretrieve"};
const Enum::YLeaf ErrorEnum::nullccoidtoken {27, "nullccoidtoken"};
const Enum::YLeaf ErrorEnum::matchidentifier {28, "matchidentifier"};
const Enum::YLeaf ErrorEnum::matchvendor {29, "matchvendor"};
const Enum::YLeaf ErrorEnum::matchnonce {30, "matchnonce"};
const Enum::YLeaf ErrorEnum::commdisabled {31, "commdisabled"};
const Enum::YLeaf ErrorEnum::commsend {32, "commsend"};
const Enum::YLeaf ErrorEnum::commresponse {33, "commresponse"};
const Enum::YLeaf ErrorEnum::communkown {34, "communkown"};
const Enum::YLeaf ErrorEnum::smpostnotallow {35, "smpostnotallow"};
const Enum::YLeaf ErrorEnum::reqmsgmissingmandatoryfield {36, "reqmsgmissingmandatoryfield"};
const Enum::YLeaf ErrorEnum::responsefailed {37, "responsefailed"};
const Enum::YLeaf ErrorEnum::pinotinit {38, "pinotinit"};
const Enum::YLeaf ErrorEnum::alreadyenabled {39, "alreadyenabled"};
const Enum::YLeaf ErrorEnum::alreadyregistered {40, "alreadyregistered"};
const Enum::YLeaf ErrorEnum::certinvalid {41, "certinvalid"};
const Enum::YLeaf ErrorEnum::certexpired {42, "certexpired"};
const Enum::YLeaf ErrorEnum::notregistered {43, "notregistered"};
const Enum::YLeaf ErrorEnum::csrgenerationfailed {44, "csrgenerationfailed"};
const Enum::YLeaf ErrorEnum::verifysignaturefailed {45, "verifysignaturefailed"};
const Enum::YLeaf ErrorEnum::generatesignaturefailed {46, "generatesignaturefailed"};
const Enum::YLeaf ErrorEnum::signcertverificationfailed {47, "signcertverificationfailed"};
const Enum::YLeaf ErrorEnum::nodecertverificationfailed {48, "nodecertverificationfailed"};
const Enum::YLeaf ErrorEnum::parsecertificatefailed {49, "parsecertificatefailed"};
const Enum::YLeaf ErrorEnum::cryptorootcaimportfailed {50, "cryptorootcaimportfailed"};
const Enum::YLeaf ErrorEnum::taginvalid {51, "taginvalid"};
const Enum::YLeaf ErrorEnum::standby {52, "standby"};
const Enum::YLeaf ErrorEnum::registrationinprogress {53, "registrationinprogress"};
const Enum::YLeaf ErrorEnum::commretry {54, "commretry"};
const Enum::YLeaf ErrorEnum::authrenewinprogress {55, "authrenewinprogress"};
const Enum::YLeaf ErrorEnum::idcertrenewinprogress {56, "idcertrenewinprogress"};
const Enum::YLeaf ErrorEnum::noudichange {57, "noudichange"};
const Enum::YLeaf ErrorEnum::callhomeserviceoff {58, "callhomeserviceoff"};
const Enum::YLeaf ErrorEnum::msgexecinprogress {59, "msgexecinprogress"};
const Enum::YLeaf ErrorEnum::msgexecinproglocked {60, "msgexecinproglocked"};
const Enum::YLeaf ErrorEnum::certmatchessubsetudis {61, "certmatchessubsetudis"};
const Enum::YLeaf ErrorEnum::storagegroupchangeincomplete {62, "storagegroupchangeincomplete"};
const Enum::YLeaf ErrorEnum::storagemgmtnotinit {63, "storagemgmtnotinit"};
const Enum::YLeaf ErrorEnum::tspathnotchanged {64, "tspathnotchanged"};
const Enum::YLeaf ErrorEnum::cryptoinitnotcompleted {65, "cryptoinitnotcompleted"};
const Enum::YLeaf ErrorEnum::notinunidentified {66, "notinunidentified"};
const Enum::YLeaf ErrorEnum::platformpathinvalid {67, "platformpathinvalid"};
const Enum::YLeaf ErrorEnum::platformudiinvalid {68, "platformudiinvalid"};
const Enum::YLeaf ErrorEnum::storageobjfailtocreate {69, "storageobjfailtocreate"};
const Enum::YLeaf ErrorEnum::storageobjfailtoerase {70, "storageobjfailtoerase"};
const Enum::YLeaf ErrorEnum::storageobjdoesnotexist {71, "storageobjdoesnotexist"};
const Enum::YLeaf ErrorEnum::messageeventexceedspeer {72, "messageeventexceedspeer"};
const Enum::YLeaf ErrorEnum::codevalidationfailed {73, "codevalidationfailed"};
const Enum::YLeaf ErrorEnum::reserved {74, "reserved"};
const Enum::YLeaf ErrorEnum::noreservationinprogress {75, "noreservationinprogress"};
const Enum::YLeaf ErrorEnum::noauthorizationinstalled {76, "noauthorizationinstalled"};
const Enum::YLeaf ErrorEnum::reservationmismatch {77, "reservationmismatch"};
const Enum::YLeaf ErrorEnum::notreservationmode {78, "notreservationmode"};
const Enum::YLeaf ErrorEnum::reservationerror {79, "reservationerror"};
const Enum::YLeaf ErrorEnum::sysmgrinit {80, "sysmgrinit"};
const Enum::YLeaf ErrorEnum::alreadyexists {81, "alreadyexists"};
const Enum::YLeaf ErrorEnum::listinsertfailed {82, "listinsertfailed"};
const Enum::YLeaf ErrorEnum::sessionmgmtnotinit {83, "sessionmgmtnotinit"};
const Enum::YLeaf ErrorEnum::listinitfailed {84, "listinitfailed"};
const Enum::YLeaf ErrorEnum::listbusy {85, "listbusy"};
const Enum::YLeaf ErrorEnum::noclients {86, "noclients"};
const Enum::YLeaf ErrorEnum::ipc {87, "ipc"};
const Enum::YLeaf ErrorEnum::ipcopen {88, "ipcopen"};
const Enum::YLeaf ErrorEnum::ipcinit {89, "ipcinit"};
const Enum::YLeaf ErrorEnum::ipcconnect {90, "ipcconnect"};
const Enum::YLeaf ErrorEnum::ipcevents {91, "ipcevents"};
const Enum::YLeaf ErrorEnum::ipcmgmt {92, "ipcmgmt"};
const Enum::YLeaf ErrorEnum::ipcsend {93, "ipcsend"};
const Enum::YLeaf ErrorEnum::ipcreceive {94, "ipcreceive"};
const Enum::YLeaf ErrorEnum::ipctimeout {95, "ipctimeout"};
const Enum::YLeaf ErrorEnum::enqueuefailed {96, "enqueuefailed"};
const Enum::YLeaf ErrorEnum::dequeuefailed {97, "dequeuefailed"};
const Enum::YLeaf ErrorEnum::shuttingdown {98, "shuttingdown"};
const Enum::YLeaf ErrorEnum::couldnotvalidatetrustchain {99, "couldnotvalidatetrustchain"};
const Enum::YLeaf ErrorEnum::reservationalreadyinstalled {100, "reservationalreadyinstalled"};
const Enum::YLeaf ErrorEnum::reservationinstallparsefail {101, "reservationinstallparsefail"};
const Enum::YLeaf ErrorEnum::base64encoding {102, "base64encoding"};
const Enum::YLeaf ErrorEnum::base64decoding {103, "base64decoding"};
const Enum::YLeaf ErrorEnum::invalidsoftwareidtag {104, "invalidsoftwareidtag"};
const Enum::YLeaf ErrorEnum::certificatemismatch {105, "certificatemismatch"};
const Enum::YLeaf ErrorEnum::noreservation {106, "noreservation"};
const Enum::YLeaf ErrorEnum::agentunreachable {107, "agentunreachable"};
const Enum::YLeaf ErrorEnum::ignoreevent {108, "ignoreevent"};
const Enum::YLeaf ErrorEnum::b58overflow {109, "b58overflow"};
const Enum::YLeaf ErrorEnum::b58decode {110, "b58decode"};
const Enum::YLeaf ErrorEnum::b58badlen {111, "b58badlen"};
const Enum::YLeaf ErrorEnum::b58invdigit {112, "b58invdigit"};
const Enum::YLeaf ErrorEnum::b58decodeoverflow {113, "b58decodeoverflow"};
const Enum::YLeaf ErrorEnum::reservationversionoutofbound {114, "reservationversionoutofbound"};
const Enum::YLeaf ErrorEnum::base58encode {115, "base58encode"};
const Enum::YLeaf ErrorEnum::duplicatedentry {116, "duplicatedentry"};
const Enum::YLeaf ErrorEnum::missingentry {117, "missingentry"};
const Enum::YLeaf ErrorEnum::badpeerinfoformat {118, "badpeerinfoformat"};
const Enum::YLeaf ErrorEnum::badapplicationhaattributedataset {119, "badapplicationhaattributedataset"};
const Enum::YLeaf ErrorEnum::reservationinprogress {120, "reservationinprogress"};
const Enum::YLeaf ErrorEnum::xdmcreatehandle {121, "xdmcreatehandle"};
const Enum::YLeaf ErrorEnum::versionmismatchinentitlementrsp {122, "versionmismatchinentitlementrsp"};
const Enum::YLeaf ErrorEnum::harolenotsupported {123, "harolenotsupported"};
const Enum::YLeaf ErrorEnum::apphainvalidcharacter {124, "apphainvalidcharacter"};
const Enum::YLeaf ErrorEnum::apphaaddpeerfromsamedevice {125, "apphaaddpeerfromsamedevice"};
const Enum::YLeaf ErrorEnum::apphaappduplicatedinstance {126, "apphaappduplicatedinstance"};
const Enum::YLeaf ErrorEnum::versionmismatchinregresponse {127, "versionmismatchinregresponse"};
const Enum::YLeaf ErrorEnum::conversionnocb {128, "conversionnocb"};
const Enum::YLeaf ErrorEnum::conversionnotallowed {129, "conversionnotallowed"};
const Enum::YLeaf ErrorEnum::conversioninprogress {130, "conversioninprogress"};
const Enum::YLeaf ErrorEnum::conversionalreadystarted {131, "conversionalreadystarted"};
const Enum::YLeaf ErrorEnum::conversionnotenabled {132, "conversionnotenabled"};
const Enum::YLeaf ErrorEnum::versionconversionnotsupported {133, "versionconversionnotsupported"};
const Enum::YLeaf ErrorEnum::noconversioninprogress {134, "noconversioninprogress"};
const Enum::YLeaf ErrorEnum::cryptoversionmismatch {135, "cryptoversionmismatch"};
const Enum::YLeaf ErrorEnum::conversionstoppedpartially {136, "conversionstoppedpartially"};
const Enum::YLeaf ErrorEnum::utilityenabled {137, "utilityenabled"};
const Enum::YLeaf ErrorEnum::utilitynotenabled {138, "utilitynotenabled"};
const Enum::YLeaf ErrorEnum::transportnotavailable {139, "transportnotavailable"};
const Enum::YLeaf ErrorEnum::fqdn {140, "fqdn"};
const Enum::YLeaf ErrorEnum::thirdparty {141, "thirdparty"};
const Enum::YLeaf ErrorEnum::transporttype {142, "transporttype"};
const Enum::YLeaf ErrorEnum::max {143, "max"};

const Enum::YLeaf UtilityReportingTypeEnum::utility_reporting_type_none {0, "utility-reporting-type-none"};
const Enum::YLeaf UtilityReportingTypeEnum::utility_reporting_type_subscription {1, "utility-reporting-type-subscription"};
const Enum::YLeaf UtilityReportingTypeEnum::utility_reporting_type_certificate {2, "utility-reporting-type-certificate"};

const Enum::YLeaf EnforcementModeEnum::enforcement_waiting {0, "enforcement-waiting"};
const Enum::YLeaf EnforcementModeEnum::enforcement_in_compliance {1, "enforcement-in-compliance"};
const Enum::YLeaf EnforcementModeEnum::enforcement_out_of_compliance {2, "enforcement-out-of-compliance"};
const Enum::YLeaf EnforcementModeEnum::enforcement_overage {3, "enforcement-overage"};
const Enum::YLeaf EnforcementModeEnum::enforcement_evaluation {4, "enforcement-evaluation"};
const Enum::YLeaf EnforcementModeEnum::enforcement_evaluation_expired {5, "enforcement-evaluation-expired"};
const Enum::YLeaf EnforcementModeEnum::enforcement_authorization_expired {6, "enforcement-authorization-expired"};
const Enum::YLeaf EnforcementModeEnum::enforcement_reservation_in_compliance {7, "enforcement-reservation-in-compliance"};
const Enum::YLeaf EnforcementModeEnum::enforcement_invalid_tag {8, "enforcement-invalid-tag"};
const Enum::YLeaf EnforcementModeEnum::enforcement_disabled {9, "enforcement-disabled"};

const Enum::YLeaf AuthorizationStateEnum::auth_state_none {0, "auth-state-none"};
const Enum::YLeaf AuthorizationStateEnum::auth_state_eval {1, "auth-state-eval"};
const Enum::YLeaf AuthorizationStateEnum::auth_state_eval_expired {2, "auth-state-eval-expired"};
const Enum::YLeaf AuthorizationStateEnum::auth_state_authorized {3, "auth-state-authorized"};
const Enum::YLeaf AuthorizationStateEnum::auth_state_authorized_reservation {4, "auth-state-authorized-reservation"};
const Enum::YLeaf AuthorizationStateEnum::auth_state_out_of_compliance {5, "auth-state-out-of-compliance"};
const Enum::YLeaf AuthorizationStateEnum::auth_state_authorization_expired {6, "auth-state-authorization-expired"};

const Enum::YLeaf RegistrationStateEnum::reg_state_not_registered {0, "reg-state-not-registered"};
const Enum::YLeaf RegistrationStateEnum::reg_state_complete {1, "reg-state-complete"};
const Enum::YLeaf RegistrationStateEnum::reg_state_in_progress {2, "reg-state-in-progress"};
const Enum::YLeaf RegistrationStateEnum::reg_state_retry {3, "reg-state-retry"};
const Enum::YLeaf RegistrationStateEnum::reg_state_failed {4, "reg-state-failed"};

const Enum::YLeaf NotifRegisterFailureEnum::general_failure {0, "general-failure"};
const Enum::YLeaf NotifRegisterFailureEnum::already_registered_failure {1, "already-registered-failure"};
const Enum::YLeaf NotifRegisterFailureEnum::de_register_failure {2, "de-register-failure"};


}
}

