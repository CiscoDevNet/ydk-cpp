
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_exec_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

ConfigManager::ConfigManager()
    :
    global(std::make_shared<ConfigManager::Global>())
{
    global->parent = this;

    yang_name = "config-manager"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-exec-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ConfigManager::~ConfigManager()
{
}

bool ConfigManager::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool ConfigManager::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string ConfigManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<ConfigManager::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void ConfigManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ConfigManager::clone_ptr() const
{
    return std::make_shared<ConfigManager>();
}

std::string ConfigManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ConfigManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ConfigManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ConfigManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ConfigManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

ConfigManager::Global::Global()
    :
    config_commit(std::make_shared<ConfigManager::Global::ConfigCommit>())
    , history_tables(std::make_shared<ConfigManager::Global::HistoryTables>())
    , config_session(std::make_shared<ConfigManager::Global::ConfigSession>())
{
    config_commit->parent = this;
    history_tables->parent = this;
    config_session->parent = this;

    yang_name = "global"; yang_parent_name = "config-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::~Global()
{
}

bool ConfigManager::Global::has_data() const
{
    if (is_presence_container) return true;
    return (config_commit !=  nullptr && config_commit->has_data())
	|| (history_tables !=  nullptr && history_tables->has_data())
	|| (config_session !=  nullptr && config_session->has_data());
}

bool ConfigManager::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config_commit !=  nullptr && config_commit->has_operation())
	|| (history_tables !=  nullptr && history_tables->has_operation())
	|| (config_session !=  nullptr && config_session->has_operation());
}

std::string ConfigManager::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-commit")
    {
        if(config_commit == nullptr)
        {
            config_commit = std::make_shared<ConfigManager::Global::ConfigCommit>();
        }
        return config_commit;
    }

    if(child_yang_name == "history-tables")
    {
        if(history_tables == nullptr)
        {
            history_tables = std::make_shared<ConfigManager::Global::HistoryTables>();
        }
        return history_tables;
    }

    if(child_yang_name == "config-session")
    {
        if(config_session == nullptr)
        {
            config_session = std::make_shared<ConfigManager::Global::ConfigSession>();
        }
        return config_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_commit != nullptr)
    {
        _children["config-commit"] = config_commit;
    }

    if(history_tables != nullptr)
    {
        _children["history-tables"] = history_tables;
    }

    if(config_session != nullptr)
    {
        _children["config-session"] = config_session;
    }

    return _children;
}

void ConfigManager::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfigManager::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-commit" || name == "history-tables" || name == "config-session")
        return true;
    return false;
}

ConfigManager::Global::ConfigCommit::ConfigCommit()
    :
    commits(std::make_shared<ConfigManager::Global::ConfigCommit::Commits>())
{
    commits->parent = this;

    yang_name = "config-commit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::ConfigCommit::~ConfigCommit()
{
}

bool ConfigManager::Global::ConfigCommit::has_data() const
{
    if (is_presence_container) return true;
    return (commits !=  nullptr && commits->has_data());
}

bool ConfigManager::Global::ConfigCommit::has_operation() const
{
    return is_set(yfilter)
	|| (commits !=  nullptr && commits->has_operation());
}

std::string ConfigManager::Global::ConfigCommit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::ConfigCommit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-commit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::ConfigCommit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::ConfigCommit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commits")
    {
        if(commits == nullptr)
        {
            commits = std::make_shared<ConfigManager::Global::ConfigCommit::Commits>();
        }
        return commits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::ConfigCommit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(commits != nullptr)
    {
        _children["commits"] = commits;
    }

    return _children;
}

void ConfigManager::Global::ConfigCommit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::Global::ConfigCommit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfigManager::Global::ConfigCommit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commits")
        return true;
    return false;
}

ConfigManager::Global::ConfigCommit::Commits::Commits()
    :
    commit(this, {"commit"})
{

    yang_name = "commits"; yang_parent_name = "config-commit"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::ConfigCommit::Commits::~Commits()
{
}

bool ConfigManager::Global::ConfigCommit::Commits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<commit.len(); index++)
    {
        if(commit[index]->has_data())
            return true;
    }
    return false;
}

