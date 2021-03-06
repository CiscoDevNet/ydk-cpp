
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_ia.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_ia {

SyncFrom::SyncFrom()
    :
    input(std::make_shared<SyncFrom::Input>())
    , output(std::make_shared<SyncFrom::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "sync-from"; yang_parent_name = "cisco-ia"; is_top_level_class = true; has_list_ancestor = false; 
}

SyncFrom::~SyncFrom()
{
}

bool SyncFrom::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool SyncFrom::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string SyncFrom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:sync-from";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyncFrom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyncFrom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SyncFrom::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<SyncFrom::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyncFrom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void SyncFrom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SyncFrom::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SyncFrom::clone_ptr() const
{
    return std::make_shared<SyncFrom>();
}

std::string SyncFrom::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SyncFrom::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SyncFrom::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SyncFrom::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SyncFrom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

SyncFrom::Input::Input()
    :
    sync_defaults{YType::empty, "sync-defaults"},
    ignore_presrv_paths{YType::empty, "ignore-presrv-paths"}
{

    yang_name = "input"; yang_parent_name = "sync-from"; is_top_level_class = false; has_list_ancestor = false; 
}

SyncFrom::Input::~Input()
{
}

bool SyncFrom::Input::has_data() const
{
    if (is_presence_container) return true;
    return sync_defaults.is_set
	|| ignore_presrv_paths.is_set;
}

bool SyncFrom::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_defaults.yfilter)
	|| ydk::is_set(ignore_presrv_paths.yfilter);
}

std::string SyncFrom::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:sync-from/" << get_segment_path();
    return path_buffer.str();
}

std::string SyncFrom::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyncFrom::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_defaults.is_set || is_set(sync_defaults.yfilter)) leaf_name_data.push_back(sync_defaults.get_name_leafdata());
    if (ignore_presrv_paths.is_set || is_set(ignore_presrv_paths.yfilter)) leaf_name_data.push_back(ignore_presrv_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyncFrom::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyncFrom::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SyncFrom::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-defaults")
    {
        sync_defaults = value;
        sync_defaults.value_namespace = name_space;
        sync_defaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-presrv-paths")
    {
        ignore_presrv_paths = value;
        ignore_presrv_paths.value_namespace = name_space;
        ignore_presrv_paths.value_namespace_prefix = name_space_prefix;
    }
}

void SyncFrom::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-defaults")
    {
        sync_defaults.yfilter = yfilter;
    }
    if(value_path == "ignore-presrv-paths")
    {
        ignore_presrv_paths.yfilter = yfilter;
    }
}

bool SyncFrom::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-defaults" || name == "ignore-presrv-paths")
        return true;
    return false;
}

SyncFrom::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "sync-from"; is_top_level_class = false; has_list_ancestor = false; 
}

SyncFrom::Output::~Output()
{
}

bool SyncFrom::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool SyncFrom::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string SyncFrom::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:sync-from/" << get_segment_path();
    return path_buffer.str();
}

std::string SyncFrom::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyncFrom::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyncFrom::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyncFrom::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SyncFrom::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void SyncFrom::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool SyncFrom::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

SaveConfig::SaveConfig()
    :
    output(std::make_shared<SaveConfig::Output>())
{
    output->parent = this;

    yang_name = "save-config"; yang_parent_name = "cisco-ia"; is_top_level_class = true; has_list_ancestor = false; 
}

SaveConfig::~SaveConfig()
{
}

bool SaveConfig::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data());
}

bool SaveConfig::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string SaveConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:save-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SaveConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SaveConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<SaveConfig::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SaveConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void SaveConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SaveConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SaveConfig::clone_ptr() const
{
    return std::make_shared<SaveConfig>();
}

std::string SaveConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SaveConfig::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SaveConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SaveConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SaveConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

SaveConfig::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "save-config"; is_top_level_class = false; has_list_ancestor = false; 
}

SaveConfig::Output::~Output()
{
}

bool SaveConfig::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool SaveConfig::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string SaveConfig::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:save-config/" << get_segment_path();
    return path_buffer.str();
}

std::string SaveConfig::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SaveConfig::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SaveConfig::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SaveConfig::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SaveConfig::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void SaveConfig::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool SaveConfig::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

IsSyncing::IsSyncing()
    :
    output(std::make_shared<IsSyncing::Output>())
{
    output->parent = this;

    yang_name = "is-syncing"; yang_parent_name = "cisco-ia"; is_top_level_class = true; has_list_ancestor = false; 
}

IsSyncing::~IsSyncing()
{
}

