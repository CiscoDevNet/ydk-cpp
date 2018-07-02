
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_act {

KeyGenerateRsaGeneralKeys::KeyGenerateRsaGeneralKeys()
    :
    input(std::make_shared<KeyGenerateRsaGeneralKeys::Input>())
{
    input->parent = this;

    yang_name = "key-generate-rsa-general-keys"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyGenerateRsaGeneralKeys::~KeyGenerateRsaGeneralKeys()
{
}

bool KeyGenerateRsaGeneralKeys::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyGenerateRsaGeneralKeys::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyGenerateRsaGeneralKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa-general-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateRsaGeneralKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateRsaGeneralKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyGenerateRsaGeneralKeys::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateRsaGeneralKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyGenerateRsaGeneralKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyGenerateRsaGeneralKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyGenerateRsaGeneralKeys::clone_ptr() const
{
    return std::make_shared<KeyGenerateRsaGeneralKeys>();
}

std::string KeyGenerateRsaGeneralKeys::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateRsaGeneralKeys::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateRsaGeneralKeys::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyGenerateRsaGeneralKeys::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyGenerateRsaGeneralKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyGenerateRsaGeneralKeys::Input::Input()
    :
    key_label{YType::str, "key-label"},
    key_modulus{YType::int32, "key-modulus"}
{

    yang_name = "input"; yang_parent_name = "key-generate-rsa-general-keys"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyGenerateRsaGeneralKeys::Input::~Input()
{
}

bool KeyGenerateRsaGeneralKeys::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_label.is_set
	|| key_modulus.is_set;
}

bool KeyGenerateRsaGeneralKeys::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_label.yfilter)
	|| ydk::is_set(key_modulus.yfilter);
}

std::string KeyGenerateRsaGeneralKeys::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa-general-keys/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyGenerateRsaGeneralKeys::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateRsaGeneralKeys::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (key_modulus.is_set || is_set(key_modulus.yfilter)) leaf_name_data.push_back(key_modulus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateRsaGeneralKeys::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateRsaGeneralKeys::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyGenerateRsaGeneralKeys::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-modulus")
    {
        key_modulus = value;
        key_modulus.value_namespace = name_space;
        key_modulus.value_namespace_prefix = name_space_prefix;
    }
}

void KeyGenerateRsaGeneralKeys::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
    if(value_path == "key-modulus")
    {
        key_modulus.yfilter = yfilter;
    }
}

bool KeyGenerateRsaGeneralKeys::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-label" || name == "key-modulus")
        return true;
    return false;
}

KeyGenerateRsaUsageKeys::KeyGenerateRsaUsageKeys()
    :
    input(std::make_shared<KeyGenerateRsaUsageKeys::Input>())
{
    input->parent = this;

    yang_name = "key-generate-rsa-usage-keys"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyGenerateRsaUsageKeys::~KeyGenerateRsaUsageKeys()
{
}

bool KeyGenerateRsaUsageKeys::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyGenerateRsaUsageKeys::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyGenerateRsaUsageKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa-usage-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateRsaUsageKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateRsaUsageKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyGenerateRsaUsageKeys::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateRsaUsageKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyGenerateRsaUsageKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyGenerateRsaUsageKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyGenerateRsaUsageKeys::clone_ptr() const
{
    return std::make_shared<KeyGenerateRsaUsageKeys>();
}

std::string KeyGenerateRsaUsageKeys::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateRsaUsageKeys::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateRsaUsageKeys::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyGenerateRsaUsageKeys::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyGenerateRsaUsageKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyGenerateRsaUsageKeys::Input::Input()
    :
    key_label{YType::str, "key-label"},
    key_modulus{YType::int32, "key-modulus"}
{

    yang_name = "input"; yang_parent_name = "key-generate-rsa-usage-keys"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyGenerateRsaUsageKeys::Input::~Input()
{
}

bool KeyGenerateRsaUsageKeys::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_label.is_set
	|| key_modulus.is_set;
}

bool KeyGenerateRsaUsageKeys::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_label.yfilter)
	|| ydk::is_set(key_modulus.yfilter);
}

std::string KeyGenerateRsaUsageKeys::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa-usage-keys/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyGenerateRsaUsageKeys::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateRsaUsageKeys::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (key_modulus.is_set || is_set(key_modulus.yfilter)) leaf_name_data.push_back(key_modulus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateRsaUsageKeys::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateRsaUsageKeys::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyGenerateRsaUsageKeys::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-modulus")
    {
        key_modulus = value;
        key_modulus.value_namespace = name_space;
        key_modulus.value_namespace_prefix = name_space_prefix;
    }
}

