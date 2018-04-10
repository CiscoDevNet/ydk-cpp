
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_sm.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_sm {

Oper::Oper()
    :
    shelf_mgr(std::make_shared<Oper::ShelfMgr>())
	,platform(std::make_shared<Oper::Platform>())
	,chassis(std::make_shared<Oper::Chassis>())
	,reload(std::make_shared<Oper::Reload>())
	,reboot_history(std::make_shared<Oper::RebootHistory>())
	,reload_vm(std::make_shared<Oper::ReloadVm>())
	,macpool(std::make_shared<Oper::Macpool>())
{
    shelf_mgr->parent = this;
    platform->parent = this;
    chassis->parent = this;
    reload->parent = this;
    reboot_history->parent = this;
    reload_vm->parent = this;
    macpool->parent = this;

    yang_name = "oper"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sm"; is_top_level_class = true; has_list_ancestor = false;
}

Oper::~Oper()
{
}

bool Oper::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (shelf_mgr !=  nullptr && shelf_mgr->has_data())
	|| (platform !=  nullptr && platform->has_data())
	|| (chassis !=  nullptr && chassis->has_data())
	|| (reload !=  nullptr && reload->has_data())
	|| (reboot_history !=  nullptr && reboot_history->has_data())
	|| (reload_vm !=  nullptr && reload_vm->has_data())
	|| (macpool !=  nullptr && macpool->has_data());
}

bool Oper::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (shelf_mgr !=  nullptr && shelf_mgr->has_operation())
	|| (platform !=  nullptr && platform->has_operation())
	|| (chassis !=  nullptr && chassis->has_operation())
	|| (reload !=  nullptr && reload->has_operation())
	|| (reboot_history !=  nullptr && reboot_history->has_operation())
	|| (reload_vm !=  nullptr && reload_vm->has_operation())
	|| (macpool !=  nullptr && macpool->has_operation());
}

std::string Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shelf_mgr")
    {
        if(shelf_mgr == nullptr)
        {
            shelf_mgr = std::make_shared<Oper::ShelfMgr>();
        }
        return shelf_mgr;
    }

    if(child_yang_name == "platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Oper::Platform>();
        }
        return platform;
    }

    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Oper::Chassis>();
        }
        return chassis;
    }

    if(child_yang_name == "reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<Oper::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "reboot-history")
    {
        if(reboot_history == nullptr)
        {
            reboot_history = std::make_shared<Oper::RebootHistory>();
        }
        return reboot_history;
    }

    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Oper::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "reload_vm")
    {
        if(reload_vm == nullptr)
        {
            reload_vm = std::make_shared<Oper::ReloadVm>();
        }
        return reload_vm;
    }

    if(child_yang_name == "macpool")
    {
        if(macpool == nullptr)
        {
            macpool = std::make_shared<Oper::Macpool>();
        }
        return macpool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(shelf_mgr != nullptr)
    {
        children["shelf_mgr"] = shelf_mgr;
    }

    if(platform != nullptr)
    {
        children["platform"] = platform;
    }

    if(chassis != nullptr)
    {
        children["chassis"] = chassis;
    }

    if(reload != nullptr)
    {
        children["reload"] = reload;
    }

    if(reboot_history != nullptr)
    {
        children["reboot-history"] = reboot_history;
    }

    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(reload_vm != nullptr)
    {
        children["reload_vm"] = reload_vm;
    }

    if(macpool != nullptr)
    {
        children["macpool"] = macpool;
    }

    return children;
}

void Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Oper::clone_ptr() const
{
    return std::make_shared<Oper>();
}

std::string Oper::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Oper::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Oper::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Oper::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shelf_mgr" || name == "platform" || name == "chassis" || name == "reload" || name == "reboot-history" || name == "interface" || name == "reload_vm" || name == "macpool")
        return true;
    return false;
}

Oper::ShelfMgr::ShelfMgr()
{

    yang_name = "shelf_mgr"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::ShelfMgr::~ShelfMgr()
{
}

bool Oper::ShelfMgr::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::ShelfMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::ShelfMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::ShelfMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shelf_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ShelfMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ShelfMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Oper::ShelfMgr::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ShelfMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::ShelfMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::ShelfMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::ShelfMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Oper::ShelfMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "shelf_mgr"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::ShelfMgr::Trace::~Trace()
{
}

bool Oper::ShelfMgr::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Oper::ShelfMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Oper::ShelfMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/shelf_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::ShelfMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ShelfMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ShelfMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::ShelfMgr::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ShelfMgr::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::ShelfMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::ShelfMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Oper::ShelfMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Oper::ShelfMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::ShelfMgr::Trace::Location::~Location()
{
}

bool Oper::ShelfMgr::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Oper::ShelfMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Oper::ShelfMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ShelfMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ShelfMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Oper::ShelfMgr::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ShelfMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : all_options)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::ShelfMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::ShelfMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Oper::ShelfMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Oper::ShelfMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::ShelfMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool Oper::ShelfMgr::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Oper::ShelfMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Oper::ShelfMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ShelfMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ShelfMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ShelfMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace_blocks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::ShelfMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::ShelfMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Oper::ShelfMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Oper::ShelfMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Oper::Platform::Platform()
    :
    summary(std::make_shared<Oper::Platform::Summary>())
	,detail(std::make_shared<Oper::Platform::Detail>())
	,slices(std::make_shared<Oper::Platform::Slices>())
{
    summary->parent = this;
    detail->parent = this;
    slices->parent = this;

    yang_name = "platform"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::~Platform()
{
}

bool Oper::Platform::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (slices !=  nullptr && slices->has_data());
}

bool Oper::Platform::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (slices !=  nullptr && slices->has_operation());
}

std::string Oper::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Oper::Platform::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Oper::Platform::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "slices")
    {
        if(slices == nullptr)
        {
            slices = std::make_shared<Oper::Platform::Slices>();
        }
        return slices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::get_children() const
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

    if(slices != nullptr)
    {
        children["slices"] = slices;
    }

    return children;
}

void Oper::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail" || name == "slices")
        return true;
    return false;
}

Oper::Platform::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::Summary::~Summary()
{
}

bool Oper::Platform::Summary::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::Platform::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::Platform::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::Platform::Summary::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Platform::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Platform::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Platform::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::Platform::Summary::Location::Location()
    :
    location{YType::str, "location"}
    	,
    summary_data(std::make_shared<Oper::Platform::Summary::Location::SummaryData>())
{
    summary_data->parent = this;

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::Summary::Location::~Location()
{
}

bool Oper::Platform::Summary::Location::has_data() const
{
    return location.is_set
	|| (summary_data !=  nullptr && summary_data->has_data());
}

bool Oper::Platform::Summary::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (summary_data !=  nullptr && summary_data->has_operation());
}

std::string Oper::Platform::Summary::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/platform/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-data")
    {
        if(summary_data == nullptr)
        {
            summary_data = std::make_shared<Oper::Platform::Summary::Location::SummaryData>();
        }
        return summary_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary_data != nullptr)
    {
        children["summary-data"] = summary_data;
    }

    return children;
}

void Oper::Platform::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::Platform::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-data" || name == "location")
        return true;
    return false;
}

Oper::Platform::Summary::Location::SummaryData::SummaryData()
    :
    card_type{YType::str, "card_type"},
    hw_state{YType::str, "hw_state"},
    sw_state{YType::str, "sw_state"},
    config_state{YType::str, "config_state"}
{

    yang_name = "summary-data"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Platform::Summary::Location::SummaryData::~SummaryData()
{
}

bool Oper::Platform::Summary::Location::SummaryData::has_data() const
{
    return card_type.is_set
	|| hw_state.is_set
	|| sw_state.is_set
	|| config_state.is_set;
}

bool Oper::Platform::Summary::Location::SummaryData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(hw_state.yfilter)
	|| ydk::is_set(sw_state.yfilter)
	|| ydk::is_set(config_state.yfilter);
}

std::string Oper::Platform::Summary::Location::SummaryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Summary::Location::SummaryData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (hw_state.is_set || is_set(hw_state.yfilter)) leaf_name_data.push_back(hw_state.get_name_leafdata());
    if (sw_state.is_set || is_set(sw_state.yfilter)) leaf_name_data.push_back(sw_state.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Summary::Location::SummaryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Summary::Location::SummaryData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Platform::Summary::Location::SummaryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw_state")
    {
        hw_state = value;
        hw_state.value_namespace = name_space;
        hw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw_state")
    {
        sw_state = value;
        sw_state.value_namespace = name_space;
        sw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config_state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Summary::Location::SummaryData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "hw_state")
    {
        hw_state.yfilter = yfilter;
    }
    if(value_path == "sw_state")
    {
        sw_state.yfilter = yfilter;
    }
    if(value_path == "config_state")
    {
        config_state.yfilter = yfilter;
    }
}

bool Oper::Platform::Summary::Location::SummaryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_type" || name == "hw_state" || name == "sw_state" || name == "config_state")
        return true;
    return false;
}