bool IsSyncing::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data());
}

bool IsSyncing::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string IsSyncing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:is-syncing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IsSyncing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IsSyncing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<IsSyncing::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IsSyncing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void IsSyncing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IsSyncing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IsSyncing::clone_ptr() const
{
    return std::make_shared<IsSyncing>();
}

std::string IsSyncing::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IsSyncing::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IsSyncing::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IsSyncing::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IsSyncing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

IsSyncing::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "is-syncing"; is_top_level_class = false; has_list_ancestor = false; 
}

IsSyncing::Output::~Output()
{
}

bool IsSyncing::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool IsSyncing::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string IsSyncing::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:is-syncing/" << get_segment_path();
    return path_buffer.str();
}

std::string IsSyncing::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IsSyncing::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IsSyncing::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IsSyncing::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IsSyncing::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void IsSyncing::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool IsSyncing::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Checkpoint::Checkpoint()
    :
    output(std::make_shared<Checkpoint::Output>())
{
    output->parent = this;

    yang_name = "checkpoint"; yang_parent_name = "cisco-ia"; is_top_level_class = true; has_list_ancestor = false; 
}

Checkpoint::~Checkpoint()
{
}

bool Checkpoint::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data());
}

bool Checkpoint::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string Checkpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:checkpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Checkpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Checkpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Checkpoint::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Checkpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Checkpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Checkpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Checkpoint::clone_ptr() const
{
    return std::make_shared<Checkpoint>();
}

std::string Checkpoint::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Checkpoint::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Checkpoint::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Checkpoint::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Checkpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Checkpoint::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "checkpoint"; is_top_level_class = false; has_list_ancestor = false; 
}

Checkpoint::Output::~Output()
{
}

bool Checkpoint::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Checkpoint::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Checkpoint::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:checkpoint/" << get_segment_path();
    return path_buffer.str();
}

std::string Checkpoint::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Checkpoint::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Checkpoint::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Checkpoint::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Checkpoint::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Checkpoint::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Checkpoint::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Revert::Revert()
    :
    input(std::make_shared<Revert::Input>())
    , output(std::make_shared<Revert::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "revert"; yang_parent_name = "cisco-ia"; is_top_level_class = true; has_list_ancestor = false; 
}

Revert::~Revert()
{
}

bool Revert::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Revert::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Revert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:revert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Revert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Revert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Revert::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Revert::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Revert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Revert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Revert::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Revert::clone_ptr() const
{
    return std::make_shared<Revert>();
}

std::string Revert::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Revert::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Revert::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Revert::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Revert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Revert::Input::Input()
    :
    now{YType::empty, "now"},
    timer{YType::int16, "timer"},
    idle{YType::int16, "idle"}
{

    yang_name = "input"; yang_parent_name = "revert"; is_top_level_class = false; has_list_ancestor = false; 
}

Revert::Input::~Input()
{
}

bool Revert::Input::has_data() const
{
    if (is_presence_container) return true;
    return now.is_set
	|| timer.is_set
	|| idle.is_set;
}

bool Revert::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(now.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(idle.yfilter);
}

std::string Revert::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:revert/" << get_segment_path();
    return path_buffer.str();
}

std::string Revert::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Revert::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Revert::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Revert::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Revert::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
}

void Revert::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
}

bool Revert::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "now" || name == "timer" || name == "idle")
        return true;
    return false;
}

Revert::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "revert"; is_top_level_class = false; has_list_ancestor = false; 
}

Revert::Output::~Output()
{
}

bool Revert::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Revert::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Revert::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:revert/" << get_segment_path();
    return path_buffer.str();
}

std::string Revert::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Revert::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Revert::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Revert::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Revert::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Revert::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Revert::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Rollback::Rollback()
    :
    input(std::make_shared<Rollback::Input>())
    , output(std::make_shared<Rollback::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "rollback"; yang_parent_name = "cisco-ia"; is_top_level_class = true; has_list_ancestor = false; 
}

Rollback::~Rollback()
{
}

bool Rollback::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Rollback::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Rollback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:rollback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rollback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rollback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Rollback::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Rollback::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rollback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Rollback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rollback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Rollback::clone_ptr() const
{
    return std::make_shared<Rollback>();
}

std::string Rollback::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Rollback::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Rollback::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rollback::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Rollback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Rollback::Input::Input()
    :
    target_url{YType::str, "target-url"},
    verbose{YType::boolean, "verbose"},
    nolock{YType::boolean, "nolock"},
    revert_on_error{YType::empty, "revert-on-error"},
    revert_timer{YType::int16, "revert-timer"}
{

    yang_name = "input"; yang_parent_name = "rollback"; is_top_level_class = false; has_list_ancestor = false; 
}