void KeyGenerateRsaUsageKeys::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
    if(value_path == "key-modulus")
    {
        key_modulus.yfilter = yfilter;
    }
}

bool KeyGenerateRsaUsageKeys::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-label" || name == "key-modulus")
        return true;
    return false;
}

KeyGenerateRsa::KeyGenerateRsa()
    :
    input(std::make_shared<KeyGenerateRsa::Input>())
{
    input->parent = this;

    yang_name = "key-generate-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyGenerateRsa::~KeyGenerateRsa()
{
}

bool KeyGenerateRsa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyGenerateRsa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyGenerateRsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateRsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateRsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyGenerateRsa::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateRsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyGenerateRsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyGenerateRsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyGenerateRsa::clone_ptr() const
{
    return std::make_shared<KeyGenerateRsa>();
}

std::string KeyGenerateRsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateRsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateRsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyGenerateRsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyGenerateRsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyGenerateRsa::Input::Input()
    :
    key_label{YType::str, "key-label"},
    key_modulus{YType::int32, "key-modulus"}
{

    yang_name = "input"; yang_parent_name = "key-generate-rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyGenerateRsa::Input::~Input()
{
}

bool KeyGenerateRsa::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_label.is_set
	|| key_modulus.is_set;
}

bool KeyGenerateRsa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_label.yfilter)
	|| ydk::is_set(key_modulus.yfilter);
}

std::string KeyGenerateRsa::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyGenerateRsa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateRsa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (key_modulus.is_set || is_set(key_modulus.yfilter)) leaf_name_data.push_back(key_modulus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateRsa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateRsa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyGenerateRsa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-modulus")
    {
        key_modulus = value;
        key_modulus.value_namespace = name_space;
        key_modulus.value_namespace_prefix = name_space_prefix;
    }
}

void KeyGenerateRsa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
    if(value_path == "key-modulus")
    {
        key_modulus.yfilter = yfilter;
    }
}

bool KeyGenerateRsa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-label" || name == "key-modulus")
        return true;
    return false;
}

KeyGenerateDsa::KeyGenerateDsa()
    :
    input(std::make_shared<KeyGenerateDsa::Input>())
{
    input->parent = this;

    yang_name = "key-generate-dsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyGenerateDsa::~KeyGenerateDsa()
{
}

bool KeyGenerateDsa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyGenerateDsa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyGenerateDsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-dsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateDsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateDsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyGenerateDsa::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateDsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyGenerateDsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyGenerateDsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyGenerateDsa::clone_ptr() const
{
    return std::make_shared<KeyGenerateDsa>();
}

std::string KeyGenerateDsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateDsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateDsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyGenerateDsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyGenerateDsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyGenerateDsa::Input::Input()
    :
    key_modulus{YType::int32, "key-modulus"}
{

    yang_name = "input"; yang_parent_name = "key-generate-dsa"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyGenerateDsa::Input::~Input()
{
}

bool KeyGenerateDsa::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_modulus.is_set;
}

bool KeyGenerateDsa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_modulus.yfilter);
}

std::string KeyGenerateDsa::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-dsa/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyGenerateDsa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateDsa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_modulus.is_set || is_set(key_modulus.yfilter)) leaf_name_data.push_back(key_modulus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateDsa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateDsa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyGenerateDsa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-modulus")
    {
        key_modulus = value;
        key_modulus.value_namespace = name_space;
        key_modulus.value_namespace_prefix = name_space_prefix;
    }
}

void KeyGenerateDsa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-modulus")
    {
        key_modulus.yfilter = yfilter;
    }
}

bool KeyGenerateDsa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-modulus")
        return true;
    return false;
}

