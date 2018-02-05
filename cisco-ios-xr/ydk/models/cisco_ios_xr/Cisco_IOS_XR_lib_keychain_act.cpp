
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_keychain_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_act {

MasterKeyAdd::MasterKeyAdd()
    :
    input(std::make_shared<MasterKeyAdd::Input>())
{
    input->parent = this;

    yang_name = "master-key-add"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-act"; is_top_level_class = true; has_list_ancestor = false;
}

MasterKeyAdd::~MasterKeyAdd()
{
}

bool MasterKeyAdd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool MasterKeyAdd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string MasterKeyAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-act:master-key-add";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MasterKeyAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MasterKeyAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<MasterKeyAdd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MasterKeyAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void MasterKeyAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MasterKeyAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MasterKeyAdd::clone_ptr() const
{
    return std::make_shared<MasterKeyAdd>();
}

std::string MasterKeyAdd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MasterKeyAdd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MasterKeyAdd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MasterKeyAdd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MasterKeyAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

MasterKeyAdd::Input::Input()
    :
    new_key{YType::str, "new-key"}
{

    yang_name = "input"; yang_parent_name = "master-key-add"; is_top_level_class = false; has_list_ancestor = false;
}

MasterKeyAdd::Input::~Input()
{
}

bool MasterKeyAdd::Input::has_data() const
{
    return new_key.is_set;
}

bool MasterKeyAdd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(new_key.yfilter);
}

std::string MasterKeyAdd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-act:master-key-add/" << get_segment_path();
    return path_buffer.str();
}

std::string MasterKeyAdd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MasterKeyAdd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_key.is_set || is_set(new_key.yfilter)) leaf_name_data.push_back(new_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MasterKeyAdd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MasterKeyAdd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MasterKeyAdd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-key")
    {
        new_key = value;
        new_key.value_namespace = name_space;
        new_key.value_namespace_prefix = name_space_prefix;
    }
}

void MasterKeyAdd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-key")
    {
        new_key.yfilter = yfilter;
    }
}

bool MasterKeyAdd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-key")
        return true;
    return false;
}

MasterKeyDelete::MasterKeyDelete()
{

    yang_name = "master-key-delete"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-act"; is_top_level_class = true; has_list_ancestor = false;
}

MasterKeyDelete::~MasterKeyDelete()
{
}

bool MasterKeyDelete::has_data() const
{
    return false;
}

bool MasterKeyDelete::has_operation() const
{
    return is_set(yfilter);
}

std::string MasterKeyDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-act:master-key-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MasterKeyDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MasterKeyDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MasterKeyDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MasterKeyDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MasterKeyDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MasterKeyDelete::clone_ptr() const
{
    return std::make_shared<MasterKeyDelete>();
}

std::string MasterKeyDelete::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MasterKeyDelete::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MasterKeyDelete::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MasterKeyDelete::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MasterKeyDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MasterKeyUpdate::MasterKeyUpdate()
    :
    input(std::make_shared<MasterKeyUpdate::Input>())
{
    input->parent = this;

    yang_name = "master-key-update"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-act"; is_top_level_class = true; has_list_ancestor = false;
}

MasterKeyUpdate::~MasterKeyUpdate()
{
}

bool MasterKeyUpdate::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool MasterKeyUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string MasterKeyUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-act:master-key-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MasterKeyUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MasterKeyUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<MasterKeyUpdate::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MasterKeyUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void MasterKeyUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MasterKeyUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MasterKeyUpdate::clone_ptr() const
{
    return std::make_shared<MasterKeyUpdate>();
}

std::string MasterKeyUpdate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MasterKeyUpdate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MasterKeyUpdate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MasterKeyUpdate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MasterKeyUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

MasterKeyUpdate::Input::Input()
    :
    old_key{YType::str, "old-key"},
    new_key{YType::str, "new-key"}
{

    yang_name = "input"; yang_parent_name = "master-key-update"; is_top_level_class = false; has_list_ancestor = false;
}

MasterKeyUpdate::Input::~Input()
{
}

bool MasterKeyUpdate::Input::has_data() const
{
    return old_key.is_set
	|| new_key.is_set;
}

bool MasterKeyUpdate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(old_key.yfilter)
	|| ydk::is_set(new_key.yfilter);
}

std::string MasterKeyUpdate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-act:master-key-update/" << get_segment_path();
    return path_buffer.str();
}

std::string MasterKeyUpdate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MasterKeyUpdate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (old_key.is_set || is_set(old_key.yfilter)) leaf_name_data.push_back(old_key.get_name_leafdata());
    if (new_key.is_set || is_set(new_key.yfilter)) leaf_name_data.push_back(new_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MasterKeyUpdate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MasterKeyUpdate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MasterKeyUpdate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "old-key")
    {
        old_key = value;
        old_key.value_namespace = name_space;
        old_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-key")
    {
        new_key = value;
        new_key.value_namespace = name_space;
        new_key.value_namespace_prefix = name_space_prefix;
    }
}

void MasterKeyUpdate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "old-key")
    {
        old_key.yfilter = yfilter;
    }
    if(value_path == "new-key")
    {
        new_key.yfilter = yfilter;
    }
}

bool MasterKeyUpdate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "old-key" || name == "new-key")
        return true;
    return false;
}


}
}

