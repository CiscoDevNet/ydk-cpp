
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_alarm_mgr.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_alarm_mgr {

AlarmMgr::AlarmMgr()
    :
    brief(std::make_shared<AlarmMgr::Brief>())
	,detail(std::make_shared<AlarmMgr::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "alarm_mgr"; yang_parent_name = "Cisco-IOS-XR-sysadmin-alarm-mgr"; is_top_level_class = true; has_list_ancestor = false;
}

AlarmMgr::~AlarmMgr()
{
}

bool AlarmMgr::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool AlarmMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string AlarmMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<AlarmMgr::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<AlarmMgr::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<AlarmMgr::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::get_children() const
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

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void AlarmMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AlarmMgr::clone_ptr() const
{
    return std::make_shared<AlarmMgr>();
}

std::string AlarmMgr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AlarmMgr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AlarmMgr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AlarmMgr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AlarmMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "brief" || name == "detail")
        return true;
    return false;
}

AlarmMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "alarm_mgr"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Trace::~Trace()
{
}

bool AlarmMgr::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool AlarmMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string AlarmMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AlarmMgr::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Trace::get_children() const
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

void AlarmMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool AlarmMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

AlarmMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Trace::Location::~Location()
{
}

bool AlarmMgr::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AlarmMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AlarmMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<AlarmMgr::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Trace::Location::get_children() const
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

void AlarmMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AlarmMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

AlarmMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool AlarmMgr::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool AlarmMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string AlarmMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<AlarmMgr::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Trace::Location::AllOptions::get_children() const
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

void AlarmMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool AlarmMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

AlarmMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool AlarmMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool AlarmMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string AlarmMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool AlarmMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

AlarmMgr::Brief::Brief()
    :
    card(std::make_shared<AlarmMgr::Brief::Card>())
	,rack(std::make_shared<AlarmMgr::Brief::Rack>())
	,system(std::make_shared<AlarmMgr::Brief::System>())
{
    card->parent = this;
    rack->parent = this;
    system->parent = this;

    yang_name = "brief"; yang_parent_name = "alarm_mgr"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::~Brief()
{
}

bool AlarmMgr::Brief::has_data() const
{
    return (card !=  nullptr && card->has_data())
	|| (rack !=  nullptr && rack->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool AlarmMgr::Brief::has_operation() const
{
    return is_set(yfilter)
	|| (card !=  nullptr && card->has_operation())
	|| (rack !=  nullptr && rack->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string AlarmMgr::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<AlarmMgr::Brief::Card>();
        }
        return card;
    }

    if(child_yang_name == "rack")
    {
        if(rack == nullptr)
        {
            rack = std::make_shared<AlarmMgr::Brief::Rack>();
        }
        return rack;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<AlarmMgr::Brief::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card != nullptr)
    {
        children["card"] = card;
    }

    if(rack != nullptr)
    {
        children["rack"] = rack;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void AlarmMgr::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card" || name == "rack" || name == "system")
        return true;
    return false;
}

AlarmMgr::Brief::Card::Card()
{

    yang_name = "card"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::Card::~Card()
{
}

bool AlarmMgr::Brief::Card::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmMgr::Brief::Card::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmMgr::Brief::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Card::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Card::get_children() const
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

void AlarmMgr::Brief::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Brief::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Brief::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AlarmMgr::Brief::Card::Location::Location()
    :
    locations{YType::str, "locations"}
{

    yang_name = "location"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::Card::Location::~Location()
{
}

bool AlarmMgr::Brief::Card::Location::has_data() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_data())
            return true;
    }
    return locations.is_set;
}

bool AlarmMgr::Brief::Card::Location::has_operation() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locations.yfilter);
}

std::string AlarmMgr::Brief::Card::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/card/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::Card::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[locations='" <<locations <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Card::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locations.is_set || is_set(locations.yfilter)) leaf_name_data.push_back(locations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Card::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Card::Location::Active>();
        c->parent = this;
        active.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Card::Location::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    if(child_yang_name == "suppressed")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Card::Location::Suppressed>();
        c->parent = this;
        suppressed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Card::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : active)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : suppressed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Brief::Card::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locations")
    {
        locations = value;
        locations.value_namespace = name_space;
        locations.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Card::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locations")
    {
        locations.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Card::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed" || name == "locations")
        return true;
    return false;
}

AlarmMgr::Brief::Card::Location::Active::Active()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"}
{

    yang_name = "active"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Brief::Card::Location::Active::~Active()
{
}

bool AlarmMgr::Brief::Card::Location::Active::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set;
}

bool AlarmMgr::Brief::Card::Location::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter);
}

std::string AlarmMgr::Brief::Card::Location::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Card::Location::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Card::Location::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Card::Location::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::Card::Location::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Card::Location::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Card::Location::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time")
        return true;
    return false;
}

AlarmMgr::Brief::Card::Location::History::History()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "history"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Brief::Card::Location::History::~History()
{
}

bool AlarmMgr::Brief::Card::Location::History::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Brief::Card::Location::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Brief::Card::Location::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Card::Location::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Card::Location::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Card::Location::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::Card::Location::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Card::Location::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Card::Location::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Brief::Card::Location::Suppressed::Suppressed()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    suppressed_time{YType::str, "suppressed_time"}
{

    yang_name = "suppressed"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Brief::Card::Location::Suppressed::~Suppressed()
{
}

bool AlarmMgr::Brief::Card::Location::Suppressed::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| suppressed_time.is_set;
}

bool AlarmMgr::Brief::Card::Location::Suppressed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(suppressed_time.yfilter);
}

std::string AlarmMgr::Brief::Card::Location::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Card::Location::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Card::Location::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Card::Location::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::Card::Location::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Card::Location::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Card::Location::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "suppressed_time")
        return true;
    return false;
}

AlarmMgr::Brief::Rack::Rack()
{

    yang_name = "rack"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::Rack::~Rack()
{
}

bool AlarmMgr::Brief::Rack::has_data() const
{
    for (std::size_t index=0; index<rack_locations.size(); index++)
    {
        if(rack_locations[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmMgr::Brief::Rack::has_operation() const
{
    for (std::size_t index=0; index<rack_locations.size(); index++)
    {
        if(rack_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmMgr::Brief::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_locations")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Rack::RackLocations>();
        c->parent = this;
        rack_locations.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rack_locations)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Brief::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Brief::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Brief::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_locations")
        return true;
    return false;
}

AlarmMgr::Brief::Rack::RackLocations::RackLocations()
    :
    rackid{YType::uint32, "rackid"}
{

    yang_name = "rack_locations"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::Rack::RackLocations::~RackLocations()
{
}

bool AlarmMgr::Brief::Rack::RackLocations::has_data() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_data())
            return true;
    }
    return rackid.is_set;
}

bool AlarmMgr::Brief::Rack::RackLocations::has_operation() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string AlarmMgr::Brief::Rack::RackLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/rack/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::Rack::RackLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_locations" <<"[rackid='" <<rackid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Rack::RackLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Rack::RackLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Rack::RackLocations::Active>();
        c->parent = this;
        active.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Rack::RackLocations::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    if(child_yang_name == "suppressed")
    {
        auto c = std::make_shared<AlarmMgr::Brief::Rack::RackLocations::Suppressed>();
        c->parent = this;
        suppressed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Rack::RackLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : active)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : suppressed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Brief::Rack::RackLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackid")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Rack::RackLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackid")
    {
        rackid.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Rack::RackLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed" || name == "rackid")
        return true;
    return false;
}

AlarmMgr::Brief::Rack::RackLocations::Active::Active()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"}
{

    yang_name = "active"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Brief::Rack::RackLocations::Active::~Active()
{
}

bool AlarmMgr::Brief::Rack::RackLocations::Active::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set;
}

bool AlarmMgr::Brief::Rack::RackLocations::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter);
}

std::string AlarmMgr::Brief::Rack::RackLocations::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Rack::RackLocations::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Rack::RackLocations::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Rack::RackLocations::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::Rack::RackLocations::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Rack::RackLocations::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Rack::RackLocations::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time")
        return true;
    return false;
}

AlarmMgr::Brief::Rack::RackLocations::History::History()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "history"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Brief::Rack::RackLocations::History::~History()
{
}

bool AlarmMgr::Brief::Rack::RackLocations::History::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Brief::Rack::RackLocations::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Brief::Rack::RackLocations::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Rack::RackLocations::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Rack::RackLocations::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Rack::RackLocations::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::Rack::RackLocations::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Rack::RackLocations::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Rack::RackLocations::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Brief::Rack::RackLocations::Suppressed::Suppressed()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    suppressed_time{YType::str, "suppressed_time"}
{

    yang_name = "suppressed"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Brief::Rack::RackLocations::Suppressed::~Suppressed()
{
}

bool AlarmMgr::Brief::Rack::RackLocations::Suppressed::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| suppressed_time.is_set;
}

bool AlarmMgr::Brief::Rack::RackLocations::Suppressed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(suppressed_time.yfilter);
}

std::string AlarmMgr::Brief::Rack::RackLocations::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::Rack::RackLocations::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::Rack::RackLocations::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::Rack::RackLocations::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::Rack::RackLocations::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::Rack::RackLocations::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::Rack::RackLocations::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "suppressed_time")
        return true;
    return false;
}