KeyGenerateEcdsa::KeyGenerateEcdsa()
    :
    input(std::make_shared<KeyGenerateEcdsa::Input>())
{
    input->parent = this;

    yang_name = "key-generate-ecdsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyGenerateEcdsa::~KeyGenerateEcdsa()
{
}

bool KeyGenerateEcdsa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyGenerateEcdsa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyGenerateEcdsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-ecdsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateEcdsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateEcdsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyGenerateEcdsa::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateEcdsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyGenerateEcdsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyGenerateEcdsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyGenerateEcdsa::clone_ptr() const
{
    return std::make_shared<KeyGenerateEcdsa>();
}

std::string KeyGenerateEcdsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateEcdsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateEcdsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyGenerateEcdsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyGenerateEcdsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyGenerateEcdsa::Input::Input()
    :
    key_modulus{YType::enumeration, "key-modulus"},
    key_label{YType::str, "key-label"}
{

    yang_name = "input"; yang_parent_name = "key-generate-ecdsa"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyGenerateEcdsa::Input::~Input()
{
}

bool KeyGenerateEcdsa::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_modulus.is_set
	|| key_label.is_set;
}

bool KeyGenerateEcdsa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_modulus.yfilter)
	|| ydk::is_set(key_label.yfilter);
}

std::string KeyGenerateEcdsa::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-ecdsa/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyGenerateEcdsa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyGenerateEcdsa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_modulus.is_set || is_set(key_modulus.yfilter)) leaf_name_data.push_back(key_modulus.get_name_leafdata());
    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyGenerateEcdsa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyGenerateEcdsa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyGenerateEcdsa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-modulus")
    {
        key_modulus = value;
        key_modulus.value_namespace = name_space;
        key_modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
}

void KeyGenerateEcdsa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-modulus")
    {
        key_modulus.yfilter = yfilter;
    }
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
}

bool KeyGenerateEcdsa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-modulus" || name == "key-label")
        return true;
    return false;
}

KeyZeroizeRsa::KeyZeroizeRsa()
    :
    input(std::make_shared<KeyZeroizeRsa::Input>())
{
    input->parent = this;

    yang_name = "key-zeroize-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyZeroizeRsa::~KeyZeroizeRsa()
{
}

bool KeyZeroizeRsa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyZeroizeRsa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyZeroizeRsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyZeroizeRsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyZeroizeRsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyZeroizeRsa::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyZeroizeRsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyZeroizeRsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyZeroizeRsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyZeroizeRsa::clone_ptr() const
{
    return std::make_shared<KeyZeroizeRsa>();
}

std::string KeyZeroizeRsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeRsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeRsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyZeroizeRsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyZeroizeRsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyZeroizeRsa::Input::Input()
    :
    key_label{YType::str, "key-label"}
{

    yang_name = "input"; yang_parent_name = "key-zeroize-rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyZeroizeRsa::Input::~Input()
{
}

bool KeyZeroizeRsa::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_label.is_set;
}

bool KeyZeroizeRsa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_label.yfilter);
}

std::string KeyZeroizeRsa::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyZeroizeRsa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyZeroizeRsa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyZeroizeRsa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyZeroizeRsa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyZeroizeRsa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
}

void KeyZeroizeRsa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
}

bool KeyZeroizeRsa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-label")
        return true;
    return false;
}

KeyZeroizeDsa::KeyZeroizeDsa()
{

    yang_name = "key-zeroize-dsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyZeroizeDsa::~KeyZeroizeDsa()
{
}

bool KeyZeroizeDsa::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool KeyZeroizeDsa::has_operation() const
{
    return is_set(yfilter);
}

std::string KeyZeroizeDsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-dsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyZeroizeDsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyZeroizeDsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyZeroizeDsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyZeroizeDsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyZeroizeDsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyZeroizeDsa::clone_ptr() const
{
    return std::make_shared<KeyZeroizeDsa>();
}

std::string KeyZeroizeDsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeDsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeDsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyZeroizeDsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyZeroizeDsa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

KeyZeroizeEcdsa::KeyZeroizeEcdsa()
    :
    input(std::make_shared<KeyZeroizeEcdsa::Input>())
{
    input->parent = this;

    yang_name = "key-zeroize-ecdsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyZeroizeEcdsa::~KeyZeroizeEcdsa()
{
}

bool KeyZeroizeEcdsa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyZeroizeEcdsa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyZeroizeEcdsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-ecdsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyZeroizeEcdsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyZeroizeEcdsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyZeroizeEcdsa::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyZeroizeEcdsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyZeroizeEcdsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyZeroizeEcdsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyZeroizeEcdsa::clone_ptr() const
{
    return std::make_shared<KeyZeroizeEcdsa>();
}

std::string KeyZeroizeEcdsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeEcdsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeEcdsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyZeroizeEcdsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyZeroizeEcdsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyZeroizeEcdsa::Input::Input()
    :
    key_modulus{YType::enumeration, "key-modulus"},
    key_label{YType::str, "key-label"}
{

    yang_name = "input"; yang_parent_name = "key-zeroize-ecdsa"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyZeroizeEcdsa::Input::~Input()
{
}

bool KeyZeroizeEcdsa::Input::has_data() const
{
    if (is_presence_container) return true;
    return key_modulus.is_set
	|| key_label.is_set;
}

bool KeyZeroizeEcdsa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_modulus.yfilter)
	|| ydk::is_set(key_label.yfilter);
}

std::string KeyZeroizeEcdsa::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-ecdsa/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyZeroizeEcdsa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyZeroizeEcdsa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_modulus.is_set || is_set(key_modulus.yfilter)) leaf_name_data.push_back(key_modulus.get_name_leafdata());
    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyZeroizeEcdsa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyZeroizeEcdsa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyZeroizeEcdsa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-modulus")
    {
        key_modulus = value;
        key_modulus.value_namespace = name_space;
        key_modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
}

