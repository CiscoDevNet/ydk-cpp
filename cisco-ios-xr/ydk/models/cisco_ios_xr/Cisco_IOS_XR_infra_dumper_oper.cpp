
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_dumper_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_dumper_oper {

Context::Context()
    :
    context_numbers(std::make_shared<Context::ContextNumbers>())
    , context_locations(std::make_shared<Context::ContextLocations>())
    , all(std::make_shared<Context::All>())
{
    context_numbers->parent = this;
    context_locations->parent = this;
    all->parent = this;

    yang_name = "context"; yang_parent_name = "Cisco-IOS-XR-infra-dumper-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Context::~Context()
{
}

bool Context::has_data() const
{
    if (is_presence_container) return true;
    return (context_numbers !=  nullptr && context_numbers->has_data())
	|| (context_locations !=  nullptr && context_locations->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Context::has_operation() const
{
    return is_set(yfilter)
	|| (context_numbers !=  nullptr && context_numbers->has_operation())
	|| (context_locations !=  nullptr && context_locations->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-numbers")
    {
        if(context_numbers == nullptr)
        {
            context_numbers = std::make_shared<Context::ContextNumbers>();
        }
        return context_numbers;
    }

    if(child_yang_name == "context-locations")
    {
        if(context_locations == nullptr)
        {
            context_locations = std::make_shared<Context::ContextLocations>();
        }
        return context_locations;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Context::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(context_numbers != nullptr)
    {
        _children["context-numbers"] = context_numbers;
    }

    if(context_locations != nullptr)
    {
        _children["context-locations"] = context_locations;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Context::clone_ptr() const
{
    return std::make_shared<Context>();
}

std::string Context::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Context::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Context::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Context::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-numbers" || name == "context-locations" || name == "all")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumbers()
    :
    context_number(this, {"context_num"})
{

    yang_name = "context-numbers"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::ContextNumbers::~ContextNumbers()
{
}

bool Context::ContextNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_number.len(); index++)
    {
        if(context_number[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextNumbers::has_operation() const
{
    for (std::size_t index=0; index<context_number.len(); index++)
    {
        if(context_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextNumbers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::ContextNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-number")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber>();
        ent_->parent = this;
        context_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-number")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::ContextNumber()
    :
    context_num{YType::uint32, "context-num"}
        ,
    locations(std::make_shared<Context::ContextNumbers::ContextNumber::Locations>())
    , all(std::make_shared<Context::ContextNumbers::ContextNumber::All>())
{
    locations->parent = this;
    all->parent = this;

    yang_name = "context-number"; yang_parent_name = "context-numbers"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::ContextNumbers::ContextNumber::~ContextNumber()
{
}

bool Context::ContextNumbers::ContextNumber::has_data() const
{
    if (is_presence_container) return true;
    return context_num.is_set
	|| (locations !=  nullptr && locations->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Context::ContextNumbers::ContextNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_num.yfilter)
	|| (locations !=  nullptr && locations->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Context::ContextNumbers::ContextNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/context-numbers/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::ContextNumbers::ContextNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-number";
    ADD_KEY_TOKEN(context_num, "context-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_num.is_set || is_set(context_num.yfilter)) leaf_name_data.push_back(context_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Context::ContextNumbers::ContextNumber::Locations>();
        }
        return locations;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Context::ContextNumbers::ContextNumber::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locations != nullptr)
    {
        _children["locations"] = locations;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-num")
    {
        context_num = value;
        context_num.value_namespace = name_space;
        context_num.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-num")
    {
        context_num.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locations" || name == "all" || name == "context-num")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Locations()
    :
    location(this, {"node_name"})
{

    yang_name = "locations"; yang_parent_name = "context-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::~Locations()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextNumbers::ContextNumber::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextNumbers::ContextNumber::Locations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextNumbers::ContextNumber::Locations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Location()
    :
    node_name{YType::str, "node-name"}
        ,
    enter(std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter>())
{
    enter->parent = this;

    yang_name = "location"; yang_parent_name = "locations"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::~Location()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (enter !=  nullptr && enter->has_data());
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (enter !=  nullptr && enter->has_operation());
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enter")
    {
        if(enter == nullptr)
        {
            enter = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter>();
        }
        return enter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enter != nullptr)
    {
        _children["enter"] = enter;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::Locations::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enter" || name == "node-name")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::Enter()
    :
    crash_info(this, {})
{

    yang_name = "enter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::~Enter()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::has_operation() const
{
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crash-info")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo>();
        ent_->parent = this;
        crash_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crash_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crash-info")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashInfo()
    :
    node{YType::str, "node"}
        ,
    context_info(this, {})
    , crash_package_information(this, {})
{

    yang_name = "crash-info"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::~CrashInfo()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::has_operation() const
{
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-info")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo>();
        ent_->parent = this;
        context_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "crash-package-information")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation>();
        ent_->parent = this;
        crash_package_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : crash_package_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-info" || name == "crash-package-information" || name == "node")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::ContextInfo()
    :
    process_name{YType::str, "process-name"},
    pid{YType::uint32, "pid"},
    tid{YType::uint32, "tid"},
    core_dump_time{YType::str, "core-dump-time"},
    sig_num{YType::uint32, "sig-num"},
    sin_err_str{YType::str, "sin-err-str"},
    sig_send_pid{YType::uint32, "sig-send-pid"},
    sig_code{YType::uint32, "sig-code"},
    sin_info{YType::str, "sin-info"},
    core_for_process{YType::str, "core-for-process"},
    registers_info{YType::str, "registers-info"}
        ,
    stack_trace(this, {})
    , dll_info(this, {})
{

    yang_name = "context-info"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::~ContextInfo()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| pid.is_set
	|| tid.is_set
	|| core_dump_time.is_set
	|| sig_num.is_set
	|| sin_err_str.is_set
	|| sig_send_pid.is_set
	|| sig_code.is_set
	|| sin_info.is_set
	|| core_for_process.is_set
	|| registers_info.is_set;
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::has_operation() const
{
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| ydk::is_set(core_dump_time.yfilter)
	|| ydk::is_set(sig_num.yfilter)
	|| ydk::is_set(sin_err_str.yfilter)
	|| ydk::is_set(sig_send_pid.yfilter)
	|| ydk::is_set(sig_code.yfilter)
	|| ydk::is_set(sin_info.yfilter)
	|| ydk::is_set(core_for_process.yfilter)
	|| ydk::is_set(registers_info.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());
    if (core_dump_time.is_set || is_set(core_dump_time.yfilter)) leaf_name_data.push_back(core_dump_time.get_name_leafdata());
    if (sig_num.is_set || is_set(sig_num.yfilter)) leaf_name_data.push_back(sig_num.get_name_leafdata());
    if (sin_err_str.is_set || is_set(sin_err_str.yfilter)) leaf_name_data.push_back(sin_err_str.get_name_leafdata());
    if (sig_send_pid.is_set || is_set(sig_send_pid.yfilter)) leaf_name_data.push_back(sig_send_pid.get_name_leafdata());
    if (sig_code.is_set || is_set(sig_code.yfilter)) leaf_name_data.push_back(sig_code.get_name_leafdata());
    if (sin_info.is_set || is_set(sin_info.yfilter)) leaf_name_data.push_back(sin_info.get_name_leafdata());
    if (core_for_process.is_set || is_set(core_for_process.yfilter)) leaf_name_data.push_back(core_for_process.get_name_leafdata());
    if (registers_info.is_set || is_set(registers_info.yfilter)) leaf_name_data.push_back(registers_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack-trace")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace>();
        ent_->parent = this;
        stack_trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dll-info")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo>();
        ent_->parent = this;
        dll_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stack_trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dll_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time = value;
        core_dump_time.value_namespace = name_space;
        core_dump_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-num")
    {
        sig_num = value;
        sig_num.value_namespace = name_space;
        sig_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str = value;
        sin_err_str.value_namespace = name_space;
        sin_err_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid = value;
        sig_send_pid.value_namespace = name_space;
        sig_send_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-code")
    {
        sig_code = value;
        sig_code.value_namespace = name_space;
        sig_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-info")
    {
        sin_info = value;
        sin_info.value_namespace = name_space;
        sin_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-for-process")
    {
        core_for_process = value;
        core_for_process.value_namespace = name_space;
        core_for_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registers-info")
    {
        registers_info = value;
        registers_info.value_namespace = name_space;
        registers_info.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time.yfilter = yfilter;
    }
    if(value_path == "sig-num")
    {
        sig_num.yfilter = yfilter;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str.yfilter = yfilter;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid.yfilter = yfilter;
    }
    if(value_path == "sig-code")
    {
        sig_code.yfilter = yfilter;
    }
    if(value_path == "sin-info")
    {
        sin_info.yfilter = yfilter;
    }
    if(value_path == "core-for-process")
    {
        core_for_process.yfilter = yfilter;
    }
    if(value_path == "registers-info")
    {
        registers_info.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace" || name == "dll-info" || name == "process-name" || name == "pid" || name == "tid" || name == "core-dump-time" || name == "sig-num" || name == "sin-err-str" || name == "sig-send-pid" || name == "sig-code" || name == "sin-info" || name == "core-for-process" || name == "registers-info")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::StackTrace()
    :
    stack_trace{YType::uint32, "stack-trace"}
{

    yang_name = "stack-trace"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::~StackTrace()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::has_data() const
{
    if (is_presence_container) return true;
    return stack_trace.is_set;
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stack_trace.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack-trace";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stack_trace.is_set || is_set(stack_trace.yfilter)) leaf_name_data.push_back(stack_trace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stack-trace")
    {
        stack_trace = value;
        stack_trace.value_namespace = name_space;
        stack_trace.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stack-trace")
    {
        stack_trace.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::DllInfo()
    :
    path{YType::str, "path"},
    text_addr{YType::uint32, "text-addr"},
    text_size{YType::uint32, "text-size"},
    data_addr{YType::uint32, "data-addr"},
    data_size{YType::uint32, "data-size"},
    version{YType::uint32, "version"}
{

    yang_name = "dll-info"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::~DllInfo()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| text_addr.is_set
	|| text_size.is_set
	|| data_addr.is_set
	|| data_size.is_set
	|| version.is_set;
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(text_addr.yfilter)
	|| ydk::is_set(text_size.yfilter)
	|| ydk::is_set(data_addr.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dll-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (text_addr.is_set || is_set(text_addr.yfilter)) leaf_name_data.push_back(text_addr.get_name_leafdata());
    if (text_size.is_set || is_set(text_size.yfilter)) leaf_name_data.push_back(text_size.get_name_leafdata());
    if (data_addr.is_set || is_set(data_addr.yfilter)) leaf_name_data.push_back(data_addr.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-addr")
    {
        text_addr = value;
        text_addr.value_namespace = name_space;
        text_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-size")
    {
        text_size = value;
        text_size.value_namespace = name_space;
        text_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-addr")
    {
        data_addr = value;
        data_addr.value_namespace = name_space;
        data_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "text-addr")
    {
        text_addr.yfilter = yfilter;
    }
    if(value_path == "text-size")
    {
        text_size.yfilter = yfilter;
    }
    if(value_path == "data-addr")
    {
        data_addr.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "text-addr" || name == "text-size" || name == "data-addr" || name == "data-size" || name == "version")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::CrashPackageInformation()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "crash-package-information"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::~CrashPackageInformation()
{
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source.is_set;
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-package-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::All::All()
    :
    crash_info(this, {})
{

    yang_name = "all"; yang_parent_name = "context-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::All::~All()
{
}

bool Context::ContextNumbers::ContextNumber::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextNumbers::ContextNumber::All::has_operation() const
{
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextNumbers::ContextNumber::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crash-info")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::All::CrashInfo>();
        ent_->parent = this;
        crash_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crash_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextNumbers::ContextNumber::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextNumbers::ContextNumber::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crash-info")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashInfo()
    :
    node{YType::str, "node"}
        ,
    context_info(this, {})
    , crash_package_information(this, {})
{

    yang_name = "crash-info"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::~CrashInfo()
{
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::has_operation() const
{
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::All::CrashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::All::CrashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::All::CrashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-info")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo>();
        ent_->parent = this;
        context_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "crash-package-information")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation>();
        ent_->parent = this;
        crash_package_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::All::CrashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : crash_package_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-info" || name == "crash-package-information" || name == "node")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::ContextInfo()
    :
    process_name{YType::str, "process-name"},
    pid{YType::uint32, "pid"},
    tid{YType::uint32, "tid"},
    core_dump_time{YType::str, "core-dump-time"},
    sig_num{YType::uint32, "sig-num"},
    sin_err_str{YType::str, "sin-err-str"},
    sig_send_pid{YType::uint32, "sig-send-pid"},
    sig_code{YType::uint32, "sig-code"},
    sin_info{YType::str, "sin-info"},
    core_for_process{YType::str, "core-for-process"},
    registers_info{YType::str, "registers-info"}
        ,
    stack_trace(this, {})
    , dll_info(this, {})
{

    yang_name = "context-info"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::~ContextInfo()
{
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| pid.is_set
	|| tid.is_set
	|| core_dump_time.is_set
	|| sig_num.is_set
	|| sin_err_str.is_set
	|| sig_send_pid.is_set
	|| sig_code.is_set
	|| sin_info.is_set
	|| core_for_process.is_set
	|| registers_info.is_set;
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::has_operation() const
{
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| ydk::is_set(core_dump_time.yfilter)
	|| ydk::is_set(sig_num.yfilter)
	|| ydk::is_set(sin_err_str.yfilter)
	|| ydk::is_set(sig_send_pid.yfilter)
	|| ydk::is_set(sig_code.yfilter)
	|| ydk::is_set(sin_info.yfilter)
	|| ydk::is_set(core_for_process.yfilter)
	|| ydk::is_set(registers_info.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());
    if (core_dump_time.is_set || is_set(core_dump_time.yfilter)) leaf_name_data.push_back(core_dump_time.get_name_leafdata());
    if (sig_num.is_set || is_set(sig_num.yfilter)) leaf_name_data.push_back(sig_num.get_name_leafdata());
    if (sin_err_str.is_set || is_set(sin_err_str.yfilter)) leaf_name_data.push_back(sin_err_str.get_name_leafdata());
    if (sig_send_pid.is_set || is_set(sig_send_pid.yfilter)) leaf_name_data.push_back(sig_send_pid.get_name_leafdata());
    if (sig_code.is_set || is_set(sig_code.yfilter)) leaf_name_data.push_back(sig_code.get_name_leafdata());
    if (sin_info.is_set || is_set(sin_info.yfilter)) leaf_name_data.push_back(sin_info.get_name_leafdata());
    if (core_for_process.is_set || is_set(core_for_process.yfilter)) leaf_name_data.push_back(core_for_process.get_name_leafdata());
    if (registers_info.is_set || is_set(registers_info.yfilter)) leaf_name_data.push_back(registers_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack-trace")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace>();
        ent_->parent = this;
        stack_trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dll-info")
    {
        auto ent_ = std::make_shared<Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo>();
        ent_->parent = this;
        dll_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stack_trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dll_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time = value;
        core_dump_time.value_namespace = name_space;
        core_dump_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-num")
    {
        sig_num = value;
        sig_num.value_namespace = name_space;
        sig_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str = value;
        sin_err_str.value_namespace = name_space;
        sin_err_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid = value;
        sig_send_pid.value_namespace = name_space;
        sig_send_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-code")
    {
        sig_code = value;
        sig_code.value_namespace = name_space;
        sig_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-info")
    {
        sin_info = value;
        sin_info.value_namespace = name_space;
        sin_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-for-process")
    {
        core_for_process = value;
        core_for_process.value_namespace = name_space;
        core_for_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registers-info")
    {
        registers_info = value;
        registers_info.value_namespace = name_space;
        registers_info.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time.yfilter = yfilter;
    }
    if(value_path == "sig-num")
    {
        sig_num.yfilter = yfilter;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str.yfilter = yfilter;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid.yfilter = yfilter;
    }
    if(value_path == "sig-code")
    {
        sig_code.yfilter = yfilter;
    }
    if(value_path == "sin-info")
    {
        sin_info.yfilter = yfilter;
    }
    if(value_path == "core-for-process")
    {
        core_for_process.yfilter = yfilter;
    }
    if(value_path == "registers-info")
    {
        registers_info.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace" || name == "dll-info" || name == "process-name" || name == "pid" || name == "tid" || name == "core-dump-time" || name == "sig-num" || name == "sin-err-str" || name == "sig-send-pid" || name == "sig-code" || name == "sin-info" || name == "core-for-process" || name == "registers-info")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::StackTrace()
    :
    stack_trace{YType::uint32, "stack-trace"}
{

    yang_name = "stack-trace"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::~StackTrace()
{
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::has_data() const
{
    if (is_presence_container) return true;
    return stack_trace.is_set;
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stack_trace.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack-trace";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stack_trace.is_set || is_set(stack_trace.yfilter)) leaf_name_data.push_back(stack_trace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stack-trace")
    {
        stack_trace = value;
        stack_trace.value_namespace = name_space;
        stack_trace.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stack-trace")
    {
        stack_trace.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::DllInfo()
    :
    path{YType::str, "path"},
    text_addr{YType::uint32, "text-addr"},
    text_size{YType::uint32, "text-size"},
    data_addr{YType::uint32, "data-addr"},
    data_size{YType::uint32, "data-size"},
    version{YType::uint32, "version"}
{

    yang_name = "dll-info"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::~DllInfo()
{
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| text_addr.is_set
	|| text_size.is_set
	|| data_addr.is_set
	|| data_size.is_set
	|| version.is_set;
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(text_addr.yfilter)
	|| ydk::is_set(text_size.yfilter)
	|| ydk::is_set(data_addr.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dll-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (text_addr.is_set || is_set(text_addr.yfilter)) leaf_name_data.push_back(text_addr.get_name_leafdata());
    if (text_size.is_set || is_set(text_size.yfilter)) leaf_name_data.push_back(text_size.get_name_leafdata());
    if (data_addr.is_set || is_set(data_addr.yfilter)) leaf_name_data.push_back(data_addr.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-addr")
    {
        text_addr = value;
        text_addr.value_namespace = name_space;
        text_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-size")
    {
        text_size = value;
        text_size.value_namespace = name_space;
        text_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-addr")
    {
        data_addr = value;
        data_addr.value_namespace = name_space;
        data_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "text-addr")
    {
        text_addr.yfilter = yfilter;
    }
    if(value_path == "text-size")
    {
        text_size.yfilter = yfilter;
    }
    if(value_path == "data-addr")
    {
        data_addr.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "text-addr" || name == "text-size" || name == "data-addr" || name == "data-size" || name == "version")
        return true;
    return false;
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::CrashPackageInformation()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "crash-package-information"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::~CrashPackageInformation()
{
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source.is_set;
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-package-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}

Context::ContextLocations::ContextLocations()
    :
    context_location(this, {"node_name"})
{

    yang_name = "context-locations"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::ContextLocations::~ContextLocations()
{
}

bool Context::ContextLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_location.len(); index++)
    {
        if(context_location[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextLocations::has_operation() const
{
    for (std::size_t index=0; index<context_location.len(); index++)
    {
        if(context_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::ContextLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-location")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation>();
        ent_->parent = this;
        context_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-location")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::ContextLocation()
    :
    node_name{YType::str, "node-name"}
        ,
    numbers(std::make_shared<Context::ContextLocations::ContextLocation::Numbers>())
    , all(std::make_shared<Context::ContextLocations::ContextLocation::All>())
{
    numbers->parent = this;
    all->parent = this;

    yang_name = "context-location"; yang_parent_name = "context-locations"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::ContextLocations::ContextLocation::~ContextLocation()
{
}

bool Context::ContextLocations::ContextLocation::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (numbers !=  nullptr && numbers->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Context::ContextLocations::ContextLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (numbers !=  nullptr && numbers->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Context::ContextLocations::ContextLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/context-locations/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::ContextLocations::ContextLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-location";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "numbers")
    {
        if(numbers == nullptr)
        {
            numbers = std::make_shared<Context::ContextLocations::ContextLocation::Numbers>();
        }
        return numbers;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Context::ContextLocations::ContextLocation::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(numbers != nullptr)
    {
        _children["numbers"] = numbers;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "numbers" || name == "all" || name == "node-name")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Numbers()
    :
    number(this, {"context_num"})
{

    yang_name = "numbers"; yang_parent_name = "context-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::~Numbers()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextLocations::ContextLocation::Numbers::has_operation() const
{
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number>();
        ent_->parent = this;
        number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextLocations::ContextLocation::Numbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextLocations::ContextLocation::Numbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Number()
    :
    context_num{YType::uint32, "context-num"}
        ,
    enter(std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter>())
{
    enter->parent = this;

    yang_name = "number"; yang_parent_name = "numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::~Number()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::has_data() const
{
    if (is_presence_container) return true;
    return context_num.is_set
	|| (enter !=  nullptr && enter->has_data());
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_num.yfilter)
	|| (enter !=  nullptr && enter->has_operation());
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number";
    ADD_KEY_TOKEN(context_num, "context-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_num.is_set || is_set(context_num.yfilter)) leaf_name_data.push_back(context_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enter")
    {
        if(enter == nullptr)
        {
            enter = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter>();
        }
        return enter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enter != nullptr)
    {
        _children["enter"] = enter;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-num")
    {
        context_num = value;
        context_num.value_namespace = name_space;
        context_num.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::Numbers::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-num")
    {
        context_num.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enter" || name == "context-num")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::Enter()
    :
    crash_info(this, {})
{

    yang_name = "enter"; yang_parent_name = "number"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::~Enter()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::has_operation() const
{
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crash-info")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo>();
        ent_->parent = this;
        crash_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crash_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crash-info")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashInfo()
    :
    node{YType::str, "node"}
        ,
    context_info(this, {})
    , crash_package_information(this, {})
{

    yang_name = "crash-info"; yang_parent_name = "enter"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::~CrashInfo()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::has_operation() const
{
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-info")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo>();
        ent_->parent = this;
        context_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "crash-package-information")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation>();
        ent_->parent = this;
        crash_package_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : crash_package_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-info" || name == "crash-package-information" || name == "node")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::ContextInfo()
    :
    process_name{YType::str, "process-name"},
    pid{YType::uint32, "pid"},
    tid{YType::uint32, "tid"},
    core_dump_time{YType::str, "core-dump-time"},
    sig_num{YType::uint32, "sig-num"},
    sin_err_str{YType::str, "sin-err-str"},
    sig_send_pid{YType::uint32, "sig-send-pid"},
    sig_code{YType::uint32, "sig-code"},
    sin_info{YType::str, "sin-info"},
    core_for_process{YType::str, "core-for-process"},
    registers_info{YType::str, "registers-info"}
        ,
    stack_trace(this, {})
    , dll_info(this, {})
{

    yang_name = "context-info"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::~ContextInfo()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| pid.is_set
	|| tid.is_set
	|| core_dump_time.is_set
	|| sig_num.is_set
	|| sin_err_str.is_set
	|| sig_send_pid.is_set
	|| sig_code.is_set
	|| sin_info.is_set
	|| core_for_process.is_set
	|| registers_info.is_set;
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::has_operation() const
{
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| ydk::is_set(core_dump_time.yfilter)
	|| ydk::is_set(sig_num.yfilter)
	|| ydk::is_set(sin_err_str.yfilter)
	|| ydk::is_set(sig_send_pid.yfilter)
	|| ydk::is_set(sig_code.yfilter)
	|| ydk::is_set(sin_info.yfilter)
	|| ydk::is_set(core_for_process.yfilter)
	|| ydk::is_set(registers_info.yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());
    if (core_dump_time.is_set || is_set(core_dump_time.yfilter)) leaf_name_data.push_back(core_dump_time.get_name_leafdata());
    if (sig_num.is_set || is_set(sig_num.yfilter)) leaf_name_data.push_back(sig_num.get_name_leafdata());
    if (sin_err_str.is_set || is_set(sin_err_str.yfilter)) leaf_name_data.push_back(sin_err_str.get_name_leafdata());
    if (sig_send_pid.is_set || is_set(sig_send_pid.yfilter)) leaf_name_data.push_back(sig_send_pid.get_name_leafdata());
    if (sig_code.is_set || is_set(sig_code.yfilter)) leaf_name_data.push_back(sig_code.get_name_leafdata());
    if (sin_info.is_set || is_set(sin_info.yfilter)) leaf_name_data.push_back(sin_info.get_name_leafdata());
    if (core_for_process.is_set || is_set(core_for_process.yfilter)) leaf_name_data.push_back(core_for_process.get_name_leafdata());
    if (registers_info.is_set || is_set(registers_info.yfilter)) leaf_name_data.push_back(registers_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack-trace")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace>();
        ent_->parent = this;
        stack_trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dll-info")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo>();
        ent_->parent = this;
        dll_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stack_trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dll_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time = value;
        core_dump_time.value_namespace = name_space;
        core_dump_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-num")
    {
        sig_num = value;
        sig_num.value_namespace = name_space;
        sig_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str = value;
        sin_err_str.value_namespace = name_space;
        sin_err_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid = value;
        sig_send_pid.value_namespace = name_space;
        sig_send_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-code")
    {
        sig_code = value;
        sig_code.value_namespace = name_space;
        sig_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-info")
    {
        sin_info = value;
        sin_info.value_namespace = name_space;
        sin_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-for-process")
    {
        core_for_process = value;
        core_for_process.value_namespace = name_space;
        core_for_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registers-info")
    {
        registers_info = value;
        registers_info.value_namespace = name_space;
        registers_info.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time.yfilter = yfilter;
    }
    if(value_path == "sig-num")
    {
        sig_num.yfilter = yfilter;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str.yfilter = yfilter;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid.yfilter = yfilter;
    }
    if(value_path == "sig-code")
    {
        sig_code.yfilter = yfilter;
    }
    if(value_path == "sin-info")
    {
        sin_info.yfilter = yfilter;
    }
    if(value_path == "core-for-process")
    {
        core_for_process.yfilter = yfilter;
    }
    if(value_path == "registers-info")
    {
        registers_info.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace" || name == "dll-info" || name == "process-name" || name == "pid" || name == "tid" || name == "core-dump-time" || name == "sig-num" || name == "sin-err-str" || name == "sig-send-pid" || name == "sig-code" || name == "sin-info" || name == "core-for-process" || name == "registers-info")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::StackTrace()
    :
    stack_trace{YType::uint32, "stack-trace"}
{

    yang_name = "stack-trace"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::~StackTrace()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::has_data() const
{
    if (is_presence_container) return true;
    return stack_trace.is_set;
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stack_trace.yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack-trace";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stack_trace.is_set || is_set(stack_trace.yfilter)) leaf_name_data.push_back(stack_trace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stack-trace")
    {
        stack_trace = value;
        stack_trace.value_namespace = name_space;
        stack_trace.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stack-trace")
    {
        stack_trace.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::DllInfo()
    :
    path{YType::str, "path"},
    text_addr{YType::uint32, "text-addr"},
    text_size{YType::uint32, "text-size"},
    data_addr{YType::uint32, "data-addr"},
    data_size{YType::uint32, "data-size"},
    version{YType::uint32, "version"}
{

    yang_name = "dll-info"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::~DllInfo()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| text_addr.is_set
	|| text_size.is_set
	|| data_addr.is_set
	|| data_size.is_set
	|| version.is_set;
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(text_addr.yfilter)
	|| ydk::is_set(text_size.yfilter)
	|| ydk::is_set(data_addr.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dll-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (text_addr.is_set || is_set(text_addr.yfilter)) leaf_name_data.push_back(text_addr.get_name_leafdata());
    if (text_size.is_set || is_set(text_size.yfilter)) leaf_name_data.push_back(text_size.get_name_leafdata());
    if (data_addr.is_set || is_set(data_addr.yfilter)) leaf_name_data.push_back(data_addr.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-addr")
    {
        text_addr = value;
        text_addr.value_namespace = name_space;
        text_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-size")
    {
        text_size = value;
        text_size.value_namespace = name_space;
        text_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-addr")
    {
        data_addr = value;
        data_addr.value_namespace = name_space;
        data_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "text-addr")
    {
        text_addr.yfilter = yfilter;
    }
    if(value_path == "text-size")
    {
        text_size.yfilter = yfilter;
    }
    if(value_path == "data-addr")
    {
        data_addr.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "text-addr" || name == "text-size" || name == "data-addr" || name == "data-size" || name == "version")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::CrashPackageInformation()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "crash-package-information"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::~CrashPackageInformation()
{
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source.is_set;
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-package-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::All::All()
    :
    crash_info(this, {})
{

    yang_name = "all"; yang_parent_name = "context-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::All::~All()
{
}

bool Context::ContextLocations::ContextLocation::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_data())
            return true;
    }
    return false;
}

bool Context::ContextLocations::ContextLocation::All::has_operation() const
{
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::ContextLocations::ContextLocation::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crash-info")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::All::CrashInfo>();
        ent_->parent = this;
        crash_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crash_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::ContextLocations::ContextLocation::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::ContextLocations::ContextLocation::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crash-info")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::All::CrashInfo::CrashInfo()
    :
    node{YType::str, "node"}
        ,
    context_info(this, {})
    , crash_package_information(this, {})
{

    yang_name = "crash-info"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::All::CrashInfo::~CrashInfo()
{
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::has_operation() const
{
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Context::ContextLocations::ContextLocation::All::CrashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::All::CrashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::All::CrashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-info")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo>();
        ent_->parent = this;
        context_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "crash-package-information")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation>();
        ent_->parent = this;
        crash_package_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::All::CrashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : crash_package_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-info" || name == "crash-package-information" || name == "node")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::ContextInfo()
    :
    process_name{YType::str, "process-name"},
    pid{YType::uint32, "pid"},
    tid{YType::uint32, "tid"},
    core_dump_time{YType::str, "core-dump-time"},
    sig_num{YType::uint32, "sig-num"},
    sin_err_str{YType::str, "sin-err-str"},
    sig_send_pid{YType::uint32, "sig-send-pid"},
    sig_code{YType::uint32, "sig-code"},
    sin_info{YType::str, "sin-info"},
    core_for_process{YType::str, "core-for-process"},
    registers_info{YType::str, "registers-info"}
        ,
    stack_trace(this, {})
    , dll_info(this, {})
{

    yang_name = "context-info"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::~ContextInfo()
{
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| pid.is_set
	|| tid.is_set
	|| core_dump_time.is_set
	|| sig_num.is_set
	|| sin_err_str.is_set
	|| sig_send_pid.is_set
	|| sig_code.is_set
	|| sin_info.is_set
	|| core_for_process.is_set
	|| registers_info.is_set;
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::has_operation() const
{
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| ydk::is_set(core_dump_time.yfilter)
	|| ydk::is_set(sig_num.yfilter)
	|| ydk::is_set(sin_err_str.yfilter)
	|| ydk::is_set(sig_send_pid.yfilter)
	|| ydk::is_set(sig_code.yfilter)
	|| ydk::is_set(sin_info.yfilter)
	|| ydk::is_set(core_for_process.yfilter)
	|| ydk::is_set(registers_info.yfilter);
}

std::string Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());
    if (core_dump_time.is_set || is_set(core_dump_time.yfilter)) leaf_name_data.push_back(core_dump_time.get_name_leafdata());
    if (sig_num.is_set || is_set(sig_num.yfilter)) leaf_name_data.push_back(sig_num.get_name_leafdata());
    if (sin_err_str.is_set || is_set(sin_err_str.yfilter)) leaf_name_data.push_back(sin_err_str.get_name_leafdata());
    if (sig_send_pid.is_set || is_set(sig_send_pid.yfilter)) leaf_name_data.push_back(sig_send_pid.get_name_leafdata());
    if (sig_code.is_set || is_set(sig_code.yfilter)) leaf_name_data.push_back(sig_code.get_name_leafdata());
    if (sin_info.is_set || is_set(sin_info.yfilter)) leaf_name_data.push_back(sin_info.get_name_leafdata());
    if (core_for_process.is_set || is_set(core_for_process.yfilter)) leaf_name_data.push_back(core_for_process.get_name_leafdata());
    if (registers_info.is_set || is_set(registers_info.yfilter)) leaf_name_data.push_back(registers_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack-trace")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace>();
        ent_->parent = this;
        stack_trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dll-info")
    {
        auto ent_ = std::make_shared<Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo>();
        ent_->parent = this;
        dll_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stack_trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dll_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time = value;
        core_dump_time.value_namespace = name_space;
        core_dump_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-num")
    {
        sig_num = value;
        sig_num.value_namespace = name_space;
        sig_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str = value;
        sin_err_str.value_namespace = name_space;
        sin_err_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid = value;
        sig_send_pid.value_namespace = name_space;
        sig_send_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-code")
    {
        sig_code = value;
        sig_code.value_namespace = name_space;
        sig_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-info")
    {
        sin_info = value;
        sin_info.value_namespace = name_space;
        sin_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-for-process")
    {
        core_for_process = value;
        core_for_process.value_namespace = name_space;
        core_for_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registers-info")
    {
        registers_info = value;
        registers_info.value_namespace = name_space;
        registers_info.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time.yfilter = yfilter;
    }
    if(value_path == "sig-num")
    {
        sig_num.yfilter = yfilter;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str.yfilter = yfilter;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid.yfilter = yfilter;
    }
    if(value_path == "sig-code")
    {
        sig_code.yfilter = yfilter;
    }
    if(value_path == "sin-info")
    {
        sin_info.yfilter = yfilter;
    }
    if(value_path == "core-for-process")
    {
        core_for_process.yfilter = yfilter;
    }
    if(value_path == "registers-info")
    {
        registers_info.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace" || name == "dll-info" || name == "process-name" || name == "pid" || name == "tid" || name == "core-dump-time" || name == "sig-num" || name == "sin-err-str" || name == "sig-send-pid" || name == "sig-code" || name == "sin-info" || name == "core-for-process" || name == "registers-info")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::StackTrace()
    :
    stack_trace{YType::uint32, "stack-trace"}
{

    yang_name = "stack-trace"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::~StackTrace()
{
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::has_data() const
{
    if (is_presence_container) return true;
    return stack_trace.is_set;
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stack_trace.yfilter);
}

std::string Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack-trace";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stack_trace.is_set || is_set(stack_trace.yfilter)) leaf_name_data.push_back(stack_trace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stack-trace")
    {
        stack_trace = value;
        stack_trace.value_namespace = name_space;
        stack_trace.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stack-trace")
    {
        stack_trace.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::DllInfo()
    :
    path{YType::str, "path"},
    text_addr{YType::uint32, "text-addr"},
    text_size{YType::uint32, "text-size"},
    data_addr{YType::uint32, "data-addr"},
    data_size{YType::uint32, "data-size"},
    version{YType::uint32, "version"}
{

    yang_name = "dll-info"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::~DllInfo()
{
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| text_addr.is_set
	|| text_size.is_set
	|| data_addr.is_set
	|| data_size.is_set
	|| version.is_set;
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(text_addr.yfilter)
	|| ydk::is_set(text_size.yfilter)
	|| ydk::is_set(data_addr.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dll-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (text_addr.is_set || is_set(text_addr.yfilter)) leaf_name_data.push_back(text_addr.get_name_leafdata());
    if (text_size.is_set || is_set(text_size.yfilter)) leaf_name_data.push_back(text_size.get_name_leafdata());
    if (data_addr.is_set || is_set(data_addr.yfilter)) leaf_name_data.push_back(data_addr.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-addr")
    {
        text_addr = value;
        text_addr.value_namespace = name_space;
        text_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-size")
    {
        text_size = value;
        text_size.value_namespace = name_space;
        text_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-addr")
    {
        data_addr = value;
        data_addr.value_namespace = name_space;
        data_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "text-addr")
    {
        text_addr.yfilter = yfilter;
    }
    if(value_path == "text-size")
    {
        text_size.yfilter = yfilter;
    }
    if(value_path == "data-addr")
    {
        data_addr.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "text-addr" || name == "text-size" || name == "data-addr" || name == "data-size" || name == "version")
        return true;
    return false;
}

Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::CrashPackageInformation()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "crash-package-information"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::~CrashPackageInformation()
{
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source.is_set;
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-package-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}

Context::All::All()
    :
    crash_info(this, {})
{

    yang_name = "all"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::All::~All()
{
}

bool Context::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_data())
            return true;
    }
    return false;
}

bool Context::All::has_operation() const
{
    for (std::size_t index=0; index<crash_info.len(); index++)
    {
        if(crash_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Context::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crash-info")
    {
        auto ent_ = std::make_shared<Context::All::CrashInfo>();
        ent_->parent = this;
        crash_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crash_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Context::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Context::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crash-info")
        return true;
    return false;
}

Context::All::CrashInfo::CrashInfo()
    :
    node{YType::str, "node"}
        ,
    context_info(this, {})
    , crash_package_information(this, {})
{

    yang_name = "crash-info"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::All::CrashInfo::~CrashInfo()
{
}

bool Context::All::CrashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Context::All::CrashInfo::has_operation() const
{
    for (std::size_t index=0; index<context_info.len(); index++)
    {
        if(context_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<crash_package_information.len(); index++)
    {
        if(crash_package_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Context::All::CrashInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::All::CrashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::All::CrashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::All::CrashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-info")
    {
        auto ent_ = std::make_shared<Context::All::CrashInfo::ContextInfo>();
        ent_->parent = this;
        context_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "crash-package-information")
    {
        auto ent_ = std::make_shared<Context::All::CrashInfo::CrashPackageInformation>();
        ent_->parent = this;
        crash_package_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::All::CrashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : crash_package_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::All::CrashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Context::All::CrashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Context::All::CrashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-info" || name == "crash-package-information" || name == "node")
        return true;
    return false;
}

Context::All::CrashInfo::ContextInfo::ContextInfo()
    :
    process_name{YType::str, "process-name"},
    pid{YType::uint32, "pid"},
    tid{YType::uint32, "tid"},
    core_dump_time{YType::str, "core-dump-time"},
    sig_num{YType::uint32, "sig-num"},
    sin_err_str{YType::str, "sin-err-str"},
    sig_send_pid{YType::uint32, "sig-send-pid"},
    sig_code{YType::uint32, "sig-code"},
    sin_info{YType::str, "sin-info"},
    core_for_process{YType::str, "core-for-process"},
    registers_info{YType::str, "registers-info"}
        ,
    stack_trace(this, {})
    , dll_info(this, {})
{

    yang_name = "context-info"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::All::CrashInfo::ContextInfo::~ContextInfo()
{
}

bool Context::All::CrashInfo::ContextInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| pid.is_set
	|| tid.is_set
	|| core_dump_time.is_set
	|| sig_num.is_set
	|| sin_err_str.is_set
	|| sig_send_pid.is_set
	|| sig_code.is_set
	|| sin_info.is_set
	|| core_for_process.is_set
	|| registers_info.is_set;
}

bool Context::All::CrashInfo::ContextInfo::has_operation() const
{
    for (std::size_t index=0; index<stack_trace.len(); index++)
    {
        if(stack_trace[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dll_info.len(); index++)
    {
        if(dll_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| ydk::is_set(core_dump_time.yfilter)
	|| ydk::is_set(sig_num.yfilter)
	|| ydk::is_set(sin_err_str.yfilter)
	|| ydk::is_set(sig_send_pid.yfilter)
	|| ydk::is_set(sig_code.yfilter)
	|| ydk::is_set(sin_info.yfilter)
	|| ydk::is_set(core_for_process.yfilter)
	|| ydk::is_set(registers_info.yfilter);
}

std::string Context::All::CrashInfo::ContextInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/all/crash-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::All::CrashInfo::ContextInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::All::CrashInfo::ContextInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());
    if (core_dump_time.is_set || is_set(core_dump_time.yfilter)) leaf_name_data.push_back(core_dump_time.get_name_leafdata());
    if (sig_num.is_set || is_set(sig_num.yfilter)) leaf_name_data.push_back(sig_num.get_name_leafdata());
    if (sin_err_str.is_set || is_set(sin_err_str.yfilter)) leaf_name_data.push_back(sin_err_str.get_name_leafdata());
    if (sig_send_pid.is_set || is_set(sig_send_pid.yfilter)) leaf_name_data.push_back(sig_send_pid.get_name_leafdata());
    if (sig_code.is_set || is_set(sig_code.yfilter)) leaf_name_data.push_back(sig_code.get_name_leafdata());
    if (sin_info.is_set || is_set(sin_info.yfilter)) leaf_name_data.push_back(sin_info.get_name_leafdata());
    if (core_for_process.is_set || is_set(core_for_process.yfilter)) leaf_name_data.push_back(core_for_process.get_name_leafdata());
    if (registers_info.is_set || is_set(registers_info.yfilter)) leaf_name_data.push_back(registers_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::All::CrashInfo::ContextInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack-trace")
    {
        auto ent_ = std::make_shared<Context::All::CrashInfo::ContextInfo::StackTrace>();
        ent_->parent = this;
        stack_trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dll-info")
    {
        auto ent_ = std::make_shared<Context::All::CrashInfo::ContextInfo::DllInfo>();
        ent_->parent = this;
        dll_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::All::CrashInfo::ContextInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stack_trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dll_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Context::All::CrashInfo::ContextInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time = value;
        core_dump_time.value_namespace = name_space;
        core_dump_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-num")
    {
        sig_num = value;
        sig_num.value_namespace = name_space;
        sig_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str = value;
        sin_err_str.value_namespace = name_space;
        sin_err_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid = value;
        sig_send_pid.value_namespace = name_space;
        sig_send_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-code")
    {
        sig_code = value;
        sig_code.value_namespace = name_space;
        sig_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sin-info")
    {
        sin_info = value;
        sin_info.value_namespace = name_space;
        sin_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-for-process")
    {
        core_for_process = value;
        core_for_process.value_namespace = name_space;
        core_for_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registers-info")
    {
        registers_info = value;
        registers_info.value_namespace = name_space;
        registers_info.value_namespace_prefix = name_space_prefix;
    }
}

void Context::All::CrashInfo::ContextInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
    if(value_path == "core-dump-time")
    {
        core_dump_time.yfilter = yfilter;
    }
    if(value_path == "sig-num")
    {
        sig_num.yfilter = yfilter;
    }
    if(value_path == "sin-err-str")
    {
        sin_err_str.yfilter = yfilter;
    }
    if(value_path == "sig-send-pid")
    {
        sig_send_pid.yfilter = yfilter;
    }
    if(value_path == "sig-code")
    {
        sig_code.yfilter = yfilter;
    }
    if(value_path == "sin-info")
    {
        sin_info.yfilter = yfilter;
    }
    if(value_path == "core-for-process")
    {
        core_for_process.yfilter = yfilter;
    }
    if(value_path == "registers-info")
    {
        registers_info.yfilter = yfilter;
    }
}

bool Context::All::CrashInfo::ContextInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace" || name == "dll-info" || name == "process-name" || name == "pid" || name == "tid" || name == "core-dump-time" || name == "sig-num" || name == "sin-err-str" || name == "sig-send-pid" || name == "sig-code" || name == "sin-info" || name == "core-for-process" || name == "registers-info")
        return true;
    return false;
}

Context::All::CrashInfo::ContextInfo::StackTrace::StackTrace()
    :
    stack_trace{YType::uint32, "stack-trace"}
{

    yang_name = "stack-trace"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::All::CrashInfo::ContextInfo::StackTrace::~StackTrace()
{
}

bool Context::All::CrashInfo::ContextInfo::StackTrace::has_data() const
{
    if (is_presence_container) return true;
    return stack_trace.is_set;
}

bool Context::All::CrashInfo::ContextInfo::StackTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stack_trace.yfilter);
}

std::string Context::All::CrashInfo::ContextInfo::StackTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/all/crash-info/context-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::All::CrashInfo::ContextInfo::StackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack-trace";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::All::CrashInfo::ContextInfo::StackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stack_trace.is_set || is_set(stack_trace.yfilter)) leaf_name_data.push_back(stack_trace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::All::CrashInfo::ContextInfo::StackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::All::CrashInfo::ContextInfo::StackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::All::CrashInfo::ContextInfo::StackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stack-trace")
    {
        stack_trace = value;
        stack_trace.value_namespace = name_space;
        stack_trace.value_namespace_prefix = name_space_prefix;
    }
}

void Context::All::CrashInfo::ContextInfo::StackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stack-trace")
    {
        stack_trace.yfilter = yfilter;
    }
}

bool Context::All::CrashInfo::ContextInfo::StackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack-trace")
        return true;
    return false;
}

Context::All::CrashInfo::ContextInfo::DllInfo::DllInfo()
    :
    path{YType::str, "path"},
    text_addr{YType::uint32, "text-addr"},
    text_size{YType::uint32, "text-size"},
    data_addr{YType::uint32, "data-addr"},
    data_size{YType::uint32, "data-size"},
    version{YType::uint32, "version"}
{

    yang_name = "dll-info"; yang_parent_name = "context-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::All::CrashInfo::ContextInfo::DllInfo::~DllInfo()
{
}

bool Context::All::CrashInfo::ContextInfo::DllInfo::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| text_addr.is_set
	|| text_size.is_set
	|| data_addr.is_set
	|| data_size.is_set
	|| version.is_set;
}

bool Context::All::CrashInfo::ContextInfo::DllInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(text_addr.yfilter)
	|| ydk::is_set(text_size.yfilter)
	|| ydk::is_set(data_addr.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Context::All::CrashInfo::ContextInfo::DllInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/all/crash-info/context-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::All::CrashInfo::ContextInfo::DllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dll-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::All::CrashInfo::ContextInfo::DllInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (text_addr.is_set || is_set(text_addr.yfilter)) leaf_name_data.push_back(text_addr.get_name_leafdata());
    if (text_size.is_set || is_set(text_size.yfilter)) leaf_name_data.push_back(text_size.get_name_leafdata());
    if (data_addr.is_set || is_set(data_addr.yfilter)) leaf_name_data.push_back(data_addr.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::All::CrashInfo::ContextInfo::DllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::All::CrashInfo::ContextInfo::DllInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::All::CrashInfo::ContextInfo::DllInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-addr")
    {
        text_addr = value;
        text_addr.value_namespace = name_space;
        text_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-size")
    {
        text_size = value;
        text_size.value_namespace = name_space;
        text_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-addr")
    {
        data_addr = value;
        data_addr.value_namespace = name_space;
        data_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Context::All::CrashInfo::ContextInfo::DllInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "text-addr")
    {
        text_addr.yfilter = yfilter;
    }
    if(value_path == "text-size")
    {
        text_size.yfilter = yfilter;
    }
    if(value_path == "data-addr")
    {
        data_addr.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Context::All::CrashInfo::ContextInfo::DllInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "text-addr" || name == "text-size" || name == "data-addr" || name == "data-size" || name == "version")
        return true;
    return false;
}

Context::All::CrashInfo::CrashPackageInformation::CrashPackageInformation()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "crash-package-information"; yang_parent_name = "crash-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Context::All::CrashInfo::CrashPackageInformation::~CrashPackageInformation()
{
}

bool Context::All::CrashInfo::CrashPackageInformation::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source.is_set;
}

bool Context::All::CrashInfo::CrashPackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Context::All::CrashInfo::CrashPackageInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-dumper-oper:context/all/crash-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Context::All::CrashInfo::CrashPackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash-package-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Context::All::CrashInfo::CrashPackageInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Context::All::CrashInfo::CrashPackageInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Context::All::CrashInfo::CrashPackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Context::All::CrashInfo::CrashPackageInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Context::All::CrashInfo::CrashPackageInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Context::All::CrashInfo::CrashPackageInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}


}
}

