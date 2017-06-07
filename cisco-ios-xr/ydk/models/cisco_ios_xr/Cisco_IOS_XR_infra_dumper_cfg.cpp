
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_dumper_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_dumper_cfg {

Exception::Exception()
    :
    kernel_debugger{YType::empty, "kernel-debugger"},
    packet_memory{YType::boolean, "packet-memory"},
    sparse{YType::boolean, "sparse"},
    sparse_size{YType::uint32, "sparse-size"}
    	,
    choice1(nullptr) // presence node
	,choice2(nullptr) // presence node
	,choice3(nullptr) // presence node
{
    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-infra-dumper-cfg";
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
    return kernel_debugger.is_set
	|| packet_memory.is_set
	|| sparse.is_set
	|| sparse_size.is_set
	|| (choice1 !=  nullptr && choice1->has_data())
	|| (choice2 !=  nullptr && choice2->has_data())
	|| (choice3 !=  nullptr && choice3->has_data());
}

bool Exception::has_operation() const
{
    return is_set(operation)
	|| is_set(kernel_debugger.operation)
	|| is_set(packet_memory.operation)
	|| is_set(sparse.operation)
	|| is_set(sparse_size.operation)
	|| (choice1 !=  nullptr && choice1->has_operation())
	|| (choice2 !=  nullptr && choice2->has_operation())
	|| (choice3 !=  nullptr && choice3->has_operation());
}

std::string Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception";

    return path_buffer.str();

}

const EntityPath Exception::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kernel_debugger.is_set || is_set(kernel_debugger.operation)) leaf_name_data.push_back(kernel_debugger.get_name_leafdata());
    if (packet_memory.is_set || is_set(packet_memory.operation)) leaf_name_data.push_back(packet_memory.get_name_leafdata());
    if (sparse.is_set || is_set(sparse.operation)) leaf_name_data.push_back(sparse.get_name_leafdata());
    if (sparse_size.is_set || is_set(sparse_size.operation)) leaf_name_data.push_back(sparse_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "choice1")
    {
        if(choice1 == nullptr)
        {
            choice1 = std::make_shared<Exception::Choice1>();
        }
        return choice1;
    }

    if(child_yang_name == "choice2")
    {
        if(choice2 == nullptr)
        {
            choice2 = std::make_shared<Exception::Choice2>();
        }
        return choice2;
    }

    if(child_yang_name == "choice3")
    {
        if(choice3 == nullptr)
        {
            choice3 = std::make_shared<Exception::Choice3>();
        }
        return choice3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(choice1 != nullptr)
    {
        children["choice1"] = choice1;
    }

    if(choice2 != nullptr)
    {
        children["choice2"] = choice2;
    }

    if(choice3 != nullptr)
    {
        children["choice3"] = choice3;
    }

    return children;
}

void Exception::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kernel-debugger")
    {
        kernel_debugger = value;
    }
    if(value_path == "packet-memory")
    {
        packet_memory = value;
    }
    if(value_path == "sparse")
    {
        sparse = value;
    }
    if(value_path == "sparse-size")
    {
        sparse_size = value;
    }
}

std::shared_ptr<Entity> Exception::clone_ptr() const
{
    return std::make_shared<Exception>();
}

std::string Exception::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Exception::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Exception::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Exception::Choice1::Choice1()
    :
    compress{YType::boolean, "compress"},
    file_path{YType::str, "file-path"},
    filename{YType::str, "filename"},
    higher_limit{YType::uint32, "higher-limit"},
    lower_limit{YType::uint32, "lower-limit"}
{
    yang_name = "choice1"; yang_parent_name = "exception";
}

Exception::Choice1::~Choice1()
{
}

bool Exception::Choice1::has_data() const
{
    return compress.is_set
	|| file_path.is_set
	|| filename.is_set
	|| higher_limit.is_set
	|| lower_limit.is_set;
}