bool ConfigManager::Global::ConfigCommit::Commits::has_operation() const
{
    for (std::size_t index=0; index<commit.len(); index++)
    {
        if(commit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfigManager::Global::ConfigCommit::Commits::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/config-commit/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::ConfigCommit::Commits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::ConfigCommit::Commits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::ConfigCommit::Commits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commit")
    {
        auto ent_ = std::make_shared<ConfigManager::Global::ConfigCommit::Commits::Commit>();
        ent_->parent = this;
        commit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::ConfigCommit::Commits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : commit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfigManager::Global::ConfigCommit::Commits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::Global::ConfigCommit::Commits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfigManager::Global::ConfigCommit::Commits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit")
        return true;
    return false;
}

ConfigManager::Global::ConfigCommit::Commits::Commit::Commit()
    :
    commit{YType::str, "commit"},
    timestamp{YType::str, "timestamp"},
    commit_id{YType::str, "commit-id"},
    user_id{YType::str, "user-id"},
    line{YType::str, "line"},
    client_name{YType::str, "client-name"},
    label{YType::str, "label"},
    comment{YType::str, "comment"}
{

    yang_name = "commit"; yang_parent_name = "commits"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::ConfigCommit::Commits::Commit::~Commit()
{
}

bool ConfigManager::Global::ConfigCommit::Commits::Commit::has_data() const
{
    if (is_presence_container) return true;
    return commit.is_set
	|| timestamp.is_set
	|| commit_id.is_set
	|| user_id.is_set
	|| line.is_set
	|| client_name.is_set
	|| label.is_set
	|| comment.is_set;
}

bool ConfigManager::Global::ConfigCommit::Commits::Commit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commit.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(commit_id.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string ConfigManager::Global::ConfigCommit::Commits::Commit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/config-commit/commits/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::ConfigCommit::Commits::Commit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commit";
    ADD_KEY_TOKEN(commit, "commit");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::ConfigCommit::Commits::Commit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commit.is_set || is_set(commit.yfilter)) leaf_name_data.push_back(commit.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.yfilter)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::ConfigCommit::Commits::Commit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::ConfigCommit::Commits::Commit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::ConfigCommit::Commits::Commit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commit")
    {
        commit = value;
        commit.value_namespace = name_space;
        commit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commit-id")
    {
        commit_id = value;
        commit_id.value_namespace = name_space;
        commit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::ConfigCommit::Commits::Commit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commit")
    {
        commit.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "commit-id")
    {
        commit_id.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool ConfigManager::Global::ConfigCommit::Commits::Commit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit" || name == "timestamp" || name == "commit-id" || name == "user-id" || name == "line" || name == "client-name" || name == "label" || name == "comment")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTables()
    :
    history_table(this, {"history_type"})
{

    yang_name = "history-tables"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::HistoryTables::~HistoryTables()
{
}

bool ConfigManager::Global::HistoryTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history_table.len(); index++)
    {
        if(history_table[index]->has_data())
            return true;
    }
    return false;
}

bool ConfigManager::Global::HistoryTables::has_operation() const
{
    for (std::size_t index=0; index<history_table.len(); index++)
    {
        if(history_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfigManager::Global::HistoryTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::HistoryTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history-table")
    {
        auto ent_ = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable>();
        ent_->parent = this;
        history_table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history_table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfigManager::Global::HistoryTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::Global::HistoryTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfigManager::Global::HistoryTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-table")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::HistoryTable()
    :
    history_type{YType::str, "history-type"}
        ,
    history(this, {"history"})
{

    yang_name = "history-table"; yang_parent_name = "history-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::HistoryTables::HistoryTable::~HistoryTable()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return history_type.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(history_type.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/history-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-table";
    ADD_KEY_TOKEN(history_type, "history-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_type.is_set || is_set(history_type.yfilter)) leaf_name_data.push_back(history_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-type")
    {
        history_type = value;
        history_type.value_namespace = name_space;
        history_type.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-type")
    {
        history_type.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "history-type")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::History()
    :
    history{YType::str, "history"},
    timestamp{YType::str, "timestamp"}
        ,
    info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info>())
{
    info->parent = this;

    yang_name = "history"; yang_parent_name = "history-table"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::~History()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::has_data() const
{
    if (is_presence_container) return true;
    return history.is_set
	|| timestamp.is_set
	|| (info !=  nullptr && info->has_data());
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (info !=  nullptr && info->has_operation());
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history, "history");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "history" || name == "timestamp")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::Info()
    :
    type{YType::enumeration, "type"},
    a{YType::uint32, "a"}
        ,
    alarm_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo>())
    , cfscheck_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo>())
    , commit_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo>())
    , oir_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo>())
    , shutdown_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo>())
    , startup_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo>())
    , backup_info(std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo>())
{
    alarm_info->parent = this;
    cfscheck_info->parent = this;
    commit_info->parent = this;
    oir_info->parent = this;
    shutdown_info->parent = this;
    startup_info->parent = this;
    backup_info->parent = this;

    yang_name = "info"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::~Info()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| a.is_set
	|| (alarm_info !=  nullptr && alarm_info->has_data())
	|| (cfscheck_info !=  nullptr && cfscheck_info->has_data())
	|| (commit_info !=  nullptr && commit_info->has_data())
	|| (oir_info !=  nullptr && oir_info->has_data())
	|| (shutdown_info !=  nullptr && shutdown_info->has_data())
	|| (startup_info !=  nullptr && startup_info->has_data())
	|| (backup_info !=  nullptr && backup_info->has_data());
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(a.yfilter)
	|| (alarm_info !=  nullptr && alarm_info->has_operation())
	|| (cfscheck_info !=  nullptr && cfscheck_info->has_operation())
	|| (commit_info !=  nullptr && commit_info->has_operation())
	|| (oir_info !=  nullptr && oir_info->has_operation())
	|| (shutdown_info !=  nullptr && shutdown_info->has_operation())
	|| (startup_info !=  nullptr && startup_info->has_operation())
	|| (backup_info !=  nullptr && backup_info->has_operation());
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (a.is_set || is_set(a.yfilter)) leaf_name_data.push_back(a.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        if(alarm_info == nullptr)
        {
            alarm_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo>();
        }
        return alarm_info;
    }

    if(child_yang_name == "cfscheck-info")
    {
        if(cfscheck_info == nullptr)
        {
            cfscheck_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo>();
        }
        return cfscheck_info;
    }

    if(child_yang_name == "commit-info")
    {
        if(commit_info == nullptr)
        {
            commit_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo>();
        }
        return commit_info;
    }

    if(child_yang_name == "oir-info")
    {
        if(oir_info == nullptr)
        {
            oir_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo>();
        }
        return oir_info;
    }

    if(child_yang_name == "shutdown-info")
    {
        if(shutdown_info == nullptr)
        {
            shutdown_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo>();
        }
        return shutdown_info;
    }

    if(child_yang_name == "startup-info")
    {
        if(startup_info == nullptr)
        {
            startup_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo>();
        }
        return startup_info;
    }

    if(child_yang_name == "backup-info")
    {
        if(backup_info == nullptr)
        {
            backup_info = std::make_shared<ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo>();
        }
        return backup_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alarm_info != nullptr)
    {
        _children["alarm-info"] = alarm_info;
    }

    if(cfscheck_info != nullptr)
    {
        _children["cfscheck-info"] = cfscheck_info;
    }

    if(commit_info != nullptr)
    {
        _children["commit-info"] = commit_info;
    }

    if(oir_info != nullptr)
    {
        _children["oir-info"] = oir_info;
    }

    if(shutdown_info != nullptr)
    {
        _children["shutdown-info"] = shutdown_info;
    }

    if(startup_info != nullptr)
    {
        _children["startup-info"] = startup_info;
    }

    if(backup_info != nullptr)
    {
        _children["backup-info"] = backup_info;
    }

    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "a")
    {
        a = value;
        a.value_namespace = name_space;
        a.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "a")
    {
        a.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info" || name == "cfscheck-info" || name == "commit-info" || name == "oir-info" || name == "shutdown-info" || name == "startup-info" || name == "backup-info" || name == "type" || name == "a")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::AlarmInfo()
    :
    state{YType::str, "state"},
    where{YType::str, "where"}
{

    yang_name = "alarm-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::~AlarmInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| where.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(where.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (where.is_set || is_set(where.yfilter)) leaf_name_data.push_back(where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "where")
    {
        where = value;
        where.value_namespace = name_space;
        where.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "where")
    {
        where.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "where")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::CfscheckInfo()
    :
    user_id{YType::str, "user-id"},
    line{YType::str, "line"}
{

    yang_name = "cfscheck-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::~CfscheckInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::has_data() const
{
    if (is_presence_container) return true;
    return user_id.is_set
	|| line.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfscheck-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CfscheckInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-id" || name == "line")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::CommitInfo()
    :
    commit_id{YType::str, "commit-id"},
    user_id{YType::str, "user-id"},
    line{YType::str, "line"},
    client_name{YType::str, "client-name"},
    label{YType::str, "label"},
    comment{YType::str, "comment"}
{

    yang_name = "commit-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::~CommitInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::has_data() const
{
    if (is_presence_container) return true;
    return commit_id.is_set
	|| user_id.is_set
	|| line.is_set
	|| client_name.is_set
	|| label.is_set
	|| comment.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commit_id.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commit-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commit_id.is_set || is_set(commit_id.yfilter)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commit-id")
    {
        commit_id = value;
        commit_id.value_namespace = name_space;
        commit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commit-id")
    {
        commit_id.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::CommitInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit-id" || name == "user-id" || name == "line" || name == "client-name" || name == "label" || name == "comment")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::OirInfo()
    :
    config_type{YType::str, "config-type"},
    operation_{YType::str, "operation"},
    config_name{YType::str, "config-name"}
{

    yang_name = "oir-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::~OirInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::has_data() const
{
    if (is_presence_container) return true;
    return config_type.is_set
	|| operation_.is_set
	|| config_name.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_type.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(config_name.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_type.is_set || is_set(config_type.yfilter)) leaf_name_data.push_back(config_type.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (config_name.is_set || is_set(config_name.yfilter)) leaf_name_data.push_back(config_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-type")
    {
        config_type = value;
        config_type.value_namespace = name_space;
        config_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-name")
    {
        config_name = value;
        config_name.value_namespace = name_space;
        config_name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-type")
    {
        config_type.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "config-name")
    {
        config_name.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::OirInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-type" || name == "operation" || name == "config-name")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::ShutdownInfo()
    :
    comment{YType::str, "comment"}
{

    yang_name = "shutdown-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::~ShutdownInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::has_data() const
{
    if (is_presence_container) return true;
    return comment.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::ShutdownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comment")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::StartupInfo()
    :
    how_booted{YType::str, "how-booted"},
    boot_path{YType::str, "boot-path"}
{

    yang_name = "startup-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::~StartupInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::has_data() const
{
    if (is_presence_container) return true;
    return how_booted.is_set
	|| boot_path.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how_booted.yfilter)
	|| ydk::is_set(boot_path.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startup-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how_booted.is_set || is_set(how_booted.yfilter)) leaf_name_data.push_back(how_booted.get_name_leafdata());
    if (boot_path.is_set || is_set(boot_path.yfilter)) leaf_name_data.push_back(boot_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how-booted")
    {
        how_booted = value;
        how_booted.value_namespace = name_space;
        how_booted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-path")
    {
        boot_path = value;
        boot_path.value_namespace = name_space;
        boot_path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how-booted")
    {
        how_booted.yfilter = yfilter;
    }
    if(value_path == "boot-path")
    {
        boot_path.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::StartupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how-booted" || name == "boot-path")
        return true;
    return false;
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::BackupInfo()
    :
    comment{YType::str, "comment"}
{

    yang_name = "backup-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::~BackupInfo()
{
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::has_data() const
{
    if (is_presence_container) return true;
    return comment.is_set;
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool ConfigManager::Global::HistoryTables::HistoryTable::History::Info::BackupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comment")
        return true;
    return false;
}

ConfigManager::Global::ConfigSession::ConfigSession()
    :
    sessions(std::make_shared<ConfigManager::Global::ConfigSession::Sessions>())
{
    sessions->parent = this;

    yang_name = "config-session"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::ConfigSession::~ConfigSession()
{
}

bool ConfigManager::Global::ConfigSession::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool ConfigManager::Global::ConfigSession::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string ConfigManager::Global::ConfigSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::ConfigSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::ConfigSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::ConfigSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<ConfigManager::Global::ConfigSession::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::ConfigSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void ConfigManager::Global::ConfigSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::Global::ConfigSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfigManager::Global::ConfigSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

ConfigManager::Global::ConfigSession::Sessions::Sessions()
    :
    session(this, {"session"})
{

    yang_name = "sessions"; yang_parent_name = "config-session"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::ConfigSession::Sessions::~Sessions()
{
}

bool ConfigManager::Global::ConfigSession::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool ConfigManager::Global::ConfigSession::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfigManager::Global::ConfigSession::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/config-session/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::ConfigSession::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::ConfigSession::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::ConfigSession::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<ConfigManager::Global::ConfigSession::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::ConfigSession::Sessions::get_children() const
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

void ConfigManager::Global::ConfigSession::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfigManager::Global::ConfigSession::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfigManager::Global::ConfigSession::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

ConfigManager::Global::ConfigSession::Sessions::Session::Session()
    :
    session{YType::str, "session"},
    session_id{YType::str, "session-id"},
    client_name{YType::str, "client-name"},
    user_id{YType::str, "user-id"},
    tty_name{YType::str, "tty-name"},
    timestamp{YType::str, "timestamp"},
    lock_flag{YType::str, "lock-flag"},
    trial_flag{YType::str, "trial-flag"},
    pid{YType::uint32, "pid"},
    process_name{YType::str, "process-name"},
    node_name{YType::str, "node-name"},
    elapsed_time{YType::str, "elapsed-time"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfigManager::Global::ConfigSession::Sessions::Session::~Session()
{
}

bool ConfigManager::Global::ConfigSession::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| session_id.is_set
	|| client_name.is_set
	|| user_id.is_set
	|| tty_name.is_set
	|| timestamp.is_set
	|| lock_flag.is_set
	|| trial_flag.is_set
	|| pid.is_set
	|| process_name.is_set
	|| node_name.is_set
	|| elapsed_time.is_set;
}

bool ConfigManager::Global::ConfigSession::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(tty_name.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(lock_flag.yfilter)
	|| ydk::is_set(trial_flag.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(elapsed_time.yfilter);
}

std::string ConfigManager::Global::ConfigSession::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:config-manager/global/config-session/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfigManager::Global::ConfigSession::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfigManager::Global::ConfigSession::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (tty_name.is_set || is_set(tty_name.yfilter)) leaf_name_data.push_back(tty_name.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (lock_flag.is_set || is_set(lock_flag.yfilter)) leaf_name_data.push_back(lock_flag.get_name_leafdata());
    if (trial_flag.is_set || is_set(trial_flag.yfilter)) leaf_name_data.push_back(trial_flag.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfigManager::Global::ConfigSession::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfigManager::Global::ConfigSession::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfigManager::Global::ConfigSession::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty-name")
    {
        tty_name = value;
        tty_name.value_namespace = name_space;
        tty_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-flag")
    {
        lock_flag = value;
        lock_flag.value_namespace = name_space;
        lock_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trial-flag")
    {
        trial_flag = value;
        trial_flag.value_namespace = name_space;
        trial_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
}

void ConfigManager::Global::ConfigSession::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "tty-name")
    {
        tty_name.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "lock-flag")
    {
        lock_flag.yfilter = yfilter;
    }
    if(value_path == "trial-flag")
    {
        trial_flag.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
}

bool ConfigManager::Global::ConfigSession::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "session-id" || name == "client-name" || name == "user-id" || name == "tty-name" || name == "timestamp" || name == "lock-flag" || name == "trial-flag" || name == "pid" || name == "process-name" || name == "node-name" || name == "elapsed-time")
        return true;
    return false;
}

const Enum::YLeaf HistRecord::cfghist_bag_record_all {0, "cfghist-bag-record-all"};
const Enum::YLeaf HistRecord::cfghist_bag_record_alarm {1, "cfghist-bag-record-alarm"};
const Enum::YLeaf HistRecord::cfghist_bag_record_cfs_check {2, "cfghist-bag-record-cfs-check"};
const Enum::YLeaf HistRecord::cfghist_bag_record_commit {3, "cfghist-bag-record-commit"};
const Enum::YLeaf HistRecord::cfghist_bag_record_oir {4, "cfghist-bag-record-oir"};
const Enum::YLeaf HistRecord::cfghist_bag_record_shutdown {5, "cfghist-bag-record-shutdown"};
const Enum::YLeaf HistRecord::cfghist_bag_record_startup {6, "cfghist-bag-record-startup"};
const Enum::YLeaf HistRecord::cfghist_bag_record_backup {7, "cfghist-bag-record-backup"};
const Enum::YLeaf HistRecord::cfghist_bag_record_rebase {8, "cfghist-bag-record-rebase"};
const Enum::YLeaf HistRecord::cfghist_bag_record_last {9, "cfghist-bag-record-last"};


}
}

