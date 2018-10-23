
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_filesystem_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_shellutil_filesystem_oper {

FileSystem::FileSystem()
    :
    node(this, {"node_name"})
{

    yang_name = "file-system"; yang_parent_name = "Cisco-IOS-XR-shellutil-filesystem-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

FileSystem::~FileSystem()
{
}

bool FileSystem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool FileSystem::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FileSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-filesystem-oper:file-system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FileSystem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FileSystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<FileSystem::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FileSystem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FileSystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FileSystem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> FileSystem::clone_ptr() const
{
    return std::make_shared<FileSystem>();
}

std::string FileSystem::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FileSystem::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FileSystem::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FileSystem::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FileSystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

FileSystem::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    file_system(this, {})
{

    yang_name = "node"; yang_parent_name = "file-system"; is_top_level_class = false; has_list_ancestor = false; 
}

FileSystem::Node::~Node()
{
}

bool FileSystem::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<file_system.len(); index++)
    {
        if(file_system[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool FileSystem::Node::has_operation() const
{
    for (std::size_t index=0; index<file_system.len(); index++)
    {
        if(file_system[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string FileSystem::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-filesystem-oper:file-system/" << get_segment_path();
    return path_buffer.str();
}

std::string FileSystem::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FileSystem::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FileSystem::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file-system")
    {
        auto ent_ = std::make_shared<FileSystem::Node::FileSystem_>();
        ent_->parent = this;
        file_system.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FileSystem::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : file_system.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FileSystem::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void FileSystem::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool FileSystem::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-system" || name == "node-name")
        return true;
    return false;
}

FileSystem::Node::FileSystem_::FileSystem_()
    :
    size{YType::str, "size"},
    free{YType::str, "free"},
    type{YType::str, "type"},
    flags{YType::str, "flags"},
    prefixes{YType::str, "prefixes"}
{

    yang_name = "file-system"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FileSystem::Node::FileSystem_::~FileSystem_()
{
}

bool FileSystem::Node::FileSystem_::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| free.is_set
	|| type.is_set
	|| flags.is_set
	|| prefixes.is_set;
}

bool FileSystem::Node::FileSystem_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(prefixes.yfilter);
}

std::string FileSystem::Node::FileSystem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FileSystem::Node::FileSystem_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FileSystem::Node::FileSystem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FileSystem::Node::FileSystem_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FileSystem::Node::FileSystem_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void FileSystem::Node::FileSystem_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
}

bool FileSystem::Node::FileSystem_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "free" || name == "type" || name == "flags" || name == "prefixes")
        return true;
    return false;
}


}
}