Oper::Platform::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::Detail::~Detail()
{
}

bool Oper::Platform::Detail::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::Platform::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::Platform::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::Platform::Detail::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Platform::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Platform::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Platform::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::Platform::Detail::Location::Location()
    :
    location{YType::str, "location"}
    	,
    detail_data(std::make_shared<Oper::Platform::Detail::Location::DetailData>())
{
    detail_data->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::Detail::Location::~Location()
{
}

bool Oper::Platform::Detail::Location::has_data() const
{
    return location.is_set
	|| (detail_data !=  nullptr && detail_data->has_data());
}

bool Oper::Platform::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (detail_data !=  nullptr && detail_data->has_operation());
}

std::string Oper::Platform::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/platform/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-data")
    {
        if(detail_data == nullptr)
        {
            detail_data = std::make_shared<Oper::Platform::Detail::Location::DetailData>();
        }
        return detail_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail_data != nullptr)
    {
        children["detail-data"] = detail_data;
    }

    return children;
}

void Oper::Platform::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::Platform::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-data" || name == "location")
        return true;
    return false;
}

Oper::Platform::Detail::Location::DetailData::DetailData()
    :
    pid{YType::str, "pid"},
    description{YType::str, "description"},
    vid_sn{YType::str, "vid_sn"},
    hw_state{YType::str, "hw_state"},
    sw_state{YType::str, "sw_state"},
    config_wordy{YType::str, "config_wordy"},
    hw_ver{YType::str, "hw_ver"},
    last_event{YType::str, "last_event"},
    last_ev_reason_str{YType::str, "last_ev_reason_str"}
{

    yang_name = "detail-data"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Platform::Detail::Location::DetailData::~DetailData()
{
}

bool Oper::Platform::Detail::Location::DetailData::has_data() const
{
    return pid.is_set
	|| description.is_set
	|| vid_sn.is_set
	|| hw_state.is_set
	|| sw_state.is_set
	|| config_wordy.is_set
	|| hw_ver.is_set
	|| last_event.is_set
	|| last_ev_reason_str.is_set;
}

bool Oper::Platform::Detail::Location::DetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vid_sn.yfilter)
	|| ydk::is_set(hw_state.yfilter)
	|| ydk::is_set(sw_state.yfilter)
	|| ydk::is_set(config_wordy.yfilter)
	|| ydk::is_set(hw_ver.yfilter)
	|| ydk::is_set(last_event.yfilter)
	|| ydk::is_set(last_ev_reason_str.yfilter);
}

