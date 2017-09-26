
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_netconf {

CancelCommit::CancelCommit()
    :
    input(std::make_shared<CancelCommit::Input>())
{
    input->parent = this;

    yang_name = "cancel-commit"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

CancelCommit::~CancelCommit()
{
}

bool CancelCommit::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool CancelCommit::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CancelCommit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:cancel-commit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CancelCommit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CancelCommit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CancelCommit::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CancelCommit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CancelCommit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CancelCommit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CancelCommit::clone_ptr() const
{
    return std::make_shared<CancelCommit>();
}

std::string CancelCommit::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CancelCommit::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CancelCommit::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CancelCommit::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool CancelCommit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CancelCommit::Input::Input()
    :
    persist_id{YType::str, "persist-id"}
{

    yang_name = "input"; yang_parent_name = "cancel-commit"; is_top_level_class = false; has_list_ancestor = false;
}

CancelCommit::Input::~Input()
{
}

bool CancelCommit::Input::has_data() const
{
    return persist_id.is_set;
}

bool CancelCommit::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist_id.yfilter);
}

std::string CancelCommit::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:cancel-commit/" << get_segment_path();
    return path_buffer.str();
}

std::string CancelCommit::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CancelCommit::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist_id.is_set || is_set(persist_id.yfilter)) leaf_name_data.push_back(persist_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CancelCommit::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CancelCommit::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CancelCommit::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist-id")
    {
        persist_id = value;
        persist_id.value_namespace = name_space;
        persist_id.value_namespace_prefix = name_space_prefix;
    }
}

void CancelCommit::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist-id")
    {
        persist_id.yfilter = yfilter;
    }
}

bool CancelCommit::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist-id")
        return true;
    return false;
}

CloseSession::CloseSession()
{

    yang_name = "close-session"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

CloseSession::~CloseSession()
{
}

bool CloseSession::has_data() const
{
    return false;
}

bool CloseSession::has_operation() const
{
    return is_set(yfilter);
}

std::string CloseSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:close-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CloseSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CloseSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CloseSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CloseSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CloseSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CloseSession::clone_ptr() const
{
    return std::make_shared<CloseSession>();
}

std::string CloseSession::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CloseSession::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CloseSession::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CloseSession::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool CloseSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Commit::Commit()
    :
    input(std::make_shared<Commit::Input>())
{
    input->parent = this;

    yang_name = "commit"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

Commit::~Commit()
{
}

bool Commit::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Commit::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Commit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:commit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Commit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Commit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Commit::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Commit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Commit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Commit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Commit::clone_ptr() const
{
    return std::make_shared<Commit>();
}

std::string Commit::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Commit::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Commit::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Commit::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Commit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Commit::Input::Input()
    :
    confirm_timeout{YType::uint32, "confirm-timeout"},
    confirmed{YType::empty, "confirmed"},
    persist{YType::str, "persist"},
    persist_id{YType::str, "persist-id"}
{

    yang_name = "input"; yang_parent_name = "commit"; is_top_level_class = false; has_list_ancestor = false;
}

Commit::Input::~Input()
{
}

bool Commit::Input::has_data() const
{
    return confirm_timeout.is_set
	|| confirmed.is_set
	|| persist.is_set
	|| persist_id.is_set;
}

bool Commit::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confirm_timeout.yfilter)
	|| ydk::is_set(confirmed.yfilter)
	|| ydk::is_set(persist.yfilter)
	|| ydk::is_set(persist_id.yfilter);
}

std::string Commit::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:commit/" << get_segment_path();
    return path_buffer.str();
}