void KeyZeroizeEcdsa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-modulus")
    {
        key_modulus.yfilter = yfilter;
    }
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
}

bool KeyZeroizeEcdsa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-modulus" || name == "key-label")
        return true;
    return false;
}

KeyZeroizeAuthenticationRsa::KeyZeroizeAuthenticationRsa()
{

    yang_name = "key-zeroize-authentication-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyZeroizeAuthenticationRsa::~KeyZeroizeAuthenticationRsa()
{
}

bool KeyZeroizeAuthenticationRsa::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool KeyZeroizeAuthenticationRsa::has_operation() const
{
    return is_set(yfilter);
}

std::string KeyZeroizeAuthenticationRsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-authentication-rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyZeroizeAuthenticationRsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyZeroizeAuthenticationRsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyZeroizeAuthenticationRsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyZeroizeAuthenticationRsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyZeroizeAuthenticationRsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyZeroizeAuthenticationRsa::clone_ptr() const
{
    return std::make_shared<KeyZeroizeAuthenticationRsa>();
}

std::string KeyZeroizeAuthenticationRsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeAuthenticationRsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeAuthenticationRsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyZeroizeAuthenticationRsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyZeroizeAuthenticationRsa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

KeyImportAuthenticationRsa::KeyImportAuthenticationRsa()
    :
    input(std::make_shared<KeyImportAuthenticationRsa::Input>())
{
    input->parent = this;

    yang_name = "key-import-authentication-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

KeyImportAuthenticationRsa::~KeyImportAuthenticationRsa()
{
}

bool KeyImportAuthenticationRsa::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool KeyImportAuthenticationRsa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KeyImportAuthenticationRsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-import-authentication-rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyImportAuthenticationRsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KeyImportAuthenticationRsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KeyImportAuthenticationRsa::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyImportAuthenticationRsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KeyImportAuthenticationRsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyImportAuthenticationRsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KeyImportAuthenticationRsa::clone_ptr() const
{
    return std::make_shared<KeyImportAuthenticationRsa>();
}

std::string KeyImportAuthenticationRsa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyImportAuthenticationRsa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyImportAuthenticationRsa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KeyImportAuthenticationRsa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool KeyImportAuthenticationRsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KeyImportAuthenticationRsa::Input::Input()
    :
    path{YType::str, "path"}
{

    yang_name = "input"; yang_parent_name = "key-import-authentication-rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

KeyImportAuthenticationRsa::Input::~Input()
{
}

bool KeyImportAuthenticationRsa::Input::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set;
}

bool KeyImportAuthenticationRsa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string KeyImportAuthenticationRsa::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-import-authentication-rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string KeyImportAuthenticationRsa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyImportAuthenticationRsa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KeyImportAuthenticationRsa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyImportAuthenticationRsa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void KeyImportAuthenticationRsa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void KeyImportAuthenticationRsa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool KeyImportAuthenticationRsa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

CaAuthenticate::CaAuthenticate()
    :
    input(std::make_shared<CaAuthenticate::Input>())
{
    input->parent = this;

    yang_name = "ca-authenticate"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaAuthenticate::~CaAuthenticate()
{
}

bool CaAuthenticate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CaAuthenticate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CaAuthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaAuthenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaAuthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaAuthenticate::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaAuthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CaAuthenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaAuthenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaAuthenticate::clone_ptr() const
{
    return std::make_shared<CaAuthenticate>();
}

std::string CaAuthenticate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaAuthenticate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaAuthenticate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaAuthenticate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaAuthenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CaAuthenticate::Input::Input()
    :
    server_name{YType::str, "server-name"}
{

    yang_name = "input"; yang_parent_name = "ca-authenticate"; is_top_level_class = false; has_list_ancestor = false; 
}

CaAuthenticate::Input::~Input()
{
}

bool CaAuthenticate::Input::has_data() const
{
    if (is_presence_container) return true;
    return server_name.is_set;
}

bool CaAuthenticate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_name.yfilter);
}

std::string CaAuthenticate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-authenticate/" << get_segment_path();
    return path_buffer.str();
}