Rollback::Input::~Input()
{
}

bool Rollback::Input::has_data() const
{
    if (is_presence_container) return true;
    return target_url.is_set
	|| verbose.is_set
	|| nolock.is_set
	|| revert_on_error.is_set
	|| revert_timer.is_set;
}

bool Rollback::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_url.yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| ydk::is_set(nolock.yfilter)
	|| ydk::is_set(revert_on_error.yfilter)
	|| ydk::is_set(revert_timer.yfilter);
}

std::string Rollback::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:rollback/" << get_segment_path();
    return path_buffer.str();
}

std::string Rollback::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rollback::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_url.is_set || is_set(target_url.yfilter)) leaf_name_data.push_back(target_url.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (nolock.is_set || is_set(nolock.yfilter)) leaf_name_data.push_back(nolock.get_name_leafdata());
    if (revert_on_error.is_set || is_set(revert_on_error.yfilter)) leaf_name_data.push_back(revert_on_error.get_name_leafdata());
    if (revert_timer.is_set || is_set(revert_timer.yfilter)) leaf_name_data.push_back(revert_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rollback::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rollback::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rollback::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-url")
    {
        target_url = value;
        target_url.value_namespace = name_space;
        target_url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nolock")
    {
        nolock = value;
        nolock.value_namespace = name_space;
        nolock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-on-error")
    {
        revert_on_error = value;
        revert_on_error.value_namespace = name_space;
        revert_on_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-timer")
    {
        revert_timer = value;
        revert_timer.value_namespace = name_space;
        revert_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Rollback::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-url")
    {
        target_url.yfilter = yfilter;
    }
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
    if(value_path == "nolock")
    {
        nolock.yfilter = yfilter;
    }
    if(value_path == "revert-on-error")
    {
        revert_on_error.yfilter = yfilter;
    }
    if(value_path == "revert-timer")
    {
        revert_timer.yfilter = yfilter;
    }
}

bool Rollback::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-url" || name == "verbose" || name == "nolock" || name == "revert-on-error" || name == "revert-timer")
        return true;
    return false;
}

Rollback::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "rollback"; is_top_level_class = false; has_list_ancestor = false; 
}

Rollback::Output::~Output()
{
}

bool Rollback::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Rollback::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Rollback::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:rollback/" << get_segment_path();
    return path_buffer.str();
}

std::string Rollback::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rollback::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rollback::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rollback::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rollback::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Rollback::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Rollback::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

const Enum::YLeaf CiaLogLevel::none {0, "none"};
const Enum::YLeaf CiaLogLevel::error {1, "error"};
const Enum::YLeaf CiaLogLevel::warning {2, "warning"};
const Enum::YLeaf CiaLogLevel::information {3, "information"};
const Enum::YLeaf CiaLogLevel::debug {4, "debug"};

const Enum::YLeaf CiaSyncType::disabled {0, "disabled"};
const Enum::YLeaf CiaSyncType::without_defaults {1, "without-defaults"};
const Enum::YLeaf CiaSyncType::include_defaults {2, "include-defaults"};

const Enum::YLeaf SyslogSeverity::none {8, "none"};
const Enum::YLeaf SyslogSeverity::emergency {0, "emergency"};
const Enum::YLeaf SyslogSeverity::alert {1, "alert"};
const Enum::YLeaf SyslogSeverity::critical {2, "critical"};
const Enum::YLeaf SyslogSeverity::error {3, "error"};
const Enum::YLeaf SyslogSeverity::warning {4, "warning"};
const Enum::YLeaf SyslogSeverity::notice {5, "notice"};
const Enum::YLeaf SyslogSeverity::info {6, "info"};
const Enum::YLeaf SyslogSeverity::debug {7, "debug"};

const Enum::YLeaf ParserMsgProcessingMethod::blacklist {0, "blacklist"};
const Enum::YLeaf ParserMsgProcessingMethod::whitelist {1, "whitelist"};

const Enum::YLeaf OnepLogLevel::none {0, "none"};
const Enum::YLeaf OnepLogLevel::fatal {1, "fatal"};
const Enum::YLeaf OnepLogLevel::error {2, "error"};
const Enum::YLeaf OnepLogLevel::warning {3, "warning"};
const Enum::YLeaf OnepLogLevel::information {4, "information"};
const Enum::YLeaf OnepLogLevel::debug {5, "debug"};
const Enum::YLeaf OnepLogLevel::trace {6, "trace"};


}
}

