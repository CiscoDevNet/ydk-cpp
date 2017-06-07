
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_filesystem_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_filesystem_oper {

FileSystem::FileSystem()
{
    yang_name = "file-system"; yang_parent_name = "Cisco-IOS-XR-shellutil-filesystem-oper";
}

FileSystem::~FileSystem()
{
}

bool FileSystem::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool FileSystem::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FileSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-filesystem-oper:file-system";

    return path_buffer.str();

}

const EntityPath FileSystem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FileSystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FileSystem::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FileSystem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FileSystem::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> FileSystem::clone_ptr() const
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

FileSystem::Node::Node()
    :
    node_name{YType::str, "node-name"}
{
    yang_name = "node"; yang_parent_name = "file-system";
}

FileSystem::Node::~Node()
{
}

bool FileSystem::Node::has_data() const
{
    for (std::size_t index=0; index<file_system.size(); index++)
    {
        if(file_system[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool FileSystem::Node::has_operation() const
{
    for (std::size_t index=0; index<file_system.size(); index++)
    {
        if(file_system[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation);
}

std::string FileSystem::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath FileSystem::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-shellutil-filesystem-oper:file-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FileSystem::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file-system")
    {
        for(auto const & c : file_system)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FileSystem::Node::FileSystem_>();
        c->parent = this;
        file_system.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FileSystem::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : file_system)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FileSystem::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

FileSystem::Node::FileSystem_::FileSystem_()
    :
    flags{YType::str, "flags"},
    free{YType::str, "free"},
    prefixes{YType::str, "prefixes"},
    size{YType::str, "size"},
    type{YType::str, "type"}
{
    yang_name = "file-system"; yang_parent_name = "node";
}

FileSystem::Node::FileSystem_::~FileSystem_()
{
}

bool FileSystem::Node::FileSystem_::has_data() const
{
    return flags.is_set
	|| free.is_set
	|| prefixes.is_set
	|| size.is_set
	|| type.is_set;
}

bool FileSystem::Node::FileSystem_::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(free.operation)
	|| is_set(prefixes.operation)
	|| is_set(size.operation)
	|| is_set(type.operation);
}

std::string FileSystem::Node::FileSystem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-system";

    return path_buffer.str();

}

const EntityPath FileSystem::Node::FileSystem_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FileSystem_' in Cisco_IOS_XR_shellutil_filesystem_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.operation)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FileSystem::Node::FileSystem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FileSystem::Node::FileSystem_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FileSystem::Node::FileSystem_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}


}
}