AlarmMgr::Brief::System::System()
{

    yang_name = "system"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::System::~System()
{
}

bool AlarmMgr::Brief::System::has_data() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmMgr::Brief::System::has_operation() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmMgr::Brief::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        auto c = std::make_shared<AlarmMgr::Brief::System::Active>();
        c->parent = this;
        active.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        auto c = std::make_shared<AlarmMgr::Brief::System::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    if(child_yang_name == "suppressed")
    {
        auto c = std::make_shared<AlarmMgr::Brief::System::Suppressed>();
        c->parent = this;
        suppressed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : active)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : suppressed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Brief::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Brief::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Brief::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed")
        return true;
    return false;
}

AlarmMgr::Brief::System::Active::Active()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"}
{

    yang_name = "active"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::System::Active::~Active()
{
}

bool AlarmMgr::Brief::System::Active::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set;
}

bool AlarmMgr::Brief::System::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter);
}

std::string AlarmMgr::Brief::System::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::System::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::System::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::System::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::System::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::System::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::System::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::System::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time")
        return true;
    return false;
}

AlarmMgr::Brief::System::History::History()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "history"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::System::History::~History()
{
}

bool AlarmMgr::Brief::System::History::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Brief::System::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Brief::System::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::System::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::System::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::System::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::System::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::System::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::System::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::System::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Brief::System::Suppressed::Suppressed()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    suppressed_time{YType::str, "suppressed_time"}
{

    yang_name = "suppressed"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Brief::System::Suppressed::~Suppressed()
{
}

bool AlarmMgr::Brief::System::Suppressed::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| suppressed_time.is_set;
}

bool AlarmMgr::Brief::System::Suppressed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(suppressed_time.yfilter);
}

std::string AlarmMgr::Brief::System::Suppressed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/brief/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Brief::System::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Brief::System::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Brief::System::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Brief::System::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Brief::System::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Brief::System::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Brief::System::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "suppressed_time")
        return true;
    return false;
}