std::string CaAuthenticate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaAuthenticate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.yfilter)) leaf_name_data.push_back(server_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaAuthenticate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaAuthenticate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaAuthenticate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-name")
    {
        server_name = value;
        server_name.value_namespace = name_space;
        server_name.value_namespace_prefix = name_space_prefix;
    }
}

void CaAuthenticate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-name")
    {
        server_name.yfilter = yfilter;
    }
}

bool CaAuthenticate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

CaEnroll::CaEnroll()
    :
    input(std::make_shared<CaEnroll::Input>())
{
    input->parent = this;

    yang_name = "ca-enroll"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaEnroll::~CaEnroll()
{
}

bool CaEnroll::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CaEnroll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CaEnroll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-enroll";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaEnroll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaEnroll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaEnroll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaEnroll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CaEnroll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaEnroll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaEnroll::clone_ptr() const
{
    return std::make_shared<CaEnroll>();
}

std::string CaEnroll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaEnroll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaEnroll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaEnroll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaEnroll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CaEnroll::Input::Input()
    :
    server_name{YType::str, "server-name"}
{

    yang_name = "input"; yang_parent_name = "ca-enroll"; is_top_level_class = false; has_list_ancestor = false; 
}

CaEnroll::Input::~Input()
{
}

bool CaEnroll::Input::has_data() const
{
    if (is_presence_container) return true;
    return server_name.is_set;
}

bool CaEnroll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_name.yfilter);
}

std::string CaEnroll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-enroll/" << get_segment_path();
    return path_buffer.str();
}

std::string CaEnroll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaEnroll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.yfilter)) leaf_name_data.push_back(server_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaEnroll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaEnroll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaEnroll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-name")
    {
        server_name = value;
        server_name.value_namespace = name_space;
        server_name.value_namespace_prefix = name_space_prefix;
    }
}

void CaEnroll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-name")
    {
        server_name.yfilter = yfilter;
    }
}

bool CaEnroll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

CaImportCertificate::CaImportCertificate()
    :
    input(std::make_shared<CaImportCertificate::Input>())
{
    input->parent = this;

    yang_name = "ca-import-certificate"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaImportCertificate::~CaImportCertificate()
{
}

bool CaImportCertificate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CaImportCertificate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CaImportCertificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-import-certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaImportCertificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaImportCertificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaImportCertificate::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaImportCertificate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CaImportCertificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaImportCertificate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaImportCertificate::clone_ptr() const
{
    return std::make_shared<CaImportCertificate>();
}

std::string CaImportCertificate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaImportCertificate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaImportCertificate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaImportCertificate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaImportCertificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CaImportCertificate::Input::Input()
    :
    server_name{YType::str, "server-name"}
{

    yang_name = "input"; yang_parent_name = "ca-import-certificate"; is_top_level_class = false; has_list_ancestor = false; 
}

CaImportCertificate::Input::~Input()
{
}

bool CaImportCertificate::Input::has_data() const
{
    if (is_presence_container) return true;
    return server_name.is_set;
}

bool CaImportCertificate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_name.yfilter);
}

std::string CaImportCertificate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-import-certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string CaImportCertificate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaImportCertificate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.yfilter)) leaf_name_data.push_back(server_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaImportCertificate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaImportCertificate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaImportCertificate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-name")
    {
        server_name = value;
        server_name.value_namespace = name_space;
        server_name.value_namespace_prefix = name_space_prefix;
    }
}

void CaImportCertificate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-name")
    {
        server_name.yfilter = yfilter;
    }
}

bool CaImportCertificate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

