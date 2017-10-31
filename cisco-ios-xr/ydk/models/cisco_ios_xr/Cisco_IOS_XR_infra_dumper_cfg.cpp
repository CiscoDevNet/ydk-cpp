
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_dumper_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_dumper_cfg {

Exception::Exception()
    :
    sparse{YType::boolean, "sparse"},
    core_verification{YType::boolean, "core-verification"},
    core_size{YType::uint32, "core-size"},
    kernel_debugger{YType::empty, "kernel-debugger"},
    packet_memory{YType::boolean, "packet-memory"},
    sparse_size{YType::uint32, "sparse-size"},
    memory_threshold{YType::uint32, "memory-threshold"}
    	,
    choice1(std::make_shared<Exception::Choice1>())
	,choice3(std::make_shared<Exception::Choice3>())
	,process_names(std::make_shared<Exception::ProcessNames>())
	,choice2(std::make_shared<Exception::Choice2>())
{
    choice1->parent = this;
    choice3->parent = this;
    process_names->parent = this;
    choice2->parent = this;

    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-infra-dumper-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
    return sparse.is_set
	|| core_verification.is_set
	|| core_size.is_set
	|| kernel_debugger.is_set
	|| packet_memory.is_set
	|| sparse_size.is_set
	|| memory_threshold.is_set
	|| (choice1 !=  nullptr && choice1->has_data())
	|| (choice3 !=  nullptr && choice3->has_data())
	|| (process_names !=  nullptr && process_names->has_data())
	|| (choice2 !=  nullptr && choice2->has_data());
}

bool Exception::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sparse.yfilter)
	|| ydk::is_set(core_verification.yfilter)
	|| ydk::is_set(core_size.yfilter)
	|| ydk::is_set(kernel_debugger.yfilter)
	|| ydk::is_set(packet_memory.yfilter)
	|| ydk::is_set(sparse_size.yfilter)
	|| ydk::is_set(memory_threshold.yfilter)
	|| (choice1 !=  nullptr && choice1->has_operation())
	|| (choice3 !=  nullptr && choice3->has_operation())
	|| (process_names !=  nullptr && process_names->has_operation())
	|| (choice2 !=  nullptr && choice2->has_operation());
}

std::string Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sparse.is_set || is_set(sparse.yfilter)) leaf_name_data.push_back(sparse.get_name_leafdata());
    if (core_verification.is_set || is_set(core_verification.yfilter)) leaf_name_data.push_back(core_verification.get_name_leafdata());
    if (core_size.is_set || is_set(core_size.yfilter)) leaf_name_data.push_back(core_size.get_name_leafdata());
    if (kernel_debugger.is_set || is_set(kernel_debugger.yfilter)) leaf_name_data.push_back(kernel_debugger.get_name_leafdata());
    if (packet_memory.is_set || is_set(packet_memory.yfilter)) leaf_name_data.push_back(packet_memory.get_name_leafdata());
    if (sparse_size.is_set || is_set(sparse_size.yfilter)) leaf_name_data.push_back(sparse_size.get_name_leafdata());
    if (memory_threshold.is_set || is_set(memory_threshold.yfilter)) leaf_name_data.push_back(memory_threshold.get_name_leafdata());

    return leaf_name_data;

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

    if(child_yang_name == "choice3")
    {
        if(choice3 == nullptr)
        {
            choice3 = std::make_shared<Exception::Choice3>();
        }
        return choice3;
    }

    if(child_yang_name == "process-names")
    {
        if(process_names == nullptr)
        {
            process_names = std::make_shared<Exception::ProcessNames>();
        }
        return process_names;
    }

    if(child_yang_name == "choice2")
    {
        if(choice2 == nullptr)
        {
            choice2 = std::make_shared<Exception::Choice2>();
        }
        return choice2;
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

    if(choice3 != nullptr)
    {
        children["choice3"] = choice3;
    }

    if(process_names != nullptr)
    {
        children["process-names"] = process_names;
    }

    if(choice2 != nullptr)
    {
        children["choice2"] = choice2;
    }

    return children;
}

void Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sparse")
    {
        sparse = value;
        sparse.value_namespace = name_space;
        sparse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-verification")
    {
        core_verification = value;
        core_verification.value_namespace = name_space;
        core_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-size")
    {
        core_size = value;
        core_size.value_namespace = name_space;
        core_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kernel-debugger")
    {
        kernel_debugger = value;
        kernel_debugger.value_namespace = name_space;
        kernel_debugger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-memory")
    {
        packet_memory = value;
        packet_memory.value_namespace = name_space;
        packet_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sparse-size")
    {
        sparse_size = value;
        sparse_size.value_namespace = name_space;
        sparse_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-threshold")
    {
        memory_threshold = value;
        memory_threshold.value_namespace = name_space;
        memory_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sparse")
    {
        sparse.yfilter = yfilter;
    }
    if(value_path == "core-verification")
    {
        core_verification.yfilter = yfilter;
    }
    if(value_path == "core-size")
    {
        core_size.yfilter = yfilter;
    }
    if(value_path == "kernel-debugger")
    {
        kernel_debugger.yfilter = yfilter;
    }
    if(value_path == "packet-memory")
    {
        packet_memory.yfilter = yfilter;
    }
    if(value_path == "sparse-size")
    {
        sparse_size.yfilter = yfilter;
    }
    if(value_path == "memory-threshold")
    {
        memory_threshold.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> Exception::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Exception::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice1" || name == "choice3" || name == "process-names" || name == "choice2" || name == "sparse" || name == "core-verification" || name == "core-size" || name == "kernel-debugger" || name == "packet-memory" || name == "sparse-size" || name == "memory-threshold")
        return true;
    return false;
}

Exception::Choice1::Choice1()
    :
    compress{YType::boolean, "compress"},
    lower_limit{YType::uint32, "lower-limit"},
    higher_limit{YType::uint32, "higher-limit"},
    file_path{YType::str, "file-path"},
    filename{YType::str, "filename"}
{

    yang_name = "choice1"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Choice1::~Choice1()
{
}

bool Exception::Choice1::has_data() const
{
    return compress.is_set
	|| lower_limit.is_set
	|| higher_limit.is_set
	|| file_path.is_set
	|| filename.is_set;
}

bool Exception::Choice1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(higher_limit.yfilter)
	|| ydk::is_set(file_path.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Exception::Choice1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Choice1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Choice1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (higher_limit.is_set || is_set(higher_limit.yfilter)) leaf_name_data.push_back(higher_limit.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.yfilter)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

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

void Exception::Choice1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-limit")
    {
        higher_limit = value;
        higher_limit.value_namespace = name_space;
        higher_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-path")
    {
        file_path = value;
        file_path.value_namespace = name_space;
        file_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Choice1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "higher-limit")
    {
        higher_limit.yfilter = yfilter;
    }
    if(value_path == "file-path")
    {
        file_path.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Exception::Choice1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "compress" || name == "lower-limit" || name == "higher-limit" || name == "file-path" || name == "filename")
        return true;
    return false;
}

Exception::Choice3::Choice3()
    :
    compress{YType::boolean, "compress"},
    lower_limit{YType::uint32, "lower-limit"},
    higher_limit{YType::uint32, "higher-limit"},
    file_path{YType::str, "file-path"},
    filename{YType::str, "filename"}
{

    yang_name = "choice3"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Choice3::~Choice3()
{
}

bool Exception::Choice3::has_data() const
{
    return compress.is_set
	|| lower_limit.is_set
	|| higher_limit.is_set
	|| file_path.is_set
	|| filename.is_set;
}

bool Exception::Choice3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(higher_limit.yfilter)
	|| ydk::is_set(file_path.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Exception::Choice3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Choice3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Choice3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (higher_limit.is_set || is_set(higher_limit.yfilter)) leaf_name_data.push_back(higher_limit.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.yfilter)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

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

void Exception::Choice3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-limit")
    {
        higher_limit = value;
        higher_limit.value_namespace = name_space;
        higher_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-path")
    {
        file_path = value;
        file_path.value_namespace = name_space;
        file_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Choice3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "higher-limit")
    {
        higher_limit.yfilter = yfilter;
    }
    if(value_path == "file-path")
    {
        file_path.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Exception::Choice3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "compress" || name == "lower-limit" || name == "higher-limit" || name == "file-path" || name == "filename")
        return true;
    return false;
}

Exception::ProcessNames::ProcessNames()
{

    yang_name = "process-names"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::ProcessNames::~ProcessNames()
{
}

bool Exception::ProcessNames::has_data() const
{
    for (std::size_t index=0; index<process_name.size(); index++)
    {
        if(process_name[index]->has_data())
            return true;
    }
    return false;
}

bool Exception::ProcessNames::has_operation() const
{
    for (std::size_t index=0; index<process_name.size(); index++)
    {
        if(process_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Exception::ProcessNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::ProcessNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::ProcessNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::ProcessNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name")
    {
        for(auto const & c : process_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Exception::ProcessNames::ProcessName>();
        c->parent = this;
        process_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::ProcessNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Exception::ProcessNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Exception::ProcessNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Exception::ProcessNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name")
        return true;
    return false;
}

Exception::ProcessNames::ProcessName::ProcessName()
    :
    processname{YType::str, "processname"}
    	,
    core_option(std::make_shared<Exception::ProcessNames::ProcessName::CoreOption>())
{
    core_option->parent = this;

    yang_name = "process-name"; yang_parent_name = "process-names"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::ProcessNames::ProcessName::~ProcessName()
{
}

bool Exception::ProcessNames::ProcessName::has_data() const
{
    return processname.is_set
	|| (core_option !=  nullptr && core_option->has_data());
}

bool Exception::ProcessNames::ProcessName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processname.yfilter)
	|| (core_option !=  nullptr && core_option->has_operation());
}

std::string Exception::ProcessNames::ProcessName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/process-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::ProcessNames::ProcessName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name" <<"[processname='" <<processname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::ProcessNames::ProcessName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processname.is_set || is_set(processname.yfilter)) leaf_name_data.push_back(processname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::ProcessNames::ProcessName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-option")
    {
        if(core_option == nullptr)
        {
            core_option = std::make_shared<Exception::ProcessNames::ProcessName::CoreOption>();
        }
        return core_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::ProcessNames::ProcessName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_option != nullptr)
    {
        children["core-option"] = core_option;
    }

    return children;
}

void Exception::ProcessNames::ProcessName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processname")
    {
        processname = value;
        processname.value_namespace = name_space;
        processname.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::ProcessNames::ProcessName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processname")
    {
        processname.yfilter = yfilter;
    }
}

bool Exception::ProcessNames::ProcessName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-option" || name == "processname")
        return true;
    return false;
}

Exception::ProcessNames::ProcessName::CoreOption::CoreOption()
    :
    main_memoryval{YType::enumeration, "main-memoryval"},
    shared_memoryval{YType::enumeration, "shared-memoryval"},
    packet_memoryval{YType::enumeration, "packet-memoryval"},
    copyval{YType::enumeration, "copyval"},
    sparseval{YType::enumeration, "sparseval"},
    skipcpuinfoval{YType::enumeration, "skipcpuinfoval"},
    contextval{YType::enumeration, "contextval"},
    nocoreval{YType::enumeration, "nocoreval"}
{

    yang_name = "core-option"; yang_parent_name = "process-name"; is_top_level_class = false; has_list_ancestor = true;
}

Exception::ProcessNames::ProcessName::CoreOption::~CoreOption()
{
}

bool Exception::ProcessNames::ProcessName::CoreOption::has_data() const
{
    return main_memoryval.is_set
	|| shared_memoryval.is_set
	|| packet_memoryval.is_set
	|| copyval.is_set
	|| sparseval.is_set
	|| skipcpuinfoval.is_set
	|| contextval.is_set
	|| nocoreval.is_set;
}

bool Exception::ProcessNames::ProcessName::CoreOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_memoryval.yfilter)
	|| ydk::is_set(shared_memoryval.yfilter)
	|| ydk::is_set(packet_memoryval.yfilter)
	|| ydk::is_set(copyval.yfilter)
	|| ydk::is_set(sparseval.yfilter)
	|| ydk::is_set(skipcpuinfoval.yfilter)
	|| ydk::is_set(contextval.yfilter)
	|| ydk::is_set(nocoreval.yfilter);
}

std::string Exception::ProcessNames::ProcessName::CoreOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::ProcessNames::ProcessName::CoreOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_memoryval.is_set || is_set(main_memoryval.yfilter)) leaf_name_data.push_back(main_memoryval.get_name_leafdata());
    if (shared_memoryval.is_set || is_set(shared_memoryval.yfilter)) leaf_name_data.push_back(shared_memoryval.get_name_leafdata());
    if (packet_memoryval.is_set || is_set(packet_memoryval.yfilter)) leaf_name_data.push_back(packet_memoryval.get_name_leafdata());
    if (copyval.is_set || is_set(copyval.yfilter)) leaf_name_data.push_back(copyval.get_name_leafdata());
    if (sparseval.is_set || is_set(sparseval.yfilter)) leaf_name_data.push_back(sparseval.get_name_leafdata());
    if (skipcpuinfoval.is_set || is_set(skipcpuinfoval.yfilter)) leaf_name_data.push_back(skipcpuinfoval.get_name_leafdata());
    if (contextval.is_set || is_set(contextval.yfilter)) leaf_name_data.push_back(contextval.get_name_leafdata());
    if (nocoreval.is_set || is_set(nocoreval.yfilter)) leaf_name_data.push_back(nocoreval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::ProcessNames::ProcessName::CoreOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::ProcessNames::ProcessName::CoreOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::ProcessNames::ProcessName::CoreOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-memoryval")
    {
        main_memoryval = value;
        main_memoryval.value_namespace = name_space;
        main_memoryval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared-memoryval")
    {
        shared_memoryval = value;
        shared_memoryval.value_namespace = name_space;
        shared_memoryval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-memoryval")
    {
        packet_memoryval = value;
        packet_memoryval.value_namespace = name_space;
        packet_memoryval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copyval")
    {
        copyval = value;
        copyval.value_namespace = name_space;
        copyval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sparseval")
    {
        sparseval = value;
        sparseval.value_namespace = name_space;
        sparseval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipcpuinfoval")
    {
        skipcpuinfoval = value;
        skipcpuinfoval.value_namespace = name_space;
        skipcpuinfoval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contextval")
    {
        contextval = value;
        contextval.value_namespace = name_space;
        contextval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nocoreval")
    {
        nocoreval = value;
        nocoreval.value_namespace = name_space;
        nocoreval.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::ProcessNames::ProcessName::CoreOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-memoryval")
    {
        main_memoryval.yfilter = yfilter;
    }
    if(value_path == "shared-memoryval")
    {
        shared_memoryval.yfilter = yfilter;
    }
    if(value_path == "packet-memoryval")
    {
        packet_memoryval.yfilter = yfilter;
    }
    if(value_path == "copyval")
    {
        copyval.yfilter = yfilter;
    }
    if(value_path == "sparseval")
    {
        sparseval.yfilter = yfilter;
    }
    if(value_path == "skipcpuinfoval")
    {
        skipcpuinfoval.yfilter = yfilter;
    }
    if(value_path == "contextval")
    {
        contextval.yfilter = yfilter;
    }
    if(value_path == "nocoreval")
    {
        nocoreval.yfilter = yfilter;
    }
}

bool Exception::ProcessNames::ProcessName::CoreOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-memoryval" || name == "shared-memoryval" || name == "packet-memoryval" || name == "copyval" || name == "sparseval" || name == "skipcpuinfoval" || name == "contextval" || name == "nocoreval")
        return true;
    return false;
}

Exception::Choice2::Choice2()
    :
    compress{YType::boolean, "compress"},
    lower_limit{YType::uint32, "lower-limit"},
    higher_limit{YType::uint32, "higher-limit"},
    file_path{YType::str, "file-path"},
    filename{YType::str, "filename"}
{

    yang_name = "choice2"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Choice2::~Choice2()
{
}

bool Exception::Choice2::has_data() const
{
    return compress.is_set
	|| lower_limit.is_set
	|| higher_limit.is_set
	|| file_path.is_set
	|| filename.is_set;
}

bool Exception::Choice2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(higher_limit.yfilter)
	|| ydk::is_set(file_path.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Exception::Choice2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-cfg:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Choice2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Choice2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (higher_limit.is_set || is_set(higher_limit.yfilter)) leaf_name_data.push_back(higher_limit.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.yfilter)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

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

void Exception::Choice2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-limit")
    {
        higher_limit = value;
        higher_limit.value_namespace = name_space;
        higher_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-path")
    {
        file_path = value;
        file_path.value_namespace = name_space;
        file_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Choice2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "higher-limit")
    {
        higher_limit.yfilter = yfilter;
    }
    if(value_path == "file-path")
    {
        file_path.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Exception::Choice2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "compress" || name == "lower-limit" || name == "higher-limit" || name == "file-path" || name == "filename")
        return true;
    return false;
}

const Enum::YLeaf Copy::default_ {0, "default"};
const Enum::YLeaf Copy::copy {512, "copy"};

const Enum::YLeaf Context::default_ {0, "default"};
const Enum::YLeaf Context::context {65536, "context"};

const Enum::YLeaf Sharedmemory::default_ {0, "default"};
const Enum::YLeaf Sharedmemory::shared_memory {2, "shared-memory"};

const Enum::YLeaf Sparse::default_ {0, "default"};
const Enum::YLeaf Sparse::sparse {1024, "sparse"};

const Enum::YLeaf Nocore::default_ {0, "default"};
const Enum::YLeaf Nocore::no_core {131072, "no-core"};

const Enum::YLeaf Packetmemory::default_ {0, "default"};
const Enum::YLeaf Packetmemory::packet_memory {8, "packet-memory"};

const Enum::YLeaf Skipcpuinfo::default_ {0, "default"};
const Enum::YLeaf Skipcpuinfo::skip_cpu_info {4096, "skip-cpu-info"};

const Enum::YLeaf Mainmemory::default_ {0, "default"};
const Enum::YLeaf Mainmemory::main_memory {1, "main-memory"};


}
}

