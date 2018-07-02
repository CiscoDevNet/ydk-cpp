
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "nc_notifications.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace nc_notifications {

Netconf::Netconf()
    :
    streams(std::make_shared<Netconf::Streams>())
{
    streams->parent = this;

    yang_name = "netconf"; yang_parent_name = "nc-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

Netconf::~Netconf()
{
}

bool Netconf::has_data() const
{
    if (is_presence_container) return true;
    return (streams !=  nullptr && streams->has_data());
}

bool Netconf::has_operation() const
{
    return is_set(yfilter)
	|| (streams !=  nullptr && streams->has_operation());
}

std::string Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nc-notifications:netconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "streams")
    {
        if(streams == nullptr)
        {
            streams = std::make_shared<Netconf::Streams>();
        }
        return streams;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(streams != nullptr)
    {
        children["streams"] = streams;
    }

    return children;
}

void Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Netconf::clone_ptr() const
{
    return std::make_shared<Netconf>();
}

std::string Netconf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Netconf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Netconf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Netconf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "streams")
        return true;
    return false;
}

Netconf::Streams::Streams()
    :
    stream(this, {"name"})
{

    yang_name = "streams"; yang_parent_name = "netconf"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Streams::~Streams()
{
}

bool Netconf::Streams::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stream.len(); index++)
    {
        if(stream[index]->has_data())
            return true;
    }
    return false;
}

bool Netconf::Streams::has_operation() const
{
    for (std::size_t index=0; index<stream.len(); index++)
    {
        if(stream[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Netconf::Streams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nc-notifications:netconf/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Streams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "streams";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Streams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Streams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stream")
    {
        auto c = std::make_shared<Netconf::Streams::Stream>();
        c->parent = this;
        stream.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Streams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stream.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Netconf::Streams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::Streams::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Netconf::Streams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

Netconf::Streams::Stream::Stream()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    replaysupport{YType::boolean, "replaySupport"},
    replaylogcreationtime{YType::str, "replayLogCreationTime"}
{

    yang_name = "stream"; yang_parent_name = "streams"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Streams::Stream::~Stream()
{
}

bool Netconf::Streams::Stream::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| replaysupport.is_set
	|| replaylogcreationtime.is_set;
}

bool Netconf::Streams::Stream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(replaysupport.yfilter)
	|| ydk::is_set(replaylogcreationtime.yfilter);
}

std::string Netconf::Streams::Stream::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nc-notifications:netconf/streams/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Streams::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Streams::Stream::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (replaysupport.is_set || is_set(replaysupport.yfilter)) leaf_name_data.push_back(replaysupport.get_name_leafdata());
    if (replaylogcreationtime.is_set || is_set(replaylogcreationtime.yfilter)) leaf_name_data.push_back(replaylogcreationtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Streams::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Streams::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Netconf::Streams::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "replaySupport")
    {
        replaysupport = value;
        replaysupport.value_namespace = name_space;
        replaysupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replayLogCreationTime")
    {
        replaylogcreationtime = value;
        replaylogcreationtime.value_namespace = name_space;
        replaylogcreationtime.value_namespace_prefix = name_space_prefix;
    }
}

void Netconf::Streams::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "replaySupport")
    {
        replaysupport.yfilter = yfilter;
    }
    if(value_path == "replayLogCreationTime")
    {
        replaylogcreationtime.yfilter = yfilter;
    }
}

bool Netconf::Streams::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "replaySupport" || name == "replayLogCreationTime")
        return true;
    return false;
}


}
}