std::string Commit::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Commit::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confirm_timeout.is_set || is_set(confirm_timeout.yfilter)) leaf_name_data.push_back(confirm_timeout.get_name_leafdata());
    if (confirmed.is_set || is_set(confirmed.yfilter)) leaf_name_data.push_back(confirmed.get_name_leafdata());
    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (persist_id.is_set || is_set(persist_id.yfilter)) leaf_name_data.push_back(persist_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Commit::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Commit::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Commit::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confirm-timeout")
    {
        confirm_timeout = value;
        confirm_timeout.value_namespace = name_space;
        confirm_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confirmed")
    {
        confirmed = value;
        confirmed.value_namespace = name_space;
        confirmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist-id")
    {
        persist_id = value;
        persist_id.value_namespace = name_space;
        persist_id.value_namespace_prefix = name_space_prefix;
    }
}

void Commit::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confirm-timeout")
    {
        confirm_timeout.yfilter = yfilter;
    }
    if(value_path == "confirmed")
    {
        confirmed.yfilter = yfilter;
    }
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
    if(value_path == "persist-id")
    {
        persist_id.yfilter = yfilter;
    }
}

bool Commit::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confirm-timeout" || name == "confirmed" || name == "persist" || name == "persist-id")
        return true;
    return false;
}

CopyConfig::CopyConfig()
    :
    input(std::make_shared<CopyConfig::Input>())
{
    input->parent = this;

    yang_name = "copy-config"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

CopyConfig::~CopyConfig()
{
}

bool CopyConfig::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool CopyConfig::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:copy-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopyConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyConfig::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopyConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopyConfig::clone_ptr() const
{
    return std::make_shared<CopyConfig>();
}

std::string CopyConfig::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CopyConfig::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CopyConfig::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyConfig::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool CopyConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyConfig::Input::Input()
    :
    with_defaults{YType::enumeration, "ietf-netconf-with-defaults:with-defaults"}
    	,
    source(std::make_shared<CopyConfig::Input::Source>())
	,target(std::make_shared<CopyConfig::Input::Target>())
{
    source->parent = this;
    target->parent = this;

    yang_name = "input"; yang_parent_name = "copy-config"; is_top_level_class = false; has_list_ancestor = false;
}

CopyConfig::Input::~Input()
{
}

bool CopyConfig::Input::has_data() const
{
    return with_defaults.is_set
	|| (source !=  nullptr && source->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool CopyConfig::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(with_defaults.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string CopyConfig::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:copy-config/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyConfig::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyConfig::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (with_defaults.is_set || is_set(with_defaults.yfilter)) leaf_name_data.push_back(with_defaults.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopyConfig::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<CopyConfig::Input::Source>();
        }
        return source;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<CopyConfig::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfig::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void CopyConfig::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "with-defaults")
    {
        with_defaults = value;
        with_defaults.value_namespace = name_space;
        with_defaults.value_namespace_prefix = name_space_prefix;
    }
}

void CopyConfig::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "with-defaults")
    {
        with_defaults.yfilter = yfilter;
    }
}

bool CopyConfig::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "target" || name == "with-defaults")
        return true;
    return false;
}

CopyConfig::Input::Source::Source()
    :
    candidate{YType::empty, "candidate"},
    config{YType::str, "config"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{

    yang_name = "source"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

CopyConfig::Input::Source::~Source()
{
}

bool CopyConfig::Input::Source::has_data() const
{
    return candidate.is_set
	|| config.is_set
	|| running.is_set
	|| startup.is_set
	|| url.is_set;
}

bool CopyConfig::Input::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string CopyConfig::Input::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:copy-config/input/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyConfig::Input::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyConfig::Input::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopyConfig::Input::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfig::Input::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CopyConfig::Input::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void CopyConfig::Input::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool CopyConfig::Input::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "config" || name == "running" || name == "startup" || name == "url")
        return true;
    return false;
}

CopyConfig::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{

    yang_name = "target"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

CopyConfig::Input::Target::~Target()
{
}

bool CopyConfig::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set
	|| url.is_set;
}

bool CopyConfig::Input::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string CopyConfig::Input::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:copy-config/input/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyConfig::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyConfig::Input::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopyConfig::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfig::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CopyConfig::Input::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void CopyConfig::Input::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool CopyConfig::Input::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "running" || name == "startup" || name == "url")
        return true;
    return false;
}

