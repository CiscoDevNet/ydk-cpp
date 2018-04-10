
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_nto_misc_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_nto_misc_oper {

MemorySummary::MemorySummary()
    :
    nodes(std::make_shared<MemorySummary::Nodes>())
{
    nodes->parent = this;

    yang_name = "memory-summary"; yang_parent_name = "Cisco-IOS-XR-nto-misc-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MemorySummary::~MemorySummary()
{
}

bool MemorySummary::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MemorySummary::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MemorySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-oper:memory-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemorySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MemorySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MemorySummary::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemorySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void MemorySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MemorySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MemorySummary::clone_ptr() const
{
    return std::make_shared<MemorySummary>();
}

std::string MemorySummary::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MemorySummary::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MemorySummary::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MemorySummary::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MemorySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MemorySummary::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "memory-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MemorySummary::Nodes::~Nodes()
{
}

bool MemorySummary::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MemorySummary::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MemorySummary::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-oper:memory-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MemorySummary::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemorySummary::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MemorySummary::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<MemorySummary::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemorySummary::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MemorySummary::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MemorySummary::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MemorySummary::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MemorySummary::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    summary(std::make_shared<MemorySummary::Nodes::Node::Summary>())
	,detail(std::make_shared<MemorySummary::Nodes::Node::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

MemorySummary::Nodes::Node::~Node()
{
}

bool MemorySummary::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool MemorySummary::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string MemorySummary::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-oper:memory-summary/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MemorySummary::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemorySummary::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MemorySummary::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MemorySummary::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MemorySummary::Nodes::Node::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemorySummary::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void MemorySummary::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MemorySummary::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MemorySummary::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail" || name == "node-name")
        return true;
    return false;
}

MemorySummary::Nodes::Node::Summary::Summary()
    :
    page_size{YType::uint32, "page-size"},
    ram_memory{YType::uint64, "ram-memory"},
    free_physical_memory{YType::uint64, "free-physical-memory"},
    system_ram_memory{YType::uint64, "system-ram-memory"},
    free_application_memory{YType::uint64, "free-application-memory"},
    image_memory{YType::uint64, "image-memory"},
    boot_ram_size{YType::uint64, "boot-ram-size"},
    reserved_memory{YType::uint64, "reserved-memory"},
    io_memory{YType::uint64, "io-memory"},
    flash_system{YType::uint64, "flash-system"}
{

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

MemorySummary::Nodes::Node::Summary::~Summary()
{
}

bool MemorySummary::Nodes::Node::Summary::has_data() const
{
    return page_size.is_set
	|| ram_memory.is_set
	|| free_physical_memory.is_set
	|| system_ram_memory.is_set
	|| free_application_memory.is_set
	|| image_memory.is_set
	|| boot_ram_size.is_set
	|| reserved_memory.is_set
	|| io_memory.is_set
	|| flash_system.is_set;
}

bool MemorySummary::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(page_size.yfilter)
	|| ydk::is_set(ram_memory.yfilter)
	|| ydk::is_set(free_physical_memory.yfilter)
	|| ydk::is_set(system_ram_memory.yfilter)
	|| ydk::is_set(free_application_memory.yfilter)
	|| ydk::is_set(image_memory.yfilter)
	|| ydk::is_set(boot_ram_size.yfilter)
	|| ydk::is_set(reserved_memory.yfilter)
	|| ydk::is_set(io_memory.yfilter)
	|| ydk::is_set(flash_system.yfilter);
}

std::string MemorySummary::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemorySummary::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (page_size.is_set || is_set(page_size.yfilter)) leaf_name_data.push_back(page_size.get_name_leafdata());
    if (ram_memory.is_set || is_set(ram_memory.yfilter)) leaf_name_data.push_back(ram_memory.get_name_leafdata());
    if (free_physical_memory.is_set || is_set(free_physical_memory.yfilter)) leaf_name_data.push_back(free_physical_memory.get_name_leafdata());
    if (system_ram_memory.is_set || is_set(system_ram_memory.yfilter)) leaf_name_data.push_back(system_ram_memory.get_name_leafdata());
    if (free_application_memory.is_set || is_set(free_application_memory.yfilter)) leaf_name_data.push_back(free_application_memory.get_name_leafdata());
    if (image_memory.is_set || is_set(image_memory.yfilter)) leaf_name_data.push_back(image_memory.get_name_leafdata());
    if (boot_ram_size.is_set || is_set(boot_ram_size.yfilter)) leaf_name_data.push_back(boot_ram_size.get_name_leafdata());
    if (reserved_memory.is_set || is_set(reserved_memory.yfilter)) leaf_name_data.push_back(reserved_memory.get_name_leafdata());
    if (io_memory.is_set || is_set(io_memory.yfilter)) leaf_name_data.push_back(io_memory.get_name_leafdata());
    if (flash_system.is_set || is_set(flash_system.yfilter)) leaf_name_data.push_back(flash_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MemorySummary::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemorySummary::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MemorySummary::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "page-size")
    {
        page_size = value;
        page_size.value_namespace = name_space;
        page_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ram-memory")
    {
        ram_memory = value;
        ram_memory.value_namespace = name_space;
        ram_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-physical-memory")
    {
        free_physical_memory = value;
        free_physical_memory.value_namespace = name_space;
        free_physical_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-ram-memory")
    {
        system_ram_memory = value;
        system_ram_memory.value_namespace = name_space;
        system_ram_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-application-memory")
    {
        free_application_memory = value;
        free_application_memory.value_namespace = name_space;
        free_application_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "image-memory")
    {
        image_memory = value;
        image_memory.value_namespace = name_space;
        image_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-ram-size")
    {
        boot_ram_size = value;
        boot_ram_size.value_namespace = name_space;
        boot_ram_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory = value;
        reserved_memory.value_namespace = name_space;
        reserved_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-memory")
    {
        io_memory = value;
        io_memory.value_namespace = name_space;
        io_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-system")
    {
        flash_system = value;
        flash_system.value_namespace = name_space;
        flash_system.value_namespace_prefix = name_space_prefix;
    }
}

void MemorySummary::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "page-size")
    {
        page_size.yfilter = yfilter;
    }
    if(value_path == "ram-memory")
    {
        ram_memory.yfilter = yfilter;
    }
    if(value_path == "free-physical-memory")
    {
        free_physical_memory.yfilter = yfilter;
    }
    if(value_path == "system-ram-memory")
    {
        system_ram_memory.yfilter = yfilter;
    }
    if(value_path == "free-application-memory")
    {
        free_application_memory.yfilter = yfilter;
    }
    if(value_path == "image-memory")
    {
        image_memory.yfilter = yfilter;
    }
    if(value_path == "boot-ram-size")
    {
        boot_ram_size.yfilter = yfilter;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory.yfilter = yfilter;
    }
    if(value_path == "io-memory")
    {
        io_memory.yfilter = yfilter;
    }
    if(value_path == "flash-system")
    {
        flash_system.yfilter = yfilter;
    }
}

bool MemorySummary::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "page-size" || name == "ram-memory" || name == "free-physical-memory" || name == "system-ram-memory" || name == "free-application-memory" || name == "image-memory" || name == "boot-ram-size" || name == "reserved-memory" || name == "io-memory" || name == "flash-system")
        return true;
    return false;
}

MemorySummary::Nodes::Node::Detail::Detail()
    :
    page_size{YType::uint32, "page-size"},
    ram_memory{YType::uint64, "ram-memory"},
    free_physical_memory{YType::uint64, "free-physical-memory"},
    private_physical_memory{YType::uint64, "private-physical-memory"},
    system_ram_memory{YType::uint64, "system-ram-memory"},
    free_application_memory{YType::uint64, "free-application-memory"},
    image_memory{YType::uint64, "image-memory"},
    boot_ram_size{YType::uint64, "boot-ram-size"},
    reserved_memory{YType::uint64, "reserved-memory"},
    io_memory{YType::uint64, "io-memory"},
    flash_system{YType::uint64, "flash-system"},
    total_shared_window{YType::uint64, "total-shared-window"},
    allocated_memory{YType::uint64, "allocated-memory"},
    program_text{YType::uint64, "program-text"},
    program_data{YType::uint64, "program-data"},
    program_stack{YType::uint64, "program-stack"},
    total_used{YType::uint64, "total-used"}
{

    yang_name = "detail"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

MemorySummary::Nodes::Node::Detail::~Detail()
{
}

bool MemorySummary::Nodes::Node::Detail::has_data() const
{
    for (std::size_t index=0; index<shared_window.size(); index++)
    {
        if(shared_window[index]->has_data())
            return true;
    }
    return page_size.is_set
	|| ram_memory.is_set
	|| free_physical_memory.is_set
	|| private_physical_memory.is_set
	|| system_ram_memory.is_set
	|| free_application_memory.is_set
	|| image_memory.is_set
	|| boot_ram_size.is_set
	|| reserved_memory.is_set
	|| io_memory.is_set
	|| flash_system.is_set
	|| total_shared_window.is_set
	|| allocated_memory.is_set
	|| program_text.is_set
	|| program_data.is_set
	|| program_stack.is_set
	|| total_used.is_set;
}

bool MemorySummary::Nodes::Node::Detail::has_operation() const
{
    for (std::size_t index=0; index<shared_window.size(); index++)
    {
        if(shared_window[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(page_size.yfilter)
	|| ydk::is_set(ram_memory.yfilter)
	|| ydk::is_set(free_physical_memory.yfilter)
	|| ydk::is_set(private_physical_memory.yfilter)
	|| ydk::is_set(system_ram_memory.yfilter)
	|| ydk::is_set(free_application_memory.yfilter)
	|| ydk::is_set(image_memory.yfilter)
	|| ydk::is_set(boot_ram_size.yfilter)
	|| ydk::is_set(reserved_memory.yfilter)
	|| ydk::is_set(io_memory.yfilter)
	|| ydk::is_set(flash_system.yfilter)
	|| ydk::is_set(total_shared_window.yfilter)
	|| ydk::is_set(allocated_memory.yfilter)
	|| ydk::is_set(program_text.yfilter)
	|| ydk::is_set(program_data.yfilter)
	|| ydk::is_set(program_stack.yfilter)
	|| ydk::is_set(total_used.yfilter);
}

std::string MemorySummary::Nodes::Node::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemorySummary::Nodes::Node::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (page_size.is_set || is_set(page_size.yfilter)) leaf_name_data.push_back(page_size.get_name_leafdata());
    if (ram_memory.is_set || is_set(ram_memory.yfilter)) leaf_name_data.push_back(ram_memory.get_name_leafdata());
    if (free_physical_memory.is_set || is_set(free_physical_memory.yfilter)) leaf_name_data.push_back(free_physical_memory.get_name_leafdata());
    if (private_physical_memory.is_set || is_set(private_physical_memory.yfilter)) leaf_name_data.push_back(private_physical_memory.get_name_leafdata());
    if (system_ram_memory.is_set || is_set(system_ram_memory.yfilter)) leaf_name_data.push_back(system_ram_memory.get_name_leafdata());
    if (free_application_memory.is_set || is_set(free_application_memory.yfilter)) leaf_name_data.push_back(free_application_memory.get_name_leafdata());
    if (image_memory.is_set || is_set(image_memory.yfilter)) leaf_name_data.push_back(image_memory.get_name_leafdata());
    if (boot_ram_size.is_set || is_set(boot_ram_size.yfilter)) leaf_name_data.push_back(boot_ram_size.get_name_leafdata());
    if (reserved_memory.is_set || is_set(reserved_memory.yfilter)) leaf_name_data.push_back(reserved_memory.get_name_leafdata());
    if (io_memory.is_set || is_set(io_memory.yfilter)) leaf_name_data.push_back(io_memory.get_name_leafdata());
    if (flash_system.is_set || is_set(flash_system.yfilter)) leaf_name_data.push_back(flash_system.get_name_leafdata());
    if (total_shared_window.is_set || is_set(total_shared_window.yfilter)) leaf_name_data.push_back(total_shared_window.get_name_leafdata());
    if (allocated_memory.is_set || is_set(allocated_memory.yfilter)) leaf_name_data.push_back(allocated_memory.get_name_leafdata());
    if (program_text.is_set || is_set(program_text.yfilter)) leaf_name_data.push_back(program_text.get_name_leafdata());
    if (program_data.is_set || is_set(program_data.yfilter)) leaf_name_data.push_back(program_data.get_name_leafdata());
    if (program_stack.is_set || is_set(program_stack.yfilter)) leaf_name_data.push_back(program_stack.get_name_leafdata());
    if (total_used.is_set || is_set(total_used.yfilter)) leaf_name_data.push_back(total_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MemorySummary::Nodes::Node::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shared-window")
    {
        auto c = std::make_shared<MemorySummary::Nodes::Node::Detail::SharedWindow>();
        c->parent = this;
        shared_window.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemorySummary::Nodes::Node::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : shared_window)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MemorySummary::Nodes::Node::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "page-size")
    {
        page_size = value;
        page_size.value_namespace = name_space;
        page_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ram-memory")
    {
        ram_memory = value;
        ram_memory.value_namespace = name_space;
        ram_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-physical-memory")
    {
        free_physical_memory = value;
        free_physical_memory.value_namespace = name_space;
        free_physical_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-physical-memory")
    {
        private_physical_memory = value;
        private_physical_memory.value_namespace = name_space;
        private_physical_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-ram-memory")
    {
        system_ram_memory = value;
        system_ram_memory.value_namespace = name_space;
        system_ram_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-application-memory")
    {
        free_application_memory = value;
        free_application_memory.value_namespace = name_space;
        free_application_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "image-memory")
    {
        image_memory = value;
        image_memory.value_namespace = name_space;
        image_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-ram-size")
    {
        boot_ram_size = value;
        boot_ram_size.value_namespace = name_space;
        boot_ram_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory = value;
        reserved_memory.value_namespace = name_space;
        reserved_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-memory")
    {
        io_memory = value;
        io_memory.value_namespace = name_space;
        io_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-system")
    {
        flash_system = value;
        flash_system.value_namespace = name_space;
        flash_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-shared-window")
    {
        total_shared_window = value;
        total_shared_window.value_namespace = name_space;
        total_shared_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory = value;
        allocated_memory.value_namespace = name_space;
        allocated_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "program-text")
    {
        program_text = value;
        program_text.value_namespace = name_space;
        program_text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "program-data")
    {
        program_data = value;
        program_data.value_namespace = name_space;
        program_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "program-stack")
    {
        program_stack = value;
        program_stack.value_namespace = name_space;
        program_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used")
    {
        total_used = value;
        total_used.value_namespace = name_space;
        total_used.value_namespace_prefix = name_space_prefix;
    }
}

void MemorySummary::Nodes::Node::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "page-size")
    {
        page_size.yfilter = yfilter;
    }
    if(value_path == "ram-memory")
    {
        ram_memory.yfilter = yfilter;
    }
    if(value_path == "free-physical-memory")
    {
        free_physical_memory.yfilter = yfilter;
    }
    if(value_path == "private-physical-memory")
    {
        private_physical_memory.yfilter = yfilter;
    }
    if(value_path == "system-ram-memory")
    {
        system_ram_memory.yfilter = yfilter;
    }
    if(value_path == "free-application-memory")
    {
        free_application_memory.yfilter = yfilter;
    }
    if(value_path == "image-memory")
    {
        image_memory.yfilter = yfilter;
    }
    if(value_path == "boot-ram-size")
    {
        boot_ram_size.yfilter = yfilter;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory.yfilter = yfilter;
    }
    if(value_path == "io-memory")
    {
        io_memory.yfilter = yfilter;
    }
    if(value_path == "flash-system")
    {
        flash_system.yfilter = yfilter;
    }
    if(value_path == "total-shared-window")
    {
        total_shared_window.yfilter = yfilter;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory.yfilter = yfilter;
    }
    if(value_path == "program-text")
    {
        program_text.yfilter = yfilter;
    }
    if(value_path == "program-data")
    {
        program_data.yfilter = yfilter;
    }
    if(value_path == "program-stack")
    {
        program_stack.yfilter = yfilter;
    }
    if(value_path == "total-used")
    {
        total_used.yfilter = yfilter;
    }
}

bool MemorySummary::Nodes::Node::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-window" || name == "page-size" || name == "ram-memory" || name == "free-physical-memory" || name == "private-physical-memory" || name == "system-ram-memory" || name == "free-application-memory" || name == "image-memory" || name == "boot-ram-size" || name == "reserved-memory" || name == "io-memory" || name == "flash-system" || name == "total-shared-window" || name == "allocated-memory" || name == "program-text" || name == "program-data" || name == "program-stack" || name == "total-used")
        return true;
    return false;
}

MemorySummary::Nodes::Node::Detail::SharedWindow::SharedWindow()
    :
    shared_window{YType::str, "shared-window"},
    window_size{YType::uint64, "window-size"}
{

    yang_name = "shared-window"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

MemorySummary::Nodes::Node::Detail::SharedWindow::~SharedWindow()
{
}

bool MemorySummary::Nodes::Node::Detail::SharedWindow::has_data() const
{
    return shared_window.is_set
	|| window_size.is_set;
}

bool MemorySummary::Nodes::Node::Detail::SharedWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_window.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string MemorySummary::Nodes::Node::Detail::SharedWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemorySummary::Nodes::Node::Detail::SharedWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_window.is_set || is_set(shared_window.yfilter)) leaf_name_data.push_back(shared_window.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MemorySummary::Nodes::Node::Detail::SharedWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemorySummary::Nodes::Node::Detail::SharedWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MemorySummary::Nodes::Node::Detail::SharedWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-window")
    {
        shared_window = value;
        shared_window.value_namespace = name_space;
        shared_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void MemorySummary::Nodes::Node::Detail::SharedWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-window")
    {
        shared_window.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool MemorySummary::Nodes::Node::Detail::SharedWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-window" || name == "window-size")
        return true;
    return false;
}


}
}