CaCancelEnroll::CaCancelEnroll()
    :
    input(std::make_shared<CaCancelEnroll::Input>())
{
    input->parent = this;

    yang_name = "ca-cancel-enroll"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaCancelEnroll::~CaCancelEnroll()
{
}

bool CaCancelEnroll::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CaCancelEnroll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CaCancelEnroll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-cancel-enroll";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaCancelEnroll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaCancelEnroll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaCancelEnroll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaCancelEnroll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CaCancelEnroll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaCancelEnroll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaCancelEnroll::clone_ptr() const
{
    return std::make_shared<CaCancelEnroll>();
}

std::string CaCancelEnroll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaCancelEnroll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaCancelEnroll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaCancelEnroll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaCancelEnroll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CaCancelEnroll::Input::Input()
    :
    server_name{YType::str, "server-name"}
{

    yang_name = "input"; yang_parent_name = "ca-cancel-enroll"; is_top_level_class = false; has_list_ancestor = false; 
}

CaCancelEnroll::Input::~Input()
{
}

bool CaCancelEnroll::Input::has_data() const
{
    if (is_presence_container) return true;
    return server_name.is_set;
}

bool CaCancelEnroll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_name.yfilter);
}

std::string CaCancelEnroll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-cancel-enroll/" << get_segment_path();
    return path_buffer.str();
}

std::string CaCancelEnroll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaCancelEnroll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.yfilter)) leaf_name_data.push_back(server_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaCancelEnroll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaCancelEnroll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaCancelEnroll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-name")
    {
        server_name = value;
        server_name.value_namespace = name_space;
        server_name.value_namespace_prefix = name_space_prefix;
    }
}

void CaCancelEnroll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-name")
    {
        server_name.yfilter = yfilter;
    }
}

bool CaCancelEnroll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

CaCrlRequest::CaCrlRequest()
    :
    input(std::make_shared<CaCrlRequest::Input>())
    , output(std::make_shared<CaCrlRequest::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "ca-crl-request"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaCrlRequest::~CaCrlRequest()
{
}

bool CaCrlRequest::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool CaCrlRequest::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string CaCrlRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-crl-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaCrlRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaCrlRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaCrlRequest::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<CaCrlRequest::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaCrlRequest::get_children() const
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

void CaCrlRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaCrlRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaCrlRequest::clone_ptr() const
{
    return std::make_shared<CaCrlRequest>();
}

std::string CaCrlRequest::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaCrlRequest::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaCrlRequest::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaCrlRequest::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaCrlRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

CaCrlRequest::Input::Input()
    :
    uri{YType::str, "uri"}
{

    yang_name = "input"; yang_parent_name = "ca-crl-request"; is_top_level_class = false; has_list_ancestor = false; 
}

CaCrlRequest::Input::~Input()
{
}

bool CaCrlRequest::Input::has_data() const
{
    if (is_presence_container) return true;
    return uri.is_set;
}

bool CaCrlRequest::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uri.yfilter);
}

std::string CaCrlRequest::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-crl-request/" << get_segment_path();
    return path_buffer.str();
}

std::string CaCrlRequest::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaCrlRequest::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uri.is_set || is_set(uri.yfilter)) leaf_name_data.push_back(uri.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaCrlRequest::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaCrlRequest::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaCrlRequest::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uri")
    {
        uri = value;
        uri.value_namespace = name_space;
        uri.value_namespace_prefix = name_space_prefix;
    }
}

void CaCrlRequest::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uri")
    {
        uri.yfilter = yfilter;
    }
}

bool CaCrlRequest::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uri")
        return true;
    return false;
}

CaCrlRequest::Output::Output()
    :
    certificate{YType::str, "certificate"}
{

    yang_name = "output"; yang_parent_name = "ca-crl-request"; is_top_level_class = false; has_list_ancestor = false; 
}

CaCrlRequest::Output::~Output()
{
}

bool CaCrlRequest::Output::has_data() const
{
    if (is_presence_container) return true;
    return certificate.is_set;
}

bool CaCrlRequest::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter);
}

std::string CaCrlRequest::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-crl-request/" << get_segment_path();
    return path_buffer.str();
}

std::string CaCrlRequest::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaCrlRequest::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaCrlRequest::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaCrlRequest::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaCrlRequest::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void CaCrlRequest::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool CaCrlRequest::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate")
        return true;
    return false;
}

