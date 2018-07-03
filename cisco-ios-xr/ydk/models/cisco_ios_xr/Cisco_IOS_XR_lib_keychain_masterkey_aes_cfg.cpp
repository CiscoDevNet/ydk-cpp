
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_keychain_masterkey_aes_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_masterkey_aes_cfg {

Password::Password()
    :
    encryption(std::make_shared<Password::Encryption>())
{
    encryption->parent = this;

    yang_name = "password"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-masterkey-aes-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Password::~Password()
{
}

bool Password::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data());
}

bool Password::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-masterkey-aes-cfg:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Password::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Password::clone_ptr() const
{
    return std::make_shared<Password>();
}

std::string Password::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Password::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Password::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Password::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Password::Encryption::Encryption()
    :
    aes{YType::uint32, "aes"}
{

    yang_name = "encryption"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Password::Encryption::~Encryption()
{
}

bool Password::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return aes.is_set;
}

bool Password::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes.yfilter);
}

std::string Password::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-masterkey-aes-cfg:password/" << get_segment_path();
    return path_buffer.str();
}

std::string Password::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Password::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes.is_set || is_set(aes.yfilter)) leaf_name_data.push_back(aes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Password::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Password::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Password::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes")
    {
        aes = value;
        aes.value_namespace = name_space;
        aes.value_namespace_prefix = name_space_prefix;
    }
}

void Password::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes")
    {
        aes.yfilter = yfilter;
    }
}

bool Password::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes")
        return true;
    return false;
}


}
}