bool Exception::Choice1::has_operation() const
{
    return is_set(operation)
	|| is_set(compress.operation)
	|| is_set(file_path.operation)
	|| is_set(filename.operation)
	|| is_set(higher_limit.operation)
	|| is_set(lower_limit.operation);
}

std::string Exception::Choice1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice1";

    return path_buffer.str();

}

const EntityPath Exception::Choice1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compress.is_set || is_set(compress.operation)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.operation)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (filename.is_set || is_set(filename.operation)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (higher_limit.is_set || is_set(higher_limit.operation)) leaf_name_data.push_back(higher_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.operation)) leaf_name_data.push_back(lower_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Exception::Choice1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Choice1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Choice1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compress")
    {
        compress = value;
    }
    if(value_path == "file-path")
    {
        file_path = value;
    }
    if(value_path == "filename")
    {
        filename = value;
    }
    if(value_path == "higher-limit")
    {
        higher_limit = value;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
    }
}

Exception::Choice3::Choice3()
    :
    compress{YType::boolean, "compress"},
    file_path{YType::str, "file-path"},
    filename{YType::str, "filename"},
    higher_limit{YType::uint32, "higher-limit"},
    lower_limit{YType::uint32, "lower-limit"}
{
    yang_name = "choice3"; yang_parent_name = "exception";
}

Exception::Choice3::~Choice3()
{
}

bool Exception::Choice3::has_data() const
{
    return compress.is_set
	|| file_path.is_set
	|| filename.is_set
	|| higher_limit.is_set
	|| lower_limit.is_set;
}

bool Exception::Choice3::has_operation() const
{
    return is_set(operation)
	|| is_set(compress.operation)
	|| is_set(file_path.operation)
	|| is_set(filename.operation)
	|| is_set(higher_limit.operation)
	|| is_set(lower_limit.operation);
}

std::string Exception::Choice3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice3";

    return path_buffer.str();

}

const EntityPath Exception::Choice3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compress.is_set || is_set(compress.operation)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.operation)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (filename.is_set || is_set(filename.operation)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (higher_limit.is_set || is_set(higher_limit.operation)) leaf_name_data.push_back(higher_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.operation)) leaf_name_data.push_back(lower_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Exception::Choice3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Choice3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Choice3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compress")
    {
        compress = value;
    }
    if(value_path == "file-path")
    {
        file_path = value;
    }
    if(value_path == "filename")
    {
        filename = value;
    }
    if(value_path == "higher-limit")
    {
        higher_limit = value;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
    }
}

Exception::Choice2::Choice2()
    :
    compress{YType::boolean, "compress"},
    file_path{YType::str, "file-path"},
    filename{YType::str, "filename"},
    higher_limit{YType::uint32, "higher-limit"},
    lower_limit{YType::uint32, "lower-limit"}
{
    yang_name = "choice2"; yang_parent_name = "exception";
}

Exception::Choice2::~Choice2()
{
}

bool Exception::Choice2::has_data() const
{
    return compress.is_set
	|| file_path.is_set
	|| filename.is_set
	|| higher_limit.is_set
	|| lower_limit.is_set;
}

bool Exception::Choice2::has_operation() const
{
    return is_set(operation)
	|| is_set(compress.operation)
	|| is_set(file_path.operation)
	|| is_set(filename.operation)
	|| is_set(higher_limit.operation)
	|| is_set(lower_limit.operation);
}

std::string Exception::Choice2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice2";

    return path_buffer.str();

}

const EntityPath Exception::Choice2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compress.is_set || is_set(compress.operation)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.operation)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (filename.is_set || is_set(filename.operation)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (higher_limit.is_set || is_set(higher_limit.operation)) leaf_name_data.push_back(higher_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.operation)) leaf_name_data.push_back(lower_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Exception::Choice2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Choice2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Choice2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compress")
    {
        compress = value;
    }
    if(value_path == "file-path")
    {
        file_path = value;
    }
    if(value_path == "filename")
    {
        filename = value;
    }
    if(value_path == "higher-limit")
    {
        higher_limit = value;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
    }
}


}
}