DeleteConfig::DeleteConfig()
    :
    input(std::make_shared<DeleteConfig::Input>())
{
    input->parent = this;

    yang_name = "delete-config"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

DeleteConfig::~DeleteConfig()
{
}

bool DeleteConfig::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool DeleteConfig::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string DeleteConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:delete-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<DeleteConfig::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void DeleteConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DeleteConfig::clone_ptr() const
{
    return std::make_shared<DeleteConfig>();
}

std::string DeleteConfig::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string DeleteConfig::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function DeleteConfig::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteConfig::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool DeleteConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

DeleteConfig::Input::Input()
    :
    target(std::make_shared<DeleteConfig::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "delete-config"; is_top_level_class = false; has_list_ancestor = false;
}

DeleteConfig::Input::~Input()
{
}

bool DeleteConfig::Input::has_data() const
{
    return (target !=  nullptr && target->has_data());
}

bool DeleteConfig::Input::has_operation() const
{
    return is_set(yfilter)
	|| (target !=  nullptr && target->has_operation());
}

std::string DeleteConfig::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:delete-config/" << get_segment_path();
    return path_buffer.str();
}

std::string DeleteConfig::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteConfig::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteConfig::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<DeleteConfig::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteConfig::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void DeleteConfig::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteConfig::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DeleteConfig::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

DeleteConfig::Input::Target::Target()
    :
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{

    yang_name = "target"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

DeleteConfig::Input::Target::~Target()
{
}

bool DeleteConfig::Input::Target::has_data() const
{
    return startup.is_set
	|| url.is_set;
}

bool DeleteConfig::Input::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(startup.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string DeleteConfig::Input::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:delete-config/input/" << get_segment_path();
    return path_buffer.str();
}

std::string DeleteConfig::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteConfig::Input::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteConfig::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteConfig::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DeleteConfig::Input::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void DeleteConfig::Input::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool DeleteConfig::Input::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startup" || name == "url")
        return true;
    return false;
}

DiscardChanges::DiscardChanges()
{

    yang_name = "discard-changes"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

DiscardChanges::~DiscardChanges()
{
}

bool DiscardChanges::has_data() const
{
    return false;
}

bool DiscardChanges::has_operation() const
{
    return is_set(yfilter);
}

std::string DiscardChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:discard-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiscardChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DiscardChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiscardChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiscardChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DiscardChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DiscardChanges::clone_ptr() const
{
    return std::make_shared<DiscardChanges>();
}

std::string DiscardChanges::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string DiscardChanges::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function DiscardChanges::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DiscardChanges::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool DiscardChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

EditConfig::EditConfig()
    :
    input(std::make_shared<EditConfig::Input>())
{
    input->parent = this;

    yang_name = "edit-config"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

EditConfig::~EditConfig()
{
}

bool EditConfig::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EditConfig::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EditConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:edit-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EditConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EditConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EditConfig::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EditConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EditConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EditConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EditConfig::clone_ptr() const
{
    return std::make_shared<EditConfig>();
}

std::string EditConfig::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string EditConfig::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function EditConfig::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EditConfig::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool EditConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EditConfig::Input::Input()
    :
    config{YType::str, "config"},
    default_operation{YType::enumeration, "default-operation"},
    error_option{YType::enumeration, "error-option"},
    test_option{YType::enumeration, "test-option"},
    url{YType::str, "url"}
    	,
    target(std::make_shared<EditConfig::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "edit-config"; is_top_level_class = false; has_list_ancestor = false;
}

EditConfig::Input::~Input()
{
}

bool EditConfig::Input::has_data() const
{
    return config.is_set
	|| default_operation.is_set
	|| error_option.is_set
	|| test_option.is_set
	|| url.is_set
	|| (target !=  nullptr && target->has_data());
}

bool EditConfig::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(default_operation.yfilter)
	|| ydk::is_set(error_option.yfilter)
	|| ydk::is_set(test_option.yfilter)
	|| ydk::is_set(url.yfilter)
	|| (target !=  nullptr && target->has_operation());
}

std::string EditConfig::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:edit-config/" << get_segment_path();
    return path_buffer.str();
}