std::string Oper::Platform::Detail::Location::DetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Detail::Location::DetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vid_sn.is_set || is_set(vid_sn.yfilter)) leaf_name_data.push_back(vid_sn.get_name_leafdata());
    if (hw_state.is_set || is_set(hw_state.yfilter)) leaf_name_data.push_back(hw_state.get_name_leafdata());
    if (sw_state.is_set || is_set(sw_state.yfilter)) leaf_name_data.push_back(sw_state.get_name_leafdata());
    if (config_wordy.is_set || is_set(config_wordy.yfilter)) leaf_name_data.push_back(config_wordy.get_name_leafdata());
    if (hw_ver.is_set || is_set(hw_ver.yfilter)) leaf_name_data.push_back(hw_ver.get_name_leafdata());
    if (last_event.is_set || is_set(last_event.yfilter)) leaf_name_data.push_back(last_event.get_name_leafdata());
    if (last_ev_reason_str.is_set || is_set(last_ev_reason_str.yfilter)) leaf_name_data.push_back(last_ev_reason_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Detail::Location::DetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Detail::Location::DetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Platform::Detail::Location::DetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid_sn")
    {
        vid_sn = value;
        vid_sn.value_namespace = name_space;
        vid_sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw_state")
    {
        hw_state = value;
        hw_state.value_namespace = name_space;
        hw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw_state")
    {
        sw_state = value;
        sw_state.value_namespace = name_space;
        sw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config_wordy")
    {
        config_wordy = value;
        config_wordy.value_namespace = name_space;
        config_wordy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw_ver")
    {
        hw_ver = value;
        hw_ver.value_namespace = name_space;
        hw_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_event")
    {
        last_event = value;
        last_event.value_namespace = name_space;
        last_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_ev_reason_str")
    {
        last_ev_reason_str = value;
        last_ev_reason_str.value_namespace = name_space;
        last_ev_reason_str.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Detail::Location::DetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vid_sn")
    {
        vid_sn.yfilter = yfilter;
    }
    if(value_path == "hw_state")
    {
        hw_state.yfilter = yfilter;
    }
    if(value_path == "sw_state")
    {
        sw_state.yfilter = yfilter;
    }
    if(value_path == "config_wordy")
    {
        config_wordy.yfilter = yfilter;
    }
    if(value_path == "hw_ver")
    {
        hw_ver.yfilter = yfilter;
    }
    if(value_path == "last_event")
    {
        last_event.yfilter = yfilter;
    }
    if(value_path == "last_ev_reason_str")
    {
        last_ev_reason_str.yfilter = yfilter;
    }
}

bool Oper::Platform::Detail::Location::DetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "description" || name == "vid_sn" || name == "hw_state" || name == "sw_state" || name == "config_wordy" || name == "hw_ver" || name == "last_event" || name == "last_ev_reason_str")
        return true;
    return false;
}

Oper::Platform::Slices::Slices()
{

    yang_name = "slices"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::Slices::~Slices()
{
}

bool Oper::Platform::Slices::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::Platform::Slices::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::Platform::Slices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::Slices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Slices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Slices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::Platform::Slices::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Slices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Platform::Slices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Platform::Slices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Platform::Slices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::Platform::Slices::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "slices"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Platform::Slices::Location::~Location()
{
}

bool Oper::Platform::Slices::Location::has_data() const
{
    for (std::size_t index=0; index<slice_values.size(); index++)
    {
        if(slice_values[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Oper::Platform::Slices::Location::has_operation() const
{
    for (std::size_t index=0; index<slice_values.size(); index++)
    {
        if(slice_values[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Oper::Platform::Slices::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/platform/slices/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Platform::Slices::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Slices::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Slices::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice_values")
    {
        auto c = std::make_shared<Oper::Platform::Slices::Location::SliceValues>();
        c->parent = this;
        slice_values.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Slices::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slice_values)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Platform::Slices::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Slices::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::Platform::Slices::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice_values" || name == "location")
        return true;
    return false;
}

Oper::Platform::Slices::Location::SliceValues::SliceValues()
    :
    slice_idx{YType::uint32, "slice_idx"}
    	,
    slice(std::make_shared<Oper::Platform::Slices::Location::SliceValues::Slice>())
{
    slice->parent = this;

    yang_name = "slice_values"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Platform::Slices::Location::SliceValues::~SliceValues()
{
}

bool Oper::Platform::Slices::Location::SliceValues::has_data() const
{
    return slice_idx.is_set
	|| (slice !=  nullptr && slice->has_data());
}

bool Oper::Platform::Slices::Location::SliceValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice_idx.yfilter)
	|| (slice !=  nullptr && slice->has_operation());
}

std::string Oper::Platform::Slices::Location::SliceValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice_values" <<"[slice_idx='" <<slice_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Slices::Location::SliceValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_idx.is_set || is_set(slice_idx.yfilter)) leaf_name_data.push_back(slice_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Slices::Location::SliceValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice")
    {
        if(slice == nullptr)
        {
            slice = std::make_shared<Oper::Platform::Slices::Location::SliceValues::Slice>();
        }
        return slice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Slices::Location::SliceValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slice != nullptr)
    {
        children["slice"] = slice;
    }

    return children;
}

void Oper::Platform::Slices::Location::SliceValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice_idx")
    {
        slice_idx = value;
        slice_idx.value_namespace = name_space;
        slice_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Slices::Location::SliceValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice_idx")
    {
        slice_idx.yfilter = yfilter;
    }
}

bool Oper::Platform::Slices::Location::SliceValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "slice_idx")
        return true;
    return false;
}

Oper::Platform::Slices::Location::SliceValues::Slice::Slice()
    :
    slice_num{YType::uint32, "slice_num"},
    admin_state{YType::str, "admin_state"},
    oper_state{YType::str, "oper_state"}
{

    yang_name = "slice"; yang_parent_name = "slice_values"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Platform::Slices::Location::SliceValues::Slice::~Slice()
{
}

bool Oper::Platform::Slices::Location::SliceValues::Slice::has_data() const
{
    return slice_num.is_set
	|| admin_state.is_set
	|| oper_state.is_set;
}

bool Oper::Platform::Slices::Location::SliceValues::Slice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice_num.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter);
}

std::string Oper::Platform::Slices::Location::SliceValues::Slice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Platform::Slices::Location::SliceValues::Slice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_num.is_set || is_set(slice_num.yfilter)) leaf_name_data.push_back(slice_num.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Platform::Slices::Location::SliceValues::Slice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Platform::Slices::Location::SliceValues::Slice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Platform::Slices::Location::SliceValues::Slice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice_num")
    {
        slice_num = value;
        slice_num.value_namespace = name_space;
        slice_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin_state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Platform::Slices::Location::SliceValues::Slice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice_num")
    {
        slice_num.yfilter = yfilter;
    }
    if(value_path == "admin_state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
}

bool Oper::Platform::Slices::Location::SliceValues::Slice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice_num" || name == "admin_state" || name == "oper_state")
        return true;
    return false;
}

Oper::Chassis::Chassis()
    :
    brief(std::make_shared<Oper::Chassis::Brief>())
{
    brief->parent = this;

    yang_name = "chassis"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Chassis::~Chassis()
{
}

bool Oper::Chassis::has_data() const
{
    return (brief !=  nullptr && brief->has_data());
}

bool Oper::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation());
}

std::string Oper::Chassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Oper::Chassis::Brief>();
        }
        return brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    return children;
}

void Oper::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief")
        return true;
    return false;
}

Oper::Chassis::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "chassis"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Chassis::Brief::~Brief()
{
}

bool Oper::Chassis::Brief::has_data() const
{
    for (std::size_t index=0; index<chassis_serial.size(); index++)
    {
        if(chassis_serial[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::Chassis::Brief::has_operation() const
{
    for (std::size_t index=0; index<chassis_serial.size(); index++)
    {
        if(chassis_serial[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::Chassis::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/chassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Chassis::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Chassis::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Chassis::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis_serial")
    {
        auto c = std::make_shared<Oper::Chassis::Brief::ChassisSerial>();
        c->parent = this;
        chassis_serial.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Chassis::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : chassis_serial)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Chassis::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Chassis::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Chassis::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis_serial")
        return true;
    return false;
}

Oper::Chassis::Brief::ChassisSerial::ChassisSerial()
    :
    serial_number{YType::str, "serial_number"}
    	,
    brief_data(std::make_shared<Oper::Chassis::Brief::ChassisSerial::BriefData>())
{
    brief_data->parent = this;

    yang_name = "chassis_serial"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Chassis::Brief::ChassisSerial::~ChassisSerial()
{
}

bool Oper::Chassis::Brief::ChassisSerial::has_data() const
{
    return serial_number.is_set
	|| (brief_data !=  nullptr && brief_data->has_data());
}

bool Oper::Chassis::Brief::ChassisSerial::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (brief_data !=  nullptr && brief_data->has_operation());
}

std::string Oper::Chassis::Brief::ChassisSerial::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/chassis/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Chassis::Brief::ChassisSerial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis_serial" <<"[serial_number='" <<serial_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Chassis::Brief::ChassisSerial::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Chassis::Brief::ChassisSerial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-data")
    {
        if(brief_data == nullptr)
        {
            brief_data = std::make_shared<Oper::Chassis::Brief::ChassisSerial::BriefData>();
        }
        return brief_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Chassis::Brief::ChassisSerial::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_data != nullptr)
    {
        children["brief-data"] = brief_data;
    }

    return children;
}

void Oper::Chassis::Brief::ChassisSerial::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial_number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Chassis::Brief::ChassisSerial::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial_number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Oper::Chassis::Brief::ChassisSerial::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-data" || name == "serial_number")
        return true;
    return false;
}

Oper::Chassis::Brief::ChassisSerial::BriefData::BriefData()
    :
    racknum{YType::str, "racknum"},
    rack_type{YType::str, "rack_type"},
    rack_state{YType::str, "rack_state"},
    data_plane{YType::str, "data_plane"},
    ctrl_plane{YType::str, "ctrl_plane"}
{

    yang_name = "brief-data"; yang_parent_name = "chassis_serial"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Chassis::Brief::ChassisSerial::BriefData::~BriefData()
{
}

bool Oper::Chassis::Brief::ChassisSerial::BriefData::has_data() const
{
    return racknum.is_set
	|| rack_type.is_set
	|| rack_state.is_set
	|| data_plane.is_set
	|| ctrl_plane.is_set;
}

bool Oper::Chassis::Brief::ChassisSerial::BriefData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(racknum.yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(rack_state.yfilter)
	|| ydk::is_set(data_plane.yfilter)
	|| ydk::is_set(ctrl_plane.yfilter);
}

std::string Oper::Chassis::Brief::ChassisSerial::BriefData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Chassis::Brief::ChassisSerial::BriefData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (racknum.is_set || is_set(racknum.yfilter)) leaf_name_data.push_back(racknum.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (rack_state.is_set || is_set(rack_state.yfilter)) leaf_name_data.push_back(rack_state.get_name_leafdata());
    if (data_plane.is_set || is_set(data_plane.yfilter)) leaf_name_data.push_back(data_plane.get_name_leafdata());
    if (ctrl_plane.is_set || is_set(ctrl_plane.yfilter)) leaf_name_data.push_back(ctrl_plane.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Chassis::Brief::ChassisSerial::BriefData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Chassis::Brief::ChassisSerial::BriefData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Chassis::Brief::ChassisSerial::BriefData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "racknum")
    {
        racknum = value;
        racknum.value_namespace = name_space;
        racknum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_state")
    {
        rack_state = value;
        rack_state.value_namespace = name_space;
        rack_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data_plane")
    {
        data_plane = value;
        data_plane.value_namespace = name_space;
        data_plane.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl_plane")
    {
        ctrl_plane = value;
        ctrl_plane.value_namespace = name_space;
        ctrl_plane.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Chassis::Brief::ChassisSerial::BriefData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "racknum")
    {
        racknum.yfilter = yfilter;
    }
    if(value_path == "rack_type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "rack_state")
    {
        rack_state.yfilter = yfilter;
    }
    if(value_path == "data_plane")
    {
        data_plane.yfilter = yfilter;
    }
    if(value_path == "ctrl_plane")
    {
        ctrl_plane.yfilter = yfilter;
    }
}

bool Oper::Chassis::Brief::ChassisSerial::BriefData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racknum" || name == "rack_type" || name == "rack_state" || name == "data_plane" || name == "ctrl_plane")
        return true;
    return false;
}

Oper::Reload::Reload()
    :
    rack(std::make_shared<Oper::Reload::Rack>())
{
    rack->parent = this;

    yang_name = "reload"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Reload::~Reload()
{
}

bool Oper::Reload::has_data() const
{
    return (rack !=  nullptr && rack->has_data());
}

bool Oper::Reload::has_operation() const
{
    return is_set(yfilter)
	|| (rack !=  nullptr && rack->has_operation());
}

std::string Oper::Reload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        if(rack == nullptr)
        {
            rack = std::make_shared<Oper::Reload::Rack>();
        }
        return rack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rack != nullptr)
    {
        children["rack"] = rack;
    }

    return children;
}

void Oper::Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Oper::Reload::Rack::Rack()
{

    yang_name = "rack"; yang_parent_name = "reload"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Reload::Rack::~Rack()
{
}

bool Oper::Reload::Rack::has_data() const
{
    for (std::size_t index=0; index<racks.size(); index++)
    {
        if(racks[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::Reload::Rack::has_operation() const
{
    for (std::size_t index=0; index<racks.size(); index++)
    {
        if(racks[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::Reload::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reload/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Reload::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Reload::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Reload::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        auto c = std::make_shared<Oper::Reload::Rack::Racks>();
        c->parent = this;
        racks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Reload::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : racks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Reload::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Reload::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Reload::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
}

Oper::Reload::Rack::Racks::Racks()
    :
    rack{YType::str, "rack"}
{

    yang_name = "racks"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Reload::Rack::Racks::~Racks()
{
}

bool Oper::Reload::Rack::Racks::has_data() const
{
    return rack.is_set;
}

bool Oper::Reload::Rack::Racks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter);
}

std::string Oper::Reload::Rack::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reload/rack/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Reload::Rack::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks" <<"[rack='" <<rack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Reload::Rack::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Reload::Rack::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Reload::Rack::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Reload::Rack::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Reload::Rack::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Oper::Reload::Rack::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Oper::RebootHistory::RebootHistory()
    :
    card(std::make_shared<Oper::RebootHistory::Card>())
	,admin_vm(std::make_shared<Oper::RebootHistory::AdminVm>())
	,reverse(std::make_shared<Oper::RebootHistory::Reverse>())
{
    card->parent = this;
    admin_vm->parent = this;
    reverse->parent = this;

    yang_name = "reboot-history"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::~RebootHistory()
{
}

bool Oper::RebootHistory::has_data() const
{
    return (card !=  nullptr && card->has_data())
	|| (admin_vm !=  nullptr && admin_vm->has_data())
	|| (reverse !=  nullptr && reverse->has_data());
}

bool Oper::RebootHistory::has_operation() const
{
    return is_set(yfilter)
	|| (card !=  nullptr && card->has_operation())
	|| (admin_vm !=  nullptr && admin_vm->has_operation())
	|| (reverse !=  nullptr && reverse->has_operation());
}

std::string Oper::RebootHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<Oper::RebootHistory::Card>();
        }
        return card;
    }

    if(child_yang_name == "admin-vm")
    {
        if(admin_vm == nullptr)
        {
            admin_vm = std::make_shared<Oper::RebootHistory::AdminVm>();
        }
        return admin_vm;
    }

    if(child_yang_name == "reverse")
    {
        if(reverse == nullptr)
        {
            reverse = std::make_shared<Oper::RebootHistory::Reverse>();
        }
        return reverse;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card != nullptr)
    {
        children["card"] = card;
    }

    if(admin_vm != nullptr)
    {
        children["admin-vm"] = admin_vm;
    }

    if(reverse != nullptr)
    {
        children["reverse"] = reverse;
    }

    return children;
}

void Oper::RebootHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::RebootHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::RebootHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card" || name == "admin-vm" || name == "reverse")
        return true;
    return false;
}

Oper::RebootHistory::Card::Card()
{

    yang_name = "card"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Card::~Card()
{
}

bool Oper::RebootHistory::Card::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::RebootHistory::Card::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::RebootHistory::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::RebootHistory::Card::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::RebootHistory::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::RebootHistory::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::RebootHistory::Card::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Card::Location::~Location()
{
}

bool Oper::RebootHistory::Card::Location::has_data() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Oper::RebootHistory::Card::Location::has_operation() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Oper::RebootHistory::Card::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/card/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Card::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Card::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Card::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        auto c = std::make_shared<Oper::RebootHistory::Card::Location::Events>();
        c->parent = this;
        events.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Card::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : events)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::Card::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Card::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Card::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "location")
        return true;
    return false;
}

Oper::RebootHistory::Card::Location::Events::Events()
    :
    event_idx{YType::uint32, "event_idx"}
    	,
    event(std::make_shared<Oper::RebootHistory::Card::Location::Events::Event>())
{
    event->parent = this;

    yang_name = "events"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::Card::Location::Events::~Events()
{
}

bool Oper::RebootHistory::Card::Location::Events::has_data() const
{
    return event_idx.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Oper::RebootHistory::Card::Location::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_idx.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Oper::RebootHistory::Card::Location::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events" <<"[event_idx='" <<event_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Card::Location::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_idx.is_set || is_set(event_idx.yfilter)) leaf_name_data.push_back(event_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Card::Location::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Oper::RebootHistory::Card::Location::Events::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Card::Location::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Oper::RebootHistory::Card::Location::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event_idx")
    {
        event_idx = value;
        event_idx.value_namespace = name_space;
        event_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Card::Location::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event_idx")
    {
        event_idx.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Card::Location::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "event_idx")
        return true;
    return false;
}

Oper::RebootHistory::Card::Location::Events::Event::Event()
    :
    timestamp{YType::str, "timestamp"},
    reason_code{YType::uint32, "reason_code"},
    reason{YType::str, "reason"},
    src_loc{YType::str, "src_loc"},
    src_name{YType::str, "src_name"}
{

    yang_name = "event"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::Card::Location::Events::Event::~Event()
{
}

bool Oper::RebootHistory::Card::Location::Events::Event::has_data() const
{
    return timestamp.is_set
	|| reason_code.is_set
	|| reason.is_set
	|| src_loc.is_set
	|| src_name.is_set;
}

bool Oper::RebootHistory::Card::Location::Events::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(reason_code.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(src_loc.yfilter)
	|| ydk::is_set(src_name.yfilter);
}

std::string Oper::RebootHistory::Card::Location::Events::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Card::Location::Events::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (src_loc.is_set || is_set(src_loc.yfilter)) leaf_name_data.push_back(src_loc.get_name_leafdata());
    if (src_name.is_set || is_set(src_name.yfilter)) leaf_name_data.push_back(src_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Card::Location::Events::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Card::Location::Events::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::RebootHistory::Card::Location::Events::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason_code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_loc")
    {
        src_loc = value;
        src_loc.value_namespace = name_space;
        src_loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_name")
    {
        src_name = value;
        src_name.value_namespace = name_space;
        src_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Card::Location::Events::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "reason_code")
    {
        reason_code.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "src_loc")
    {
        src_loc.yfilter = yfilter;
    }
    if(value_path == "src_name")
    {
        src_name.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Card::Location::Events::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "reason_code" || name == "reason" || name == "src_loc" || name == "src_name")
        return true;
    return false;
}

Oper::RebootHistory::AdminVm::AdminVm()
{

    yang_name = "admin-vm"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::AdminVm::~AdminVm()
{
}

bool Oper::RebootHistory::AdminVm::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::RebootHistory::AdminVm::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::RebootHistory::AdminVm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::AdminVm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-vm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::AdminVm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::AdminVm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::RebootHistory::AdminVm::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::AdminVm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::AdminVm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::RebootHistory::AdminVm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::RebootHistory::AdminVm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::RebootHistory::AdminVm::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "admin-vm"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::AdminVm::Location::~Location()
{
}

bool Oper::RebootHistory::AdminVm::Location::has_data() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Oper::RebootHistory::AdminVm::Location::has_operation() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Oper::RebootHistory::AdminVm::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/admin-vm/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::AdminVm::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::AdminVm::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::AdminVm::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        auto c = std::make_shared<Oper::RebootHistory::AdminVm::Location::Events>();
        c->parent = this;
        events.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::AdminVm::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : events)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::AdminVm::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::AdminVm::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::AdminVm::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "location")
        return true;
    return false;
}

Oper::RebootHistory::AdminVm::Location::Events::Events()
    :
    event_idx{YType::uint32, "event_idx"}
    	,
    event(std::make_shared<Oper::RebootHistory::AdminVm::Location::Events::Event>())
{
    event->parent = this;

    yang_name = "events"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::AdminVm::Location::Events::~Events()
{
}

bool Oper::RebootHistory::AdminVm::Location::Events::has_data() const
{
    return event_idx.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Oper::RebootHistory::AdminVm::Location::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_idx.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Oper::RebootHistory::AdminVm::Location::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events" <<"[event_idx='" <<event_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::AdminVm::Location::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_idx.is_set || is_set(event_idx.yfilter)) leaf_name_data.push_back(event_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::AdminVm::Location::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Oper::RebootHistory::AdminVm::Location::Events::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::AdminVm::Location::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Oper::RebootHistory::AdminVm::Location::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event_idx")
    {
        event_idx = value;
        event_idx.value_namespace = name_space;
        event_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::AdminVm::Location::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event_idx")
    {
        event_idx.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::AdminVm::Location::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "event_idx")
        return true;
    return false;
}

Oper::RebootHistory::AdminVm::Location::Events::Event::Event()
    :
    timestamp{YType::str, "timestamp"},
    reason_code{YType::uint32, "reason_code"},
    reason{YType::str, "reason"},
    src_loc{YType::str, "src_loc"},
    src_name{YType::str, "src_name"}
{

    yang_name = "event"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::AdminVm::Location::Events::Event::~Event()
{
}

bool Oper::RebootHistory::AdminVm::Location::Events::Event::has_data() const
{
    return timestamp.is_set
	|| reason_code.is_set
	|| reason.is_set
	|| src_loc.is_set
	|| src_name.is_set;
}

bool Oper::RebootHistory::AdminVm::Location::Events::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(reason_code.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(src_loc.yfilter)
	|| ydk::is_set(src_name.yfilter);
}

std::string Oper::RebootHistory::AdminVm::Location::Events::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::AdminVm::Location::Events::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (src_loc.is_set || is_set(src_loc.yfilter)) leaf_name_data.push_back(src_loc.get_name_leafdata());
    if (src_name.is_set || is_set(src_name.yfilter)) leaf_name_data.push_back(src_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::AdminVm::Location::Events::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::AdminVm::Location::Events::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::RebootHistory::AdminVm::Location::Events::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason_code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_loc")
    {
        src_loc = value;
        src_loc.value_namespace = name_space;
        src_loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_name")
    {
        src_name = value;
        src_name.value_namespace = name_space;
        src_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::AdminVm::Location::Events::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "reason_code")
    {
        reason_code.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "src_loc")
    {
        src_loc.yfilter = yfilter;
    }
    if(value_path == "src_name")
    {
        src_name.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::AdminVm::Location::Events::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "reason_code" || name == "reason" || name == "src_loc" || name == "src_name")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::Reverse()
    :
    card(std::make_shared<Oper::RebootHistory::Reverse::Card>())
	,admin_vm(std::make_shared<Oper::RebootHistory::Reverse::AdminVm>())
{
    card->parent = this;
    admin_vm->parent = this;

    yang_name = "reverse"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Reverse::~Reverse()
{
}

bool Oper::RebootHistory::Reverse::has_data() const
{
    return (card !=  nullptr && card->has_data())
	|| (admin_vm !=  nullptr && admin_vm->has_data());
}

bool Oper::RebootHistory::Reverse::has_operation() const
{
    return is_set(yfilter)
	|| (card !=  nullptr && card->has_operation())
	|| (admin_vm !=  nullptr && admin_vm->has_operation());
}

std::string Oper::RebootHistory::Reverse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Reverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<Oper::RebootHistory::Reverse::Card>();
        }
        return card;
    }

    if(child_yang_name == "admin-vm")
    {
        if(admin_vm == nullptr)
        {
            admin_vm = std::make_shared<Oper::RebootHistory::Reverse::AdminVm>();
        }
        return admin_vm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card != nullptr)
    {
        children["card"] = card;
    }

    if(admin_vm != nullptr)
    {
        children["admin-vm"] = admin_vm;
    }

    return children;
}

void Oper::RebootHistory::Reverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::RebootHistory::Reverse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::RebootHistory::Reverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card" || name == "admin-vm")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::Card::Card()
{

    yang_name = "card"; yang_parent_name = "reverse"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Reverse::Card::~Card()
{
}

bool Oper::RebootHistory::Reverse::Card::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::RebootHistory::Reverse::Card::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::RebootHistory::Reverse::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/reverse/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Reverse::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::RebootHistory::Reverse::Card::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::Reverse::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::RebootHistory::Reverse::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::RebootHistory::Reverse::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::Card::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Reverse::Card::Location::~Location()
{
}

bool Oper::RebootHistory::Reverse::Card::Location::has_data() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Oper::RebootHistory::Reverse::Card::Location::has_operation() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Oper::RebootHistory::Reverse::Card::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/reverse/card/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Reverse::Card::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::Card::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::Card::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        auto c = std::make_shared<Oper::RebootHistory::Reverse::Card::Location::Events>();
        c->parent = this;
        events.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::Card::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : events)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::Reverse::Card::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Reverse::Card::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Reverse::Card::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "location")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::Card::Location::Events::Events()
    :
    event_idx{YType::uint32, "event_idx"}
    	,
    event(std::make_shared<Oper::RebootHistory::Reverse::Card::Location::Events::Event>())
{
    event->parent = this;

    yang_name = "events"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::Reverse::Card::Location::Events::~Events()
{
}

bool Oper::RebootHistory::Reverse::Card::Location::Events::has_data() const
{
    return event_idx.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Oper::RebootHistory::Reverse::Card::Location::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_idx.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Oper::RebootHistory::Reverse::Card::Location::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events" <<"[event_idx='" <<event_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::Card::Location::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_idx.is_set || is_set(event_idx.yfilter)) leaf_name_data.push_back(event_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::Card::Location::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Oper::RebootHistory::Reverse::Card::Location::Events::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::Card::Location::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Oper::RebootHistory::Reverse::Card::Location::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event_idx")
    {
        event_idx = value;
        event_idx.value_namespace = name_space;
        event_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Reverse::Card::Location::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event_idx")
    {
        event_idx.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Reverse::Card::Location::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "event_idx")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::Card::Location::Events::Event::Event()
    :
    timestamp{YType::str, "timestamp"},
    reason_code{YType::uint32, "reason_code"},
    reason{YType::str, "reason"},
    src_loc{YType::str, "src_loc"},
    src_name{YType::str, "src_name"}
{

    yang_name = "event"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::Reverse::Card::Location::Events::Event::~Event()
{
}

bool Oper::RebootHistory::Reverse::Card::Location::Events::Event::has_data() const
{
    return timestamp.is_set
	|| reason_code.is_set
	|| reason.is_set
	|| src_loc.is_set
	|| src_name.is_set;
}

bool Oper::RebootHistory::Reverse::Card::Location::Events::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(reason_code.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(src_loc.yfilter)
	|| ydk::is_set(src_name.yfilter);
}

std::string Oper::RebootHistory::Reverse::Card::Location::Events::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::Card::Location::Events::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (src_loc.is_set || is_set(src_loc.yfilter)) leaf_name_data.push_back(src_loc.get_name_leafdata());
    if (src_name.is_set || is_set(src_name.yfilter)) leaf_name_data.push_back(src_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::Card::Location::Events::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::Card::Location::Events::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::RebootHistory::Reverse::Card::Location::Events::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason_code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_loc")
    {
        src_loc = value;
        src_loc.value_namespace = name_space;
        src_loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_name")
    {
        src_name = value;
        src_name.value_namespace = name_space;
        src_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Reverse::Card::Location::Events::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "reason_code")
    {
        reason_code.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "src_loc")
    {
        src_loc.yfilter = yfilter;
    }
    if(value_path == "src_name")
    {
        src_name.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Reverse::Card::Location::Events::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "reason_code" || name == "reason" || name == "src_loc" || name == "src_name")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::AdminVm::AdminVm()
{

    yang_name = "admin-vm"; yang_parent_name = "reverse"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Reverse::AdminVm::~AdminVm()
{
}

bool Oper::RebootHistory::Reverse::AdminVm::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::RebootHistory::Reverse::AdminVm::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::RebootHistory::Reverse::AdminVm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/reverse/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Reverse::AdminVm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-vm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::AdminVm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::AdminVm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::RebootHistory::Reverse::AdminVm::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::AdminVm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::Reverse::AdminVm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::RebootHistory::Reverse::AdminVm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::RebootHistory::Reverse::AdminVm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::AdminVm::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "admin-vm"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::RebootHistory::Reverse::AdminVm::Location::~Location()
{
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::has_data() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::has_operation() const
{
    for (std::size_t index=0; index<events.size(); index++)
    {
        if(events[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Oper::RebootHistory::Reverse::AdminVm::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reboot-history/reverse/admin-vm/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::RebootHistory::Reverse::AdminVm::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::AdminVm::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::AdminVm::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        auto c = std::make_shared<Oper::RebootHistory::Reverse::AdminVm::Location::Events>();
        c->parent = this;
        events.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::AdminVm::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : events)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::RebootHistory::Reverse::AdminVm::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Reverse::AdminVm::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "location")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::AdminVm::Location::Events::Events()
    :
    event_idx{YType::uint32, "event_idx"}
    	,
    event(std::make_shared<Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event>())
{
    event->parent = this;

    yang_name = "events"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::Reverse::AdminVm::Location::Events::~Events()
{
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::Events::has_data() const
{
    return event_idx.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_idx.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Oper::RebootHistory::Reverse::AdminVm::Location::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events" <<"[event_idx='" <<event_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::AdminVm::Location::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_idx.is_set || is_set(event_idx.yfilter)) leaf_name_data.push_back(event_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::AdminVm::Location::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::AdminVm::Location::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Oper::RebootHistory::Reverse::AdminVm::Location::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event_idx")
    {
        event_idx = value;
        event_idx.value_namespace = name_space;
        event_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Reverse::AdminVm::Location::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event_idx")
    {
        event_idx.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "event_idx")
        return true;
    return false;
}

Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::Event()
    :
    timestamp{YType::str, "timestamp"},
    reason_code{YType::uint32, "reason_code"},
    reason{YType::str, "reason"},
    src_loc{YType::str, "src_loc"},
    src_name{YType::str, "src_name"}
{

    yang_name = "event"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::~Event()
{
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::has_data() const
{
    return timestamp.is_set
	|| reason_code.is_set
	|| reason.is_set
	|| src_loc.is_set
	|| src_name.is_set;
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(reason_code.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(src_loc.yfilter)
	|| ydk::is_set(src_name.yfilter);
}

std::string Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (src_loc.is_set || is_set(src_loc.yfilter)) leaf_name_data.push_back(src_loc.get_name_leafdata());
    if (src_name.is_set || is_set(src_name.yfilter)) leaf_name_data.push_back(src_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason_code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_loc")
    {
        src_loc = value;
        src_loc.value_namespace = name_space;
        src_loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src_name")
    {
        src_name = value;
        src_name.value_namespace = name_space;
        src_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "reason_code")
    {
        reason_code.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "src_loc")
    {
        src_loc.yfilter = yfilter;
    }
    if(value_path == "src_name")
    {
        src_name.yfilter = yfilter;
    }
}

bool Oper::RebootHistory::Reverse::AdminVm::Location::Events::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "reason_code" || name == "reason" || name == "src_loc" || name == "src_name")
        return true;
    return false;
}

Oper::Interface::Interface()
    :
    ifname{YType::str, "ifname"}
    	,
    interface_data(std::make_shared<Oper::Interface::InterfaceData>())
{
    interface_data->parent = this;

    yang_name = "interface"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Interface::~Interface()
{
}

bool Oper::Interface::has_data() const
{
    return ifname.is_set
	|| (interface_data !=  nullptr && interface_data->has_data());
}

bool Oper::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| (interface_data !=  nullptr && interface_data->has_operation());
}

std::string Oper::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[ifname='" <<ifname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-data")
    {
        if(interface_data == nullptr)
        {
            interface_data = std::make_shared<Oper::Interface::InterfaceData>();
        }
        return interface_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_data != nullptr)
    {
        children["interface-data"] = interface_data;
    }

    return children;
}

void Oper::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
}

bool Oper::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-data" || name == "ifname")
        return true;
    return false;
}

Oper::Interface::InterfaceData::InterfaceData()
    :
    mac{YType::str, "mac"},
    ipv4{YType::str, "ipv4"},
    flagstr{YType::str, "flagstr"},
    port_status{YType::str, "port_status"},
    mtu{YType::uint32, "mtu"},
    metric{YType::uint32, "metric"},
    rx_pak{YType::uint32, "rx_pak"},
    rx_errors{YType::uint32, "rx_errors"},
    rx_dropped{YType::uint32, "rx_dropped"},
    rx_overruns{YType::uint32, "rx_overruns"},
    rx_frame{YType::uint32, "rx_frame"},
    tx_pak{YType::uint32, "tx_pak"},
    tx_errors{YType::uint32, "tx_errors"},
    tx_dropped{YType::uint32, "tx_dropped"},
    tx_overruns{YType::uint32, "tx_overruns"},
    tx_carrier{YType::uint32, "tx_carrier"},
    collisions{YType::uint32, "collisions"},
    tx_queuelen{YType::uint32, "tx_queuelen"},
    rx_bytes{YType::uint64, "rx_bytes"},
    tx_bytes{YType::uint64, "tx_bytes"},
    intf_num{YType::uint32, "intf_num"}
{

    yang_name = "interface-data"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Interface::InterfaceData::~InterfaceData()
{
}

bool Oper::Interface::InterfaceData::has_data() const
{
    return mac.is_set
	|| ipv4.is_set
	|| flagstr.is_set
	|| port_status.is_set
	|| mtu.is_set
	|| metric.is_set
	|| rx_pak.is_set
	|| rx_errors.is_set
	|| rx_dropped.is_set
	|| rx_overruns.is_set
	|| rx_frame.is_set
	|| tx_pak.is_set
	|| tx_errors.is_set
	|| tx_dropped.is_set
	|| tx_overruns.is_set
	|| tx_carrier.is_set
	|| collisions.is_set
	|| tx_queuelen.is_set
	|| rx_bytes.is_set
	|| tx_bytes.is_set
	|| intf_num.is_set;
}

bool Oper::Interface::InterfaceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(flagstr.yfilter)
	|| ydk::is_set(port_status.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(rx_pak.yfilter)
	|| ydk::is_set(rx_errors.yfilter)
	|| ydk::is_set(rx_dropped.yfilter)
	|| ydk::is_set(rx_overruns.yfilter)
	|| ydk::is_set(rx_frame.yfilter)
	|| ydk::is_set(tx_pak.yfilter)
	|| ydk::is_set(tx_errors.yfilter)
	|| ydk::is_set(tx_dropped.yfilter)
	|| ydk::is_set(tx_overruns.yfilter)
	|| ydk::is_set(tx_carrier.yfilter)
	|| ydk::is_set(collisions.yfilter)
	|| ydk::is_set(tx_queuelen.yfilter)
	|| ydk::is_set(rx_bytes.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(intf_num.yfilter);
}

std::string Oper::Interface::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Interface::InterfaceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (flagstr.is_set || is_set(flagstr.yfilter)) leaf_name_data.push_back(flagstr.get_name_leafdata());
    if (port_status.is_set || is_set(port_status.yfilter)) leaf_name_data.push_back(port_status.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (rx_pak.is_set || is_set(rx_pak.yfilter)) leaf_name_data.push_back(rx_pak.get_name_leafdata());
    if (rx_errors.is_set || is_set(rx_errors.yfilter)) leaf_name_data.push_back(rx_errors.get_name_leafdata());
    if (rx_dropped.is_set || is_set(rx_dropped.yfilter)) leaf_name_data.push_back(rx_dropped.get_name_leafdata());
    if (rx_overruns.is_set || is_set(rx_overruns.yfilter)) leaf_name_data.push_back(rx_overruns.get_name_leafdata());
    if (rx_frame.is_set || is_set(rx_frame.yfilter)) leaf_name_data.push_back(rx_frame.get_name_leafdata());
    if (tx_pak.is_set || is_set(tx_pak.yfilter)) leaf_name_data.push_back(tx_pak.get_name_leafdata());
    if (tx_errors.is_set || is_set(tx_errors.yfilter)) leaf_name_data.push_back(tx_errors.get_name_leafdata());
    if (tx_dropped.is_set || is_set(tx_dropped.yfilter)) leaf_name_data.push_back(tx_dropped.get_name_leafdata());
    if (tx_overruns.is_set || is_set(tx_overruns.yfilter)) leaf_name_data.push_back(tx_overruns.get_name_leafdata());
    if (tx_carrier.is_set || is_set(tx_carrier.yfilter)) leaf_name_data.push_back(tx_carrier.get_name_leafdata());
    if (collisions.is_set || is_set(collisions.yfilter)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (tx_queuelen.is_set || is_set(tx_queuelen.yfilter)) leaf_name_data.push_back(tx_queuelen.get_name_leafdata());
    if (rx_bytes.is_set || is_set(rx_bytes.yfilter)) leaf_name_data.push_back(rx_bytes.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (intf_num.is_set || is_set(intf_num.yfilter)) leaf_name_data.push_back(intf_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Interface::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Interface::InterfaceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Interface::InterfaceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flagstr")
    {
        flagstr = value;
        flagstr.value_namespace = name_space;
        flagstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port_status")
    {
        port_status = value;
        port_status.value_namespace = name_space;
        port_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pak")
    {
        rx_pak = value;
        rx_pak.value_namespace = name_space;
        rx_pak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_errors")
    {
        rx_errors = value;
        rx_errors.value_namespace = name_space;
        rx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_dropped")
    {
        rx_dropped = value;
        rx_dropped.value_namespace = name_space;
        rx_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_overruns")
    {
        rx_overruns = value;
        rx_overruns.value_namespace = name_space;
        rx_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_frame")
    {
        rx_frame = value;
        rx_frame.value_namespace = name_space;
        rx_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_pak")
    {
        tx_pak = value;
        tx_pak.value_namespace = name_space;
        tx_pak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_errors")
    {
        tx_errors = value;
        tx_errors.value_namespace = name_space;
        tx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_dropped")
    {
        tx_dropped = value;
        tx_dropped.value_namespace = name_space;
        tx_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_overruns")
    {
        tx_overruns = value;
        tx_overruns.value_namespace = name_space;
        tx_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_carrier")
    {
        tx_carrier = value;
        tx_carrier.value_namespace = name_space;
        tx_carrier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collisions")
    {
        collisions = value;
        collisions.value_namespace = name_space;
        collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_queuelen")
    {
        tx_queuelen = value;
        tx_queuelen.value_namespace = name_space;
        tx_queuelen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_bytes")
    {
        rx_bytes = value;
        rx_bytes.value_namespace = name_space;
        rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf_num")
    {
        intf_num = value;
        intf_num.value_namespace = name_space;
        intf_num.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Interface::InterfaceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "flagstr")
    {
        flagstr.yfilter = yfilter;
    }
    if(value_path == "port_status")
    {
        port_status.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "rx_pak")
    {
        rx_pak.yfilter = yfilter;
    }
    if(value_path == "rx_errors")
    {
        rx_errors.yfilter = yfilter;
    }
    if(value_path == "rx_dropped")
    {
        rx_dropped.yfilter = yfilter;
    }
    if(value_path == "rx_overruns")
    {
        rx_overruns.yfilter = yfilter;
    }
    if(value_path == "rx_frame")
    {
        rx_frame.yfilter = yfilter;
    }
    if(value_path == "tx_pak")
    {
        tx_pak.yfilter = yfilter;
    }
    if(value_path == "tx_errors")
    {
        tx_errors.yfilter = yfilter;
    }
    if(value_path == "tx_dropped")
    {
        tx_dropped.yfilter = yfilter;
    }
    if(value_path == "tx_overruns")
    {
        tx_overruns.yfilter = yfilter;
    }
    if(value_path == "tx_carrier")
    {
        tx_carrier.yfilter = yfilter;
    }
    if(value_path == "collisions")
    {
        collisions.yfilter = yfilter;
    }
    if(value_path == "tx_queuelen")
    {
        tx_queuelen.yfilter = yfilter;
    }
    if(value_path == "rx_bytes")
    {
        rx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx_bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "intf_num")
    {
        intf_num.yfilter = yfilter;
    }
}

bool Oper::Interface::InterfaceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ipv4" || name == "flagstr" || name == "port_status" || name == "mtu" || name == "metric" || name == "rx_pak" || name == "rx_errors" || name == "rx_dropped" || name == "rx_overruns" || name == "rx_frame" || name == "tx_pak" || name == "tx_errors" || name == "tx_dropped" || name == "tx_overruns" || name == "tx_carrier" || name == "collisions" || name == "tx_queuelen" || name == "rx_bytes" || name == "tx_bytes" || name == "intf_num")
        return true;
    return false;
}

Oper::ReloadVm::ReloadVm()
{

    yang_name = "reload_vm"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::ReloadVm::~ReloadVm()
{
}

bool Oper::ReloadVm::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::ReloadVm::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::ReloadVm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::ReloadVm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload_vm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ReloadVm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ReloadVm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Oper::ReloadVm::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ReloadVm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::ReloadVm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::ReloadVm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::ReloadVm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::ReloadVm::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "reload_vm"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::ReloadVm::Location::~Location()
{
}

bool Oper::ReloadVm::Location::has_data() const
{
    return location.is_set;
}

bool Oper::ReloadVm::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Oper::ReloadVm::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/reload_vm/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::ReloadVm::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::ReloadVm::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::ReloadVm::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::ReloadVm::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::ReloadVm::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::ReloadVm::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Oper::ReloadVm::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Oper::Macpool::Macpool()
    :
    brief(std::make_shared<Oper::Macpool::Brief>())
{
    brief->parent = this;

    yang_name = "macpool"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Macpool::~Macpool()
{
}

bool Oper::Macpool::has_data() const
{
    return (brief !=  nullptr && brief->has_data());
}

bool Oper::Macpool::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation());
}

std::string Oper::Macpool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Macpool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macpool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Macpool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Macpool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Oper::Macpool::Brief>();
        }
        return brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Macpool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    return children;
}

void Oper::Macpool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Macpool::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Macpool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief")
        return true;
    return false;
}

Oper::Macpool::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "macpool"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Macpool::Brief::~Brief()
{
}

bool Oper::Macpool::Brief::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::Macpool::Brief::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::Macpool::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/macpool/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Macpool::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Macpool::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Macpool::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Oper::Macpool::Brief::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Macpool::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oper::Macpool::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::Macpool::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::Macpool::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Oper::Macpool::Brief::Rack::Rack()
    :
    serial_number{YType::str, "serial_number"}
    	,
    brief_data(std::make_shared<Oper::Macpool::Brief::Rack::BriefData>())
{
    brief_data->parent = this;

    yang_name = "rack"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

Oper::Macpool::Brief::Rack::~Rack()
{
}

bool Oper::Macpool::Brief::Rack::has_data() const
{
    return serial_number.is_set
	|| (brief_data !=  nullptr && brief_data->has_data());
}

bool Oper::Macpool::Brief::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (brief_data !=  nullptr && brief_data->has_operation());
}

std::string Oper::Macpool::Brief::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:oper/macpool/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Macpool::Brief::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[serial_number='" <<serial_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Macpool::Brief::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Macpool::Brief::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-data")
    {
        if(brief_data == nullptr)
        {
            brief_data = std::make_shared<Oper::Macpool::Brief::Rack::BriefData>();
        }
        return brief_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Macpool::Brief::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_data != nullptr)
    {
        children["brief-data"] = brief_data;
    }

    return children;
}

void Oper::Macpool::Brief::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial_number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Macpool::Brief::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial_number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Oper::Macpool::Brief::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-data" || name == "serial_number")
        return true;
    return false;
}

Oper::Macpool::Brief::Rack::BriefData::BriefData()
    :
    racknum{YType::str, "racknum"},
    mac_base{YType::str, "mac_base"},
    mac_count{YType::uint32, "mac_count"},
    is_selected{YType::boolean, "is_selected"},
    allocated_count{YType::uint32, "allocated_count"}
{

    yang_name = "brief-data"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

Oper::Macpool::Brief::Rack::BriefData::~BriefData()
{
}

bool Oper::Macpool::Brief::Rack::BriefData::has_data() const
{
    return racknum.is_set
	|| mac_base.is_set
	|| mac_count.is_set
	|| is_selected.is_set
	|| allocated_count.is_set;
}

bool Oper::Macpool::Brief::Rack::BriefData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(racknum.yfilter)
	|| ydk::is_set(mac_base.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(is_selected.yfilter)
	|| ydk::is_set(allocated_count.yfilter);
}

std::string Oper::Macpool::Brief::Rack::BriefData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Macpool::Brief::Rack::BriefData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (racknum.is_set || is_set(racknum.yfilter)) leaf_name_data.push_back(racknum.get_name_leafdata());
    if (mac_base.is_set || is_set(mac_base.yfilter)) leaf_name_data.push_back(mac_base.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (is_selected.is_set || is_set(is_selected.yfilter)) leaf_name_data.push_back(is_selected.get_name_leafdata());
    if (allocated_count.is_set || is_set(allocated_count.yfilter)) leaf_name_data.push_back(allocated_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oper::Macpool::Brief::Rack::BriefData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oper::Macpool::Brief::Rack::BriefData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oper::Macpool::Brief::Rack::BriefData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "racknum")
    {
        racknum = value;
        racknum.value_namespace = name_space;
        racknum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac_base")
    {
        mac_base = value;
        mac_base.value_namespace = name_space;
        mac_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac_count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_selected")
    {
        is_selected = value;
        is_selected.value_namespace = name_space;
        is_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated_count")
    {
        allocated_count = value;
        allocated_count.value_namespace = name_space;
        allocated_count.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Macpool::Brief::Rack::BriefData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "racknum")
    {
        racknum.yfilter = yfilter;
    }
    if(value_path == "mac_base")
    {
        mac_base.yfilter = yfilter;
    }
    if(value_path == "mac_count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "is_selected")
    {
        is_selected.yfilter = yfilter;
    }
    if(value_path == "allocated_count")
    {
        allocated_count.yfilter = yfilter;
    }
}

bool Oper::Macpool::Brief::Rack::BriefData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racknum" || name == "mac_base" || name == "mac_count" || name == "is_selected" || name == "allocated_count")
        return true;
    return false;
}

Config::Config()
    :
    chassis(std::make_shared<Config::Chassis>())
	,interface(std::make_shared<Config::Interface>())
	,domain(std::make_shared<Config::Domain>())
	,virtual_macaddr_range(std::make_shared<Config::VirtualMacaddrRange>())
{
    chassis->parent = this;
    interface->parent = this;
    domain->parent = this;
    virtual_macaddr_range->parent = this;

    yang_name = "config"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sm"; is_top_level_class = true; has_list_ancestor = false;
}

Config::~Config()
{
}

bool Config::has_data() const
{
    return (chassis !=  nullptr && chassis->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (virtual_macaddr_range !=  nullptr && virtual_macaddr_range->has_data());
}

bool Config::has_operation() const
{
    return is_set(yfilter)
	|| (chassis !=  nullptr && chassis->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (virtual_macaddr_range !=  nullptr && virtual_macaddr_range->has_operation());
}

std::string Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Config::Chassis>();
        }
        return chassis;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Config::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Config::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "virtual-macaddr-range")
    {
        if(virtual_macaddr_range == nullptr)
        {
            virtual_macaddr_range = std::make_shared<Config::VirtualMacaddrRange>();
        }
        return virtual_macaddr_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(chassis != nullptr)
    {
        children["chassis"] = chassis;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(virtual_macaddr_range != nullptr)
    {
        children["virtual-macaddr-range"] = virtual_macaddr_range;
    }

    return children;
}

void Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Config::clone_ptr() const
{
    return std::make_shared<Config>();
}

std::string Config::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Config::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Config::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Config::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis" || name == "interface" || name == "domain" || name == "virtual-macaddr-range")
        return true;
    return false;
}

Config::Chassis::Chassis()
{

    yang_name = "chassis"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Chassis::~Chassis()
{
}

bool Config::Chassis::has_data() const
{
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Chassis::has_operation() const
{
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Chassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serial")
    {
        auto c = std::make_shared<Config::Chassis::Serial>();
        c->parent = this;
        serial.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : serial)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Config::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial")
        return true;
    return false;
}

Config::Chassis::Serial::Serial()
    :
    serial{YType::str, "serial"},
    rack{YType::str, "rack"}
{

    yang_name = "serial"; yang_parent_name = "chassis"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Chassis::Serial::~Serial()
{
}

bool Config::Chassis::Serial::has_data() const
{
    return serial.is_set
	|| rack.is_set;
}

bool Config::Chassis::Serial::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(rack.yfilter);
}

std::string Config::Chassis::Serial::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/chassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Chassis::Serial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial" <<"[serial='" <<serial <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Chassis::Serial::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Chassis::Serial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Chassis::Serial::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::Chassis::Serial::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Chassis::Serial::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Config::Chassis::Serial::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial" || name == "rack")
        return true;
    return false;
}

Config::Interface::Interface()
    :
    mgmteth(std::make_shared<Config::Interface::MgmtEth>())
{
    mgmteth->parent = this;

    yang_name = "interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Interface::~Interface()
{
}

bool Config::Interface::has_data() const
{
    return (mgmteth !=  nullptr && mgmteth->has_data());
}

bool Config::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (mgmteth !=  nullptr && mgmteth->has_operation());
}

std::string Config::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtEth")
    {
        if(mgmteth == nullptr)
        {
            mgmteth = std::make_shared<Config::Interface::MgmtEth>();
        }
        return mgmteth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mgmteth != nullptr)
    {
        children["MgmtEth"] = mgmteth;
    }

    return children;
}

void Config::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtEth")
        return true;
    return false;
}

Config::Interface::MgmtEth::MgmtEth()
{

    yang_name = "MgmtEth"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Interface::MgmtEth::~MgmtEth()
{
}

bool Config::Interface::MgmtEth::has_data() const
{
    for (std::size_t index=0; index<locport.size(); index++)
    {
        if(locport[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Interface::MgmtEth::has_operation() const
{
    for (std::size_t index=0; index<locport.size(); index++)
    {
        if(locport[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Interface::MgmtEth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Interface::MgmtEth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtEth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Interface::MgmtEth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Interface::MgmtEth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locport")
    {
        auto c = std::make_shared<Config::Interface::MgmtEth::Locport>();
        c->parent = this;
        locport.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Interface::MgmtEth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : locport)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Config::Interface::MgmtEth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Interface::MgmtEth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Interface::MgmtEth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locport")
        return true;
    return false;
}

Config::Interface::MgmtEth::Locport::Locport()
    :
    rack{YType::str, "rack"},
    slot{YType::str, "slot"},
    intf{YType::uint32, "intf"},
    port{YType::uint32, "port"},
    shutdown{YType::empty, "shutdown"},
    mtu{YType::uint32, "mtu"},
    default_gw{YType::str, "default-gw"}
    	,
    ipv4(std::make_shared<Config::Interface::MgmtEth::Locport::Ipv4>())
	,arp(std::make_shared<Config::Interface::MgmtEth::Locport::Arp>())
{
    ipv4->parent = this;
    arp->parent = this;

    yang_name = "locport"; yang_parent_name = "MgmtEth"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Interface::MgmtEth::Locport::~Locport()
{
}

bool Config::Interface::MgmtEth::Locport::has_data() const
{
    return rack.is_set
	|| slot.is_set
	|| intf.is_set
	|| port.is_set
	|| shutdown.is_set
	|| mtu.is_set
	|| default_gw.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (arp !=  nullptr && arp->has_data());
}

bool Config::Interface::MgmtEth::Locport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(default_gw.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (arp !=  nullptr && arp->has_operation());
}

std::string Config::Interface::MgmtEth::Locport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/interface/MgmtEth/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Interface::MgmtEth::Locport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locport" <<"[rack='" <<rack <<"']" <<"[slot='" <<slot <<"']" <<"[intf='" <<intf <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Interface::MgmtEth::Locport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (default_gw.is_set || is_set(default_gw.yfilter)) leaf_name_data.push_back(default_gw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Interface::MgmtEth::Locport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Config::Interface::MgmtEth::Locport::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Config::Interface::MgmtEth::Locport::Arp>();
        }
        return arp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Interface::MgmtEth::Locport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    return children;
}

void Config::Interface::MgmtEth::Locport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-gw")
    {
        default_gw = value;
        default_gw.value_namespace = name_space;
        default_gw.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Interface::MgmtEth::Locport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "default-gw")
    {
        default_gw.yfilter = yfilter;
    }
}

bool Config::Interface::MgmtEth::Locport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "arp" || name == "rack" || name == "slot" || name == "intf" || name == "port" || name == "shutdown" || name == "mtu" || name == "default-gw")
        return true;
    return false;
}

Config::Interface::MgmtEth::Locport::Ipv4::Ipv4()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "locport"; is_top_level_class = false; has_list_ancestor = true;
}

Config::Interface::MgmtEth::Locport::Ipv4::~Ipv4()
{
}

bool Config::Interface::MgmtEth::Locport::Ipv4::has_data() const
{
    return address.is_set;
}

bool Config::Interface::MgmtEth::Locport::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Config::Interface::MgmtEth::Locport::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Interface::MgmtEth::Locport::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Interface::MgmtEth::Locport::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Interface::MgmtEth::Locport::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::Interface::MgmtEth::Locport::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Interface::MgmtEth::Locport::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Config::Interface::MgmtEth::Locport::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Config::Interface::MgmtEth::Locport::Arp::Arp()
{

    yang_name = "arp"; yang_parent_name = "locport"; is_top_level_class = false; has_list_ancestor = true;
}

Config::Interface::MgmtEth::Locport::Arp::~Arp()
{
}

bool Config::Interface::MgmtEth::Locport::Arp::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Interface::MgmtEth::Locport::Arp::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Interface::MgmtEth::Locport::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Interface::MgmtEth::Locport::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Interface::MgmtEth::Locport::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        auto c = std::make_shared<Config::Interface::MgmtEth::Locport::Arp::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Interface::MgmtEth::Locport::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ip)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Config::Interface::MgmtEth::Locport::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Interface::MgmtEth::Locport::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Interface::MgmtEth::Locport::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Config::Interface::MgmtEth::Locport::Arp::Ip::Ip()
    :
    ip{YType::str, "ip"},
    mac{YType::str, "mac"}
{

    yang_name = "ip"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Config::Interface::MgmtEth::Locport::Arp::Ip::~Ip()
{
}

bool Config::Interface::MgmtEth::Locport::Arp::Ip::has_data() const
{
    return ip.is_set
	|| mac.is_set;
}

bool Config::Interface::MgmtEth::Locport::Arp::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Config::Interface::MgmtEth::Locport::Arp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Interface::MgmtEth::Locport::Arp::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Interface::MgmtEth::Locport::Arp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Interface::MgmtEth::Locport::Arp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::Interface::MgmtEth::Locport::Arp::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Interface::MgmtEth::Locport::Arp::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Config::Interface::MgmtEth::Locport::Arp::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac")
        return true;
    return false;
}

Config::Domain::Domain()
{

    yang_name = "domain"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Domain::~Domain()
{
}

bool Config::Domain::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name_server.size(); index++)
    {
        if(name_server[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Domain::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name_server.size(); index++)
    {
        if(name_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto c = std::make_shared<Config::Domain::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    if(child_yang_name == "name-server")
    {
        auto c = std::make_shared<Config::Domain::NameServer>();
        c->parent = this;
        name_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : name_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Config::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "name-server")
        return true;
    return false;
}

Config::Domain::Name::Name()
    :
    name{YType::str, "name"}
{

    yang_name = "name"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Domain::Name::~Name()
{
}

bool Config::Domain::Name::has_data() const
{
    return name.is_set;
}

bool Config::Domain::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Config::Domain::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Domain::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Domain::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Domain::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Domain::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::Domain::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Domain::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Config::Domain::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Config::Domain::NameServer::NameServer()
    :
    name_server{YType::str, "name-server"}
{

    yang_name = "name-server"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Config::Domain::NameServer::~NameServer()
{
}

bool Config::Domain::NameServer::has_data() const
{
    return name_server.is_set;
}

bool Config::Domain::NameServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_server.yfilter);
}

std::string Config::Domain::NameServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Domain::NameServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-server" <<"[name-server='" <<name_server <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Domain::NameServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Domain::NameServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Domain::NameServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::Domain::NameServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Domain::NameServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
}

bool Config::Domain::NameServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-server")
        return true;
    return false;
}

Config::VirtualMacaddrRange::VirtualMacaddrRange()
    :
    base{YType::str, "base"},
    count{YType::uint32, "count"}
{

    yang_name = "virtual-macaddr-range"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Config::VirtualMacaddrRange::~VirtualMacaddrRange()
{
}

bool Config::VirtualMacaddrRange::has_data() const
{
    return base.is_set
	|| count.is_set;
}

bool Config::VirtualMacaddrRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(base.yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Config::VirtualMacaddrRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::VirtualMacaddrRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-macaddr-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::VirtualMacaddrRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base.is_set || is_set(base.yfilter)) leaf_name_data.push_back(base.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Config::VirtualMacaddrRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::VirtualMacaddrRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::VirtualMacaddrRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "base")
    {
        base = value;
        base.value_namespace = name_space;
        base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Config::VirtualMacaddrRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "base")
    {
        base.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Config::VirtualMacaddrRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "count")
        return true;
    return false;
}

Actions::Actions()
{

    yang_name = "actions"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sm"; is_top_level_class = true; has_list_ancestor = false;
}

Actions::~Actions()
{
}

bool Actions::has_data() const
{
    return false;
}

bool Actions::has_operation() const
{
    return is_set(yfilter);
}

std::string Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sm:actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Actions::clone_ptr() const
{
    return std::make_shared<Actions>();
}

std::string Actions::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Actions::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Actions::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Actions::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

