
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_spirit_corehelper_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_spirit_corehelper_cfg {

Exception::File::File()
    :
    	choice1{YType::str, "choice1"},
	 choice2{YType::str, "choice2"},
	 choice3{YType::str, "choice3"}
{
    yang_name = "file"; yang_parent_name = "exception";
}

Exception::File::~File()
{
}

bool Exception::File::has_data() const
{
    return choice1.is_set
	|| choice2.is_set
	|| choice3.is_set;
}

bool Exception::File::has_operation() const
{
    return is_set(operation)
	|| is_set(choice1.operation)
	|| is_set(choice2.operation)
	|| is_set(choice3.operation);
}

std::string Exception::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

EntityPath Exception::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-corehelper-cfg:exception/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice1.is_set || is_set(choice1.operation)) leaf_name_data.push_back(choice1.get_name_leafdata());
    if (choice2.is_set || is_set(choice2.operation)) leaf_name_data.push_back(choice2.get_name_leafdata());
    if (choice3.is_set || is_set(choice3.operation)) leaf_name_data.push_back(choice3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Exception::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Exception::File::get_children()
{
    return children;
}

void Exception::File::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "choice1")
    {
        choice1 = value;
    }
    if(value_path == "choice2")
    {
        choice2 = value;
    }
    if(value_path == "choice3")
    {
        choice3 = value;
    }
}

Exception::Exception()
    :
    file(std::make_unique<Exception::File>())
{
    file->parent = this;
    children["file"] = file.get();

    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-spirit-corehelper-cfg";
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
    return (file !=  nullptr && file->has_data());
}

bool Exception::has_operation() const
{
    return is_set(operation)
	|| (file !=  nullptr && is_set(file->operation));
}

std::string Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-corehelper-cfg:exception";

    return path_buffer.str();

}

EntityPath Exception::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "file")
    {
        if(file != nullptr)
        {
            children["file"] = file.get();
        }
        else
        {
            file = std::make_unique<Exception::File>();
            file->parent = this;
            children["file"] = file.get();
        }
        return children.at("file");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Exception::get_children()
{
    if(children.find("file") == children.end())
    {
        if(file != nullptr)
        {
            children["file"] = file.get();
        }
    }

    return children;
}

void Exception::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Exception::clone_ptr()
{
    return std::make_unique<Exception>();
}


}
}