std::string EditConfig::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EditConfig::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (default_operation.is_set || is_set(default_operation.yfilter)) leaf_name_data.push_back(default_operation.get_name_leafdata());
    if (error_option.is_set || is_set(error_option.yfilter)) leaf_name_data.push_back(error_option.get_name_leafdata());
    if (test_option.is_set || is_set(test_option.yfilter)) leaf_name_data.push_back(test_option.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EditConfig::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<EditConfig::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EditConfig::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void EditConfig::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-operation")
    {
        default_operation = value;
        default_operation.value_namespace = name_space;
        default_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-option")
    {
        error_option = value;
        error_option.value_namespace = name_space;
        error_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-option")
    {
        test_option = value;
        test_option.value_namespace = name_space;
        test_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void EditConfig::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "default-operation")
    {
        default_operation.yfilter = yfilter;
    }
    if(value_path == "error-option")
    {
        error_option.yfilter = yfilter;
    }
    if(value_path == "test-option")
    {
        test_option.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool EditConfig::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target" || name == "config" || name == "default-operation" || name == "error-option" || name == "test-option" || name == "url")
        return true;
    return false;
}

EditConfig::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"}
{

    yang_name = "target"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

EditConfig::Input::Target::~Target()
{
}

bool EditConfig::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set;
}

bool EditConfig::Input::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(running.yfilter);
}

std::string EditConfig::Input::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:edit-config/input/" << get_segment_path();
    return path_buffer.str();
}

std::string EditConfig::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EditConfig::Input::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EditConfig::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EditConfig::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EditConfig::Input::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
}

void EditConfig::Input::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
}

bool EditConfig::Input::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "running")
        return true;
    return false;
}

Get::Get()
    :
    input(std::make_shared<Get::Input>())
	,output(std::make_shared<Get::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

Get::~Get()
{
}

bool Get::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Get::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Get::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Get::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Get::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Get::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Get::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Get::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Get::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Get::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Get::clone_ptr() const
{
    return std::make_shared<Get>();
}

std::string Get::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Get::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Get::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Get::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Get::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Get::Input::Input()
    :
    filter{YType::str, "filter"},
    with_defaults{YType::enumeration, "ietf-netconf-with-defaults:with-defaults"}
{

    yang_name = "input"; yang_parent_name = "get"; is_top_level_class = false; has_list_ancestor = false;
}

Get::Input::~Input()
{
}

bool Get::Input::has_data() const
{
    return filter.is_set
	|| with_defaults.is_set;
}

bool Get::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(with_defaults.yfilter);
}

std::string Get::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get/" << get_segment_path();
    return path_buffer.str();
}

std::string Get::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Get::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (with_defaults.is_set || is_set(with_defaults.yfilter)) leaf_name_data.push_back(with_defaults.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Get::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Get::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Get::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-defaults")
    {
        with_defaults = value;
        with_defaults.value_namespace = name_space;
        with_defaults.value_namespace_prefix = name_space_prefix;
    }
}

void Get::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "with-defaults")
    {
        with_defaults.yfilter = yfilter;
    }
}

bool Get::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "with-defaults")
        return true;
    return false;
}

Get::Output::Output()
    :
    data{YType::str, "data"}
{

    yang_name = "output"; yang_parent_name = "get"; is_top_level_class = false; has_list_ancestor = false;
}

Get::Output::~Output()
{
}

bool Get::Output::has_data() const
{
    return data.is_set;
}

bool Get::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Get::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get/" << get_segment_path();
    return path_buffer.str();
}

