
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_checkpoint_archive_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_checkpoint_archive_oper {

CheckpointArchives::CheckpointArchives()
    :
    max{YType::uint8, "max"},
    current{YType::uint8, "current"},
    recent{YType::str, "recent"}
        ,
    archives(std::make_shared<CheckpointArchives::Archives>())
{
    archives->parent = this;

    yang_name = "checkpoint-archives"; yang_parent_name = "Cisco-IOS-XE-checkpoint-archive-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CheckpointArchives::~CheckpointArchives()
{
}

bool CheckpointArchives::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| current.is_set
	|| recent.is_set
	|| (archives !=  nullptr && archives->has_data());
}

bool CheckpointArchives::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(current.yfilter)
	|| ydk::is_set(recent.yfilter)
	|| (archives !=  nullptr && archives->has_operation());
}

std::string CheckpointArchives::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-checkpoint-archive-oper:checkpoint-archives";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CheckpointArchives::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (current.is_set || is_set(current.yfilter)) leaf_name_data.push_back(current.get_name_leafdata());
    if (recent.is_set || is_set(recent.yfilter)) leaf_name_data.push_back(recent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CheckpointArchives::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "archives")
    {
        if(archives == nullptr)
        {
            archives = std::make_shared<CheckpointArchives::Archives>();
        }
        return archives;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointArchives::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(archives != nullptr)
    {
        children["archives"] = archives;
    }

    return children;
}

void CheckpointArchives::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current")
    {
        current = value;
        current.value_namespace = name_space;
        current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent")
    {
        recent = value;
        recent.value_namespace = name_space;
        recent.value_namespace_prefix = name_space_prefix;
    }
}

void CheckpointArchives::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "current")
    {
        current.yfilter = yfilter;
    }
    if(value_path == "recent")
    {
        recent.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> CheckpointArchives::clone_ptr() const
{
    return std::make_shared<CheckpointArchives>();
}

std::string CheckpointArchives::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CheckpointArchives::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CheckpointArchives::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CheckpointArchives::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CheckpointArchives::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "archives" || name == "max" || name == "current" || name == "recent")
        return true;
    return false;
}

CheckpointArchives::Archives::Archives()
    :
    archive(this, {"number"})
{

    yang_name = "archives"; yang_parent_name = "checkpoint-archives"; is_top_level_class = false; has_list_ancestor = false; 
}

CheckpointArchives::Archives::~Archives()
{
}

bool CheckpointArchives::Archives::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<archive.len(); index++)
    {
        if(archive[index]->has_data())
            return true;
    }
    return false;
}

bool CheckpointArchives::Archives::has_operation() const
{
    for (std::size_t index=0; index<archive.len(); index++)
    {
        if(archive[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CheckpointArchives::Archives::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-checkpoint-archive-oper:checkpoint-archives/" << get_segment_path();
    return path_buffer.str();
}

std::string CheckpointArchives::Archives::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archives";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CheckpointArchives::Archives::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CheckpointArchives::Archives::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "archive")
    {
        auto c = std::make_shared<CheckpointArchives::Archives::Archive>();
        c->parent = this;
        archive.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointArchives::Archives::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : archive.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CheckpointArchives::Archives::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CheckpointArchives::Archives::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CheckpointArchives::Archives::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "archive")
        return true;
    return false;
}

CheckpointArchives::Archives::Archive::Archive()
    :
    number{YType::uint16, "number"},
    name{YType::str, "name"}
{

    yang_name = "archive"; yang_parent_name = "archives"; is_top_level_class = false; has_list_ancestor = false; 
}

CheckpointArchives::Archives::Archive::~Archive()
{
}

bool CheckpointArchives::Archives::Archive::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| name.is_set;
}

bool CheckpointArchives::Archives::Archive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string CheckpointArchives::Archives::Archive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-checkpoint-archive-oper:checkpoint-archives/archives/" << get_segment_path();
    return path_buffer.str();
}

std::string CheckpointArchives::Archives::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CheckpointArchives::Archives::Archive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CheckpointArchives::Archives::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointArchives::Archives::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CheckpointArchives::Archives::Archive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void CheckpointArchives::Archives::Archive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool CheckpointArchives::Archives::Archive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "name")
        return true;
    return false;
}


}
}

