
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {

Controller::Switch::Oper::Esd::Instance::Instance()
    :
    process_name{YType::str, "process_name"}
{

    yang_name = "instance"; yang_parent_name = "esd"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Esd::Instance::~Instance()
{
}

bool Controller::Switch::Oper::Esd::Instance::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return process_name.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/esd/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Esd::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[process_name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::get_children() const
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

void Controller::Switch::Oper::Esd::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process_name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process_name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "process_name")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::~Trace()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::get_children() const
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

void Controller::Switch::Oper::Esd::Instance::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::get_children() const
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

void Controller::Switch::Oper::Esd::Instance::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_children() const
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

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::MgmtAgent()
    :
    esdma(std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>())
	,connections(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>())
{
    esdma->parent = this;
    connections->parent = this;

    yang_name = "mgmt-agent"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::~MgmtAgent()
{
}

bool Controller::Switch::Oper::MgmtAgent::has_data() const
{
    return (esdma !=  nullptr && esdma->has_data())
	|| (connections !=  nullptr && connections->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::has_operation() const
{
    return is_set(yfilter)
	|| (esdma !=  nullptr && esdma->has_operation())
	|| (connections !=  nullptr && connections->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma")
    {
        if(esdma == nullptr)
        {
            esdma = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>();
        }
        return esdma;
    }

    if(child_yang_name == "connections")
    {
        if(connections == nullptr)
        {
            connections = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>();
        }
        return connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esdma != nullptr)
    {
        children["esdma"] = esdma;
    }

    if(connections != nullptr)
    {
        children["connections"] = connections;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma" || name == "connections")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Esdma()
{

    yang_name = "esdma"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::~Esdma()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::Esdma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "esdma"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::~Trace()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/esdma/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::Connections()
    :
    sdr_nm_num_clients{YType::uint32, "sdr-nm-num-clients"},
    esd_client_num_clients{YType::uint32, "esd-client-num-clients"},
    mlap_client_num_clients{YType::uint32, "mlap-client-num-clients"}
    	,
    esdma_info(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>())
{
    esdma_info->parent = this;

    yang_name = "connections"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::~Connections()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_data() const
{
    for (std::size_t index=0; index<sdr_nm_client_id.size(); index++)
    {
        if(sdr_nm_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.size(); index++)
    {
        if(esd_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.size(); index++)
    {
        if(mlap_client_id[index]->has_data())
            return true;
    }
    return sdr_nm_num_clients.is_set
	|| esd_client_num_clients.is_set
	|| mlap_client_num_clients.is_set
	|| (esdma_info !=  nullptr && esdma_info->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_operation() const
{
    for (std::size_t index=0; index<sdr_nm_client_id.size(); index++)
    {
        if(sdr_nm_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.size(); index++)
    {
        if(esd_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.size(); index++)
    {
        if(mlap_client_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_num_clients.yfilter)
	|| ydk::is_set(esd_client_num_clients.yfilter)
	|| ydk::is_set(mlap_client_num_clients.yfilter)
	|| (esdma_info !=  nullptr && esdma_info->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_num_clients.is_set || is_set(sdr_nm_num_clients.yfilter)) leaf_name_data.push_back(sdr_nm_num_clients.get_name_leafdata());
    if (esd_client_num_clients.is_set || is_set(esd_client_num_clients.yfilter)) leaf_name_data.push_back(esd_client_num_clients.get_name_leafdata());
    if (mlap_client_num_clients.is_set || is_set(mlap_client_num_clients.yfilter)) leaf_name_data.push_back(mlap_client_num_clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma-info")
    {
        if(esdma_info == nullptr)
        {
            esdma_info = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>();
        }
        return esdma_info;
    }

    if(child_yang_name == "sdr-nm-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId>();
        c->parent = this;
        sdr_nm_client_id.push_back(c);
        return c;
    }

    if(child_yang_name == "esd-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId>();
        c->parent = this;
        esd_client_id.push_back(c);
        return c;
    }

    if(child_yang_name == "mlap-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId>();
        c->parent = this;
        mlap_client_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esdma_info != nullptr)
    {
        children["esdma-info"] = esdma_info;
    }

    count = 0;
    for (auto const & c : sdr_nm_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : esd_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mlap_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients = value;
        sdr_nm_num_clients.value_namespace = name_space;
        sdr_nm_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients = value;
        esd_client_num_clients.value_namespace = name_space;
        esd_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients = value;
        mlap_client_num_clients.value_namespace = name_space;
        mlap_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients.yfilter = yfilter;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients.yfilter = yfilter;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma-info" || name == "sdr-nm-client-id" || name == "esd-client-id" || name == "mlap-client-id" || name == "sdr-nm-num-clients" || name == "esd-client-num-clients" || name == "mlap-client-num-clients")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::EsdmaInfo()
    :
    active_esdma_address{YType::str, "active-esdma-address"}
{

    yang_name = "esdma-info"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::~EsdmaInfo()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_data() const
{
    return active_esdma_address.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_esdma_address.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_esdma_address.is_set || is_set(active_esdma_address.yfilter)) leaf_name_data.push_back(active_esdma_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address = value;
        active_esdma_address.value_namespace = name_space;
        active_esdma_address.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-esdma-address")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::SdrNmClientId()
    :
    sdr_nm_ip_address{YType::str, "sdr-nm-ip-address"},
    sdr_nm_port_num{YType::uint16, "sdr-nm-port-num"}
{

    yang_name = "sdr-nm-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::~SdrNmClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_data() const
{
    return sdr_nm_ip_address.is_set
	|| sdr_nm_port_num.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_ip_address.yfilter)
	|| ydk::is_set(sdr_nm_port_num.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-nm-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_ip_address.is_set || is_set(sdr_nm_ip_address.yfilter)) leaf_name_data.push_back(sdr_nm_ip_address.get_name_leafdata());
    if (sdr_nm_port_num.is_set || is_set(sdr_nm_port_num.yfilter)) leaf_name_data.push_back(sdr_nm_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address = value;
        sdr_nm_ip_address.value_namespace = name_space;
        sdr_nm_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num = value;
        sdr_nm_port_num.value_namespace = name_space;
        sdr_nm_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address.yfilter = yfilter;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-nm-ip-address" || name == "sdr-nm-port-num")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::EsdClientId()
    :
    esd_client_ip_address{YType::str, "esd-client-ip-address"},
    esd_client_port_num{YType::uint16, "esd-client-port-num"},
    esd_client_location{YType::str, "esd-client-location"},
    esd_client_switch_info_cached{YType::enumeration, "esd-client-switch-info-cached"},
    esd_client_sdr_info_cached{YType::enumeration, "esd-client-sdr-info-cached"}
{

    yang_name = "esd-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::~EsdClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_data() const
{
    return esd_client_ip_address.is_set
	|| esd_client_port_num.is_set
	|| esd_client_location.is_set
	|| esd_client_switch_info_cached.is_set
	|| esd_client_sdr_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_client_ip_address.yfilter)
	|| ydk::is_set(esd_client_port_num.yfilter)
	|| ydk::is_set(esd_client_location.yfilter)
	|| ydk::is_set(esd_client_switch_info_cached.yfilter)
	|| ydk::is_set(esd_client_sdr_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_client_ip_address.is_set || is_set(esd_client_ip_address.yfilter)) leaf_name_data.push_back(esd_client_ip_address.get_name_leafdata());
    if (esd_client_port_num.is_set || is_set(esd_client_port_num.yfilter)) leaf_name_data.push_back(esd_client_port_num.get_name_leafdata());
    if (esd_client_location.is_set || is_set(esd_client_location.yfilter)) leaf_name_data.push_back(esd_client_location.get_name_leafdata());
    if (esd_client_switch_info_cached.is_set || is_set(esd_client_switch_info_cached.yfilter)) leaf_name_data.push_back(esd_client_switch_info_cached.get_name_leafdata());
    if (esd_client_sdr_info_cached.is_set || is_set(esd_client_sdr_info_cached.yfilter)) leaf_name_data.push_back(esd_client_sdr_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address = value;
        esd_client_ip_address.value_namespace = name_space;
        esd_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num = value;
        esd_client_port_num.value_namespace = name_space;
        esd_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location = value;
        esd_client_location.value_namespace = name_space;
        esd_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached = value;
        esd_client_switch_info_cached.value_namespace = name_space;
        esd_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached = value;
        esd_client_sdr_info_cached.value_namespace = name_space;
        esd_client_sdr_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num.yfilter = yfilter;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location.yfilter = yfilter;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached.yfilter = yfilter;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-client-ip-address" || name == "esd-client-port-num" || name == "esd-client-location" || name == "esd-client-switch-info-cached" || name == "esd-client-sdr-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::MlapClientId()
    :
    mlap_client_ip_address{YType::str, "mlap-client-ip-address"},
    mlap_client_port_num{YType::uint16, "mlap-client-port-num"},
    mlap_client_location{YType::str, "mlap-client-location"},
    mlap_client_switch_info_cached{YType::enumeration, "mlap-client-switch-info-cached"}
{

    yang_name = "mlap-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::~MlapClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_data() const
{
    return mlap_client_ip_address.is_set
	|| mlap_client_port_num.is_set
	|| mlap_client_location.is_set
	|| mlap_client_switch_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlap_client_ip_address.yfilter)
	|| ydk::is_set(mlap_client_port_num.yfilter)
	|| ydk::is_set(mlap_client_location.yfilter)
	|| ydk::is_set(mlap_client_switch_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlap_client_ip_address.is_set || is_set(mlap_client_ip_address.yfilter)) leaf_name_data.push_back(mlap_client_ip_address.get_name_leafdata());
    if (mlap_client_port_num.is_set || is_set(mlap_client_port_num.yfilter)) leaf_name_data.push_back(mlap_client_port_num.get_name_leafdata());
    if (mlap_client_location.is_set || is_set(mlap_client_location.yfilter)) leaf_name_data.push_back(mlap_client_location.get_name_leafdata());
    if (mlap_client_switch_info_cached.is_set || is_set(mlap_client_switch_info_cached.yfilter)) leaf_name_data.push_back(mlap_client_switch_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address = value;
        mlap_client_ip_address.value_namespace = name_space;
        mlap_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num = value;
        mlap_client_port_num.value_namespace = name_space;
        mlap_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location = value;
        mlap_client_location.value_namespace = name_space;
        mlap_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached = value;
        mlap_client_switch_info_cached.value_namespace = name_space;
        mlap_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num.yfilter = yfilter;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location.yfilter = yfilter;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlap-client-ip-address" || name == "mlap-client-port-num" || name == "mlap-client-location" || name == "mlap-client-switch-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::PortState()
{

    yang_name = "port-state"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::PortState::~PortState()
{
}

bool Controller::Switch::Oper::PortState::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::PortState::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::PortState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::PortState::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::get_children() const
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

void Controller::Switch::Oper::PortState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::PortState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::PortState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "port-state"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::PortState::Location::~Location()
{
}

bool Controller::Switch::Oper::PortState::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::PortState::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/port-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::PortState::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::PortState::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::PortState::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::PortState::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::PortState::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_data() const
{
    return port.is_set;
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::PortState::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::PortState::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Trunk()
{

    yang_name = "trunk"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Trunk::~Trunk()
{
}

bool Controller::Switch::Oper::Trunk::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trunk::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trunk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Trunk::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::get_children() const
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

void Controller::Switch::Oper::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    trunk_member_count{YType::uint32, "trunk-member-count"},
    trunk_name{YType::str, "trunk-name"}
{

    yang_name = "location"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Trunk::Location::~Location()
{
}

bool Controller::Switch::Oper::Trunk::Location::has_data() const
{
    for (std::size_t index=0; index<trunk_member_port_iter.size(); index++)
    {
        if(trunk_member_port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| trunk_member_count.is_set
	|| trunk_name.is_set;
}

bool Controller::Switch::Oper::Trunk::Location::has_operation() const
{
    for (std::size_t index=0; index<trunk_member_port_iter.size(); index++)
    {
        if(trunk_member_port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(trunk_member_count.yfilter)
	|| ydk::is_set(trunk_name.yfilter);
}

std::string Controller::Switch::Oper::Trunk::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/trunk/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (trunk_member_count.is_set || is_set(trunk_member_count.yfilter)) leaf_name_data.push_back(trunk_member_count.get_name_leafdata());
    if (trunk_name.is_set || is_set(trunk_name.yfilter)) leaf_name_data.push_back(trunk_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Trunk::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunk-member-port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter>();
        c->parent = this;
        trunk_member_port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trunk_member_port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Trunk::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-member-count")
    {
        trunk_member_count = value;
        trunk_member_count.value_namespace = name_space;
        trunk_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-name")
    {
        trunk_name = value;
        trunk_name.value_namespace = name_space;
        trunk_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trunk::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "trunk-member-count")
    {
        trunk_member_count.yfilter = yfilter;
    }
    if(value_path == "trunk-name")
    {
        trunk_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trunk::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-member-port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "trunk-member-count" || name == "trunk-name")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::TrunkMemberPortIter()
    :
    trunk_member_port{YType::uint32, "trunk-member-port"},
    trunk_member_status{YType::enumeration, "trunk-member-status"}
{

    yang_name = "trunk-member-port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::~TrunkMemberPortIter()
{
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_data() const
{
    return trunk_member_port.is_set
	|| trunk_member_status.is_set;
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_member_port.yfilter)
	|| ydk::is_set(trunk_member_status.yfilter);
}

std::string Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-member-port-iter" <<"[trunk-member-port='" <<trunk_member_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_member_port.is_set || is_set(trunk_member_port.yfilter)) leaf_name_data.push_back(trunk_member_port.get_name_leafdata());
    if (trunk_member_status.is_set || is_set(trunk_member_status.yfilter)) leaf_name_data.push_back(trunk_member_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-member-port")
    {
        trunk_member_port = value;
        trunk_member_port.value_namespace = name_space;
        trunk_member_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-member-status")
    {
        trunk_member_status = value;
        trunk_member_status.value_namespace = name_space;
        trunk_member_status.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-member-port")
    {
        trunk_member_port.yfilter = yfilter;
    }
    if(value_path == "trunk-member-status")
    {
        trunk_member_status.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-member-port" || name == "trunk-member-status")
        return true;
    return false;
}

Controller::FabricAction::FabricAction()
    :
    fabric(std::make_shared<Controller::FabricAction::Fabric>())
{
    fabric->parent = this;

    yang_name = "fabric_action"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::FabricAction::~FabricAction()
{
}

bool Controller::FabricAction::has_data() const
{
    return (fabric !=  nullptr && fabric->has_data());
}

bool Controller::FabricAction::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Controller::FabricAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric_action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::FabricAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::FabricAction::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::FabricAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    return children;
}

void Controller::FabricAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

Controller::FabricAction::Fabric::Fabric()
    :
    ppu(std::make_shared<Controller::FabricAction::Fabric::Ppu>())
{
    ppu->parent = this;

    yang_name = "fabric"; yang_parent_name = "fabric_action"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::FabricAction::Fabric::~Fabric()
{
}

bool Controller::FabricAction::Fabric::has_data() const
{
    return (ppu !=  nullptr && ppu->has_data());
}

bool Controller::FabricAction::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (ppu !=  nullptr && ppu->has_operation());
}

std::string Controller::FabricAction::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric_action/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::FabricAction::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppu")
    {
        if(ppu == nullptr)
        {
            ppu = std::make_shared<Controller::FabricAction::Fabric::Ppu>();
        }
        return ppu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::FabricAction::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ppu != nullptr)
    {
        children["ppu"] = ppu;
    }

    return children;
}

void Controller::FabricAction::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppu")
        return true;
    return false;
}

Controller::FabricAction::Fabric::Ppu::Ppu()
{

    yang_name = "ppu"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::FabricAction::Fabric::Ppu::~Ppu()
{
}

bool Controller::FabricAction::Fabric::Ppu::has_data() const
{
    return false;
}

bool Controller::FabricAction::Fabric::Ppu::has_operation() const
{
    return is_set(yfilter);
}

std::string Controller::FabricAction::Fabric::Ppu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric_action/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::Fabric::Ppu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::Fabric::Ppu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::FabricAction::Fabric::Ppu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::FabricAction::Fabric::Ppu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::FabricAction::Fabric::Ppu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::Fabric::Ppu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::Fabric::Ppu::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

