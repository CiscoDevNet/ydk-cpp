
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_dumper_exception_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_dumper_exception_oper {

Exception::Exception()
    :
    enter(std::make_shared<Exception::Enter>())
{
    enter->parent = this;

    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-infra-dumper-exception-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
    return (enter !=  nullptr && enter->has_data());
}

bool Exception::has_operation() const
{
    return is_set(yfilter)
	|| (enter !=  nullptr && enter->has_operation());
}

std::string Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enter")
    {
        if(enter == nullptr)
        {
            enter = std::make_shared<Exception::Enter>();
        }
        return enter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enter != nullptr)
    {
        children["enter"] = enter;
    }

    return children;
}

void Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(name == "enter")
        return true;
    return false;
}

Exception::Enter::Enter()
    :
    core_verification{YType::str, "core-verification"},
    dump_time_out{YType::str, "dump-time-out"},
    pak_mem{YType::str, "pak-mem"},
    sparse{YType::str, "sparse"},
    spr_size{YType::str, "spr-size"}
    	,
    core_size(std::make_shared<Exception::Enter::CoreSize>())
	,display_config1(std::make_shared<Exception::Enter::DisplayConfig1>())
	,display_config2(std::make_shared<Exception::Enter::DisplayConfig2>())
	,display_config3(std::make_shared<Exception::Enter::DisplayConfig3>())
	,display_fall_back_config1(std::make_shared<Exception::Enter::DisplayFallBackConfig1>())
	,display_fall_back_config2(std::make_shared<Exception::Enter::DisplayFallBackConfig2>())
	,display_fall_back_config3(std::make_shared<Exception::Enter::DisplayFallBackConfig3>())
	,kernel_config(std::make_shared<Exception::Enter::KernelConfig>())
	,kernel_route_config(std::make_shared<Exception::Enter::KernelRouteConfig>())
	,memory_threshold(std::make_shared<Exception::Enter::MemoryThreshold>())
	,proc_size(std::make_shared<Exception::Enter::ProcSize>())
	,qsize(std::make_shared<Exception::Enter::Qsize>())
{
    core_size->parent = this;
    display_config1->parent = this;
    display_config2->parent = this;
    display_config3->parent = this;
    display_fall_back_config1->parent = this;
    display_fall_back_config2->parent = this;
    display_fall_back_config3->parent = this;
    kernel_config->parent = this;
    kernel_route_config->parent = this;
    memory_threshold->parent = this;
    proc_size->parent = this;
    qsize->parent = this;

    yang_name = "enter"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::~Enter()
{
}

bool Exception::Enter::has_data() const
{
    return core_verification.is_set
	|| dump_time_out.is_set
	|| pak_mem.is_set
	|| sparse.is_set
	|| spr_size.is_set
	|| (core_size !=  nullptr && core_size->has_data())
	|| (display_config1 !=  nullptr && display_config1->has_data())
	|| (display_config2 !=  nullptr && display_config2->has_data())
	|| (display_config3 !=  nullptr && display_config3->has_data())
	|| (display_fall_back_config1 !=  nullptr && display_fall_back_config1->has_data())
	|| (display_fall_back_config2 !=  nullptr && display_fall_back_config2->has_data())
	|| (display_fall_back_config3 !=  nullptr && display_fall_back_config3->has_data())
	|| (kernel_config !=  nullptr && kernel_config->has_data())
	|| (kernel_route_config !=  nullptr && kernel_route_config->has_data())
	|| (memory_threshold !=  nullptr && memory_threshold->has_data())
	|| (proc_size !=  nullptr && proc_size->has_data())
	|| (qsize !=  nullptr && qsize->has_data());
}

bool Exception::Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core_verification.yfilter)
	|| ydk::is_set(dump_time_out.yfilter)
	|| ydk::is_set(pak_mem.yfilter)
	|| ydk::is_set(sparse.yfilter)
	|| ydk::is_set(spr_size.yfilter)
	|| (core_size !=  nullptr && core_size->has_operation())
	|| (display_config1 !=  nullptr && display_config1->has_operation())
	|| (display_config2 !=  nullptr && display_config2->has_operation())
	|| (display_config3 !=  nullptr && display_config3->has_operation())
	|| (display_fall_back_config1 !=  nullptr && display_fall_back_config1->has_operation())
	|| (display_fall_back_config2 !=  nullptr && display_fall_back_config2->has_operation())
	|| (display_fall_back_config3 !=  nullptr && display_fall_back_config3->has_operation())
	|| (kernel_config !=  nullptr && kernel_config->has_operation())
	|| (kernel_route_config !=  nullptr && kernel_route_config->has_operation())
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation())
	|| (proc_size !=  nullptr && proc_size->has_operation())
	|| (qsize !=  nullptr && qsize->has_operation());
}