std::string Get::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Get::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Get::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Get::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Get::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Get::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Get::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

GetConfig::GetConfig()
    :
    input(std::make_shared<GetConfig::Input>())
	,output(std::make_shared<GetConfig::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get-config"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

GetConfig::~GetConfig()
{
}

bool GetConfig::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetConfig::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GetConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetConfig::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetConfig::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void GetConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> GetConfig::clone_ptr() const
{
    return std::make_shared<GetConfig>();
}

std::string GetConfig::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string GetConfig::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function GetConfig::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetConfig::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool GetConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetConfig::Input::Input()
    :
    filter{YType::str, "filter"},
    with_defaults{YType::enumeration, "ietf-netconf-with-defaults:with-defaults"}
    	,
    source(std::make_shared<GetConfig::Input::Source>())
{
    source->parent = this;

    yang_name = "input"; yang_parent_name = "get-config"; is_top_level_class = false; has_list_ancestor = false;
}

GetConfig::Input::~Input()
{
}

bool GetConfig::Input::has_data() const
{
    return filter.is_set
	|| with_defaults.is_set
	|| (source !=  nullptr && source->has_data());
}

bool GetConfig::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(with_defaults.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string GetConfig::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get-config/" << get_segment_path();
    return path_buffer.str();
}

std::string GetConfig::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetConfig::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (with_defaults.is_set || is_set(with_defaults.yfilter)) leaf_name_data.push_back(with_defaults.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GetConfig::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<GetConfig::Input::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfig::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void GetConfig::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-defaults")
    {
        with_defaults = value;
        with_defaults.value_namespace = name_space;
        with_defaults.value_namespace_prefix = name_space_prefix;
    }
}

void GetConfig::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "with-defaults")
    {
        with_defaults.yfilter = yfilter;
    }
}

bool GetConfig::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "filter" || name == "with-defaults")
        return true;
    return false;
}

GetConfig::Input::Source::Source()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{

    yang_name = "source"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

GetConfig::Input::Source::~Source()
{
}

bool GetConfig::Input::Source::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool GetConfig::Input::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter);
}

std::string GetConfig::Input::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get-config/input/" << get_segment_path();
    return path_buffer.str();
}

std::string GetConfig::Input::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetConfig::Input::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GetConfig::Input::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfig::Input::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetConfig::Input::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
}

void GetConfig::Input::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
}

bool GetConfig::Input::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "running" || name == "startup")
        return true;
    return false;
}

GetConfig::Output::Output()
    :
    data{YType::str, "data"}
{

    yang_name = "output"; yang_parent_name = "get-config"; is_top_level_class = false; has_list_ancestor = false;
}

GetConfig::Output::~Output()
{
}

bool GetConfig::Output::has_data() const
{
    return data.is_set;
}

bool GetConfig::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string GetConfig::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get-config/" << get_segment_path();
    return path_buffer.str();
}

std::string GetConfig::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetConfig::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GetConfig::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfig::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetConfig::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void GetConfig::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool GetConfig::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

KillSession::KillSession()
    :
    input(std::make_shared<KillSession::Input>())
{
    input->parent = this;

    yang_name = "kill-session"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

KillSession::~KillSession()
{
}

bool KillSession::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool KillSession::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string KillSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:kill-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KillSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> KillSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KillSession::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KillSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KillSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KillSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> KillSession::clone_ptr() const
{
    return std::make_shared<KillSession>();
}

std::string KillSession::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string KillSession::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function KillSession::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> KillSession::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool KillSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

KillSession::Input::Input()
    :
    session_id{YType::uint32, "session-id"}
{

    yang_name = "input"; yang_parent_name = "kill-session"; is_top_level_class = false; has_list_ancestor = false;
}

KillSession::Input::~Input()
{
}

bool KillSession::Input::has_data() const
{
    return session_id.is_set;
}

bool KillSession::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string KillSession::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:kill-session/" << get_segment_path();
    return path_buffer.str();
}

