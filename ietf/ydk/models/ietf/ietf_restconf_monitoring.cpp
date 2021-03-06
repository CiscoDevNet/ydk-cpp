
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_restconf_monitoring.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_restconf_monitoring {

RestconfState::RestconfState()
    :
    capabilities(std::make_shared<RestconfState::Capabilities>())
    , streams(std::make_shared<RestconfState::Streams>())
{
    capabilities->parent = this;
    streams->parent = this;

    yang_name = "restconf-state"; yang_parent_name = "ietf-restconf-monitoring"; is_top_level_class = true; has_list_ancestor = false; 
}

RestconfState::~RestconfState()
{
}

bool RestconfState::has_data() const
{
    if (is_presence_container) return true;
    return (capabilities !=  nullptr && capabilities->has_data())
	|| (streams !=  nullptr && streams->has_data());
}

bool RestconfState::has_operation() const
{
    return is_set(yfilter)
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (streams !=  nullptr && streams->has_operation());
}

std::string RestconfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-restconf-monitoring:restconf-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestconfState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RestconfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<RestconfState::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "streams")
    {
        if(streams == nullptr)
        {
            streams = std::make_shared<RestconfState::Streams>();
        }
        return streams;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RestconfState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capabilities != nullptr)
    {
        _children["capabilities"] = capabilities;
    }

    if(streams != nullptr)
    {
        _children["streams"] = streams;
    }

    return _children;
}

void RestconfState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RestconfState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RestconfState::clone_ptr() const
{
    return std::make_shared<RestconfState>();
}

std::string RestconfState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string RestconfState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function RestconfState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RestconfState::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool RestconfState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities" || name == "streams")
        return true;
    return false;
}

RestconfState::Capabilities::Capabilities()
    :
    capability{YType::str, "capability"}
{

    yang_name = "capabilities"; yang_parent_name = "restconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

RestconfState::Capabilities::~Capabilities()
{
}

bool RestconfState::Capabilities::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : capability.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RestconfState::Capabilities::has_operation() const
{
    for (auto const & leaf : capability.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter);
}

std::string RestconfState::Capabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-restconf-monitoring:restconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string RestconfState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestconfState::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto capability_name_datas = capability.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), capability_name_datas.begin(), capability_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RestconfState::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RestconfState::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RestconfState::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability.append(value);
    }
}

void RestconfState::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
}

bool RestconfState::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability")
        return true;
    return false;
}

RestconfState::Streams::Streams()
    :
    stream(this, {"name"})
{

    yang_name = "streams"; yang_parent_name = "restconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

RestconfState::Streams::~Streams()
{
}

bool RestconfState::Streams::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stream.len(); index++)
    {
        if(stream[index]->has_data())
            return true;
    }
    return false;
}

bool RestconfState::Streams::has_operation() const
{
    for (std::size_t index=0; index<stream.len(); index++)
    {
        if(stream[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RestconfState::Streams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-restconf-monitoring:restconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string RestconfState::Streams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "streams";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestconfState::Streams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RestconfState::Streams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stream")
    {
        auto ent_ = std::make_shared<RestconfState::Streams::Stream>();
        ent_->parent = this;
        stream.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RestconfState::Streams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stream.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RestconfState::Streams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RestconfState::Streams::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RestconfState::Streams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

RestconfState::Streams::Stream::Stream()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    replay_support{YType::boolean, "replay-support"},
    replay_log_creation_time{YType::str, "replay-log-creation-time"}
        ,
    access(this, {"encoding"})
{

    yang_name = "stream"; yang_parent_name = "streams"; is_top_level_class = false; has_list_ancestor = false; 
}

RestconfState::Streams::Stream::~Stream()
{
}

bool RestconfState::Streams::Stream::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| replay_support.is_set
	|| replay_log_creation_time.is_set;
}

bool RestconfState::Streams::Stream::has_operation() const
{
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(replay_support.yfilter)
	|| ydk::is_set(replay_log_creation_time.yfilter);
}

std::string RestconfState::Streams::Stream::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-restconf-monitoring:restconf-state/streams/" << get_segment_path();
    return path_buffer.str();
}

std::string RestconfState::Streams::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestconfState::Streams::Stream::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (replay_support.is_set || is_set(replay_support.yfilter)) leaf_name_data.push_back(replay_support.get_name_leafdata());
    if (replay_log_creation_time.is_set || is_set(replay_log_creation_time.yfilter)) leaf_name_data.push_back(replay_log_creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RestconfState::Streams::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto ent_ = std::make_shared<RestconfState::Streams::Stream::Access>();
        ent_->parent = this;
        access.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RestconfState::Streams::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RestconfState::Streams::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-support")
    {
        replay_support = value;
        replay_support.value_namespace = name_space;
        replay_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-log-creation-time")
    {
        replay_log_creation_time = value;
        replay_log_creation_time.value_namespace = name_space;
        replay_log_creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void RestconfState::Streams::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "replay-support")
    {
        replay_support.yfilter = yfilter;
    }
    if(value_path == "replay-log-creation-time")
    {
        replay_log_creation_time.yfilter = yfilter;
    }
}

bool RestconfState::Streams::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "name" || name == "description" || name == "replay-support" || name == "replay-log-creation-time")
        return true;
    return false;
}

RestconfState::Streams::Stream::Access::Access()
    :
    encoding{YType::str, "encoding"},
    location{YType::str, "location"}
{

    yang_name = "access"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true; 
}

RestconfState::Streams::Stream::Access::~Access()
{
}

bool RestconfState::Streams::Stream::Access::has_data() const
{
    if (is_presence_container) return true;
    return encoding.is_set
	|| location.is_set;
}

bool RestconfState::Streams::Stream::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string RestconfState::Streams::Stream::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    ADD_KEY_TOKEN(encoding, "encoding");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestconfState::Streams::Stream::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RestconfState::Streams::Stream::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RestconfState::Streams::Stream::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RestconfState::Streams::Stream::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void RestconfState::Streams::Stream::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool RestconfState::Streams::Stream::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "location")
        return true;
    return false;
}


}
}