CaTrustpoolImportUrl::CaTrustpoolImportUrl()
    :
    input(std::make_shared<CaTrustpoolImportUrl::Input>())
{
    input->parent = this;

    yang_name = "ca-trustpool-import-url"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaTrustpoolImportUrl::~CaTrustpoolImportUrl()
{
}

bool CaTrustpoolImportUrl::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CaTrustpoolImportUrl::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CaTrustpoolImportUrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-trustpool-import-url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaTrustpoolImportUrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaTrustpoolImportUrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaTrustpoolImportUrl::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaTrustpoolImportUrl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CaTrustpoolImportUrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaTrustpoolImportUrl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaTrustpoolImportUrl::clone_ptr() const
{
    return std::make_shared<CaTrustpoolImportUrl>();
}

std::string CaTrustpoolImportUrl::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaTrustpoolImportUrl::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaTrustpoolImportUrl::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaTrustpoolImportUrl::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaTrustpoolImportUrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CaTrustpoolImportUrl::Input::Input()
    :
    url{YType::str, "url"}
{

    yang_name = "input"; yang_parent_name = "ca-trustpool-import-url"; is_top_level_class = false; has_list_ancestor = false; 
}

CaTrustpoolImportUrl::Input::~Input()
{
}

bool CaTrustpoolImportUrl::Input::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set;
}

bool CaTrustpoolImportUrl::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string CaTrustpoolImportUrl::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-trustpool-import-url/" << get_segment_path();
    return path_buffer.str();
}

std::string CaTrustpoolImportUrl::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaTrustpoolImportUrl::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaTrustpoolImportUrl::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaTrustpoolImportUrl::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaTrustpoolImportUrl::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void CaTrustpoolImportUrl::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool CaTrustpoolImportUrl::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

CaTrustpoolImportUrlClean::CaTrustpoolImportUrlClean()
    :
    input(std::make_shared<CaTrustpoolImportUrlClean::Input>())
{
    input->parent = this;

    yang_name = "ca-trustpool-import-url-clean"; yang_parent_name = "Cisco-IOS-XR-crypto-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CaTrustpoolImportUrlClean::~CaTrustpoolImportUrlClean()
{
}

bool CaTrustpoolImportUrlClean::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CaTrustpoolImportUrlClean::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CaTrustpoolImportUrlClean::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-trustpool-import-url-clean";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaTrustpoolImportUrlClean::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CaTrustpoolImportUrlClean::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CaTrustpoolImportUrlClean::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaTrustpoolImportUrlClean::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CaTrustpoolImportUrlClean::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CaTrustpoolImportUrlClean::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CaTrustpoolImportUrlClean::clone_ptr() const
{
    return std::make_shared<CaTrustpoolImportUrlClean>();
}

std::string CaTrustpoolImportUrlClean::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaTrustpoolImportUrlClean::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaTrustpoolImportUrlClean::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CaTrustpoolImportUrlClean::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CaTrustpoolImportUrlClean::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CaTrustpoolImportUrlClean::Input::Input()
    :
    url{YType::str, "url"}
{

    yang_name = "input"; yang_parent_name = "ca-trustpool-import-url-clean"; is_top_level_class = false; has_list_ancestor = false; 
}

CaTrustpoolImportUrlClean::Input::~Input()
{
}

bool CaTrustpoolImportUrlClean::Input::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set;
}

bool CaTrustpoolImportUrlClean::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string CaTrustpoolImportUrlClean::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-trustpool-import-url-clean/" << get_segment_path();
    return path_buffer.str();
}

std::string CaTrustpoolImportUrlClean::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CaTrustpoolImportUrlClean::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CaTrustpoolImportUrlClean::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CaTrustpoolImportUrlClean::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CaTrustpoolImportUrlClean::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void CaTrustpoolImportUrlClean::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool CaTrustpoolImportUrlClean::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

const Enum::YLeaf KeyGenerateEcdsa::Input::KeyModulus::nistp256 {0, "nistp256"};
const Enum::YLeaf KeyGenerateEcdsa::Input::KeyModulus::nistp384 {1, "nistp384"};
const Enum::YLeaf KeyGenerateEcdsa::Input::KeyModulus::nistp521 {2, "nistp521"};

const Enum::YLeaf KeyZeroizeEcdsa::Input::KeyModulus::nistp256 {0, "nistp256"};
const Enum::YLeaf KeyZeroizeEcdsa::Input::KeyModulus::nistp384 {1, "nistp384"};
const Enum::YLeaf KeyZeroizeEcdsa::Input::KeyModulus::nistp521 {2, "nistp521"};


}
}