std::string Exception::Enter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_verification.is_set || is_set(core_verification.yfilter)) leaf_name_data.push_back(core_verification.get_name_leafdata());
    if (dump_time_out.is_set || is_set(dump_time_out.yfilter)) leaf_name_data.push_back(dump_time_out.get_name_leafdata());
    if (pak_mem.is_set || is_set(pak_mem.yfilter)) leaf_name_data.push_back(pak_mem.get_name_leafdata());
    if (sparse.is_set || is_set(sparse.yfilter)) leaf_name_data.push_back(sparse.get_name_leafdata());
    if (spr_size.is_set || is_set(spr_size.yfilter)) leaf_name_data.push_back(spr_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-size")
    {
        if(core_size == nullptr)
        {
            core_size = std::make_shared<Exception::Enter::CoreSize>();
        }
        return core_size;
    }

    if(child_yang_name == "display-config1")
    {
        if(display_config1 == nullptr)
        {
            display_config1 = std::make_shared<Exception::Enter::DisplayConfig1>();
        }
        return display_config1;
    }

    if(child_yang_name == "display-config2")
    {
        if(display_config2 == nullptr)
        {
            display_config2 = std::make_shared<Exception::Enter::DisplayConfig2>();
        }
        return display_config2;
    }

    if(child_yang_name == "display-config3")
    {
        if(display_config3 == nullptr)
        {
            display_config3 = std::make_shared<Exception::Enter::DisplayConfig3>();
        }
        return display_config3;
    }

    if(child_yang_name == "display-fall-back-config1")
    {
        if(display_fall_back_config1 == nullptr)
        {
            display_fall_back_config1 = std::make_shared<Exception::Enter::DisplayFallBackConfig1>();
        }
        return display_fall_back_config1;
    }

    if(child_yang_name == "display-fall-back-config2")
    {
        if(display_fall_back_config2 == nullptr)
        {
            display_fall_back_config2 = std::make_shared<Exception::Enter::DisplayFallBackConfig2>();
        }
        return display_fall_back_config2;
    }

    if(child_yang_name == "display-fall-back-config3")
    {
        if(display_fall_back_config3 == nullptr)
        {
            display_fall_back_config3 = std::make_shared<Exception::Enter::DisplayFallBackConfig3>();
        }
        return display_fall_back_config3;
    }

    if(child_yang_name == "kernel-config")
    {
        if(kernel_config == nullptr)
        {
            kernel_config = std::make_shared<Exception::Enter::KernelConfig>();
        }
        return kernel_config;
    }

    if(child_yang_name == "kernel-route-config")
    {
        if(kernel_route_config == nullptr)
        {
            kernel_route_config = std::make_shared<Exception::Enter::KernelRouteConfig>();
        }
        return kernel_route_config;
    }

    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold == nullptr)
        {
            memory_threshold = std::make_shared<Exception::Enter::MemoryThreshold>();
        }
        return memory_threshold;
    }

    if(child_yang_name == "proc-size")
    {
        if(proc_size == nullptr)
        {
            proc_size = std::make_shared<Exception::Enter::ProcSize>();
        }
        return proc_size;
    }

    if(child_yang_name == "qsize")
    {
        if(qsize == nullptr)
        {
            qsize = std::make_shared<Exception::Enter::Qsize>();
        }
        return qsize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_size != nullptr)
    {
        children["core-size"] = core_size;
    }

    if(display_config1 != nullptr)
    {
        children["display-config1"] = display_config1;
    }

    if(display_config2 != nullptr)
    {
        children["display-config2"] = display_config2;
    }

    if(display_config3 != nullptr)
    {
        children["display-config3"] = display_config3;
    }

    if(display_fall_back_config1 != nullptr)
    {
        children["display-fall-back-config1"] = display_fall_back_config1;
    }

    if(display_fall_back_config2 != nullptr)
    {
        children["display-fall-back-config2"] = display_fall_back_config2;
    }

    if(display_fall_back_config3 != nullptr)
    {
        children["display-fall-back-config3"] = display_fall_back_config3;
    }

    if(kernel_config != nullptr)
    {
        children["kernel-config"] = kernel_config;
    }

    if(kernel_route_config != nullptr)
    {
        children["kernel-route-config"] = kernel_route_config;
    }

    if(memory_threshold != nullptr)
    {
        children["memory-threshold"] = memory_threshold;
    }

    if(proc_size != nullptr)
    {
        children["proc-size"] = proc_size;
    }

    if(qsize != nullptr)
    {
        children["qsize"] = qsize;
    }

    return children;
}