AlarmMgr::Detail::Detail()
    :
    card(std::make_shared<AlarmMgr::Detail::Card>())
	,rack(std::make_shared<AlarmMgr::Detail::Rack>())
	,system(std::make_shared<AlarmMgr::Detail::System>())
{
    card->parent = this;
    rack->parent = this;
    system->parent = this;

    yang_name = "detail"; yang_parent_name = "alarm_mgr"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::~Detail()
{
}

bool AlarmMgr::Detail::has_data() const
{
    return (card !=  nullptr && card->has_data())
	|| (rack !=  nullptr && rack->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool AlarmMgr::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (card !=  nullptr && card->has_operation())
	|| (rack !=  nullptr && rack->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string AlarmMgr::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<AlarmMgr::Detail::Card>();
        }
        return card;
    }

    if(child_yang_name == "rack")
    {
        if(rack == nullptr)
        {
            rack = std::make_shared<AlarmMgr::Detail::Rack>();
        }
        return rack;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<AlarmMgr::Detail::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card != nullptr)
    {
        children["card"] = card;
    }

    if(rack != nullptr)
    {
        children["rack"] = rack;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void AlarmMgr::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card" || name == "rack" || name == "system")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Card()
{

    yang_name = "card"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::Card::~Card()
{
}

bool AlarmMgr::Detail::Card::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmMgr::Detail::Card::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmMgr::Detail::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Card::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::get_children() const
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

void AlarmMgr::Detail::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Detail::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Detail::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Location::Location()
    :
    locations{YType::str, "locations"}
{

    yang_name = "location"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::Card::Location::~Location()
{
}

bool AlarmMgr::Detail::Card::Location::has_data() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<clients.size(); index++)
    {
        if(clients[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_data())
            return true;
    }
    return locations.is_set;
}

bool AlarmMgr::Detail::Card::Location::has_operation() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<clients.size(); index++)
    {
        if(clients[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locations.yfilter);
}

std::string AlarmMgr::Detail::Card::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/card/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::Card::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[locations='" <<locations <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locations.is_set || is_set(locations.yfilter)) leaf_name_data.push_back(locations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Card::Location::Active>();
        c->parent = this;
        active.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Card::Location::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    if(child_yang_name == "stats")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Card::Location::Stats>();
        c->parent = this;
        stats.push_back(c);
        return c;
    }

    if(child_yang_name == "clients")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Card::Location::Clients>();
        c->parent = this;
        clients.push_back(c);
        return c;
    }

    if(child_yang_name == "suppressed")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Card::Location::Suppressed>();
        c->parent = this;
        suppressed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : active)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : clients)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : suppressed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Detail::Card::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locations")
    {
        locations = value;
        locations.value_namespace = name_space;
        locations.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Card::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locations")
    {
        locations.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Card::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "stats" || name == "clients" || name == "suppressed" || name == "locations")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Location::Active::Active()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "active"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Card::Location::Active::~Active()
{
}

bool AlarmMgr::Detail::Card::Location::Active::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Detail::Card::Location::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Detail::Card::Location::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::Location::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::Location::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::Location::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Card::Location::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Card::Location::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Card::Location::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Location::History::History()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "history"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Card::Location::History::~History()
{
}

bool AlarmMgr::Detail::Card::Location::History::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Detail::Card::Location::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Detail::Card::Location::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::Location::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::Location::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::Location::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Card::Location::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Card::Location::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Card::Location::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Location::Stats::Stats()
    :
    attime{YType::str, "attime"},
    reported{YType::uint64, "reported"},
    dropped{YType::uint64, "dropped"},
    bi_set{YType::uint64, "bi_set"},
    bi_clear{YType::uint64, "bi_clear"},
    suppressed{YType::uint64, "suppressed"},
    drop_inv_aid{YType::uint64, "drop_inv_aid"},
    drop_no_mem{YType::uint64, "drop_no_mem"},
    drop_db_error{YType::uint64, "drop_db_error"},
    drop_clear_no_set{YType::uint64, "drop_clear_no_set"},
    drop_dup{YType::uint64, "drop_dup"},
    cache_hit{YType::uint64, "cache_hit"},
    cache_miss{YType::uint64, "cache_miss"}
{

    yang_name = "stats"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Card::Location::Stats::~Stats()
{
}

bool AlarmMgr::Detail::Card::Location::Stats::has_data() const
{
    return attime.is_set
	|| reported.is_set
	|| dropped.is_set
	|| bi_set.is_set
	|| bi_clear.is_set
	|| suppressed.is_set
	|| drop_inv_aid.is_set
	|| drop_no_mem.is_set
	|| drop_db_error.is_set
	|| drop_clear_no_set.is_set
	|| drop_dup.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set;
}

bool AlarmMgr::Detail::Card::Location::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attime.yfilter)
	|| ydk::is_set(reported.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(bi_set.yfilter)
	|| ydk::is_set(bi_clear.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(drop_inv_aid.yfilter)
	|| ydk::is_set(drop_no_mem.yfilter)
	|| ydk::is_set(drop_db_error.yfilter)
	|| ydk::is_set(drop_clear_no_set.yfilter)
	|| ydk::is_set(drop_dup.yfilter)
	|| ydk::is_set(cache_hit.yfilter)
	|| ydk::is_set(cache_miss.yfilter);
}

std::string AlarmMgr::Detail::Card::Location::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats" <<"[attime='" <<attime <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::Location::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attime.is_set || is_set(attime.yfilter)) leaf_name_data.push_back(attime.get_name_leafdata());
    if (reported.is_set || is_set(reported.yfilter)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (bi_set.is_set || is_set(bi_set.yfilter)) leaf_name_data.push_back(bi_set.get_name_leafdata());
    if (bi_clear.is_set || is_set(bi_clear.yfilter)) leaf_name_data.push_back(bi_clear.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (drop_inv_aid.is_set || is_set(drop_inv_aid.yfilter)) leaf_name_data.push_back(drop_inv_aid.get_name_leafdata());
    if (drop_no_mem.is_set || is_set(drop_no_mem.yfilter)) leaf_name_data.push_back(drop_no_mem.get_name_leafdata());
    if (drop_db_error.is_set || is_set(drop_db_error.yfilter)) leaf_name_data.push_back(drop_db_error.get_name_leafdata());
    if (drop_clear_no_set.is_set || is_set(drop_clear_no_set.yfilter)) leaf_name_data.push_back(drop_clear_no_set.get_name_leafdata());
    if (drop_dup.is_set || is_set(drop_dup.yfilter)) leaf_name_data.push_back(drop_dup.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.yfilter)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.yfilter)) leaf_name_data.push_back(cache_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::Location::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::Location::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Card::Location::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attime")
    {
        attime = value;
        attime.value_namespace = name_space;
        attime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported")
    {
        reported = value;
        reported.value_namespace = name_space;
        reported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bi_set")
    {
        bi_set = value;
        bi_set.value_namespace = name_space;
        bi_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bi_clear")
    {
        bi_clear = value;
        bi_clear.value_namespace = name_space;
        bi_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_inv_aid")
    {
        drop_inv_aid = value;
        drop_inv_aid.value_namespace = name_space;
        drop_inv_aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_no_mem")
    {
        drop_no_mem = value;
        drop_no_mem.value_namespace = name_space;
        drop_no_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_db_error")
    {
        drop_db_error = value;
        drop_db_error.value_namespace = name_space;
        drop_db_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_clear_no_set")
    {
        drop_clear_no_set = value;
        drop_clear_no_set.value_namespace = name_space;
        drop_clear_no_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_dup")
    {
        drop_dup = value;
        drop_dup.value_namespace = name_space;
        drop_dup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache_hit")
    {
        cache_hit = value;
        cache_hit.value_namespace = name_space;
        cache_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache_miss")
    {
        cache_miss = value;
        cache_miss.value_namespace = name_space;
        cache_miss.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Card::Location::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attime")
    {
        attime.yfilter = yfilter;
    }
    if(value_path == "reported")
    {
        reported.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "bi_set")
    {
        bi_set.yfilter = yfilter;
    }
    if(value_path == "bi_clear")
    {
        bi_clear.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "drop_inv_aid")
    {
        drop_inv_aid.yfilter = yfilter;
    }
    if(value_path == "drop_no_mem")
    {
        drop_no_mem.yfilter = yfilter;
    }
    if(value_path == "drop_db_error")
    {
        drop_db_error.yfilter = yfilter;
    }
    if(value_path == "drop_clear_no_set")
    {
        drop_clear_no_set.yfilter = yfilter;
    }
    if(value_path == "drop_dup")
    {
        drop_dup.yfilter = yfilter;
    }
    if(value_path == "cache_hit")
    {
        cache_hit.yfilter = yfilter;
    }
    if(value_path == "cache_miss")
    {
        cache_miss.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Card::Location::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attime" || name == "reported" || name == "dropped" || name == "bi_set" || name == "bi_clear" || name == "suppressed" || name == "drop_inv_aid" || name == "drop_no_mem" || name == "drop_db_error" || name == "drop_clear_no_set" || name == "drop_dup" || name == "cache_hit" || name == "cache_miss")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Location::Clients::Clients()
    :
    agent_handle{YType::str, "agent_handle"},
    agent_name{YType::str, "agent_name"},
    agent_id{YType::uint32, "agent_id"},
    agent_location{YType::str, "agent_location"},
    agent_state{YType::enumeration, "agent_state"},
    agent_type{YType::enumeration, "agent_type"},
    agent_filter_disp{YType::boolean, "agent_filter_disp"},
    agent_subs_id{YType::uint32, "agent_subs_id"},
    agent_filter_state{YType::enumeration, "agent_filter_state"},
    agent_filter_severity{YType::enumeration, "agent_filter_severity"},
    agent_filter_group{YType::enumeration, "agent_filter_group"},
    agent_sdr_id{YType::uint32, "agent_sdr_id"},
    agent_connect_count{YType::uint64, "agent_connect_count"},
    agent_connect_time{YType::str, "agent_connect_time"},
    agent_get_count{YType::uint64, "agent_get_count"},
    agent_subscribe_count{YType::uint64, "agent_subscribe_count"},
    agent_report_count{YType::uint64, "agent_report_count"}
{

    yang_name = "clients"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Card::Location::Clients::~Clients()
{
}

bool AlarmMgr::Detail::Card::Location::Clients::has_data() const
{
    return agent_handle.is_set
	|| agent_name.is_set
	|| agent_id.is_set
	|| agent_location.is_set
	|| agent_state.is_set
	|| agent_type.is_set
	|| agent_filter_disp.is_set
	|| agent_subs_id.is_set
	|| agent_filter_state.is_set
	|| agent_filter_severity.is_set
	|| agent_filter_group.is_set
	|| agent_sdr_id.is_set
	|| agent_connect_count.is_set
	|| agent_connect_time.is_set
	|| agent_get_count.is_set
	|| agent_subscribe_count.is_set
	|| agent_report_count.is_set;
}

bool AlarmMgr::Detail::Card::Location::Clients::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent_handle.yfilter)
	|| ydk::is_set(agent_name.yfilter)
	|| ydk::is_set(agent_id.yfilter)
	|| ydk::is_set(agent_location.yfilter)
	|| ydk::is_set(agent_state.yfilter)
	|| ydk::is_set(agent_type.yfilter)
	|| ydk::is_set(agent_filter_disp.yfilter)
	|| ydk::is_set(agent_subs_id.yfilter)
	|| ydk::is_set(agent_filter_state.yfilter)
	|| ydk::is_set(agent_filter_severity.yfilter)
	|| ydk::is_set(agent_filter_group.yfilter)
	|| ydk::is_set(agent_sdr_id.yfilter)
	|| ydk::is_set(agent_connect_count.yfilter)
	|| ydk::is_set(agent_connect_time.yfilter)
	|| ydk::is_set(agent_get_count.yfilter)
	|| ydk::is_set(agent_subscribe_count.yfilter)
	|| ydk::is_set(agent_report_count.yfilter);
}

std::string AlarmMgr::Detail::Card::Location::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients" <<"[agent_handle='" <<agent_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::Location::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent_handle.is_set || is_set(agent_handle.yfilter)) leaf_name_data.push_back(agent_handle.get_name_leafdata());
    if (agent_name.is_set || is_set(agent_name.yfilter)) leaf_name_data.push_back(agent_name.get_name_leafdata());
    if (agent_id.is_set || is_set(agent_id.yfilter)) leaf_name_data.push_back(agent_id.get_name_leafdata());
    if (agent_location.is_set || is_set(agent_location.yfilter)) leaf_name_data.push_back(agent_location.get_name_leafdata());
    if (agent_state.is_set || is_set(agent_state.yfilter)) leaf_name_data.push_back(agent_state.get_name_leafdata());
    if (agent_type.is_set || is_set(agent_type.yfilter)) leaf_name_data.push_back(agent_type.get_name_leafdata());
    if (agent_filter_disp.is_set || is_set(agent_filter_disp.yfilter)) leaf_name_data.push_back(agent_filter_disp.get_name_leafdata());
    if (agent_subs_id.is_set || is_set(agent_subs_id.yfilter)) leaf_name_data.push_back(agent_subs_id.get_name_leafdata());
    if (agent_filter_state.is_set || is_set(agent_filter_state.yfilter)) leaf_name_data.push_back(agent_filter_state.get_name_leafdata());
    if (agent_filter_severity.is_set || is_set(agent_filter_severity.yfilter)) leaf_name_data.push_back(agent_filter_severity.get_name_leafdata());
    if (agent_filter_group.is_set || is_set(agent_filter_group.yfilter)) leaf_name_data.push_back(agent_filter_group.get_name_leafdata());
    if (agent_sdr_id.is_set || is_set(agent_sdr_id.yfilter)) leaf_name_data.push_back(agent_sdr_id.get_name_leafdata());
    if (agent_connect_count.is_set || is_set(agent_connect_count.yfilter)) leaf_name_data.push_back(agent_connect_count.get_name_leafdata());
    if (agent_connect_time.is_set || is_set(agent_connect_time.yfilter)) leaf_name_data.push_back(agent_connect_time.get_name_leafdata());
    if (agent_get_count.is_set || is_set(agent_get_count.yfilter)) leaf_name_data.push_back(agent_get_count.get_name_leafdata());
    if (agent_subscribe_count.is_set || is_set(agent_subscribe_count.yfilter)) leaf_name_data.push_back(agent_subscribe_count.get_name_leafdata());
    if (agent_report_count.is_set || is_set(agent_report_count.yfilter)) leaf_name_data.push_back(agent_report_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::Location::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::Location::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Card::Location::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent_handle")
    {
        agent_handle = value;
        agent_handle.value_namespace = name_space;
        agent_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_name")
    {
        agent_name = value;
        agent_name.value_namespace = name_space;
        agent_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_id")
    {
        agent_id = value;
        agent_id.value_namespace = name_space;
        agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_location")
    {
        agent_location = value;
        agent_location.value_namespace = name_space;
        agent_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_state")
    {
        agent_state = value;
        agent_state.value_namespace = name_space;
        agent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_type")
    {
        agent_type = value;
        agent_type.value_namespace = name_space;
        agent_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_disp")
    {
        agent_filter_disp = value;
        agent_filter_disp.value_namespace = name_space;
        agent_filter_disp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_subs_id")
    {
        agent_subs_id = value;
        agent_subs_id.value_namespace = name_space;
        agent_subs_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_state")
    {
        agent_filter_state = value;
        agent_filter_state.value_namespace = name_space;
        agent_filter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_severity")
    {
        agent_filter_severity = value;
        agent_filter_severity.value_namespace = name_space;
        agent_filter_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_group")
    {
        agent_filter_group = value;
        agent_filter_group.value_namespace = name_space;
        agent_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_sdr_id")
    {
        agent_sdr_id = value;
        agent_sdr_id.value_namespace = name_space;
        agent_sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_connect_count")
    {
        agent_connect_count = value;
        agent_connect_count.value_namespace = name_space;
        agent_connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_connect_time")
    {
        agent_connect_time = value;
        agent_connect_time.value_namespace = name_space;
        agent_connect_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_get_count")
    {
        agent_get_count = value;
        agent_get_count.value_namespace = name_space;
        agent_get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_subscribe_count")
    {
        agent_subscribe_count = value;
        agent_subscribe_count.value_namespace = name_space;
        agent_subscribe_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_report_count")
    {
        agent_report_count = value;
        agent_report_count.value_namespace = name_space;
        agent_report_count.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Card::Location::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent_handle")
    {
        agent_handle.yfilter = yfilter;
    }
    if(value_path == "agent_name")
    {
        agent_name.yfilter = yfilter;
    }
    if(value_path == "agent_id")
    {
        agent_id.yfilter = yfilter;
    }
    if(value_path == "agent_location")
    {
        agent_location.yfilter = yfilter;
    }
    if(value_path == "agent_state")
    {
        agent_state.yfilter = yfilter;
    }
    if(value_path == "agent_type")
    {
        agent_type.yfilter = yfilter;
    }
    if(value_path == "agent_filter_disp")
    {
        agent_filter_disp.yfilter = yfilter;
    }
    if(value_path == "agent_subs_id")
    {
        agent_subs_id.yfilter = yfilter;
    }
    if(value_path == "agent_filter_state")
    {
        agent_filter_state.yfilter = yfilter;
    }
    if(value_path == "agent_filter_severity")
    {
        agent_filter_severity.yfilter = yfilter;
    }
    if(value_path == "agent_filter_group")
    {
        agent_filter_group.yfilter = yfilter;
    }
    if(value_path == "agent_sdr_id")
    {
        agent_sdr_id.yfilter = yfilter;
    }
    if(value_path == "agent_connect_count")
    {
        agent_connect_count.yfilter = yfilter;
    }
    if(value_path == "agent_connect_time")
    {
        agent_connect_time.yfilter = yfilter;
    }
    if(value_path == "agent_get_count")
    {
        agent_get_count.yfilter = yfilter;
    }
    if(value_path == "agent_subscribe_count")
    {
        agent_subscribe_count.yfilter = yfilter;
    }
    if(value_path == "agent_report_count")
    {
        agent_report_count.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Card::Location::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent_handle" || name == "agent_name" || name == "agent_id" || name == "agent_location" || name == "agent_state" || name == "agent_type" || name == "agent_filter_disp" || name == "agent_subs_id" || name == "agent_filter_state" || name == "agent_filter_severity" || name == "agent_filter_group" || name == "agent_sdr_id" || name == "agent_connect_count" || name == "agent_connect_time" || name == "agent_get_count" || name == "agent_subscribe_count" || name == "agent_report_count")
        return true;
    return false;
}

AlarmMgr::Detail::Card::Location::Suppressed::Suppressed()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    suppressed_time{YType::str, "suppressed_time"}
{

    yang_name = "suppressed"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Card::Location::Suppressed::~Suppressed()
{
}

bool AlarmMgr::Detail::Card::Location::Suppressed::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| suppressed_time.is_set;
}

bool AlarmMgr::Detail::Card::Location::Suppressed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(suppressed_time.yfilter);
}

std::string AlarmMgr::Detail::Card::Location::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Card::Location::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Card::Location::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Card::Location::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Card::Location::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Card::Location::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Card::Location::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "suppressed_time")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::Rack()
{

    yang_name = "rack"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::Rack::~Rack()
{
}

bool AlarmMgr::Detail::Rack::has_data() const
{
    for (std::size_t index=0; index<rack_locations.size(); index++)
    {
        if(rack_locations[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmMgr::Detail::Rack::has_operation() const
{
    for (std::size_t index=0; index<rack_locations.size(); index++)
    {
        if(rack_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmMgr::Detail::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_locations")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Rack::RackLocations>();
        c->parent = this;
        rack_locations.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rack_locations)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Detail::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Detail::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Detail::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_locations")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::RackLocations::RackLocations()
    :
    rackid{YType::uint32, "rackid"}
{

    yang_name = "rack_locations"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::Rack::RackLocations::~RackLocations()
{
}

bool AlarmMgr::Detail::Rack::RackLocations::has_data() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<clients.size(); index++)
    {
        if(clients[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_data())
            return true;
    }
    return rackid.is_set;
}

bool AlarmMgr::Detail::Rack::RackLocations::has_operation() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<clients.size(); index++)
    {
        if(clients[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string AlarmMgr::Detail::Rack::RackLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/rack/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::Rack::RackLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_locations" <<"[rackid='" <<rackid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::RackLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::RackLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Rack::RackLocations::Active>();
        c->parent = this;
        active.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Rack::RackLocations::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    if(child_yang_name == "stats")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Rack::RackLocations::Stats>();
        c->parent = this;
        stats.push_back(c);
        return c;
    }

    if(child_yang_name == "clients")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Rack::RackLocations::Clients>();
        c->parent = this;
        clients.push_back(c);
        return c;
    }

    if(child_yang_name == "suppressed")
    {
        auto c = std::make_shared<AlarmMgr::Detail::Rack::RackLocations::Suppressed>();
        c->parent = this;
        suppressed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::RackLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : active)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : clients)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : suppressed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Detail::Rack::RackLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackid")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Rack::RackLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackid")
    {
        rackid.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Rack::RackLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "stats" || name == "clients" || name == "suppressed" || name == "rackid")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::RackLocations::Active::Active()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "active"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Rack::RackLocations::Active::~Active()
{
}

bool AlarmMgr::Detail::Rack::RackLocations::Active::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Detail::Rack::RackLocations::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Detail::Rack::RackLocations::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::RackLocations::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::RackLocations::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::RackLocations::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Rack::RackLocations::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Rack::RackLocations::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Rack::RackLocations::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::RackLocations::History::History()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "history"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Rack::RackLocations::History::~History()
{
}

bool AlarmMgr::Detail::Rack::RackLocations::History::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Detail::Rack::RackLocations::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Detail::Rack::RackLocations::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::RackLocations::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::RackLocations::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::RackLocations::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Rack::RackLocations::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Rack::RackLocations::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Rack::RackLocations::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::RackLocations::Stats::Stats()
    :
    attime{YType::str, "attime"},
    reported{YType::uint64, "reported"},
    dropped{YType::uint64, "dropped"},
    bi_set{YType::uint64, "bi_set"},
    bi_clear{YType::uint64, "bi_clear"},
    suppressed{YType::uint64, "suppressed"},
    drop_inv_aid{YType::uint64, "drop_inv_aid"},
    drop_no_mem{YType::uint64, "drop_no_mem"},
    drop_db_error{YType::uint64, "drop_db_error"},
    drop_clear_no_set{YType::uint64, "drop_clear_no_set"},
    drop_dup{YType::uint64, "drop_dup"},
    cache_hit{YType::uint64, "cache_hit"},
    cache_miss{YType::uint64, "cache_miss"}
{

    yang_name = "stats"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Rack::RackLocations::Stats::~Stats()
{
}

bool AlarmMgr::Detail::Rack::RackLocations::Stats::has_data() const
{
    return attime.is_set
	|| reported.is_set
	|| dropped.is_set
	|| bi_set.is_set
	|| bi_clear.is_set
	|| suppressed.is_set
	|| drop_inv_aid.is_set
	|| drop_no_mem.is_set
	|| drop_db_error.is_set
	|| drop_clear_no_set.is_set
	|| drop_dup.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set;
}

bool AlarmMgr::Detail::Rack::RackLocations::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attime.yfilter)
	|| ydk::is_set(reported.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(bi_set.yfilter)
	|| ydk::is_set(bi_clear.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(drop_inv_aid.yfilter)
	|| ydk::is_set(drop_no_mem.yfilter)
	|| ydk::is_set(drop_db_error.yfilter)
	|| ydk::is_set(drop_clear_no_set.yfilter)
	|| ydk::is_set(drop_dup.yfilter)
	|| ydk::is_set(cache_hit.yfilter)
	|| ydk::is_set(cache_miss.yfilter);
}

std::string AlarmMgr::Detail::Rack::RackLocations::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats" <<"[attime='" <<attime <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::RackLocations::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attime.is_set || is_set(attime.yfilter)) leaf_name_data.push_back(attime.get_name_leafdata());
    if (reported.is_set || is_set(reported.yfilter)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (bi_set.is_set || is_set(bi_set.yfilter)) leaf_name_data.push_back(bi_set.get_name_leafdata());
    if (bi_clear.is_set || is_set(bi_clear.yfilter)) leaf_name_data.push_back(bi_clear.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (drop_inv_aid.is_set || is_set(drop_inv_aid.yfilter)) leaf_name_data.push_back(drop_inv_aid.get_name_leafdata());
    if (drop_no_mem.is_set || is_set(drop_no_mem.yfilter)) leaf_name_data.push_back(drop_no_mem.get_name_leafdata());
    if (drop_db_error.is_set || is_set(drop_db_error.yfilter)) leaf_name_data.push_back(drop_db_error.get_name_leafdata());
    if (drop_clear_no_set.is_set || is_set(drop_clear_no_set.yfilter)) leaf_name_data.push_back(drop_clear_no_set.get_name_leafdata());
    if (drop_dup.is_set || is_set(drop_dup.yfilter)) leaf_name_data.push_back(drop_dup.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.yfilter)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.yfilter)) leaf_name_data.push_back(cache_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::RackLocations::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::RackLocations::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Rack::RackLocations::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attime")
    {
        attime = value;
        attime.value_namespace = name_space;
        attime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported")
    {
        reported = value;
        reported.value_namespace = name_space;
        reported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bi_set")
    {
        bi_set = value;
        bi_set.value_namespace = name_space;
        bi_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bi_clear")
    {
        bi_clear = value;
        bi_clear.value_namespace = name_space;
        bi_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_inv_aid")
    {
        drop_inv_aid = value;
        drop_inv_aid.value_namespace = name_space;
        drop_inv_aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_no_mem")
    {
        drop_no_mem = value;
        drop_no_mem.value_namespace = name_space;
        drop_no_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_db_error")
    {
        drop_db_error = value;
        drop_db_error.value_namespace = name_space;
        drop_db_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_clear_no_set")
    {
        drop_clear_no_set = value;
        drop_clear_no_set.value_namespace = name_space;
        drop_clear_no_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_dup")
    {
        drop_dup = value;
        drop_dup.value_namespace = name_space;
        drop_dup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache_hit")
    {
        cache_hit = value;
        cache_hit.value_namespace = name_space;
        cache_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache_miss")
    {
        cache_miss = value;
        cache_miss.value_namespace = name_space;
        cache_miss.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Rack::RackLocations::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attime")
    {
        attime.yfilter = yfilter;
    }
    if(value_path == "reported")
    {
        reported.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "bi_set")
    {
        bi_set.yfilter = yfilter;
    }
    if(value_path == "bi_clear")
    {
        bi_clear.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "drop_inv_aid")
    {
        drop_inv_aid.yfilter = yfilter;
    }
    if(value_path == "drop_no_mem")
    {
        drop_no_mem.yfilter = yfilter;
    }
    if(value_path == "drop_db_error")
    {
        drop_db_error.yfilter = yfilter;
    }
    if(value_path == "drop_clear_no_set")
    {
        drop_clear_no_set.yfilter = yfilter;
    }
    if(value_path == "drop_dup")
    {
        drop_dup.yfilter = yfilter;
    }
    if(value_path == "cache_hit")
    {
        cache_hit.yfilter = yfilter;
    }
    if(value_path == "cache_miss")
    {
        cache_miss.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Rack::RackLocations::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attime" || name == "reported" || name == "dropped" || name == "bi_set" || name == "bi_clear" || name == "suppressed" || name == "drop_inv_aid" || name == "drop_no_mem" || name == "drop_db_error" || name == "drop_clear_no_set" || name == "drop_dup" || name == "cache_hit" || name == "cache_miss")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::RackLocations::Clients::Clients()
    :
    agent_handle{YType::str, "agent_handle"},
    agent_name{YType::str, "agent_name"},
    agent_id{YType::uint32, "agent_id"},
    agent_location{YType::str, "agent_location"},
    agent_state{YType::enumeration, "agent_state"},
    agent_type{YType::enumeration, "agent_type"},
    agent_filter_disp{YType::boolean, "agent_filter_disp"},
    agent_subs_id{YType::uint32, "agent_subs_id"},
    agent_filter_state{YType::enumeration, "agent_filter_state"},
    agent_filter_severity{YType::enumeration, "agent_filter_severity"},
    agent_filter_group{YType::enumeration, "agent_filter_group"},
    agent_sdr_id{YType::uint32, "agent_sdr_id"},
    agent_connect_count{YType::uint64, "agent_connect_count"},
    agent_connect_time{YType::str, "agent_connect_time"},
    agent_get_count{YType::uint64, "agent_get_count"},
    agent_subscribe_count{YType::uint64, "agent_subscribe_count"},
    agent_report_count{YType::uint64, "agent_report_count"}
{

    yang_name = "clients"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Rack::RackLocations::Clients::~Clients()
{
}

bool AlarmMgr::Detail::Rack::RackLocations::Clients::has_data() const
{
    return agent_handle.is_set
	|| agent_name.is_set
	|| agent_id.is_set
	|| agent_location.is_set
	|| agent_state.is_set
	|| agent_type.is_set
	|| agent_filter_disp.is_set
	|| agent_subs_id.is_set
	|| agent_filter_state.is_set
	|| agent_filter_severity.is_set
	|| agent_filter_group.is_set
	|| agent_sdr_id.is_set
	|| agent_connect_count.is_set
	|| agent_connect_time.is_set
	|| agent_get_count.is_set
	|| agent_subscribe_count.is_set
	|| agent_report_count.is_set;
}

bool AlarmMgr::Detail::Rack::RackLocations::Clients::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent_handle.yfilter)
	|| ydk::is_set(agent_name.yfilter)
	|| ydk::is_set(agent_id.yfilter)
	|| ydk::is_set(agent_location.yfilter)
	|| ydk::is_set(agent_state.yfilter)
	|| ydk::is_set(agent_type.yfilter)
	|| ydk::is_set(agent_filter_disp.yfilter)
	|| ydk::is_set(agent_subs_id.yfilter)
	|| ydk::is_set(agent_filter_state.yfilter)
	|| ydk::is_set(agent_filter_severity.yfilter)
	|| ydk::is_set(agent_filter_group.yfilter)
	|| ydk::is_set(agent_sdr_id.yfilter)
	|| ydk::is_set(agent_connect_count.yfilter)
	|| ydk::is_set(agent_connect_time.yfilter)
	|| ydk::is_set(agent_get_count.yfilter)
	|| ydk::is_set(agent_subscribe_count.yfilter)
	|| ydk::is_set(agent_report_count.yfilter);
}

std::string AlarmMgr::Detail::Rack::RackLocations::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients" <<"[agent_handle='" <<agent_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::RackLocations::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent_handle.is_set || is_set(agent_handle.yfilter)) leaf_name_data.push_back(agent_handle.get_name_leafdata());
    if (agent_name.is_set || is_set(agent_name.yfilter)) leaf_name_data.push_back(agent_name.get_name_leafdata());
    if (agent_id.is_set || is_set(agent_id.yfilter)) leaf_name_data.push_back(agent_id.get_name_leafdata());
    if (agent_location.is_set || is_set(agent_location.yfilter)) leaf_name_data.push_back(agent_location.get_name_leafdata());
    if (agent_state.is_set || is_set(agent_state.yfilter)) leaf_name_data.push_back(agent_state.get_name_leafdata());
    if (agent_type.is_set || is_set(agent_type.yfilter)) leaf_name_data.push_back(agent_type.get_name_leafdata());
    if (agent_filter_disp.is_set || is_set(agent_filter_disp.yfilter)) leaf_name_data.push_back(agent_filter_disp.get_name_leafdata());
    if (agent_subs_id.is_set || is_set(agent_subs_id.yfilter)) leaf_name_data.push_back(agent_subs_id.get_name_leafdata());
    if (agent_filter_state.is_set || is_set(agent_filter_state.yfilter)) leaf_name_data.push_back(agent_filter_state.get_name_leafdata());
    if (agent_filter_severity.is_set || is_set(agent_filter_severity.yfilter)) leaf_name_data.push_back(agent_filter_severity.get_name_leafdata());
    if (agent_filter_group.is_set || is_set(agent_filter_group.yfilter)) leaf_name_data.push_back(agent_filter_group.get_name_leafdata());
    if (agent_sdr_id.is_set || is_set(agent_sdr_id.yfilter)) leaf_name_data.push_back(agent_sdr_id.get_name_leafdata());
    if (agent_connect_count.is_set || is_set(agent_connect_count.yfilter)) leaf_name_data.push_back(agent_connect_count.get_name_leafdata());
    if (agent_connect_time.is_set || is_set(agent_connect_time.yfilter)) leaf_name_data.push_back(agent_connect_time.get_name_leafdata());
    if (agent_get_count.is_set || is_set(agent_get_count.yfilter)) leaf_name_data.push_back(agent_get_count.get_name_leafdata());
    if (agent_subscribe_count.is_set || is_set(agent_subscribe_count.yfilter)) leaf_name_data.push_back(agent_subscribe_count.get_name_leafdata());
    if (agent_report_count.is_set || is_set(agent_report_count.yfilter)) leaf_name_data.push_back(agent_report_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::RackLocations::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::RackLocations::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Rack::RackLocations::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent_handle")
    {
        agent_handle = value;
        agent_handle.value_namespace = name_space;
        agent_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_name")
    {
        agent_name = value;
        agent_name.value_namespace = name_space;
        agent_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_id")
    {
        agent_id = value;
        agent_id.value_namespace = name_space;
        agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_location")
    {
        agent_location = value;
        agent_location.value_namespace = name_space;
        agent_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_state")
    {
        agent_state = value;
        agent_state.value_namespace = name_space;
        agent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_type")
    {
        agent_type = value;
        agent_type.value_namespace = name_space;
        agent_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_disp")
    {
        agent_filter_disp = value;
        agent_filter_disp.value_namespace = name_space;
        agent_filter_disp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_subs_id")
    {
        agent_subs_id = value;
        agent_subs_id.value_namespace = name_space;
        agent_subs_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_state")
    {
        agent_filter_state = value;
        agent_filter_state.value_namespace = name_space;
        agent_filter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_severity")
    {
        agent_filter_severity = value;
        agent_filter_severity.value_namespace = name_space;
        agent_filter_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_group")
    {
        agent_filter_group = value;
        agent_filter_group.value_namespace = name_space;
        agent_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_sdr_id")
    {
        agent_sdr_id = value;
        agent_sdr_id.value_namespace = name_space;
        agent_sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_connect_count")
    {
        agent_connect_count = value;
        agent_connect_count.value_namespace = name_space;
        agent_connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_connect_time")
    {
        agent_connect_time = value;
        agent_connect_time.value_namespace = name_space;
        agent_connect_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_get_count")
    {
        agent_get_count = value;
        agent_get_count.value_namespace = name_space;
        agent_get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_subscribe_count")
    {
        agent_subscribe_count = value;
        agent_subscribe_count.value_namespace = name_space;
        agent_subscribe_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_report_count")
    {
        agent_report_count = value;
        agent_report_count.value_namespace = name_space;
        agent_report_count.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Rack::RackLocations::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent_handle")
    {
        agent_handle.yfilter = yfilter;
    }
    if(value_path == "agent_name")
    {
        agent_name.yfilter = yfilter;
    }
    if(value_path == "agent_id")
    {
        agent_id.yfilter = yfilter;
    }
    if(value_path == "agent_location")
    {
        agent_location.yfilter = yfilter;
    }
    if(value_path == "agent_state")
    {
        agent_state.yfilter = yfilter;
    }
    if(value_path == "agent_type")
    {
        agent_type.yfilter = yfilter;
    }
    if(value_path == "agent_filter_disp")
    {
        agent_filter_disp.yfilter = yfilter;
    }
    if(value_path == "agent_subs_id")
    {
        agent_subs_id.yfilter = yfilter;
    }
    if(value_path == "agent_filter_state")
    {
        agent_filter_state.yfilter = yfilter;
    }
    if(value_path == "agent_filter_severity")
    {
        agent_filter_severity.yfilter = yfilter;
    }
    if(value_path == "agent_filter_group")
    {
        agent_filter_group.yfilter = yfilter;
    }
    if(value_path == "agent_sdr_id")
    {
        agent_sdr_id.yfilter = yfilter;
    }
    if(value_path == "agent_connect_count")
    {
        agent_connect_count.yfilter = yfilter;
    }
    if(value_path == "agent_connect_time")
    {
        agent_connect_time.yfilter = yfilter;
    }
    if(value_path == "agent_get_count")
    {
        agent_get_count.yfilter = yfilter;
    }
    if(value_path == "agent_subscribe_count")
    {
        agent_subscribe_count.yfilter = yfilter;
    }
    if(value_path == "agent_report_count")
    {
        agent_report_count.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Rack::RackLocations::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent_handle" || name == "agent_name" || name == "agent_id" || name == "agent_location" || name == "agent_state" || name == "agent_type" || name == "agent_filter_disp" || name == "agent_subs_id" || name == "agent_filter_state" || name == "agent_filter_severity" || name == "agent_filter_group" || name == "agent_sdr_id" || name == "agent_connect_count" || name == "agent_connect_time" || name == "agent_get_count" || name == "agent_subscribe_count" || name == "agent_report_count")
        return true;
    return false;
}

AlarmMgr::Detail::Rack::RackLocations::Suppressed::Suppressed()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    suppressed_time{YType::str, "suppressed_time"}
{

    yang_name = "suppressed"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true;
}

AlarmMgr::Detail::Rack::RackLocations::Suppressed::~Suppressed()
{
}

bool AlarmMgr::Detail::Rack::RackLocations::Suppressed::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| suppressed_time.is_set;
}

bool AlarmMgr::Detail::Rack::RackLocations::Suppressed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(suppressed_time.yfilter);
}

std::string AlarmMgr::Detail::Rack::RackLocations::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::Rack::RackLocations::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::Rack::RackLocations::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::Rack::RackLocations::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::Rack::RackLocations::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::Rack::RackLocations::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::Rack::RackLocations::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "suppressed_time")
        return true;
    return false;
}

AlarmMgr::Detail::System::System()
{

    yang_name = "system"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::System::~System()
{
}

bool AlarmMgr::Detail::System::has_data() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<clients.size(); index++)
    {
        if(clients[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_data())
            return true;
    }
    return false;
}

bool AlarmMgr::Detail::System::has_operation() const
{
    for (std::size_t index=0; index<active.size(); index++)
    {
        if(active[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<clients.size(); index++)
    {
        if(clients[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<suppressed.size(); index++)
    {
        if(suppressed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AlarmMgr::Detail::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        auto c = std::make_shared<AlarmMgr::Detail::System::Active>();
        c->parent = this;
        active.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        auto c = std::make_shared<AlarmMgr::Detail::System::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    if(child_yang_name == "stats")
    {
        auto c = std::make_shared<AlarmMgr::Detail::System::Stats>();
        c->parent = this;
        stats.push_back(c);
        return c;
    }

    if(child_yang_name == "clients")
    {
        auto c = std::make_shared<AlarmMgr::Detail::System::Clients>();
        c->parent = this;
        clients.push_back(c);
        return c;
    }

    if(child_yang_name == "suppressed")
    {
        auto c = std::make_shared<AlarmMgr::Detail::System::Suppressed>();
        c->parent = this;
        suppressed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : active)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : clients)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : suppressed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AlarmMgr::Detail::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AlarmMgr::Detail::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AlarmMgr::Detail::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "stats" || name == "clients" || name == "suppressed")
        return true;
    return false;
}

AlarmMgr::Detail::System::Active::Active()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "active"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::System::Active::~Active()
{
}

bool AlarmMgr::Detail::System::Active::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Detail::System::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Detail::System::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::System::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::System::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::System::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::System::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::System::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::System::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::System::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Detail::System::History::History()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    clear_time{YType::str, "clear_time"}
{

    yang_name = "history"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::System::History::~History()
{
}

bool AlarmMgr::Detail::System::History::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| clear_time.is_set;
}

bool AlarmMgr::Detail::System::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(clear_time.yfilter);
}

std::string AlarmMgr::Detail::System::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::System::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::System::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::System::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::System::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::System::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::System::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "clear_time")
    {
        clear_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::System::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "clear_time")
        return true;
    return false;
}

AlarmMgr::Detail::System::Stats::Stats()
    :
    attime{YType::str, "attime"},
    reported{YType::uint64, "reported"},
    dropped{YType::uint64, "dropped"},
    bi_set{YType::uint64, "bi_set"},
    bi_clear{YType::uint64, "bi_clear"},
    suppressed{YType::uint64, "suppressed"},
    drop_inv_aid{YType::uint64, "drop_inv_aid"},
    drop_no_mem{YType::uint64, "drop_no_mem"},
    drop_db_error{YType::uint64, "drop_db_error"},
    drop_clear_no_set{YType::uint64, "drop_clear_no_set"},
    drop_dup{YType::uint64, "drop_dup"},
    cache_hit{YType::uint64, "cache_hit"},
    cache_miss{YType::uint64, "cache_miss"}
{

    yang_name = "stats"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::System::Stats::~Stats()
{
}

bool AlarmMgr::Detail::System::Stats::has_data() const
{
    return attime.is_set
	|| reported.is_set
	|| dropped.is_set
	|| bi_set.is_set
	|| bi_clear.is_set
	|| suppressed.is_set
	|| drop_inv_aid.is_set
	|| drop_no_mem.is_set
	|| drop_db_error.is_set
	|| drop_clear_no_set.is_set
	|| drop_dup.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set;
}

bool AlarmMgr::Detail::System::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attime.yfilter)
	|| ydk::is_set(reported.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(bi_set.yfilter)
	|| ydk::is_set(bi_clear.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(drop_inv_aid.yfilter)
	|| ydk::is_set(drop_no_mem.yfilter)
	|| ydk::is_set(drop_db_error.yfilter)
	|| ydk::is_set(drop_clear_no_set.yfilter)
	|| ydk::is_set(drop_dup.yfilter)
	|| ydk::is_set(cache_hit.yfilter)
	|| ydk::is_set(cache_miss.yfilter);
}

std::string AlarmMgr::Detail::System::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::System::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats" <<"[attime='" <<attime <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::System::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attime.is_set || is_set(attime.yfilter)) leaf_name_data.push_back(attime.get_name_leafdata());
    if (reported.is_set || is_set(reported.yfilter)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (bi_set.is_set || is_set(bi_set.yfilter)) leaf_name_data.push_back(bi_set.get_name_leafdata());
    if (bi_clear.is_set || is_set(bi_clear.yfilter)) leaf_name_data.push_back(bi_clear.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (drop_inv_aid.is_set || is_set(drop_inv_aid.yfilter)) leaf_name_data.push_back(drop_inv_aid.get_name_leafdata());
    if (drop_no_mem.is_set || is_set(drop_no_mem.yfilter)) leaf_name_data.push_back(drop_no_mem.get_name_leafdata());
    if (drop_db_error.is_set || is_set(drop_db_error.yfilter)) leaf_name_data.push_back(drop_db_error.get_name_leafdata());
    if (drop_clear_no_set.is_set || is_set(drop_clear_no_set.yfilter)) leaf_name_data.push_back(drop_clear_no_set.get_name_leafdata());
    if (drop_dup.is_set || is_set(drop_dup.yfilter)) leaf_name_data.push_back(drop_dup.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.yfilter)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.yfilter)) leaf_name_data.push_back(cache_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::System::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::System::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::System::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attime")
    {
        attime = value;
        attime.value_namespace = name_space;
        attime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported")
    {
        reported = value;
        reported.value_namespace = name_space;
        reported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bi_set")
    {
        bi_set = value;
        bi_set.value_namespace = name_space;
        bi_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bi_clear")
    {
        bi_clear = value;
        bi_clear.value_namespace = name_space;
        bi_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_inv_aid")
    {
        drop_inv_aid = value;
        drop_inv_aid.value_namespace = name_space;
        drop_inv_aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_no_mem")
    {
        drop_no_mem = value;
        drop_no_mem.value_namespace = name_space;
        drop_no_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_db_error")
    {
        drop_db_error = value;
        drop_db_error.value_namespace = name_space;
        drop_db_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_clear_no_set")
    {
        drop_clear_no_set = value;
        drop_clear_no_set.value_namespace = name_space;
        drop_clear_no_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop_dup")
    {
        drop_dup = value;
        drop_dup.value_namespace = name_space;
        drop_dup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache_hit")
    {
        cache_hit = value;
        cache_hit.value_namespace = name_space;
        cache_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache_miss")
    {
        cache_miss = value;
        cache_miss.value_namespace = name_space;
        cache_miss.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::System::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attime")
    {
        attime.yfilter = yfilter;
    }
    if(value_path == "reported")
    {
        reported.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "bi_set")
    {
        bi_set.yfilter = yfilter;
    }
    if(value_path == "bi_clear")
    {
        bi_clear.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "drop_inv_aid")
    {
        drop_inv_aid.yfilter = yfilter;
    }
    if(value_path == "drop_no_mem")
    {
        drop_no_mem.yfilter = yfilter;
    }
    if(value_path == "drop_db_error")
    {
        drop_db_error.yfilter = yfilter;
    }
    if(value_path == "drop_clear_no_set")
    {
        drop_clear_no_set.yfilter = yfilter;
    }
    if(value_path == "drop_dup")
    {
        drop_dup.yfilter = yfilter;
    }
    if(value_path == "cache_hit")
    {
        cache_hit.yfilter = yfilter;
    }
    if(value_path == "cache_miss")
    {
        cache_miss.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::System::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attime" || name == "reported" || name == "dropped" || name == "bi_set" || name == "bi_clear" || name == "suppressed" || name == "drop_inv_aid" || name == "drop_no_mem" || name == "drop_db_error" || name == "drop_clear_no_set" || name == "drop_dup" || name == "cache_hit" || name == "cache_miss")
        return true;
    return false;
}

AlarmMgr::Detail::System::Clients::Clients()
    :
    agent_handle{YType::str, "agent_handle"},
    agent_name{YType::str, "agent_name"},
    agent_id{YType::uint32, "agent_id"},
    agent_location{YType::str, "agent_location"},
    agent_state{YType::enumeration, "agent_state"},
    agent_type{YType::enumeration, "agent_type"},
    agent_filter_disp{YType::boolean, "agent_filter_disp"},
    agent_subs_id{YType::uint32, "agent_subs_id"},
    agent_filter_state{YType::enumeration, "agent_filter_state"},
    agent_filter_severity{YType::enumeration, "agent_filter_severity"},
    agent_filter_group{YType::enumeration, "agent_filter_group"},
    agent_sdr_id{YType::uint32, "agent_sdr_id"},
    agent_connect_count{YType::uint64, "agent_connect_count"},
    agent_connect_time{YType::str, "agent_connect_time"},
    agent_get_count{YType::uint64, "agent_get_count"},
    agent_subscribe_count{YType::uint64, "agent_subscribe_count"},
    agent_report_count{YType::uint64, "agent_report_count"}
{

    yang_name = "clients"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::System::Clients::~Clients()
{
}

bool AlarmMgr::Detail::System::Clients::has_data() const
{
    return agent_handle.is_set
	|| agent_name.is_set
	|| agent_id.is_set
	|| agent_location.is_set
	|| agent_state.is_set
	|| agent_type.is_set
	|| agent_filter_disp.is_set
	|| agent_subs_id.is_set
	|| agent_filter_state.is_set
	|| agent_filter_severity.is_set
	|| agent_filter_group.is_set
	|| agent_sdr_id.is_set
	|| agent_connect_count.is_set
	|| agent_connect_time.is_set
	|| agent_get_count.is_set
	|| agent_subscribe_count.is_set
	|| agent_report_count.is_set;
}

bool AlarmMgr::Detail::System::Clients::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent_handle.yfilter)
	|| ydk::is_set(agent_name.yfilter)
	|| ydk::is_set(agent_id.yfilter)
	|| ydk::is_set(agent_location.yfilter)
	|| ydk::is_set(agent_state.yfilter)
	|| ydk::is_set(agent_type.yfilter)
	|| ydk::is_set(agent_filter_disp.yfilter)
	|| ydk::is_set(agent_subs_id.yfilter)
	|| ydk::is_set(agent_filter_state.yfilter)
	|| ydk::is_set(agent_filter_severity.yfilter)
	|| ydk::is_set(agent_filter_group.yfilter)
	|| ydk::is_set(agent_sdr_id.yfilter)
	|| ydk::is_set(agent_connect_count.yfilter)
	|| ydk::is_set(agent_connect_time.yfilter)
	|| ydk::is_set(agent_get_count.yfilter)
	|| ydk::is_set(agent_subscribe_count.yfilter)
	|| ydk::is_set(agent_report_count.yfilter);
}

std::string AlarmMgr::Detail::System::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::System::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients" <<"[agent_handle='" <<agent_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::System::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent_handle.is_set || is_set(agent_handle.yfilter)) leaf_name_data.push_back(agent_handle.get_name_leafdata());
    if (agent_name.is_set || is_set(agent_name.yfilter)) leaf_name_data.push_back(agent_name.get_name_leafdata());
    if (agent_id.is_set || is_set(agent_id.yfilter)) leaf_name_data.push_back(agent_id.get_name_leafdata());
    if (agent_location.is_set || is_set(agent_location.yfilter)) leaf_name_data.push_back(agent_location.get_name_leafdata());
    if (agent_state.is_set || is_set(agent_state.yfilter)) leaf_name_data.push_back(agent_state.get_name_leafdata());
    if (agent_type.is_set || is_set(agent_type.yfilter)) leaf_name_data.push_back(agent_type.get_name_leafdata());
    if (agent_filter_disp.is_set || is_set(agent_filter_disp.yfilter)) leaf_name_data.push_back(agent_filter_disp.get_name_leafdata());
    if (agent_subs_id.is_set || is_set(agent_subs_id.yfilter)) leaf_name_data.push_back(agent_subs_id.get_name_leafdata());
    if (agent_filter_state.is_set || is_set(agent_filter_state.yfilter)) leaf_name_data.push_back(agent_filter_state.get_name_leafdata());
    if (agent_filter_severity.is_set || is_set(agent_filter_severity.yfilter)) leaf_name_data.push_back(agent_filter_severity.get_name_leafdata());
    if (agent_filter_group.is_set || is_set(agent_filter_group.yfilter)) leaf_name_data.push_back(agent_filter_group.get_name_leafdata());
    if (agent_sdr_id.is_set || is_set(agent_sdr_id.yfilter)) leaf_name_data.push_back(agent_sdr_id.get_name_leafdata());
    if (agent_connect_count.is_set || is_set(agent_connect_count.yfilter)) leaf_name_data.push_back(agent_connect_count.get_name_leafdata());
    if (agent_connect_time.is_set || is_set(agent_connect_time.yfilter)) leaf_name_data.push_back(agent_connect_time.get_name_leafdata());
    if (agent_get_count.is_set || is_set(agent_get_count.yfilter)) leaf_name_data.push_back(agent_get_count.get_name_leafdata());
    if (agent_subscribe_count.is_set || is_set(agent_subscribe_count.yfilter)) leaf_name_data.push_back(agent_subscribe_count.get_name_leafdata());
    if (agent_report_count.is_set || is_set(agent_report_count.yfilter)) leaf_name_data.push_back(agent_report_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::System::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::System::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::System::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent_handle")
    {
        agent_handle = value;
        agent_handle.value_namespace = name_space;
        agent_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_name")
    {
        agent_name = value;
        agent_name.value_namespace = name_space;
        agent_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_id")
    {
        agent_id = value;
        agent_id.value_namespace = name_space;
        agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_location")
    {
        agent_location = value;
        agent_location.value_namespace = name_space;
        agent_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_state")
    {
        agent_state = value;
        agent_state.value_namespace = name_space;
        agent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_type")
    {
        agent_type = value;
        agent_type.value_namespace = name_space;
        agent_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_disp")
    {
        agent_filter_disp = value;
        agent_filter_disp.value_namespace = name_space;
        agent_filter_disp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_subs_id")
    {
        agent_subs_id = value;
        agent_subs_id.value_namespace = name_space;
        agent_subs_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_state")
    {
        agent_filter_state = value;
        agent_filter_state.value_namespace = name_space;
        agent_filter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_severity")
    {
        agent_filter_severity = value;
        agent_filter_severity.value_namespace = name_space;
        agent_filter_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_filter_group")
    {
        agent_filter_group = value;
        agent_filter_group.value_namespace = name_space;
        agent_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_sdr_id")
    {
        agent_sdr_id = value;
        agent_sdr_id.value_namespace = name_space;
        agent_sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_connect_count")
    {
        agent_connect_count = value;
        agent_connect_count.value_namespace = name_space;
        agent_connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_connect_time")
    {
        agent_connect_time = value;
        agent_connect_time.value_namespace = name_space;
        agent_connect_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_get_count")
    {
        agent_get_count = value;
        agent_get_count.value_namespace = name_space;
        agent_get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_subscribe_count")
    {
        agent_subscribe_count = value;
        agent_subscribe_count.value_namespace = name_space;
        agent_subscribe_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent_report_count")
    {
        agent_report_count = value;
        agent_report_count.value_namespace = name_space;
        agent_report_count.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::System::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent_handle")
    {
        agent_handle.yfilter = yfilter;
    }
    if(value_path == "agent_name")
    {
        agent_name.yfilter = yfilter;
    }
    if(value_path == "agent_id")
    {
        agent_id.yfilter = yfilter;
    }
    if(value_path == "agent_location")
    {
        agent_location.yfilter = yfilter;
    }
    if(value_path == "agent_state")
    {
        agent_state.yfilter = yfilter;
    }
    if(value_path == "agent_type")
    {
        agent_type.yfilter = yfilter;
    }
    if(value_path == "agent_filter_disp")
    {
        agent_filter_disp.yfilter = yfilter;
    }
    if(value_path == "agent_subs_id")
    {
        agent_subs_id.yfilter = yfilter;
    }
    if(value_path == "agent_filter_state")
    {
        agent_filter_state.yfilter = yfilter;
    }
    if(value_path == "agent_filter_severity")
    {
        agent_filter_severity.yfilter = yfilter;
    }
    if(value_path == "agent_filter_group")
    {
        agent_filter_group.yfilter = yfilter;
    }
    if(value_path == "agent_sdr_id")
    {
        agent_sdr_id.yfilter = yfilter;
    }
    if(value_path == "agent_connect_count")
    {
        agent_connect_count.yfilter = yfilter;
    }
    if(value_path == "agent_connect_time")
    {
        agent_connect_time.yfilter = yfilter;
    }
    if(value_path == "agent_get_count")
    {
        agent_get_count.yfilter = yfilter;
    }
    if(value_path == "agent_subscribe_count")
    {
        agent_subscribe_count.yfilter = yfilter;
    }
    if(value_path == "agent_report_count")
    {
        agent_report_count.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::System::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent_handle" || name == "agent_name" || name == "agent_id" || name == "agent_location" || name == "agent_state" || name == "agent_type" || name == "agent_filter_disp" || name == "agent_subs_id" || name == "agent_filter_state" || name == "agent_filter_severity" || name == "agent_filter_group" || name == "agent_sdr_id" || name == "agent_connect_count" || name == "agent_connect_time" || name == "agent_get_count" || name == "agent_subscribe_count" || name == "agent_report_count")
        return true;
    return false;
}

AlarmMgr::Detail::System::Suppressed::Suppressed()
    :
    aid{YType::str, "aid"},
    eid{YType::str, "eid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    gen_location{YType::str, "gen_location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    description{YType::str, "description"},
    set_time{YType::str, "set_time"},
    state{YType::enumeration, "state"},
    reporting_agent_id{YType::uint32, "reporting_agent_id"},
    resynced{YType::uint32, "resynced"},
    detail_desc{YType::str, "detail_desc"},
    suppressed_time{YType::str, "suppressed_time"}
{

    yang_name = "suppressed"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

AlarmMgr::Detail::System::Suppressed::~Suppressed()
{
}

bool AlarmMgr::Detail::System::Suppressed::has_data() const
{
    return aid.is_set
	|| eid.is_set
	|| tag.is_set
	|| module.is_set
	|| gen_location.is_set
	|| severity.is_set
	|| group.is_set
	|| description.is_set
	|| set_time.is_set
	|| state.is_set
	|| reporting_agent_id.is_set
	|| resynced.is_set
	|| detail_desc.is_set
	|| suppressed_time.is_set;
}

bool AlarmMgr::Detail::System::Suppressed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(gen_location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(resynced.yfilter)
	|| ydk::is_set(detail_desc.yfilter)
	|| ydk::is_set(suppressed_time.yfilter);
}

std::string AlarmMgr::Detail::System::Suppressed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-alarm-mgr:alarm_mgr/detail/system/" << get_segment_path();
    return path_buffer.str();
}

std::string AlarmMgr::Detail::System::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed" <<"[aid='" <<aid <<"']" <<"[eid='" <<eid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AlarmMgr::Detail::System::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (gen_location.is_set || is_set(gen_location.yfilter)) leaf_name_data.push_back(gen_location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (resynced.is_set || is_set(resynced.yfilter)) leaf_name_data.push_back(resynced.get_name_leafdata());
    if (detail_desc.is_set || is_set(detail_desc.yfilter)) leaf_name_data.push_back(detail_desc.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AlarmMgr::Detail::System::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AlarmMgr::Detail::System::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AlarmMgr::Detail::System::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen_location")
    {
        gen_location = value;
        gen_location.value_namespace = name_space;
        gen_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set_time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resynced")
    {
        resynced = value;
        resynced.value_namespace = name_space;
        resynced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_desc")
    {
        detail_desc = value;
        detail_desc.value_namespace = name_space;
        detail_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
}

void AlarmMgr::Detail::System::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "gen_location")
    {
        gen_location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "set_time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "reporting_agent_id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "resynced")
    {
        resynced.yfilter = yfilter;
    }
    if(value_path == "detail_desc")
    {
        detail_desc.yfilter = yfilter;
    }
    if(value_path == "suppressed_time")
    {
        suppressed_time.yfilter = yfilter;
    }
}

bool AlarmMgr::Detail::System::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aid" || name == "eid" || name == "tag" || name == "module" || name == "gen_location" || name == "severity" || name == "group" || name == "description" || name == "set_time" || name == "state" || name == "reporting_agent_id" || name == "resynced" || name == "detail_desc" || name == "suppressed_time")
        return true;
    return false;
}

const Enum::YLeaf SeverityTd::unknown {0, "unknown"};
const Enum::YLeaf SeverityTd::not_reported {1, "not_reported"};
const Enum::YLeaf SeverityTd::not_alarmed {2, "not_alarmed"};
const Enum::YLeaf SeverityTd::minor {3, "minor"};
const Enum::YLeaf SeverityTd::major_ {4, "major"};
const Enum::YLeaf SeverityTd::critical {5, "critical"};

const Enum::YLeaf StatusTd::unknown {0, "unknown"};
const Enum::YLeaf StatusTd::set {1, "set"};
const Enum::YLeaf StatusTd::clear {2, "clear"};
const Enum::YLeaf StatusTd::suppress {3, "suppress"};

const Enum::YLeaf GroupTd::unknown {0, "unknown"};
const Enum::YLeaf GroupTd::environ {1, "environ"};
const Enum::YLeaf GroupTd::ethernet {2, "ethernet"};
const Enum::YLeaf GroupTd::fabric {3, "fabric"};
const Enum::YLeaf GroupTd::power {4, "power"};
const Enum::YLeaf GroupTd::software {5, "software"};
const Enum::YLeaf GroupTd::slice {7, "slice"};
const Enum::YLeaf GroupTd::cpu {8, "cpu"};
const Enum::YLeaf GroupTd::controller {9, "controller"};
const Enum::YLeaf GroupTd::sonet {10, "sonet"};
const Enum::YLeaf GroupTd::otn {11, "otn"};
const Enum::YLeaf GroupTd::sdh_controller {12, "sdh_controller"};
const Enum::YLeaf GroupTd::asic {13, "asic"};
const Enum::YLeaf GroupTd::fpd_infra {14, "fpd_infra"};
const Enum::YLeaf GroupTd::shelf {15, "shelf"};
const Enum::YLeaf GroupTd::mpa {16, "mpa"};
const Enum::YLeaf GroupTd::ots {17, "ots"};
const Enum::YLeaf GroupTd::timing {18, "timing"};
const Enum::YLeaf GroupTd::last {19, "last"};

const Enum::YLeaf AgentStateTd::start {0, "start"};
const Enum::YLeaf AgentStateTd::init {1, "init"};
const Enum::YLeaf AgentStateTd::connecting {2, "connecting"};
const Enum::YLeaf AgentStateTd::connected {3, "connected"};
const Enum::YLeaf AgentStateTd::registered {4, "registered"};
const Enum::YLeaf AgentStateTd::disconnected {5, "disconnected"};

const Enum::YLeaf AgentTypeTd::unknown {0, "unknown"};
const Enum::YLeaf AgentTypeTd::producer {1, "producer"};
const Enum::YLeaf AgentTypeTd::consumer {2, "consumer"};
const Enum::YLeaf AgentTypeTd::subscriber {3, "subscriber"};


}
}