std::string KillSession::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KillSession::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> KillSession::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KillSession::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KillSession::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void KillSession::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool KillSession::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id")
        return true;
    return false;
}

Lock::Lock()
    :
    input(std::make_shared<Lock::Input>())
{
    input->parent = this;

    yang_name = "lock"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

Lock::~Lock()
{
}

bool Lock::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Lock::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Lock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:lock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Lock::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Lock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Lock::clone_ptr() const
{
    return std::make_shared<Lock>();
}

std::string Lock::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Lock::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Lock::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lock::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Lock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Lock::Input::Input()
    :
    target(std::make_shared<Lock::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "lock"; is_top_level_class = false; has_list_ancestor = false;
}

Lock::Input::~Input()
{
}

bool Lock::Input::has_data() const
{
    return (target !=  nullptr && target->has_data());
}

bool Lock::Input::has_operation() const
{
    return is_set(yfilter)
	|| (target !=  nullptr && target->has_operation());
}

std::string Lock::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:lock/" << get_segment_path();
    return path_buffer.str();
}

std::string Lock::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lock::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lock::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Lock::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lock::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void Lock::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lock::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lock::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

Lock::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{

    yang_name = "target"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

Lock::Input::Target::~Target()
{
}

bool Lock::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool Lock::Input::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter);
}

std::string Lock::Input::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:lock/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Lock::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lock::Input::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lock::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lock::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lock::Input::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
}

void Lock::Input::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
}

bool Lock::Input::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "running" || name == "startup")
        return true;
    return false;
}

Unlock::Unlock()
    :
    input(std::make_shared<Unlock::Input>())
{
    input->parent = this;

    yang_name = "unlock"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

Unlock::~Unlock()
{
}

bool Unlock::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Unlock::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Unlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:unlock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Unlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Unlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Unlock::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Unlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Unlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Unlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Unlock::clone_ptr() const
{
    return std::make_shared<Unlock>();
}

std::string Unlock::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Unlock::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Unlock::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Unlock::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Unlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Unlock::Input::Input()
    :
    target(std::make_shared<Unlock::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "unlock"; is_top_level_class = false; has_list_ancestor = false;
}

Unlock::Input::~Input()
{
}

bool Unlock::Input::has_data() const
{
    return (target !=  nullptr && target->has_data());
}

bool Unlock::Input::has_operation() const
{
    return is_set(yfilter)
	|| (target !=  nullptr && target->has_operation());
}

std::string Unlock::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:unlock/" << get_segment_path();
    return path_buffer.str();
}

std::string Unlock::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Unlock::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Unlock::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Unlock::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Unlock::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void Unlock::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Unlock::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Unlock::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

Unlock::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{

    yang_name = "target"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

Unlock::Input::Target::~Target()
{
}

bool Unlock::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool Unlock::Input::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter);
}

std::string Unlock::Input::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:unlock/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Unlock::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Unlock::Input::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Unlock::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Unlock::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Unlock::Input::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
}

void Unlock::Input::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
}

bool Unlock::Input::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "running" || name == "startup")
        return true;
    return false;
}

Validate::Validate()
    :
    input(std::make_shared<Validate::Input>())
{
    input->parent = this;

    yang_name = "validate"; yang_parent_name = "ietf-netconf"; is_top_level_class = true; has_list_ancestor = false;
}

Validate::~Validate()
{
}

bool Validate::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Validate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Validate::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Validate::clone_ptr() const
{
    return std::make_shared<Validate>();
}

