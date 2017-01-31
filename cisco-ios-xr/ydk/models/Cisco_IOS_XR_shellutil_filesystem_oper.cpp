
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_shellutil_filesystem_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_filesystem_oper {

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

EntityPath FileSystem::Node::FileSystem_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* FileSystem::Node::FileSystem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & FileSystem::Node::FileSystem_::get_children()
{
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
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath FileSystem::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-shellutil-filesystem-oper:file-system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* FileSystem::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "file-system")
    {
        for(auto const & c : file_system)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<FileSystem::Node::FileSystem_>();
        c->parent = this;
        file_system.push_back(std::move(c));
        children[segment_path] = file_system.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & FileSystem::Node::get_children()
{
    for (auto const & c : file_system)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath FileSystem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* FileSystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<FileSystem::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & FileSystem::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void FileSystem::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> FileSystem::clone_ptr()
{
    return std::make_unique<FileSystem>();
}


}
}