void Exception::Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core-verification")
    {
        core_verification = value;
        core_verification.value_namespace = name_space;
        core_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dump-time-out")
    {
        dump_time_out = value;
        dump_time_out.value_namespace = name_space;
        dump_time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pak-mem")
    {
        pak_mem = value;
        pak_mem.value_namespace = name_space;
        pak_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sparse")
    {
        sparse = value;
        sparse.value_namespace = name_space;
        sparse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spr-size")
    {
        spr_size = value;
        spr_size.value_namespace = name_space;
        spr_size.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core-verification")
    {
        core_verification.yfilter = yfilter;
    }
    if(value_path == "dump-time-out")
    {
        dump_time_out.yfilter = yfilter;
    }
    if(value_path == "pak-mem")
    {
        pak_mem.yfilter = yfilter;
    }
    if(value_path == "sparse")
    {
        sparse.yfilter = yfilter;
    }
    if(value_path == "spr-size")
    {
        spr_size.yfilter = yfilter;
    }
}

bool Exception::Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-size" || name == "display-config1" || name == "display-config2" || name == "display-config3" || name == "display-fall-back-config1" || name == "display-fall-back-config2" || name == "display-fall-back-config3" || name == "kernel-config" || name == "kernel-route-config" || name == "memory-threshold" || name == "proc-size" || name == "qsize" || name == "core-verification" || name == "dump-time-out" || name == "pak-mem" || name == "sparse" || name == "spr-size")
        return true;
    return false;
}

Exception::Enter::CoreSize::CoreSize()
    :
    string{YType::str, "string"}
{

    yang_name = "core-size"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::CoreSize::~CoreSize()
{
}

bool Exception::Enter::CoreSize::has_data() const
{
    return string.is_set;
}

bool Exception::Enter::CoreSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Exception::Enter::CoreSize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::CoreSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::CoreSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::CoreSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::CoreSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::CoreSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::CoreSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Exception::Enter::CoreSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Exception::Enter::DisplayConfig1::DisplayConfig1()
    :
    choice{YType::str, "choice"},
    compress{YType::str, "compress"},
    file_name{YType::str, "file-name"},
    path{YType::str, "path"},
    range_high{YType::uint32, "range-high"},
    range_low{YType::uint32, "range-low"}
{

    yang_name = "display-config1"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::DisplayConfig1::~DisplayConfig1()
{
}

bool Exception::Enter::DisplayConfig1::has_data() const
{
    return choice.is_set
	|| compress.is_set
	|| file_name.is_set
	|| path.is_set
	|| range_high.is_set
	|| range_low.is_set;
}

bool Exception::Enter::DisplayConfig1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(choice.yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(range_high.yfilter)
	|| ydk::is_set(range_low.yfilter);
}

std::string Exception::Enter::DisplayConfig1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::DisplayConfig1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-config1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::DisplayConfig1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice.is_set || is_set(choice.yfilter)) leaf_name_data.push_back(choice.get_name_leafdata());
    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (range_high.is_set || is_set(range_high.yfilter)) leaf_name_data.push_back(range_high.get_name_leafdata());
    if (range_low.is_set || is_set(range_low.yfilter)) leaf_name_data.push_back(range_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::DisplayConfig1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::DisplayConfig1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::DisplayConfig1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "choice")
    {
        choice = value;
        choice.value_namespace = name_space;
        choice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-high")
    {
        range_high = value;
        range_high.value_namespace = name_space;
        range_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-low")
    {
        range_low = value;
        range_low.value_namespace = name_space;
        range_low.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::DisplayConfig1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "choice")
    {
        choice.yfilter = yfilter;
    }
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "range-high")
    {
        range_high.yfilter = yfilter;
    }
    if(value_path == "range-low")
    {
        range_low.yfilter = yfilter;
    }
}

bool Exception::Enter::DisplayConfig1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice" || name == "compress" || name == "file-name" || name == "path" || name == "range-high" || name == "range-low")
        return true;
    return false;
}

Exception::Enter::DisplayConfig2::DisplayConfig2()
    :
    choice{YType::str, "choice"},
    compress{YType::str, "compress"},
    file_name{YType::str, "file-name"},
    path{YType::str, "path"},
    range_high{YType::uint32, "range-high"},
    range_low{YType::uint32, "range-low"}
{

    yang_name = "display-config2"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::DisplayConfig2::~DisplayConfig2()
{
}

bool Exception::Enter::DisplayConfig2::has_data() const
{
    return choice.is_set
	|| compress.is_set
	|| file_name.is_set
	|| path.is_set
	|| range_high.is_set
	|| range_low.is_set;
}

bool Exception::Enter::DisplayConfig2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(choice.yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(range_high.yfilter)
	|| ydk::is_set(range_low.yfilter);
}

std::string Exception::Enter::DisplayConfig2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::DisplayConfig2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-config2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::DisplayConfig2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice.is_set || is_set(choice.yfilter)) leaf_name_data.push_back(choice.get_name_leafdata());
    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (range_high.is_set || is_set(range_high.yfilter)) leaf_name_data.push_back(range_high.get_name_leafdata());
    if (range_low.is_set || is_set(range_low.yfilter)) leaf_name_data.push_back(range_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::DisplayConfig2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::DisplayConfig2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::DisplayConfig2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "choice")
    {
        choice = value;
        choice.value_namespace = name_space;
        choice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-high")
    {
        range_high = value;
        range_high.value_namespace = name_space;
        range_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-low")
    {
        range_low = value;
        range_low.value_namespace = name_space;
        range_low.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::DisplayConfig2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "choice")
    {
        choice.yfilter = yfilter;
    }
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "range-high")
    {
        range_high.yfilter = yfilter;
    }
    if(value_path == "range-low")
    {
        range_low.yfilter = yfilter;
    }
}

bool Exception::Enter::DisplayConfig2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice" || name == "compress" || name == "file-name" || name == "path" || name == "range-high" || name == "range-low")
        return true;
    return false;
}

Exception::Enter::DisplayConfig3::DisplayConfig3()
    :
    choice{YType::str, "choice"},
    compress{YType::str, "compress"},
    file_name{YType::str, "file-name"},
    path{YType::str, "path"},
    range_high{YType::uint32, "range-high"},
    range_low{YType::uint32, "range-low"}
{

    yang_name = "display-config3"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::DisplayConfig3::~DisplayConfig3()
{
}

bool Exception::Enter::DisplayConfig3::has_data() const
{
    return choice.is_set
	|| compress.is_set
	|| file_name.is_set
	|| path.is_set
	|| range_high.is_set
	|| range_low.is_set;
}

bool Exception::Enter::DisplayConfig3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(choice.yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(range_high.yfilter)
	|| ydk::is_set(range_low.yfilter);
}

std::string Exception::Enter::DisplayConfig3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::DisplayConfig3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-config3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::DisplayConfig3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice.is_set || is_set(choice.yfilter)) leaf_name_data.push_back(choice.get_name_leafdata());
    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (range_high.is_set || is_set(range_high.yfilter)) leaf_name_data.push_back(range_high.get_name_leafdata());
    if (range_low.is_set || is_set(range_low.yfilter)) leaf_name_data.push_back(range_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::DisplayConfig3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::DisplayConfig3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::DisplayConfig3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "choice")
    {
        choice = value;
        choice.value_namespace = name_space;
        choice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-high")
    {
        range_high = value;
        range_high.value_namespace = name_space;
        range_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-low")
    {
        range_low = value;
        range_low.value_namespace = name_space;
        range_low.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::DisplayConfig3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "choice")
    {
        choice.yfilter = yfilter;
    }
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "range-high")
    {
        range_high.yfilter = yfilter;
    }
    if(value_path == "range-low")
    {
        range_low.yfilter = yfilter;
    }
}

bool Exception::Enter::DisplayConfig3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice" || name == "compress" || name == "file-name" || name == "path" || name == "range-high" || name == "range-low")
        return true;
    return false;
}

Exception::Enter::DisplayFallBackConfig1::DisplayFallBackConfig1()
    :
    boot_device_str{YType::str, "boot-device-str"},
    choice_fall_back{YType::str, "choice-fall-back"},
    compress{YType::str, "compress"},
    file_name{YType::str, "file-name"},
    path{YType::str, "path"},
    range_high{YType::uint32, "range-high"},
    range_low{YType::uint32, "range-low"}
{

    yang_name = "display-fall-back-config1"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::DisplayFallBackConfig1::~DisplayFallBackConfig1()
{
}

bool Exception::Enter::DisplayFallBackConfig1::has_data() const
{
    return boot_device_str.is_set
	|| choice_fall_back.is_set
	|| compress.is_set
	|| file_name.is_set
	|| path.is_set
	|| range_high.is_set
	|| range_low.is_set;
}

bool Exception::Enter::DisplayFallBackConfig1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_device_str.yfilter)
	|| ydk::is_set(choice_fall_back.yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(range_high.yfilter)
	|| ydk::is_set(range_low.yfilter);
}

std::string Exception::Enter::DisplayFallBackConfig1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::DisplayFallBackConfig1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-fall-back-config1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::DisplayFallBackConfig1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_device_str.is_set || is_set(boot_device_str.yfilter)) leaf_name_data.push_back(boot_device_str.get_name_leafdata());
    if (choice_fall_back.is_set || is_set(choice_fall_back.yfilter)) leaf_name_data.push_back(choice_fall_back.get_name_leafdata());
    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (range_high.is_set || is_set(range_high.yfilter)) leaf_name_data.push_back(range_high.get_name_leafdata());
    if (range_low.is_set || is_set(range_low.yfilter)) leaf_name_data.push_back(range_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::DisplayFallBackConfig1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::DisplayFallBackConfig1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::DisplayFallBackConfig1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-device-str")
    {
        boot_device_str = value;
        boot_device_str.value_namespace = name_space;
        boot_device_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "choice-fall-back")
    {
        choice_fall_back = value;
        choice_fall_back.value_namespace = name_space;
        choice_fall_back.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-high")
    {
        range_high = value;
        range_high.value_namespace = name_space;
        range_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-low")
    {
        range_low = value;
        range_low.value_namespace = name_space;
        range_low.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::DisplayFallBackConfig1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-device-str")
    {
        boot_device_str.yfilter = yfilter;
    }
    if(value_path == "choice-fall-back")
    {
        choice_fall_back.yfilter = yfilter;
    }
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "range-high")
    {
        range_high.yfilter = yfilter;
    }
    if(value_path == "range-low")
    {
        range_low.yfilter = yfilter;
    }
}

bool Exception::Enter::DisplayFallBackConfig1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-device-str" || name == "choice-fall-back" || name == "compress" || name == "file-name" || name == "path" || name == "range-high" || name == "range-low")
        return true;
    return false;
}

Exception::Enter::DisplayFallBackConfig2::DisplayFallBackConfig2()
    :
    boot_device_str{YType::str, "boot-device-str"},
    choice_fall_back{YType::str, "choice-fall-back"},
    compress{YType::str, "compress"},
    file_name{YType::str, "file-name"},
    path{YType::str, "path"},
    range_high{YType::uint32, "range-high"},
    range_low{YType::uint32, "range-low"}
{

    yang_name = "display-fall-back-config2"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::DisplayFallBackConfig2::~DisplayFallBackConfig2()
{
}

bool Exception::Enter::DisplayFallBackConfig2::has_data() const
{
    return boot_device_str.is_set
	|| choice_fall_back.is_set
	|| compress.is_set
	|| file_name.is_set
	|| path.is_set
	|| range_high.is_set
	|| range_low.is_set;
}

bool Exception::Enter::DisplayFallBackConfig2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_device_str.yfilter)
	|| ydk::is_set(choice_fall_back.yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(range_high.yfilter)
	|| ydk::is_set(range_low.yfilter);
}

std::string Exception::Enter::DisplayFallBackConfig2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::DisplayFallBackConfig2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-fall-back-config2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::DisplayFallBackConfig2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_device_str.is_set || is_set(boot_device_str.yfilter)) leaf_name_data.push_back(boot_device_str.get_name_leafdata());
    if (choice_fall_back.is_set || is_set(choice_fall_back.yfilter)) leaf_name_data.push_back(choice_fall_back.get_name_leafdata());
    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (range_high.is_set || is_set(range_high.yfilter)) leaf_name_data.push_back(range_high.get_name_leafdata());
    if (range_low.is_set || is_set(range_low.yfilter)) leaf_name_data.push_back(range_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::DisplayFallBackConfig2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::DisplayFallBackConfig2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::DisplayFallBackConfig2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-device-str")
    {
        boot_device_str = value;
        boot_device_str.value_namespace = name_space;
        boot_device_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "choice-fall-back")
    {
        choice_fall_back = value;
        choice_fall_back.value_namespace = name_space;
        choice_fall_back.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-high")
    {
        range_high = value;
        range_high.value_namespace = name_space;
        range_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-low")
    {
        range_low = value;
        range_low.value_namespace = name_space;
        range_low.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::DisplayFallBackConfig2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-device-str")
    {
        boot_device_str.yfilter = yfilter;
    }
    if(value_path == "choice-fall-back")
    {
        choice_fall_back.yfilter = yfilter;
    }
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "range-high")
    {
        range_high.yfilter = yfilter;
    }
    if(value_path == "range-low")
    {
        range_low.yfilter = yfilter;
    }
}

bool Exception::Enter::DisplayFallBackConfig2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-device-str" || name == "choice-fall-back" || name == "compress" || name == "file-name" || name == "path" || name == "range-high" || name == "range-low")
        return true;
    return false;
}

Exception::Enter::DisplayFallBackConfig3::DisplayFallBackConfig3()
    :
    boot_device_str{YType::str, "boot-device-str"},
    choice_fall_back{YType::str, "choice-fall-back"},
    compress{YType::str, "compress"},
    file_name{YType::str, "file-name"},
    path{YType::str, "path"},
    range_high{YType::uint32, "range-high"},
    range_low{YType::uint32, "range-low"}
{

    yang_name = "display-fall-back-config3"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::DisplayFallBackConfig3::~DisplayFallBackConfig3()
{
}

bool Exception::Enter::DisplayFallBackConfig3::has_data() const
{
    return boot_device_str.is_set
	|| choice_fall_back.is_set
	|| compress.is_set
	|| file_name.is_set
	|| path.is_set
	|| range_high.is_set
	|| range_low.is_set;
}

bool Exception::Enter::DisplayFallBackConfig3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_device_str.yfilter)
	|| ydk::is_set(choice_fall_back.yfilter)
	|| ydk::is_set(compress.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(range_high.yfilter)
	|| ydk::is_set(range_low.yfilter);
}

std::string Exception::Enter::DisplayFallBackConfig3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::DisplayFallBackConfig3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-fall-back-config3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::DisplayFallBackConfig3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_device_str.is_set || is_set(boot_device_str.yfilter)) leaf_name_data.push_back(boot_device_str.get_name_leafdata());
    if (choice_fall_back.is_set || is_set(choice_fall_back.yfilter)) leaf_name_data.push_back(choice_fall_back.get_name_leafdata());
    if (compress.is_set || is_set(compress.yfilter)) leaf_name_data.push_back(compress.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (range_high.is_set || is_set(range_high.yfilter)) leaf_name_data.push_back(range_high.get_name_leafdata());
    if (range_low.is_set || is_set(range_low.yfilter)) leaf_name_data.push_back(range_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::DisplayFallBackConfig3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::DisplayFallBackConfig3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::DisplayFallBackConfig3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-device-str")
    {
        boot_device_str = value;
        boot_device_str.value_namespace = name_space;
        boot_device_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "choice-fall-back")
    {
        choice_fall_back = value;
        choice_fall_back.value_namespace = name_space;
        choice_fall_back.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress")
    {
        compress = value;
        compress.value_namespace = name_space;
        compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-high")
    {
        range_high = value;
        range_high.value_namespace = name_space;
        range_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-low")
    {
        range_low = value;
        range_low.value_namespace = name_space;
        range_low.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::DisplayFallBackConfig3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-device-str")
    {
        boot_device_str.yfilter = yfilter;
    }
    if(value_path == "choice-fall-back")
    {
        choice_fall_back.yfilter = yfilter;
    }
    if(value_path == "compress")
    {
        compress.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "range-high")
    {
        range_high.yfilter = yfilter;
    }
    if(value_path == "range-low")
    {
        range_low.yfilter = yfilter;
    }
}

bool Exception::Enter::DisplayFallBackConfig3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-device-str" || name == "choice-fall-back" || name == "compress" || name == "file-name" || name == "path" || name == "range-high" || name == "range-low")
        return true;
    return false;
}

Exception::Enter::KernelConfig::KernelConfig()
    :
    choice_fall_back{YType::str, "choice-fall-back"},
    file_name{YType::str, "file-name"},
    memory{YType::str, "memory"},
    path{YType::str, "path"}
{

    yang_name = "kernel-config"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::KernelConfig::~KernelConfig()
{
}

bool Exception::Enter::KernelConfig::has_data() const
{
    return choice_fall_back.is_set
	|| file_name.is_set
	|| memory.is_set
	|| path.is_set;
}

bool Exception::Enter::KernelConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(choice_fall_back.yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Exception::Enter::KernelConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::KernelConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kernel-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::KernelConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice_fall_back.is_set || is_set(choice_fall_back.yfilter)) leaf_name_data.push_back(choice_fall_back.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::KernelConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::KernelConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::KernelConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "choice-fall-back")
    {
        choice_fall_back = value;
        choice_fall_back.value_namespace = name_space;
        choice_fall_back.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::KernelConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "choice-fall-back")
    {
        choice_fall_back.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Exception::Enter::KernelConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice-fall-back" || name == "file-name" || name == "memory" || name == "path")
        return true;
    return false;
}

Exception::Enter::KernelRouteConfig::KernelRouteConfig()
    :
    destination{YType::str, "destination"},
    ip_addr{YType::str, "ip-addr"},
    mask{YType::str, "mask"},
    next_hop{YType::str, "next-hop"},
    port{YType::uint32, "port"},
    slot{YType::uint32, "slot"}
{

    yang_name = "kernel-route-config"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::KernelRouteConfig::~KernelRouteConfig()
{
}

bool Exception::Enter::KernelRouteConfig::has_data() const
{
    return destination.is_set
	|| ip_addr.is_set
	|| mask.is_set
	|| next_hop.is_set
	|| port.is_set
	|| slot.is_set;
}

bool Exception::Enter::KernelRouteConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Exception::Enter::KernelRouteConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::KernelRouteConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kernel-route-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::KernelRouteConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::KernelRouteConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::KernelRouteConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::KernelRouteConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::KernelRouteConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Exception::Enter::KernelRouteConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "ip-addr" || name == "mask" || name == "next-hop" || name == "port" || name == "slot")
        return true;
    return false;
}

Exception::Enter::MemoryThreshold::MemoryThreshold()
    :
    string{YType::str, "string"}
{

    yang_name = "memory-threshold"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::MemoryThreshold::~MemoryThreshold()
{
}

bool Exception::Enter::MemoryThreshold::has_data() const
{
    return string.is_set;
}

bool Exception::Enter::MemoryThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Exception::Enter::MemoryThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::MemoryThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::MemoryThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::MemoryThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::MemoryThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Exception::Enter::MemoryThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Exception::Enter::ProcSize::ProcSize()
    :
    string{YType::str, "string"}
{

    yang_name = "proc-size"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::ProcSize::~ProcSize()
{
}

bool Exception::Enter::ProcSize::has_data() const
{
    return string.is_set;
}

bool Exception::Enter::ProcSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Exception::Enter::ProcSize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::ProcSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::ProcSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::ProcSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::ProcSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::ProcSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::ProcSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Exception::Enter::ProcSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Exception::Enter::Qsize::Qsize()
    :
    string{YType::str, "string"}
{

    yang_name = "qsize"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = false;
}

Exception::Enter::Qsize::~Qsize()
{
}

bool Exception::Enter::Qsize::has_data() const
{
    return string.is_set;
}

bool Exception::Enter::Qsize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Exception::Enter::Qsize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-exception-oper:exception/enter/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Enter::Qsize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Enter::Qsize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Exception::Enter::Qsize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::Enter::Qsize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::Enter::Qsize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Enter::Qsize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Exception::Enter::Qsize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}


}
}