std::string Validate::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Validate::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Validate::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Validate::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Validate::Input::Input()
    :
    source(std::make_shared<Validate::Input::Source>())
{
    source->parent = this;

    yang_name = "input"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Validate::Input::~Input()
{
}

bool Validate::Input::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Validate::Input::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Validate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Validate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Validate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Validate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Validate::Input::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Validate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Validate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Validate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Validate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Validate::Input::Source::Source()
    :
    candidate{YType::empty, "candidate"},
    config{YType::str, "config"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{

    yang_name = "source"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

Validate::Input::Source::~Source()
{
}

bool Validate::Input::Source::has_data() const
{
    return candidate.is_set
	|| config.is_set
	|| running.is_set
	|| startup.is_set
	|| url.is_set;
}

bool Validate::Input::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Validate::Input::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:validate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Validate::Input::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Validate::Input::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Validate::Input::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Validate::Input::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Validate::Input::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Validate::Input::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Validate::Input::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "config" || name == "running" || name == "startup" || name == "url")
        return true;
    return false;
}

const Enum::YLeaf EditOperationType::merge {0, "merge"};
const Enum::YLeaf EditOperationType::replace {1, "replace"};
const Enum::YLeaf EditOperationType::create {2, "create"};
const Enum::YLeaf EditOperationType::delete_ {3, "delete"};
const Enum::YLeaf EditOperationType::remove {4, "remove"};

const Enum::YLeaf ErrorTagType::in_use {0, "in-use"};
const Enum::YLeaf ErrorTagType::invalid_value {1, "invalid-value"};
const Enum::YLeaf ErrorTagType::too_big {2, "too-big"};
const Enum::YLeaf ErrorTagType::missing_attribute {3, "missing-attribute"};
const Enum::YLeaf ErrorTagType::bad_attribute {4, "bad-attribute"};
const Enum::YLeaf ErrorTagType::unknown_attribute {5, "unknown-attribute"};
const Enum::YLeaf ErrorTagType::missing_element {6, "missing-element"};
const Enum::YLeaf ErrorTagType::bad_element {7, "bad-element"};
const Enum::YLeaf ErrorTagType::unknown_element {8, "unknown-element"};
const Enum::YLeaf ErrorTagType::unknown_namespace {9, "unknown-namespace"};
const Enum::YLeaf ErrorTagType::access_denied {10, "access-denied"};
const Enum::YLeaf ErrorTagType::lock_denied {11, "lock-denied"};
const Enum::YLeaf ErrorTagType::resource_denied {12, "resource-denied"};
const Enum::YLeaf ErrorTagType::rollback_failed {13, "rollback-failed"};
const Enum::YLeaf ErrorTagType::data_exists {14, "data-exists"};
const Enum::YLeaf ErrorTagType::data_missing {15, "data-missing"};
const Enum::YLeaf ErrorTagType::operation_not_supported {16, "operation-not-supported"};
const Enum::YLeaf ErrorTagType::operation_failed {17, "operation-failed"};
const Enum::YLeaf ErrorTagType::partial_operation {18, "partial-operation"};
const Enum::YLeaf ErrorTagType::malformed_message {19, "malformed-message"};

const Enum::YLeaf ErrorSeverityType::error {0, "error"};
const Enum::YLeaf ErrorSeverityType::warning {1, "warning"};

const Enum::YLeaf EditConfig::Input::DefaultOperation::merge {0, "merge"};
const Enum::YLeaf EditConfig::Input::DefaultOperation::replace {1, "replace"};
const Enum::YLeaf EditConfig::Input::DefaultOperation::none {2, "none"};

const Enum::YLeaf EditConfig::Input::TestOption::test_then_set {0, "test-then-set"};
const Enum::YLeaf EditConfig::Input::TestOption::set {1, "set"};
const Enum::YLeaf EditConfig::Input::TestOption::test_only {2, "test-only"};

const Enum::YLeaf EditConfig::Input::ErrorOption::stop_on_error {0, "stop-on-error"};
const Enum::YLeaf EditConfig::Input::ErrorOption::continue_on_error {1, "continue-on-error"};
const Enum::YLeaf EditConfig::Input::ErrorOption::rollback_on_error {2, "rollback-on-error"};


}
}

