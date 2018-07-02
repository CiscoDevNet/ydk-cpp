
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_4.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_5.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {

Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Bootflash()
    :
    info(std::make_shared<Controller::CccDriver::Bootflash::Info>())
    , status(std::make_shared<Controller::CccDriver::Bootflash::Status>())
    , cre_status(std::make_shared<Controller::CccDriver::Bootflash::CreStatus>())
{
    info->parent = this;
    status->parent = this;
    cre_status->parent = this;

    yang_name = "bootflash"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::~Bootflash()
{
}

bool Controller::CccDriver::Bootflash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (cre_status !=  nullptr && cre_status->has_data());
}

bool Controller::CccDriver::Bootflash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (cre_status !=  nullptr && cre_status->has_operation());
}

std::string Controller::CccDriver::Bootflash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootflash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CccDriver::Bootflash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CccDriver::Bootflash::Status>();
        }
        return status;
    }

    if(child_yang_name == "cre_status")
    {
        if(cre_status == nullptr)
        {
            cre_status = std::make_shared<Controller::CccDriver::Bootflash::CreStatus>();
        }
        return cre_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(cre_status != nullptr)
    {
        children["cre_status"] = cre_status;
    }

    return children;
}

void Controller::CccDriver::Bootflash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Bootflash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Bootflash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status" || name == "cre_status")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Info::Info()
    :
    location(this, {"location"})
{

    yang_name = "info"; yang_parent_name = "bootflash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::Info::~Info()
{
}

bool Controller::CccDriver::Bootflash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Bootflash::Info::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Bootflash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/bootflash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Bootflash::Info::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Bootflash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Bootflash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Bootflash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Info::Location::Location()
    :
    location{YType::str, "location"}
        ,
    bf_info(std::make_shared<Controller::CccDriver::Bootflash::Info::Location::BfInfo>())
{
    bf_info->parent = this;

    yang_name = "location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::Info::Location::~Location()
{
}

bool Controller::CccDriver::Bootflash::Info::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (bf_info !=  nullptr && bf_info->has_data());
}

bool Controller::CccDriver::Bootflash::Info::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (bf_info !=  nullptr && bf_info->has_operation());
}

std::string Controller::CccDriver::Bootflash::Info::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/bootflash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::Info::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::Info::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::Info::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bf_info")
    {
        if(bf_info == nullptr)
        {
            bf_info = std::make_shared<Controller::CccDriver::Bootflash::Info::Location::BfInfo>();
        }
        return bf_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::Info::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bf_info != nullptr)
    {
        children["bf_info"] = bf_info;
    }

    return children;
}

void Controller::CccDriver::Bootflash::Info::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Bootflash::Info::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Bootflash::Info::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf_info" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Info::Location::BfInfo::BfInfo()
    :
    bf_info_values{YType::str, "bf_info_values"}
{

    yang_name = "bf_info"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Bootflash::Info::Location::BfInfo::~BfInfo()
{
}

bool Controller::CccDriver::Bootflash::Info::Location::BfInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bf_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Bootflash::Info::Location::BfInfo::has_operation() const
{
    for (auto const & leaf : bf_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bf_info_values.yfilter);
}

std::string Controller::CccDriver::Bootflash::Info::Location::BfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::Info::Location::BfInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bf_info_values_name_datas = bf_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bf_info_values_name_datas.begin(), bf_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::Info::Location::BfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::Info::Location::BfInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Bootflash::Info::Location::BfInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bf_info_values")
    {
        bf_info_values.append(value);
    }
}

void Controller::CccDriver::Bootflash::Info::Location::BfInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bf_info_values")
    {
        bf_info_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Bootflash::Info::Location::BfInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf_info_values")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Status::Status()
    :
    location(this, {"location"})
{

    yang_name = "status"; yang_parent_name = "bootflash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::Status::~Status()
{
}

bool Controller::CccDriver::Bootflash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Bootflash::Status::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Bootflash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/bootflash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Bootflash::Status::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Bootflash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Bootflash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Bootflash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Status::Location::Location()
    :
    location{YType::str, "location"}
        ,
    bf_status(std::make_shared<Controller::CccDriver::Bootflash::Status::Location::BfStatus>())
{
    bf_status->parent = this;

    yang_name = "location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::Status::Location::~Location()
{
}

bool Controller::CccDriver::Bootflash::Status::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (bf_status !=  nullptr && bf_status->has_data());
}

bool Controller::CccDriver::Bootflash::Status::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (bf_status !=  nullptr && bf_status->has_operation());
}

std::string Controller::CccDriver::Bootflash::Status::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/bootflash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::Status::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::Status::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::Status::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bf_status")
    {
        if(bf_status == nullptr)
        {
            bf_status = std::make_shared<Controller::CccDriver::Bootflash::Status::Location::BfStatus>();
        }
        return bf_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::Status::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bf_status != nullptr)
    {
        children["bf_status"] = bf_status;
    }

    return children;
}

void Controller::CccDriver::Bootflash::Status::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Bootflash::Status::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Bootflash::Status::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf_status" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::Status::Location::BfStatus::BfStatus()
    :
    bf_status_values{YType::str, "bf_status_values"}
{

    yang_name = "bf_status"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Bootflash::Status::Location::BfStatus::~BfStatus()
{
}

bool Controller::CccDriver::Bootflash::Status::Location::BfStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bf_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Bootflash::Status::Location::BfStatus::has_operation() const
{
    for (auto const & leaf : bf_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bf_status_values.yfilter);
}

std::string Controller::CccDriver::Bootflash::Status::Location::BfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::Status::Location::BfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bf_status_values_name_datas = bf_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bf_status_values_name_datas.begin(), bf_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::Status::Location::BfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::Status::Location::BfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Bootflash::Status::Location::BfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bf_status_values")
    {
        bf_status_values.append(value);
    }
}

void Controller::CccDriver::Bootflash::Status::Location::BfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bf_status_values")
    {
        bf_status_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Bootflash::Status::Location::BfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf_status_values")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::CreStatus::CreStatus()
    :
    location(this, {"location"})
{

    yang_name = "cre_status"; yang_parent_name = "bootflash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::CreStatus::~CreStatus()
{
}

bool Controller::CccDriver::Bootflash::CreStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Bootflash::CreStatus::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Bootflash::CreStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/bootflash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::CreStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cre_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::CreStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::CreStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Bootflash::CreStatus::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::CreStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Bootflash::CreStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Bootflash::CreStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Bootflash::CreStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::CreStatus::Location::Location()
    :
    location{YType::str, "location"}
        ,
    bf_status(std::make_shared<Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus>())
{
    bf_status->parent = this;

    yang_name = "location"; yang_parent_name = "cre_status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Bootflash::CreStatus::Location::~Location()
{
}

bool Controller::CccDriver::Bootflash::CreStatus::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (bf_status !=  nullptr && bf_status->has_data());
}

bool Controller::CccDriver::Bootflash::CreStatus::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (bf_status !=  nullptr && bf_status->has_operation());
}

std::string Controller::CccDriver::Bootflash::CreStatus::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/bootflash/cre_status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Bootflash::CreStatus::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::CreStatus::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::CreStatus::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bf_status")
    {
        if(bf_status == nullptr)
        {
            bf_status = std::make_shared<Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus>();
        }
        return bf_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::CreStatus::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bf_status != nullptr)
    {
        children["bf_status"] = bf_status;
    }

    return children;
}

void Controller::CccDriver::Bootflash::CreStatus::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Bootflash::CreStatus::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Bootflash::CreStatus::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf_status" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::BfStatus()
    :
    bf_status_values{YType::str, "bf_status_values"}
{

    yang_name = "bf_status"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::~BfStatus()
{
}

bool Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bf_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::has_operation() const
{
    for (auto const & leaf : bf_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bf_status_values.yfilter);
}

std::string Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bf_status_values_name_datas = bf_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bf_status_values_name_datas.begin(), bf_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bf_status_values")
    {
        bf_status_values.append(value);
    }
}

void Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bf_status_values")
    {
        bf_status_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf_status_values")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Inventory()
    :
    summary(std::make_shared<Controller::CccDriver::Inventory::Summary>())
    , version(std::make_shared<Controller::CccDriver::Inventory::Version>())
    , status(std::make_shared<Controller::CccDriver::Inventory::Status>())
    , detail(std::make_shared<Controller::CccDriver::Inventory::Detail>())
{
    summary->parent = this;
    version->parent = this;
    status->parent = this;
    detail->parent = this;

    yang_name = "inventory"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::~Inventory()
{
}

bool Controller::CccDriver::Inventory::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (version !=  nullptr && version->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CccDriver::Inventory::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (version !=  nullptr && version->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CccDriver::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::CccDriver::Inventory::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Controller::CccDriver::Inventory::Version>();
        }
        return version;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CccDriver::Inventory::Status>();
        }
        return status;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CccDriver::Inventory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(version != nullptr)
    {
        children["version"] = version;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::CccDriver::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "version" || name == "status" || name == "detail")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Summary::Summary()
    :
    ccc_inv_summary(this, {"location"})
{

    yang_name = "summary"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Summary::~Summary()
{
}

bool Controller::CccDriver::Inventory::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_inv_summary.len(); index++)
    {
        if(ccc_inv_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Inventory::Summary::has_operation() const
{
    for (std::size_t index=0; index<ccc_inv_summary.len(); index++)
    {
        if(ccc_inv_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Inventory::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_inv_summary")
    {
        auto c = std::make_shared<Controller::CccDriver::Inventory::Summary::CccInvSummary>();
        c->parent = this;
        ccc_inv_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_inv_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Inventory::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Inventory::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Inventory::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_summary")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Summary::CccInvSummary::CccInvSummary()
    :
    location{YType::str, "location"},
    ccc_inv_pid_string{YType::str, "ccc_inv_PID_string"},
    ccc_inv_slot_number{YType::uint32, "ccc_inv_slot_number"},
    ccc_inv_serial_number{YType::str, "ccc_inv_serial_number"},
    ccc_inv_hw_version{YType::str, "ccc_inv_hw_version"},
    ccc_inv_card_state{YType::str, "ccc_inv_card_state"}
{

    yang_name = "ccc_inv_summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Summary::CccInvSummary::~CccInvSummary()
{
}

bool Controller::CccDriver::Inventory::Summary::CccInvSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| ccc_inv_pid_string.is_set
	|| ccc_inv_slot_number.is_set
	|| ccc_inv_serial_number.is_set
	|| ccc_inv_hw_version.is_set
	|| ccc_inv_card_state.is_set;
}

bool Controller::CccDriver::Inventory::Summary::CccInvSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ccc_inv_pid_string.yfilter)
	|| ydk::is_set(ccc_inv_slot_number.yfilter)
	|| ydk::is_set(ccc_inv_serial_number.yfilter)
	|| ydk::is_set(ccc_inv_hw_version.yfilter)
	|| ydk::is_set(ccc_inv_card_state.yfilter);
}

std::string Controller::CccDriver::Inventory::Summary::CccInvSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Summary::CccInvSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_inv_summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Summary::CccInvSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ccc_inv_pid_string.is_set || is_set(ccc_inv_pid_string.yfilter)) leaf_name_data.push_back(ccc_inv_pid_string.get_name_leafdata());
    if (ccc_inv_slot_number.is_set || is_set(ccc_inv_slot_number.yfilter)) leaf_name_data.push_back(ccc_inv_slot_number.get_name_leafdata());
    if (ccc_inv_serial_number.is_set || is_set(ccc_inv_serial_number.yfilter)) leaf_name_data.push_back(ccc_inv_serial_number.get_name_leafdata());
    if (ccc_inv_hw_version.is_set || is_set(ccc_inv_hw_version.yfilter)) leaf_name_data.push_back(ccc_inv_hw_version.get_name_leafdata());
    if (ccc_inv_card_state.is_set || is_set(ccc_inv_card_state.yfilter)) leaf_name_data.push_back(ccc_inv_card_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Summary::CccInvSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Summary::CccInvSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Inventory::Summary::CccInvSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_PID_string")
    {
        ccc_inv_pid_string = value;
        ccc_inv_pid_string.value_namespace = name_space;
        ccc_inv_pid_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_slot_number")
    {
        ccc_inv_slot_number = value;
        ccc_inv_slot_number.value_namespace = name_space;
        ccc_inv_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_serial_number")
    {
        ccc_inv_serial_number = value;
        ccc_inv_serial_number.value_namespace = name_space;
        ccc_inv_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_hw_version")
    {
        ccc_inv_hw_version = value;
        ccc_inv_hw_version.value_namespace = name_space;
        ccc_inv_hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_card_state")
    {
        ccc_inv_card_state = value;
        ccc_inv_card_state.value_namespace = name_space;
        ccc_inv_card_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Inventory::Summary::CccInvSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_PID_string")
    {
        ccc_inv_pid_string.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_slot_number")
    {
        ccc_inv_slot_number.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_serial_number")
    {
        ccc_inv_serial_number.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_hw_version")
    {
        ccc_inv_hw_version.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_card_state")
    {
        ccc_inv_card_state.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Inventory::Summary::CccInvSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "ccc_inv_PID_string" || name == "ccc_inv_slot_number" || name == "ccc_inv_serial_number" || name == "ccc_inv_hw_version" || name == "ccc_inv_card_state")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Version::Version()
    :
    ccc_inv_version(this, {"location"})
{

    yang_name = "version"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Version::~Version()
{
}

bool Controller::CccDriver::Inventory::Version::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_inv_version.len(); index++)
    {
        if(ccc_inv_version[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Inventory::Version::has_operation() const
{
    for (std::size_t index=0; index<ccc_inv_version.len(); index++)
    {
        if(ccc_inv_version[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Inventory::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_inv_version")
    {
        auto c = std::make_shared<Controller::CccDriver::Inventory::Version::CccInvVersion>();
        c->parent = this;
        ccc_inv_version.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_inv_version.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Inventory::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Inventory::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Inventory::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_version")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Version::CccInvVersion::CccInvVersion()
    :
    location{YType::str, "location"},
    ccc_inv_pid_string{YType::str, "ccc_inv_PID_string"},
    ccc_inv_ccc_version{YType::str, "ccc_inv_ccc_version"},
    ccc_inv_fpga_version{YType::str, "ccc_inv_FPGA_version"},
    ccc_inv_pon_version{YType::str, "ccc_inv_pon_version"},
    ccc_inv_switch_version{YType::str, "ccc_inv_switch_version"}
{

    yang_name = "ccc_inv_version"; yang_parent_name = "version"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Version::CccInvVersion::~CccInvVersion()
{
}

bool Controller::CccDriver::Inventory::Version::CccInvVersion::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| ccc_inv_pid_string.is_set
	|| ccc_inv_ccc_version.is_set
	|| ccc_inv_fpga_version.is_set
	|| ccc_inv_pon_version.is_set
	|| ccc_inv_switch_version.is_set;
}

bool Controller::CccDriver::Inventory::Version::CccInvVersion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ccc_inv_pid_string.yfilter)
	|| ydk::is_set(ccc_inv_ccc_version.yfilter)
	|| ydk::is_set(ccc_inv_fpga_version.yfilter)
	|| ydk::is_set(ccc_inv_pon_version.yfilter)
	|| ydk::is_set(ccc_inv_switch_version.yfilter);
}

std::string Controller::CccDriver::Inventory::Version::CccInvVersion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/version/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Version::CccInvVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_inv_version";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Version::CccInvVersion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ccc_inv_pid_string.is_set || is_set(ccc_inv_pid_string.yfilter)) leaf_name_data.push_back(ccc_inv_pid_string.get_name_leafdata());
    if (ccc_inv_ccc_version.is_set || is_set(ccc_inv_ccc_version.yfilter)) leaf_name_data.push_back(ccc_inv_ccc_version.get_name_leafdata());
    if (ccc_inv_fpga_version.is_set || is_set(ccc_inv_fpga_version.yfilter)) leaf_name_data.push_back(ccc_inv_fpga_version.get_name_leafdata());
    if (ccc_inv_pon_version.is_set || is_set(ccc_inv_pon_version.yfilter)) leaf_name_data.push_back(ccc_inv_pon_version.get_name_leafdata());
    if (ccc_inv_switch_version.is_set || is_set(ccc_inv_switch_version.yfilter)) leaf_name_data.push_back(ccc_inv_switch_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Version::CccInvVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Version::CccInvVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Inventory::Version::CccInvVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_PID_string")
    {
        ccc_inv_pid_string = value;
        ccc_inv_pid_string.value_namespace = name_space;
        ccc_inv_pid_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_ccc_version")
    {
        ccc_inv_ccc_version = value;
        ccc_inv_ccc_version.value_namespace = name_space;
        ccc_inv_ccc_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_FPGA_version")
    {
        ccc_inv_fpga_version = value;
        ccc_inv_fpga_version.value_namespace = name_space;
        ccc_inv_fpga_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_pon_version")
    {
        ccc_inv_pon_version = value;
        ccc_inv_pon_version.value_namespace = name_space;
        ccc_inv_pon_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_inv_switch_version")
    {
        ccc_inv_switch_version = value;
        ccc_inv_switch_version.value_namespace = name_space;
        ccc_inv_switch_version.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Inventory::Version::CccInvVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_PID_string")
    {
        ccc_inv_pid_string.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_ccc_version")
    {
        ccc_inv_ccc_version.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_FPGA_version")
    {
        ccc_inv_fpga_version.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_pon_version")
    {
        ccc_inv_pon_version.yfilter = yfilter;
    }
    if(value_path == "ccc_inv_switch_version")
    {
        ccc_inv_switch_version.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Inventory::Version::CccInvVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "ccc_inv_PID_string" || name == "ccc_inv_ccc_version" || name == "ccc_inv_FPGA_version" || name == "ccc_inv_pon_version" || name == "ccc_inv_switch_version")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Status::Status()
    :
    ccc_inv_status(this, {"location"})
{

    yang_name = "status"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Status::~Status()
{
}

bool Controller::CccDriver::Inventory::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_inv_status.len(); index++)
    {
        if(ccc_inv_status[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Inventory::Status::has_operation() const
{
    for (std::size_t index=0; index<ccc_inv_status.len(); index++)
    {
        if(ccc_inv_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Inventory::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_inv_status")
    {
        auto c = std::make_shared<Controller::CccDriver::Inventory::Status::CccInvStatus>();
        c->parent = this;
        ccc_inv_status.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_inv_status.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Inventory::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Inventory::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Inventory::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_status")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatus()
    :
    location{YType::str, "location"}
        ,
    ccc_inv_status_list(std::make_shared<Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList>())
{
    ccc_inv_status_list->parent = this;

    yang_name = "ccc_inv_status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Status::CccInvStatus::~CccInvStatus()
{
}

bool Controller::CccDriver::Inventory::Status::CccInvStatus::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (ccc_inv_status_list !=  nullptr && ccc_inv_status_list->has_data());
}

bool Controller::CccDriver::Inventory::Status::CccInvStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (ccc_inv_status_list !=  nullptr && ccc_inv_status_list->has_operation());
}

std::string Controller::CccDriver::Inventory::Status::CccInvStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Status::CccInvStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_inv_status";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Status::CccInvStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Status::CccInvStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_inv_status_list")
    {
        if(ccc_inv_status_list == nullptr)
        {
            ccc_inv_status_list = std::make_shared<Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList>();
        }
        return ccc_inv_status_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Status::CccInvStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ccc_inv_status_list != nullptr)
    {
        children["ccc_inv_status_list"] = ccc_inv_status_list;
    }

    return children;
}

void Controller::CccDriver::Inventory::Status::CccInvStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Inventory::Status::CccInvStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Inventory::Status::CccInvStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_status_list" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::CccInvStatusList()
    :
    ccc_inv_status_values{YType::str, "ccc_inv_status_values"}
{

    yang_name = "ccc_inv_status_list"; yang_parent_name = "ccc_inv_status"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::~CccInvStatusList()
{
}

bool Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ccc_inv_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::has_operation() const
{
    for (auto const & leaf : ccc_inv_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ccc_inv_status_values.yfilter);
}

std::string Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_inv_status_list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ccc_inv_status_values_name_datas = ccc_inv_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ccc_inv_status_values_name_datas.begin(), ccc_inv_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_inv_status_values")
    {
        ccc_inv_status_values.append(value);
    }
}

void Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_inv_status_values")
    {
        ccc_inv_status_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_status_values")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Detail::Detail()
    :
    ccc_inv_detail(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Detail::~Detail()
{
}

bool Controller::CccDriver::Inventory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_inv_detail.len(); index++)
    {
        if(ccc_inv_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Inventory::Detail::has_operation() const
{
    for (std::size_t index=0; index<ccc_inv_detail.len(); index++)
    {
        if(ccc_inv_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Inventory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_inv_detail")
    {
        auto c = std::make_shared<Controller::CccDriver::Inventory::Detail::CccInvDetail>();
        c->parent = this;
        ccc_inv_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_inv_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Inventory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Inventory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Inventory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_detail")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetail()
    :
    location{YType::str, "location"}
        ,
    ccc_inv_detail_list(std::make_shared<Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList>())
{
    ccc_inv_detail_list->parent = this;

    yang_name = "ccc_inv_detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Inventory::Detail::CccInvDetail::~CccInvDetail()
{
}

bool Controller::CccDriver::Inventory::Detail::CccInvDetail::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (ccc_inv_detail_list !=  nullptr && ccc_inv_detail_list->has_data());
}

bool Controller::CccDriver::Inventory::Detail::CccInvDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (ccc_inv_detail_list !=  nullptr && ccc_inv_detail_list->has_operation());
}

std::string Controller::CccDriver::Inventory::Detail::CccInvDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/inventory/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Inventory::Detail::CccInvDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_inv_detail";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Detail::CccInvDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Detail::CccInvDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_inv_detail_list")
    {
        if(ccc_inv_detail_list == nullptr)
        {
            ccc_inv_detail_list = std::make_shared<Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList>();
        }
        return ccc_inv_detail_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Detail::CccInvDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ccc_inv_detail_list != nullptr)
    {
        children["ccc_inv_detail_list"] = ccc_inv_detail_list;
    }

    return children;
}

void Controller::CccDriver::Inventory::Detail::CccInvDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Inventory::Detail::CccInvDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Inventory::Detail::CccInvDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_detail_list" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::CccInvDetailList()
    :
    ccc_inv_detail_values{YType::str, "ccc_inv_detail_values"}
{

    yang_name = "ccc_inv_detail_list"; yang_parent_name = "ccc_inv_detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::~CccInvDetailList()
{
}

bool Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ccc_inv_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::has_operation() const
{
    for (auto const & leaf : ccc_inv_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ccc_inv_detail_values.yfilter);
}

std::string Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_inv_detail_list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ccc_inv_detail_values_name_datas = ccc_inv_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ccc_inv_detail_values_name_datas.begin(), ccc_inv_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_inv_detail_values")
    {
        ccc_inv_detail_values.append(value);
    }
}

void Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_inv_detail_values")
    {
        ccc_inv_detail_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_inv_detail_values")
        return true;
    return false;
}

Controller::CccDriver::Power::Power()
    :
    master_access(std::make_shared<Controller::CccDriver::Power::MasterAccess>())
{
    master_access->parent = this;

    yang_name = "power"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Power::~Power()
{
}

bool Controller::CccDriver::Power::has_data() const
{
    if (is_presence_container) return true;
    return (master_access !=  nullptr && master_access->has_data());
}

bool Controller::CccDriver::Power::has_operation() const
{
    return is_set(yfilter)
	|| (master_access !=  nullptr && master_access->has_operation());
}

std::string Controller::CccDriver::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-access")
    {
        if(master_access == nullptr)
        {
            master_access = std::make_shared<Controller::CccDriver::Power::MasterAccess>();
        }
        return master_access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(master_access != nullptr)
    {
        children["master-access"] = master_access;
    }

    return children;
}

void Controller::CccDriver::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-access")
        return true;
    return false;
}

Controller::CccDriver::Power::MasterAccess::MasterAccess()
    :
    summary(std::make_shared<Controller::CccDriver::Power::MasterAccess::Summary>())
    , detail(std::make_shared<Controller::CccDriver::Power::MasterAccess::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "master-access"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Power::MasterAccess::~MasterAccess()
{
}

bool Controller::CccDriver::Power::MasterAccess::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CccDriver::Power::MasterAccess::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CccDriver::Power::MasterAccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/power/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Power::MasterAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::MasterAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::MasterAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::CccDriver::Power::MasterAccess::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CccDriver::Power::MasterAccess::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::MasterAccess::get_children() const
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

void Controller::CccDriver::Power::MasterAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Power::MasterAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Power::MasterAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail")
        return true;
    return false;
}

Controller::CccDriver::Power::MasterAccess::Summary::Summary()
    :
    power_summary(this, {"ccc_power_location"})
{

    yang_name = "summary"; yang_parent_name = "master-access"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Power::MasterAccess::Summary::~Summary()
{
}

bool Controller::CccDriver::Power::MasterAccess::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<power_summary.len(); index++)
    {
        if(power_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Power::MasterAccess::Summary::has_operation() const
{
    for (std::size_t index=0; index<power_summary.len(); index++)
    {
        if(power_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Power::MasterAccess::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/power/master-access/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Power::MasterAccess::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::MasterAccess::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::MasterAccess::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power_summary")
    {
        auto c = std::make_shared<Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary>();
        c->parent = this;
        power_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::MasterAccess::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : power_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Power::MasterAccess::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Power::MasterAccess::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Power::MasterAccess::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power_summary")
        return true;
    return false;
}

Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::PowerSummary()
    :
    ccc_power_location{YType::str, "ccc_power_location"},
    card_type{YType::str, "card_type"},
    power_state{YType::str, "power_state"}
{

    yang_name = "power_summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::~PowerSummary()
{
}

bool Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::has_data() const
{
    if (is_presence_container) return true;
    return ccc_power_location.is_set
	|| card_type.is_set
	|| power_state.is_set;
}

bool Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccc_power_location.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(power_state.yfilter);
}

std::string Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/power/master-access/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power_summary";
    ADD_KEY_TOKEN(ccc_power_location, "ccc_power_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_power_location.is_set || is_set(ccc_power_location.yfilter)) leaf_name_data.push_back(ccc_power_location.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (power_state.is_set || is_set(power_state.yfilter)) leaf_name_data.push_back(power_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_power_location")
    {
        ccc_power_location = value;
        ccc_power_location.value_namespace = name_space;
        ccc_power_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_state")
    {
        power_state = value;
        power_state.value_namespace = name_space;
        power_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_power_location")
    {
        ccc_power_location.yfilter = yfilter;
    }
    if(value_path == "card_type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "power_state")
    {
        power_state.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_power_location" || name == "card_type" || name == "power_state")
        return true;
    return false;
}

Controller::CccDriver::Power::MasterAccess::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "master-access"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Power::MasterAccess::Detail::~Detail()
{
}

bool Controller::CccDriver::Power::MasterAccess::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Power::MasterAccess::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Power::MasterAccess::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/power/master-access/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Power::MasterAccess::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::MasterAccess::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::MasterAccess::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Power::MasterAccess::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::MasterAccess::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Power::MasterAccess::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Power::MasterAccess::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Power::MasterAccess::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Power::MasterAccess::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    power_details(std::make_shared<Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails>())
{
    power_details->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Power::MasterAccess::Detail::Location::~Location()
{
}

bool Controller::CccDriver::Power::MasterAccess::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (power_details !=  nullptr && power_details->has_data());
}

bool Controller::CccDriver::Power::MasterAccess::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (power_details !=  nullptr && power_details->has_operation());
}

std::string Controller::CccDriver::Power::MasterAccess::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/power/master-access/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Power::MasterAccess::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::MasterAccess::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::MasterAccess::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power_details")
    {
        if(power_details == nullptr)
        {
            power_details = std::make_shared<Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails>();
        }
        return power_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::MasterAccess::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(power_details != nullptr)
    {
        children["power_details"] = power_details;
    }

    return children;
}

void Controller::CccDriver::Power::MasterAccess::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Power::MasterAccess::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Power::MasterAccess::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power_details" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::PowerDetails()
    :
    power_details_values{YType::str, "power_details_values"}
{

    yang_name = "power_details"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::~PowerDetails()
{
}

bool Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : power_details_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::has_operation() const
{
    for (auto const & leaf : power_details_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(power_details_values.yfilter);
}

std::string Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power_details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto power_details_values_name_datas = power_details_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), power_details_values_name_datas.begin(), power_details_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power_details_values")
    {
        power_details_values.append(value);
    }
}

void Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power_details_values")
    {
        power_details_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power_details_values")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::ResetHistory()
    :
    onchip(std::make_shared<Controller::CccDriver::ResetHistory::Onchip>())
    , onboard(std::make_shared<Controller::CccDriver::ResetHistory::Onboard>())
{
    onchip->parent = this;
    onboard->parent = this;

    yang_name = "reset-history"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::ResetHistory::~ResetHistory()
{
}

bool Controller::CccDriver::ResetHistory::has_data() const
{
    if (is_presence_container) return true;
    return (onchip !=  nullptr && onchip->has_data())
	|| (onboard !=  nullptr && onboard->has_data());
}

bool Controller::CccDriver::ResetHistory::has_operation() const
{
    return is_set(yfilter)
	|| (onchip !=  nullptr && onchip->has_operation())
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string Controller::CccDriver::ResetHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::ResetHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onchip")
    {
        if(onchip == nullptr)
        {
            onchip = std::make_shared<Controller::CccDriver::ResetHistory::Onchip>();
        }
        return onchip;
    }

    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<Controller::CccDriver::ResetHistory::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(onchip != nullptr)
    {
        children["onchip"] = onchip;
    }

    if(onboard != nullptr)
    {
        children["onboard"] = onboard;
    }

    return children;
}

void Controller::CccDriver::ResetHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::ResetHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::ResetHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onchip" || name == "onboard")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::Onchip::Onchip()
    :
    location(this, {"loc"})
{

    yang_name = "onchip"; yang_parent_name = "reset-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::ResetHistory::Onchip::~Onchip()
{
}

bool Controller::CccDriver::ResetHistory::Onchip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::ResetHistory::Onchip::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::ResetHistory::Onchip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/reset-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::ResetHistory::Onchip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onchip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::Onchip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::Onchip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::ResetHistory::Onchip::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::Onchip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::ResetHistory::Onchip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::ResetHistory::Onchip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::ResetHistory::Onchip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::Onchip::Location::Location()
    :
    loc{YType::str, "loc"},
    ccc_reset_timeofday{YType::str, "ccc_reset_timeofday"},
    ccc_reset_uptime{YType::str, "ccc_reset_uptime"},
    ccc_hw_reset_count{YType::uint32, "ccc_hw_reset_count"}
        ,
    ccc_reset_entry(this, {"ccc_reset_entry"})
{

    yang_name = "location"; yang_parent_name = "onchip"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::ResetHistory::Onchip::Location::~Location()
{
}

bool Controller::CccDriver::ResetHistory::Onchip::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_reset_entry.len(); index++)
    {
        if(ccc_reset_entry[index]->has_data())
            return true;
    }
    return loc.is_set
	|| ccc_reset_timeofday.is_set
	|| ccc_reset_uptime.is_set
	|| ccc_hw_reset_count.is_set;
}

bool Controller::CccDriver::ResetHistory::Onchip::Location::has_operation() const
{
    for (std::size_t index=0; index<ccc_reset_entry.len(); index++)
    {
        if(ccc_reset_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(ccc_reset_timeofday.yfilter)
	|| ydk::is_set(ccc_reset_uptime.yfilter)
	|| ydk::is_set(ccc_hw_reset_count.yfilter);
}

std::string Controller::CccDriver::ResetHistory::Onchip::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/reset-history/onchip/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::ResetHistory::Onchip::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::Onchip::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (ccc_reset_timeofday.is_set || is_set(ccc_reset_timeofday.yfilter)) leaf_name_data.push_back(ccc_reset_timeofday.get_name_leafdata());
    if (ccc_reset_uptime.is_set || is_set(ccc_reset_uptime.yfilter)) leaf_name_data.push_back(ccc_reset_uptime.get_name_leafdata());
    if (ccc_hw_reset_count.is_set || is_set(ccc_hw_reset_count.yfilter)) leaf_name_data.push_back(ccc_hw_reset_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::Onchip::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_reset_entry")
    {
        auto c = std::make_shared<Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry>();
        c->parent = this;
        ccc_reset_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::Onchip::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_reset_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::ResetHistory::Onchip::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_timeofday")
    {
        ccc_reset_timeofday = value;
        ccc_reset_timeofday.value_namespace = name_space;
        ccc_reset_timeofday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_uptime")
    {
        ccc_reset_uptime = value;
        ccc_reset_uptime.value_namespace = name_space;
        ccc_reset_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_hw_reset_count")
    {
        ccc_hw_reset_count = value;
        ccc_hw_reset_count.value_namespace = name_space;
        ccc_hw_reset_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::ResetHistory::Onchip::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_timeofday")
    {
        ccc_reset_timeofday.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_uptime")
    {
        ccc_reset_uptime.yfilter = yfilter;
    }
    if(value_path == "ccc_hw_reset_count")
    {
        ccc_hw_reset_count.yfilter = yfilter;
    }
}

bool Controller::CccDriver::ResetHistory::Onchip::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reset_entry" || name == "loc" || name == "ccc_reset_timeofday" || name == "ccc_reset_uptime" || name == "ccc_hw_reset_count")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::CccResetEntry()
    :
    ccc_reset_entry{YType::int32, "ccc_reset_entry"},
    ccc_reset_pos{YType::uint32, "ccc_reset_pos"},
    ccc_reset_idx{YType::uint32, "ccc_reset_idx"},
    ccc_reset_word0{YType::uint32, "ccc_reset_word0"},
    ccc_reset_pidx{YType::uint32, "ccc_reset_pidx"},
    ccc_reset_sor{YType::uint32, "ccc_reset_sor"},
    ccc_reset_sor_string{YType::str, "ccc_reset_sor_string"},
    ccc_reset_cmd{YType::uint32, "ccc_reset_cmd"},
    ccc_reset_cmd_string{YType::str, "ccc_reset_cmd_string"},
    ccc_reset_hrm{YType::uint32, "ccc_reset_hrm"},
    ccc_reset_srm{YType::uint32, "ccc_reset_srm"},
    ccc_reset_hr{YType::uint32, "ccc_reset_hr"},
    ccc_reset_sr{YType::uint32, "ccc_reset_sr"},
    ccc_reset_word1{YType::uint32, "ccc_reset_word1"},
    ccc_reset_date{YType::str, "ccc_reset_date"}
{

    yang_name = "ccc_reset_entry"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::~CccResetEntry()
{
}

bool Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccc_reset_entry.is_set
	|| ccc_reset_pos.is_set
	|| ccc_reset_idx.is_set
	|| ccc_reset_word0.is_set
	|| ccc_reset_pidx.is_set
	|| ccc_reset_sor.is_set
	|| ccc_reset_sor_string.is_set
	|| ccc_reset_cmd.is_set
	|| ccc_reset_cmd_string.is_set
	|| ccc_reset_hrm.is_set
	|| ccc_reset_srm.is_set
	|| ccc_reset_hr.is_set
	|| ccc_reset_sr.is_set
	|| ccc_reset_word1.is_set
	|| ccc_reset_date.is_set;
}

bool Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccc_reset_entry.yfilter)
	|| ydk::is_set(ccc_reset_pos.yfilter)
	|| ydk::is_set(ccc_reset_idx.yfilter)
	|| ydk::is_set(ccc_reset_word0.yfilter)
	|| ydk::is_set(ccc_reset_pidx.yfilter)
	|| ydk::is_set(ccc_reset_sor.yfilter)
	|| ydk::is_set(ccc_reset_sor_string.yfilter)
	|| ydk::is_set(ccc_reset_cmd.yfilter)
	|| ydk::is_set(ccc_reset_cmd_string.yfilter)
	|| ydk::is_set(ccc_reset_hrm.yfilter)
	|| ydk::is_set(ccc_reset_srm.yfilter)
	|| ydk::is_set(ccc_reset_hr.yfilter)
	|| ydk::is_set(ccc_reset_sr.yfilter)
	|| ydk::is_set(ccc_reset_word1.yfilter)
	|| ydk::is_set(ccc_reset_date.yfilter);
}

std::string Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_reset_entry";
    ADD_KEY_TOKEN(ccc_reset_entry, "ccc_reset_entry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_reset_entry.is_set || is_set(ccc_reset_entry.yfilter)) leaf_name_data.push_back(ccc_reset_entry.get_name_leafdata());
    if (ccc_reset_pos.is_set || is_set(ccc_reset_pos.yfilter)) leaf_name_data.push_back(ccc_reset_pos.get_name_leafdata());
    if (ccc_reset_idx.is_set || is_set(ccc_reset_idx.yfilter)) leaf_name_data.push_back(ccc_reset_idx.get_name_leafdata());
    if (ccc_reset_word0.is_set || is_set(ccc_reset_word0.yfilter)) leaf_name_data.push_back(ccc_reset_word0.get_name_leafdata());
    if (ccc_reset_pidx.is_set || is_set(ccc_reset_pidx.yfilter)) leaf_name_data.push_back(ccc_reset_pidx.get_name_leafdata());
    if (ccc_reset_sor.is_set || is_set(ccc_reset_sor.yfilter)) leaf_name_data.push_back(ccc_reset_sor.get_name_leafdata());
    if (ccc_reset_sor_string.is_set || is_set(ccc_reset_sor_string.yfilter)) leaf_name_data.push_back(ccc_reset_sor_string.get_name_leafdata());
    if (ccc_reset_cmd.is_set || is_set(ccc_reset_cmd.yfilter)) leaf_name_data.push_back(ccc_reset_cmd.get_name_leafdata());
    if (ccc_reset_cmd_string.is_set || is_set(ccc_reset_cmd_string.yfilter)) leaf_name_data.push_back(ccc_reset_cmd_string.get_name_leafdata());
    if (ccc_reset_hrm.is_set || is_set(ccc_reset_hrm.yfilter)) leaf_name_data.push_back(ccc_reset_hrm.get_name_leafdata());
    if (ccc_reset_srm.is_set || is_set(ccc_reset_srm.yfilter)) leaf_name_data.push_back(ccc_reset_srm.get_name_leafdata());
    if (ccc_reset_hr.is_set || is_set(ccc_reset_hr.yfilter)) leaf_name_data.push_back(ccc_reset_hr.get_name_leafdata());
    if (ccc_reset_sr.is_set || is_set(ccc_reset_sr.yfilter)) leaf_name_data.push_back(ccc_reset_sr.get_name_leafdata());
    if (ccc_reset_word1.is_set || is_set(ccc_reset_word1.yfilter)) leaf_name_data.push_back(ccc_reset_word1.get_name_leafdata());
    if (ccc_reset_date.is_set || is_set(ccc_reset_date.yfilter)) leaf_name_data.push_back(ccc_reset_date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_reset_entry")
    {
        ccc_reset_entry = value;
        ccc_reset_entry.value_namespace = name_space;
        ccc_reset_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_pos")
    {
        ccc_reset_pos = value;
        ccc_reset_pos.value_namespace = name_space;
        ccc_reset_pos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_idx")
    {
        ccc_reset_idx = value;
        ccc_reset_idx.value_namespace = name_space;
        ccc_reset_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_word0")
    {
        ccc_reset_word0 = value;
        ccc_reset_word0.value_namespace = name_space;
        ccc_reset_word0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_pidx")
    {
        ccc_reset_pidx = value;
        ccc_reset_pidx.value_namespace = name_space;
        ccc_reset_pidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_sor")
    {
        ccc_reset_sor = value;
        ccc_reset_sor.value_namespace = name_space;
        ccc_reset_sor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_sor_string")
    {
        ccc_reset_sor_string = value;
        ccc_reset_sor_string.value_namespace = name_space;
        ccc_reset_sor_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_cmd")
    {
        ccc_reset_cmd = value;
        ccc_reset_cmd.value_namespace = name_space;
        ccc_reset_cmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_cmd_string")
    {
        ccc_reset_cmd_string = value;
        ccc_reset_cmd_string.value_namespace = name_space;
        ccc_reset_cmd_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_hrm")
    {
        ccc_reset_hrm = value;
        ccc_reset_hrm.value_namespace = name_space;
        ccc_reset_hrm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_srm")
    {
        ccc_reset_srm = value;
        ccc_reset_srm.value_namespace = name_space;
        ccc_reset_srm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_hr")
    {
        ccc_reset_hr = value;
        ccc_reset_hr.value_namespace = name_space;
        ccc_reset_hr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_sr")
    {
        ccc_reset_sr = value;
        ccc_reset_sr.value_namespace = name_space;
        ccc_reset_sr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_word1")
    {
        ccc_reset_word1 = value;
        ccc_reset_word1.value_namespace = name_space;
        ccc_reset_word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_date")
    {
        ccc_reset_date = value;
        ccc_reset_date.value_namespace = name_space;
        ccc_reset_date.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_reset_entry")
    {
        ccc_reset_entry.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_pos")
    {
        ccc_reset_pos.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_idx")
    {
        ccc_reset_idx.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_word0")
    {
        ccc_reset_word0.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_pidx")
    {
        ccc_reset_pidx.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_sor")
    {
        ccc_reset_sor.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_sor_string")
    {
        ccc_reset_sor_string.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_cmd")
    {
        ccc_reset_cmd.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_cmd_string")
    {
        ccc_reset_cmd_string.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_hrm")
    {
        ccc_reset_hrm.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_srm")
    {
        ccc_reset_srm.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_hr")
    {
        ccc_reset_hr.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_sr")
    {
        ccc_reset_sr.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_word1")
    {
        ccc_reset_word1.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_date")
    {
        ccc_reset_date.yfilter = yfilter;
    }
}

bool Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reset_entry" || name == "ccc_reset_pos" || name == "ccc_reset_idx" || name == "ccc_reset_word0" || name == "ccc_reset_pidx" || name == "ccc_reset_sor" || name == "ccc_reset_sor_string" || name == "ccc_reset_cmd" || name == "ccc_reset_cmd_string" || name == "ccc_reset_hrm" || name == "ccc_reset_srm" || name == "ccc_reset_hr" || name == "ccc_reset_sr" || name == "ccc_reset_word1" || name == "ccc_reset_date")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::Onboard::Onboard()
    :
    location(this, {"loc"})
{

    yang_name = "onboard"; yang_parent_name = "reset-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::ResetHistory::Onboard::~Onboard()
{
}

bool Controller::CccDriver::ResetHistory::Onboard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::ResetHistory::Onboard::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::ResetHistory::Onboard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/reset-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::ResetHistory::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::Onboard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::ResetHistory::Onboard::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::ResetHistory::Onboard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::ResetHistory::Onboard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::ResetHistory::Onboard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::Onboard::Location::Location()
    :
    loc{YType::str, "loc"},
    ccc_reset_scratch_sig{YType::str, "ccc_reset_scratch_sig"},
    ccc_reset_scratch_version{YType::uint32, "ccc_reset_scratch_version"},
    ccc_reset_history_sig{YType::str, "ccc_reset_history_sig"},
    ccc_reset_history_count{YType::uint32, "ccc_reset_history_count"}
        ,
    ccc_reset_onboard_entry(this, {"ccc_reset_onboard_entry"})
{

    yang_name = "location"; yang_parent_name = "onboard"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::ResetHistory::Onboard::Location::~Location()
{
}

bool Controller::CccDriver::ResetHistory::Onboard::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_reset_onboard_entry.len(); index++)
    {
        if(ccc_reset_onboard_entry[index]->has_data())
            return true;
    }
    return loc.is_set
	|| ccc_reset_scratch_sig.is_set
	|| ccc_reset_scratch_version.is_set
	|| ccc_reset_history_sig.is_set
	|| ccc_reset_history_count.is_set;
}

bool Controller::CccDriver::ResetHistory::Onboard::Location::has_operation() const
{
    for (std::size_t index=0; index<ccc_reset_onboard_entry.len(); index++)
    {
        if(ccc_reset_onboard_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(ccc_reset_scratch_sig.yfilter)
	|| ydk::is_set(ccc_reset_scratch_version.yfilter)
	|| ydk::is_set(ccc_reset_history_sig.yfilter)
	|| ydk::is_set(ccc_reset_history_count.yfilter);
}

std::string Controller::CccDriver::ResetHistory::Onboard::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/reset-history/onboard/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::ResetHistory::Onboard::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::Onboard::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (ccc_reset_scratch_sig.is_set || is_set(ccc_reset_scratch_sig.yfilter)) leaf_name_data.push_back(ccc_reset_scratch_sig.get_name_leafdata());
    if (ccc_reset_scratch_version.is_set || is_set(ccc_reset_scratch_version.yfilter)) leaf_name_data.push_back(ccc_reset_scratch_version.get_name_leafdata());
    if (ccc_reset_history_sig.is_set || is_set(ccc_reset_history_sig.yfilter)) leaf_name_data.push_back(ccc_reset_history_sig.get_name_leafdata());
    if (ccc_reset_history_count.is_set || is_set(ccc_reset_history_count.yfilter)) leaf_name_data.push_back(ccc_reset_history_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::Onboard::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_reset_onboard_entry")
    {
        auto c = std::make_shared<Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry>();
        c->parent = this;
        ccc_reset_onboard_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::Onboard::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_reset_onboard_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::ResetHistory::Onboard::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_scratch_sig")
    {
        ccc_reset_scratch_sig = value;
        ccc_reset_scratch_sig.value_namespace = name_space;
        ccc_reset_scratch_sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_scratch_version")
    {
        ccc_reset_scratch_version = value;
        ccc_reset_scratch_version.value_namespace = name_space;
        ccc_reset_scratch_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_history_sig")
    {
        ccc_reset_history_sig = value;
        ccc_reset_history_sig.value_namespace = name_space;
        ccc_reset_history_sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_history_count")
    {
        ccc_reset_history_count = value;
        ccc_reset_history_count.value_namespace = name_space;
        ccc_reset_history_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::ResetHistory::Onboard::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_scratch_sig")
    {
        ccc_reset_scratch_sig.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_scratch_version")
    {
        ccc_reset_scratch_version.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_history_sig")
    {
        ccc_reset_history_sig.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_history_count")
    {
        ccc_reset_history_count.yfilter = yfilter;
    }
}

bool Controller::CccDriver::ResetHistory::Onboard::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reset_onboard_entry" || name == "loc" || name == "ccc_reset_scratch_sig" || name == "ccc_reset_scratch_version" || name == "ccc_reset_history_sig" || name == "ccc_reset_history_count")
        return true;
    return false;
}

Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::CccResetOnboardEntry()
    :
    ccc_reset_onboard_entry{YType::int32, "ccc_reset_onboard_entry"},
    ccc_reset_pos{YType::uint32, "ccc_reset_pos"},
    ccc_reset_idx{YType::uint32, "ccc_reset_idx"},
    ccc_reset_word0{YType::uint32, "ccc_reset_word0"},
    ccc_reset_pidx{YType::uint32, "ccc_reset_pidx"},
    ccc_reset_sor{YType::uint32, "ccc_reset_sor"},
    ccc_reset_sor_string{YType::str, "ccc_reset_sor_string"},
    ccc_reset_cmd{YType::uint32, "ccc_reset_cmd"},
    ccc_reset_cmd_string{YType::str, "ccc_reset_cmd_string"},
    ccc_reset_hrm{YType::uint32, "ccc_reset_hrm"},
    ccc_reset_srm{YType::uint32, "ccc_reset_srm"},
    ccc_reset_hr{YType::uint32, "ccc_reset_hr"},
    ccc_reset_sr{YType::uint32, "ccc_reset_sr"},
    ccc_reset_word1{YType::uint32, "ccc_reset_word1"},
    ccc_reset_date{YType::str, "ccc_reset_date"}
{

    yang_name = "ccc_reset_onboard_entry"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::~CccResetOnboardEntry()
{
}

bool Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccc_reset_onboard_entry.is_set
	|| ccc_reset_pos.is_set
	|| ccc_reset_idx.is_set
	|| ccc_reset_word0.is_set
	|| ccc_reset_pidx.is_set
	|| ccc_reset_sor.is_set
	|| ccc_reset_sor_string.is_set
	|| ccc_reset_cmd.is_set
	|| ccc_reset_cmd_string.is_set
	|| ccc_reset_hrm.is_set
	|| ccc_reset_srm.is_set
	|| ccc_reset_hr.is_set
	|| ccc_reset_sr.is_set
	|| ccc_reset_word1.is_set
	|| ccc_reset_date.is_set;
}

bool Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccc_reset_onboard_entry.yfilter)
	|| ydk::is_set(ccc_reset_pos.yfilter)
	|| ydk::is_set(ccc_reset_idx.yfilter)
	|| ydk::is_set(ccc_reset_word0.yfilter)
	|| ydk::is_set(ccc_reset_pidx.yfilter)
	|| ydk::is_set(ccc_reset_sor.yfilter)
	|| ydk::is_set(ccc_reset_sor_string.yfilter)
	|| ydk::is_set(ccc_reset_cmd.yfilter)
	|| ydk::is_set(ccc_reset_cmd_string.yfilter)
	|| ydk::is_set(ccc_reset_hrm.yfilter)
	|| ydk::is_set(ccc_reset_srm.yfilter)
	|| ydk::is_set(ccc_reset_hr.yfilter)
	|| ydk::is_set(ccc_reset_sr.yfilter)
	|| ydk::is_set(ccc_reset_word1.yfilter)
	|| ydk::is_set(ccc_reset_date.yfilter);
}

std::string Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_reset_onboard_entry";
    ADD_KEY_TOKEN(ccc_reset_onboard_entry, "ccc_reset_onboard_entry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_reset_onboard_entry.is_set || is_set(ccc_reset_onboard_entry.yfilter)) leaf_name_data.push_back(ccc_reset_onboard_entry.get_name_leafdata());
    if (ccc_reset_pos.is_set || is_set(ccc_reset_pos.yfilter)) leaf_name_data.push_back(ccc_reset_pos.get_name_leafdata());
    if (ccc_reset_idx.is_set || is_set(ccc_reset_idx.yfilter)) leaf_name_data.push_back(ccc_reset_idx.get_name_leafdata());
    if (ccc_reset_word0.is_set || is_set(ccc_reset_word0.yfilter)) leaf_name_data.push_back(ccc_reset_word0.get_name_leafdata());
    if (ccc_reset_pidx.is_set || is_set(ccc_reset_pidx.yfilter)) leaf_name_data.push_back(ccc_reset_pidx.get_name_leafdata());
    if (ccc_reset_sor.is_set || is_set(ccc_reset_sor.yfilter)) leaf_name_data.push_back(ccc_reset_sor.get_name_leafdata());
    if (ccc_reset_sor_string.is_set || is_set(ccc_reset_sor_string.yfilter)) leaf_name_data.push_back(ccc_reset_sor_string.get_name_leafdata());
    if (ccc_reset_cmd.is_set || is_set(ccc_reset_cmd.yfilter)) leaf_name_data.push_back(ccc_reset_cmd.get_name_leafdata());
    if (ccc_reset_cmd_string.is_set || is_set(ccc_reset_cmd_string.yfilter)) leaf_name_data.push_back(ccc_reset_cmd_string.get_name_leafdata());
    if (ccc_reset_hrm.is_set || is_set(ccc_reset_hrm.yfilter)) leaf_name_data.push_back(ccc_reset_hrm.get_name_leafdata());
    if (ccc_reset_srm.is_set || is_set(ccc_reset_srm.yfilter)) leaf_name_data.push_back(ccc_reset_srm.get_name_leafdata());
    if (ccc_reset_hr.is_set || is_set(ccc_reset_hr.yfilter)) leaf_name_data.push_back(ccc_reset_hr.get_name_leafdata());
    if (ccc_reset_sr.is_set || is_set(ccc_reset_sr.yfilter)) leaf_name_data.push_back(ccc_reset_sr.get_name_leafdata());
    if (ccc_reset_word1.is_set || is_set(ccc_reset_word1.yfilter)) leaf_name_data.push_back(ccc_reset_word1.get_name_leafdata());
    if (ccc_reset_date.is_set || is_set(ccc_reset_date.yfilter)) leaf_name_data.push_back(ccc_reset_date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_reset_onboard_entry")
    {
        ccc_reset_onboard_entry = value;
        ccc_reset_onboard_entry.value_namespace = name_space;
        ccc_reset_onboard_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_pos")
    {
        ccc_reset_pos = value;
        ccc_reset_pos.value_namespace = name_space;
        ccc_reset_pos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_idx")
    {
        ccc_reset_idx = value;
        ccc_reset_idx.value_namespace = name_space;
        ccc_reset_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_word0")
    {
        ccc_reset_word0 = value;
        ccc_reset_word0.value_namespace = name_space;
        ccc_reset_word0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_pidx")
    {
        ccc_reset_pidx = value;
        ccc_reset_pidx.value_namespace = name_space;
        ccc_reset_pidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_sor")
    {
        ccc_reset_sor = value;
        ccc_reset_sor.value_namespace = name_space;
        ccc_reset_sor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_sor_string")
    {
        ccc_reset_sor_string = value;
        ccc_reset_sor_string.value_namespace = name_space;
        ccc_reset_sor_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_cmd")
    {
        ccc_reset_cmd = value;
        ccc_reset_cmd.value_namespace = name_space;
        ccc_reset_cmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_cmd_string")
    {
        ccc_reset_cmd_string = value;
        ccc_reset_cmd_string.value_namespace = name_space;
        ccc_reset_cmd_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_hrm")
    {
        ccc_reset_hrm = value;
        ccc_reset_hrm.value_namespace = name_space;
        ccc_reset_hrm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_srm")
    {
        ccc_reset_srm = value;
        ccc_reset_srm.value_namespace = name_space;
        ccc_reset_srm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_hr")
    {
        ccc_reset_hr = value;
        ccc_reset_hr.value_namespace = name_space;
        ccc_reset_hr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_sr")
    {
        ccc_reset_sr = value;
        ccc_reset_sr.value_namespace = name_space;
        ccc_reset_sr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_word1")
    {
        ccc_reset_word1 = value;
        ccc_reset_word1.value_namespace = name_space;
        ccc_reset_word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_reset_date")
    {
        ccc_reset_date = value;
        ccc_reset_date.value_namespace = name_space;
        ccc_reset_date.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_reset_onboard_entry")
    {
        ccc_reset_onboard_entry.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_pos")
    {
        ccc_reset_pos.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_idx")
    {
        ccc_reset_idx.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_word0")
    {
        ccc_reset_word0.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_pidx")
    {
        ccc_reset_pidx.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_sor")
    {
        ccc_reset_sor.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_sor_string")
    {
        ccc_reset_sor_string.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_cmd")
    {
        ccc_reset_cmd.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_cmd_string")
    {
        ccc_reset_cmd_string.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_hrm")
    {
        ccc_reset_hrm.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_srm")
    {
        ccc_reset_srm.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_hr")
    {
        ccc_reset_hr.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_sr")
    {
        ccc_reset_sr.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_word1")
    {
        ccc_reset_word1.yfilter = yfilter;
    }
    if(value_path == "ccc_reset_date")
    {
        ccc_reset_date.yfilter = yfilter;
    }
}

bool Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reset_onboard_entry" || name == "ccc_reset_pos" || name == "ccc_reset_idx" || name == "ccc_reset_word0" || name == "ccc_reset_pidx" || name == "ccc_reset_sor" || name == "ccc_reset_sor_string" || name == "ccc_reset_cmd" || name == "ccc_reset_cmd_string" || name == "ccc_reset_hrm" || name == "ccc_reset_srm" || name == "ccc_reset_hr" || name == "ccc_reset_sr" || name == "ccc_reset_word1" || name == "ccc_reset_date")
        return true;
    return false;
}

Controller::CccDriver::Register::Register()
    :
    register_location(this, {"register_location"})
{

    yang_name = "register"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Register::~Register()
{
}

bool Controller::CccDriver::Register::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Register::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation>();
        c->parent = this;
        register_location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : register_location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    ccc_block_number(this, {"ccc_block_num"})
    , ccc_offset(this, {"hex_offset"})
    , ccc_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Register::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CccDriver::Register::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_block_number.len(); index++)
    {
        if(ccc_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ccc_offset.len(); index++)
    {
        if(ccc_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ccc_address.len(); index++)
    {
        if(ccc_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<ccc_block_number.len(); index++)
    {
        if(ccc_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ccc_offset.len(); index++)
    {
        if(ccc_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ccc_address.len(); index++)
    {
        if(ccc_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Register::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_block_number")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccBlockNumber>();
        c->parent = this;
        ccc_block_number.append(c);
        return c;
    }

    if(child_yang_name == "ccc_offset")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccOffset>();
        c->parent = this;
        ccc_offset.append(c);
        return c;
    }

    if(child_yang_name == "ccc_address")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccAddress>();
        c->parent = this;
        ccc_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_block_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ccc_offset.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ccc_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_block_number" || name == "ccc_offset" || name == "ccc_address" || name == "register_location")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccBlockNumber()
    :
    ccc_block_num{YType::uint32, "ccc_block_num"},
    block_location{YType::str, "block_location"},
    ccc_block_nm{YType::str, "ccc_block_nm"}
        ,
    ccc_register_number(this, {"index_"})
{

    yang_name = "ccc_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::~CccBlockNumber()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_register_number.len(); index++)
    {
        if(ccc_register_number[index]->has_data())
            return true;
    }
    return ccc_block_num.is_set
	|| block_location.is_set
	|| ccc_block_nm.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<ccc_register_number.len(); index++)
    {
        if(ccc_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ccc_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(ccc_block_nm.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_block_number";
    ADD_KEY_TOKEN(ccc_block_num, "ccc_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_block_num.is_set || is_set(ccc_block_num.yfilter)) leaf_name_data.push_back(ccc_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (ccc_block_nm.is_set || is_set(ccc_block_nm.yfilter)) leaf_name_data.push_back(ccc_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_register_number")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber>();
        c->parent = this;
        ccc_register_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_register_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_block_num")
    {
        ccc_block_num = value;
        ccc_block_num.value_namespace = name_space;
        ccc_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_block_nm")
    {
        ccc_block_nm = value;
        ccc_block_nm.value_namespace = name_space;
        ccc_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_block_num")
    {
        ccc_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "ccc_block_nm")
    {
        ccc_block_nm.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_register_number" || name == "ccc_block_num" || name == "block_location" || name == "ccc_block_nm")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccRegisterNumber()
    :
    index_{YType::uint32, "index"},
    ccc_register_name{YType::str, "ccc_register_name"}
        ,
    ccc_data(this, {})
{

    yang_name = "ccc_register_number"; yang_parent_name = "ccc_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::~CccRegisterNumber()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_data.len(); index++)
    {
        if(ccc_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| ccc_register_name.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<ccc_data.len(); index++)
    {
        if(ccc_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(ccc_register_name.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (ccc_register_name.is_set || is_set(ccc_register_name.yfilter)) leaf_name_data.push_back(ccc_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_data")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData>();
        c->parent = this;
        ccc_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_register_name")
    {
        ccc_register_name = value;
        ccc_register_name.value_namespace = name_space;
        ccc_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "ccc_register_name")
    {
        ccc_register_name.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_data" || name == "index" || name == "ccc_register_name")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::CccData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "ccc_data"; yang_parent_name = "ccc_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::~CccData()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccOffset::CccOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    ccc_reg_offset_data(this, {})
{

    yang_name = "ccc_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccOffset::~CccOffset()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_reg_offset_data.len(); index++)
    {
        if(ccc_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccOffset::has_operation() const
{
    for (std::size_t index=0; index<ccc_reg_offset_data.len(); index++)
    {
        if(ccc_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_reg_offset_data")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData>();
        c->parent = this;
        ccc_reg_offset_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_reg_offset_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::CccRegOffsetData()
    :
    ccc_reg_off_addr{YType::uint32, "ccc_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "ccc_reg_offset_data"; yang_parent_name = "ccc_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::~CccRegOffsetData()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return ccc_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccc_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_reg_offset_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_reg_off_addr.is_set || is_set(ccc_reg_off_addr.yfilter)) leaf_name_data.push_back(ccc_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_reg_off_addr")
    {
        ccc_reg_off_addr = value;
        ccc_reg_off_addr.value_namespace = name_space;
        ccc_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_reg_off_addr")
    {
        ccc_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccAddress::CccAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    ccc_reg_range_addr_list(this, {"ccc_reg_range_addr"})
{

    yang_name = "ccc_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccAddress::~CccAddress()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_reg_range_addr_list.len(); index++)
    {
        if(ccc_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::has_operation() const
{
    for (std::size_t index=0; index<ccc_reg_range_addr_list.len(); index++)
    {
        if(ccc_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_reg_range_addr_list")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList>();
        c->parent = this;
        ccc_reg_range_addr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_reg_range_addr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegRangeAddrList()
    :
    ccc_reg_range_addr{YType::uint32, "ccc_reg_range_addr"}
        ,
    ccc_reg_data(this, {})
{

    yang_name = "ccc_reg_range_addr_list"; yang_parent_name = "ccc_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::~CccRegRangeAddrList()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_reg_data.len(); index++)
    {
        if(ccc_reg_data[index]->has_data())
            return true;
    }
    return ccc_reg_range_addr.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<ccc_reg_data.len(); index++)
    {
        if(ccc_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ccc_reg_range_addr.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_reg_range_addr_list";
    ADD_KEY_TOKEN(ccc_reg_range_addr, "ccc_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_reg_range_addr.is_set || is_set(ccc_reg_range_addr.yfilter)) leaf_name_data.push_back(ccc_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_reg_data")
    {
        auto c = std::make_shared<Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData>();
        c->parent = this;
        ccc_reg_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_reg_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_reg_range_addr")
    {
        ccc_reg_range_addr = value;
        ccc_reg_range_addr.value_namespace = name_space;
        ccc_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_reg_range_addr")
    {
        ccc_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reg_data" || name == "ccc_reg_range_addr")
        return true;
    return false;
}

Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::CccRegData()
    :
    ccc_reg_addr{YType::uint32, "ccc_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "ccc_reg_data"; yang_parent_name = "ccc_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::~CccRegData()
{
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::has_data() const
{
    if (is_presence_container) return true;
    return ccc_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccc_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_reg_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccc_reg_addr.is_set || is_set(ccc_reg_addr.yfilter)) leaf_name_data.push_back(ccc_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccc_reg_addr")
    {
        ccc_reg_addr = value;
        ccc_reg_addr.value_namespace = name_space;
        ccc_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccc_reg_addr")
    {
        ccc_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CccDriver::Ejector::Ejector()
    :
    status(std::make_shared<Controller::CccDriver::Ejector::Status>())
{
    status->parent = this;

    yang_name = "ejector"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ejector::~Ejector()
{
}

bool Controller::CccDriver::Ejector::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data());
}

bool Controller::CccDriver::Ejector::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CccDriver::Ejector::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ejector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ejector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ejector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ejector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CccDriver::Ejector::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ejector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Controller::CccDriver::Ejector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Ejector::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Ejector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Controller::CccDriver::Ejector::Status::Status()
    :
    ccc_ejector_status(this, {"location"})
{

    yang_name = "status"; yang_parent_name = "ejector"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ejector::Status::~Status()
{
}

bool Controller::CccDriver::Ejector::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccc_ejector_status.len(); index++)
    {
        if(ccc_ejector_status[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Ejector::Status::has_operation() const
{
    for (std::size_t index=0; index<ccc_ejector_status.len(); index++)
    {
        if(ccc_ejector_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Ejector::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/ejector/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ejector::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ejector::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ejector::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccc_ejector_status")
    {
        auto c = std::make_shared<Controller::CccDriver::Ejector::Status::CccEjectorStatus>();
        c->parent = this;
        ccc_ejector_status.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ejector::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccc_ejector_status.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Ejector::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Ejector::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Ejector::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccc_ejector_status")
        return true;
    return false;
}

Controller::CccDriver::Ejector::Status::CccEjectorStatus::CccEjectorStatus()
    :
    location{YType::str, "location"},
    ccc_is_fc_card_type{YType::boolean, "ccc_is_fc_card_type"},
    ccc_is_lc_card_type{YType::boolean, "ccc_is_lc_card_type"},
    ccc_is_rp_sc_card_type{YType::boolean, "ccc_is_rp_sc_card_type"},
    ccc_ejc_card_type{YType::uint32, "ccc_ejc_card_type"},
    ccc_ejc_platform{YType::uint32, "ccc_ejc_platform"},
    ccc_ejc_board_type{YType::str, "ccc_ejc_board_type"},
    ccc_ejc_card_slot{YType::uint32, "ccc_ejc_card_slot"},
    ccc_ejc_card_version{YType::str, "ccc_ejc_card_version"},
    ccc_ejc_board_version{YType::str, "ccc_ejc_board_version"},
    ccc_ejc_hw_version{YType::str, "ccc_ejc_hw_version"},
    ccc_ejc_core_version{YType::str, "ccc_ejc_core_version"},
    ccc_ejc_pon_version{YType::str, "ccc_ejc_pon_version"},
    ccc_ejc_rp_supported{YType::str, "ccc_ejc_rp_supported"},
    ccc_ejc_enable{YType::str, "ccc_ejc_enable"},
    ccc_ejc_status{YType::str, "ccc_ejc_status"},
    ccc_ejc_rp_pex_csr{YType::str, "ccc_ejc_rp_pex_csr"},
    ccc_ejc_gp_live{YType::str, "ccc_ejc_gp_live"},
    ccc_ejc_gp_status{YType::str, "ccc_ejc_gp_status"},
    ccc_ejc_fc_pex_csr{YType::str, "ccc_ejc_fc_pex_csr"},
    ccc_ejc_fc_ejector_support{YType::str, "ccc_ejc_fc_ejector_support"},
    ccc_ejc_lc_pex_csr{YType::str, "ccc_ejc_lc_pex_csr"},
    ccc_ejc_lc_ejector_support{YType::str, "ccc_ejc_lc_ejector_support"}
{

    yang_name = "ccc_ejector_status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ejector::Status::CccEjectorStatus::~CccEjectorStatus()
{
}

bool Controller::CccDriver::Ejector::Status::CccEjectorStatus::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| ccc_is_fc_card_type.is_set
	|| ccc_is_lc_card_type.is_set
	|| ccc_is_rp_sc_card_type.is_set
	|| ccc_ejc_card_type.is_set
	|| ccc_ejc_platform.is_set
	|| ccc_ejc_board_type.is_set
	|| ccc_ejc_card_slot.is_set
	|| ccc_ejc_card_version.is_set
	|| ccc_ejc_board_version.is_set
	|| ccc_ejc_hw_version.is_set
	|| ccc_ejc_core_version.is_set
	|| ccc_ejc_pon_version.is_set
	|| ccc_ejc_rp_supported.is_set
	|| ccc_ejc_enable.is_set
	|| ccc_ejc_status.is_set
	|| ccc_ejc_rp_pex_csr.is_set
	|| ccc_ejc_gp_live.is_set
	|| ccc_ejc_gp_status.is_set
	|| ccc_ejc_fc_pex_csr.is_set
	|| ccc_ejc_fc_ejector_support.is_set
	|| ccc_ejc_lc_pex_csr.is_set
	|| ccc_ejc_lc_ejector_support.is_set;
}

bool Controller::CccDriver::Ejector::Status::CccEjectorStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ccc_is_fc_card_type.yfilter)
	|| ydk::is_set(ccc_is_lc_card_type.yfilter)
	|| ydk::is_set(ccc_is_rp_sc_card_type.yfilter)
	|| ydk::is_set(ccc_ejc_card_type.yfilter)
	|| ydk::is_set(ccc_ejc_platform.yfilter)
	|| ydk::is_set(ccc_ejc_board_type.yfilter)
	|| ydk::is_set(ccc_ejc_card_slot.yfilter)
	|| ydk::is_set(ccc_ejc_card_version.yfilter)
	|| ydk::is_set(ccc_ejc_board_version.yfilter)
	|| ydk::is_set(ccc_ejc_hw_version.yfilter)
	|| ydk::is_set(ccc_ejc_core_version.yfilter)
	|| ydk::is_set(ccc_ejc_pon_version.yfilter)
	|| ydk::is_set(ccc_ejc_rp_supported.yfilter)
	|| ydk::is_set(ccc_ejc_enable.yfilter)
	|| ydk::is_set(ccc_ejc_status.yfilter)
	|| ydk::is_set(ccc_ejc_rp_pex_csr.yfilter)
	|| ydk::is_set(ccc_ejc_gp_live.yfilter)
	|| ydk::is_set(ccc_ejc_gp_status.yfilter)
	|| ydk::is_set(ccc_ejc_fc_pex_csr.yfilter)
	|| ydk::is_set(ccc_ejc_fc_ejector_support.yfilter)
	|| ydk::is_set(ccc_ejc_lc_pex_csr.yfilter)
	|| ydk::is_set(ccc_ejc_lc_ejector_support.yfilter);
}

std::string Controller::CccDriver::Ejector::Status::CccEjectorStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/ejector/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ejector::Status::CccEjectorStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccc_ejector_status";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ejector::Status::CccEjectorStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ccc_is_fc_card_type.is_set || is_set(ccc_is_fc_card_type.yfilter)) leaf_name_data.push_back(ccc_is_fc_card_type.get_name_leafdata());
    if (ccc_is_lc_card_type.is_set || is_set(ccc_is_lc_card_type.yfilter)) leaf_name_data.push_back(ccc_is_lc_card_type.get_name_leafdata());
    if (ccc_is_rp_sc_card_type.is_set || is_set(ccc_is_rp_sc_card_type.yfilter)) leaf_name_data.push_back(ccc_is_rp_sc_card_type.get_name_leafdata());
    if (ccc_ejc_card_type.is_set || is_set(ccc_ejc_card_type.yfilter)) leaf_name_data.push_back(ccc_ejc_card_type.get_name_leafdata());
    if (ccc_ejc_platform.is_set || is_set(ccc_ejc_platform.yfilter)) leaf_name_data.push_back(ccc_ejc_platform.get_name_leafdata());
    if (ccc_ejc_board_type.is_set || is_set(ccc_ejc_board_type.yfilter)) leaf_name_data.push_back(ccc_ejc_board_type.get_name_leafdata());
    if (ccc_ejc_card_slot.is_set || is_set(ccc_ejc_card_slot.yfilter)) leaf_name_data.push_back(ccc_ejc_card_slot.get_name_leafdata());
    if (ccc_ejc_card_version.is_set || is_set(ccc_ejc_card_version.yfilter)) leaf_name_data.push_back(ccc_ejc_card_version.get_name_leafdata());
    if (ccc_ejc_board_version.is_set || is_set(ccc_ejc_board_version.yfilter)) leaf_name_data.push_back(ccc_ejc_board_version.get_name_leafdata());
    if (ccc_ejc_hw_version.is_set || is_set(ccc_ejc_hw_version.yfilter)) leaf_name_data.push_back(ccc_ejc_hw_version.get_name_leafdata());
    if (ccc_ejc_core_version.is_set || is_set(ccc_ejc_core_version.yfilter)) leaf_name_data.push_back(ccc_ejc_core_version.get_name_leafdata());
    if (ccc_ejc_pon_version.is_set || is_set(ccc_ejc_pon_version.yfilter)) leaf_name_data.push_back(ccc_ejc_pon_version.get_name_leafdata());
    if (ccc_ejc_rp_supported.is_set || is_set(ccc_ejc_rp_supported.yfilter)) leaf_name_data.push_back(ccc_ejc_rp_supported.get_name_leafdata());
    if (ccc_ejc_enable.is_set || is_set(ccc_ejc_enable.yfilter)) leaf_name_data.push_back(ccc_ejc_enable.get_name_leafdata());
    if (ccc_ejc_status.is_set || is_set(ccc_ejc_status.yfilter)) leaf_name_data.push_back(ccc_ejc_status.get_name_leafdata());
    if (ccc_ejc_rp_pex_csr.is_set || is_set(ccc_ejc_rp_pex_csr.yfilter)) leaf_name_data.push_back(ccc_ejc_rp_pex_csr.get_name_leafdata());
    if (ccc_ejc_gp_live.is_set || is_set(ccc_ejc_gp_live.yfilter)) leaf_name_data.push_back(ccc_ejc_gp_live.get_name_leafdata());
    if (ccc_ejc_gp_status.is_set || is_set(ccc_ejc_gp_status.yfilter)) leaf_name_data.push_back(ccc_ejc_gp_status.get_name_leafdata());
    if (ccc_ejc_fc_pex_csr.is_set || is_set(ccc_ejc_fc_pex_csr.yfilter)) leaf_name_data.push_back(ccc_ejc_fc_pex_csr.get_name_leafdata());
    if (ccc_ejc_fc_ejector_support.is_set || is_set(ccc_ejc_fc_ejector_support.yfilter)) leaf_name_data.push_back(ccc_ejc_fc_ejector_support.get_name_leafdata());
    if (ccc_ejc_lc_pex_csr.is_set || is_set(ccc_ejc_lc_pex_csr.yfilter)) leaf_name_data.push_back(ccc_ejc_lc_pex_csr.get_name_leafdata());
    if (ccc_ejc_lc_ejector_support.is_set || is_set(ccc_ejc_lc_ejector_support.yfilter)) leaf_name_data.push_back(ccc_ejc_lc_ejector_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ejector::Status::CccEjectorStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ejector::Status::CccEjectorStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Ejector::Status::CccEjectorStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_is_fc_card_type")
    {
        ccc_is_fc_card_type = value;
        ccc_is_fc_card_type.value_namespace = name_space;
        ccc_is_fc_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_is_lc_card_type")
    {
        ccc_is_lc_card_type = value;
        ccc_is_lc_card_type.value_namespace = name_space;
        ccc_is_lc_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_is_rp_sc_card_type")
    {
        ccc_is_rp_sc_card_type = value;
        ccc_is_rp_sc_card_type.value_namespace = name_space;
        ccc_is_rp_sc_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_card_type")
    {
        ccc_ejc_card_type = value;
        ccc_ejc_card_type.value_namespace = name_space;
        ccc_ejc_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_platform")
    {
        ccc_ejc_platform = value;
        ccc_ejc_platform.value_namespace = name_space;
        ccc_ejc_platform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_board_type")
    {
        ccc_ejc_board_type = value;
        ccc_ejc_board_type.value_namespace = name_space;
        ccc_ejc_board_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_card_slot")
    {
        ccc_ejc_card_slot = value;
        ccc_ejc_card_slot.value_namespace = name_space;
        ccc_ejc_card_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_card_version")
    {
        ccc_ejc_card_version = value;
        ccc_ejc_card_version.value_namespace = name_space;
        ccc_ejc_card_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_board_version")
    {
        ccc_ejc_board_version = value;
        ccc_ejc_board_version.value_namespace = name_space;
        ccc_ejc_board_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_hw_version")
    {
        ccc_ejc_hw_version = value;
        ccc_ejc_hw_version.value_namespace = name_space;
        ccc_ejc_hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_core_version")
    {
        ccc_ejc_core_version = value;
        ccc_ejc_core_version.value_namespace = name_space;
        ccc_ejc_core_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_pon_version")
    {
        ccc_ejc_pon_version = value;
        ccc_ejc_pon_version.value_namespace = name_space;
        ccc_ejc_pon_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_rp_supported")
    {
        ccc_ejc_rp_supported = value;
        ccc_ejc_rp_supported.value_namespace = name_space;
        ccc_ejc_rp_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_enable")
    {
        ccc_ejc_enable = value;
        ccc_ejc_enable.value_namespace = name_space;
        ccc_ejc_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_status")
    {
        ccc_ejc_status = value;
        ccc_ejc_status.value_namespace = name_space;
        ccc_ejc_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_rp_pex_csr")
    {
        ccc_ejc_rp_pex_csr = value;
        ccc_ejc_rp_pex_csr.value_namespace = name_space;
        ccc_ejc_rp_pex_csr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_gp_live")
    {
        ccc_ejc_gp_live = value;
        ccc_ejc_gp_live.value_namespace = name_space;
        ccc_ejc_gp_live.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_gp_status")
    {
        ccc_ejc_gp_status = value;
        ccc_ejc_gp_status.value_namespace = name_space;
        ccc_ejc_gp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_fc_pex_csr")
    {
        ccc_ejc_fc_pex_csr = value;
        ccc_ejc_fc_pex_csr.value_namespace = name_space;
        ccc_ejc_fc_pex_csr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_fc_ejector_support")
    {
        ccc_ejc_fc_ejector_support = value;
        ccc_ejc_fc_ejector_support.value_namespace = name_space;
        ccc_ejc_fc_ejector_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_lc_pex_csr")
    {
        ccc_ejc_lc_pex_csr = value;
        ccc_ejc_lc_pex_csr.value_namespace = name_space;
        ccc_ejc_lc_pex_csr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_ejc_lc_ejector_support")
    {
        ccc_ejc_lc_ejector_support = value;
        ccc_ejc_lc_ejector_support.value_namespace = name_space;
        ccc_ejc_lc_ejector_support.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Ejector::Status::CccEjectorStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ccc_is_fc_card_type")
    {
        ccc_is_fc_card_type.yfilter = yfilter;
    }
    if(value_path == "ccc_is_lc_card_type")
    {
        ccc_is_lc_card_type.yfilter = yfilter;
    }
    if(value_path == "ccc_is_rp_sc_card_type")
    {
        ccc_is_rp_sc_card_type.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_card_type")
    {
        ccc_ejc_card_type.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_platform")
    {
        ccc_ejc_platform.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_board_type")
    {
        ccc_ejc_board_type.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_card_slot")
    {
        ccc_ejc_card_slot.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_card_version")
    {
        ccc_ejc_card_version.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_board_version")
    {
        ccc_ejc_board_version.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_hw_version")
    {
        ccc_ejc_hw_version.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_core_version")
    {
        ccc_ejc_core_version.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_pon_version")
    {
        ccc_ejc_pon_version.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_rp_supported")
    {
        ccc_ejc_rp_supported.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_enable")
    {
        ccc_ejc_enable.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_status")
    {
        ccc_ejc_status.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_rp_pex_csr")
    {
        ccc_ejc_rp_pex_csr.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_gp_live")
    {
        ccc_ejc_gp_live.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_gp_status")
    {
        ccc_ejc_gp_status.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_fc_pex_csr")
    {
        ccc_ejc_fc_pex_csr.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_fc_ejector_support")
    {
        ccc_ejc_fc_ejector_support.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_lc_pex_csr")
    {
        ccc_ejc_lc_pex_csr.yfilter = yfilter;
    }
    if(value_path == "ccc_ejc_lc_ejector_support")
    {
        ccc_ejc_lc_ejector_support.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Ejector::Status::CccEjectorStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "ccc_is_fc_card_type" || name == "ccc_is_lc_card_type" || name == "ccc_is_rp_sc_card_type" || name == "ccc_ejc_card_type" || name == "ccc_ejc_platform" || name == "ccc_ejc_board_type" || name == "ccc_ejc_card_slot" || name == "ccc_ejc_card_version" || name == "ccc_ejc_board_version" || name == "ccc_ejc_hw_version" || name == "ccc_ejc_core_version" || name == "ccc_ejc_pon_version" || name == "ccc_ejc_rp_supported" || name == "ccc_ejc_enable" || name == "ccc_ejc_status" || name == "ccc_ejc_rp_pex_csr" || name == "ccc_ejc_gp_live" || name == "ccc_ejc_gp_status" || name == "ccc_ejc_fc_pex_csr" || name == "ccc_ejc_fc_ejector_support" || name == "ccc_ejc_lc_pex_csr" || name == "ccc_ejc_lc_ejector_support")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::I2cDev()
    :
    cpu_complex(std::make_shared<Controller::CccDriver::I2cDev::CpuComplex>())
    , ioexpander(std::make_shared<Controller::CccDriver::I2cDev::Ioexpander>())
{
    cpu_complex->parent = this;
    ioexpander->parent = this;

    yang_name = "i2c-dev"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::I2cDev::~I2cDev()
{
}

bool Controller::CccDriver::I2cDev::has_data() const
{
    if (is_presence_container) return true;
    return (cpu_complex !=  nullptr && cpu_complex->has_data())
	|| (ioexpander !=  nullptr && ioexpander->has_data());
}

bool Controller::CccDriver::I2cDev::has_operation() const
{
    return is_set(yfilter)
	|| (cpu_complex !=  nullptr && cpu_complex->has_operation())
	|| (ioexpander !=  nullptr && ioexpander->has_operation());
}

std::string Controller::CccDriver::I2cDev::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::I2cDev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "i2c-dev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-complex")
    {
        if(cpu_complex == nullptr)
        {
            cpu_complex = std::make_shared<Controller::CccDriver::I2cDev::CpuComplex>();
        }
        return cpu_complex;
    }

    if(child_yang_name == "ioexpander")
    {
        if(ioexpander == nullptr)
        {
            ioexpander = std::make_shared<Controller::CccDriver::I2cDev::Ioexpander>();
        }
        return ioexpander;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpu_complex != nullptr)
    {
        children["cpu-complex"] = cpu_complex;
    }

    if(ioexpander != nullptr)
    {
        children["ioexpander"] = ioexpander;
    }

    return children;
}

void Controller::CccDriver::I2cDev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::I2cDev::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::I2cDev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-complex" || name == "ioexpander")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::CpuComplex::CpuComplex()
    :
    location(this, {"location"})
{

    yang_name = "cpu-complex"; yang_parent_name = "i2c-dev"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::I2cDev::CpuComplex::~CpuComplex()
{
}

bool Controller::CccDriver::I2cDev::CpuComplex::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::I2cDev::CpuComplex::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::I2cDev::CpuComplex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/i2c-dev/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::I2cDev::CpuComplex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-complex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::CpuComplex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::CpuComplex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::I2cDev::CpuComplex::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::CpuComplex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::I2cDev::CpuComplex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::I2cDev::CpuComplex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::I2cDev::CpuComplex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::CpuComplex::Location::Location()
    :
    location{YType::str, "location"}
        ,
    cpu_complex_detail(std::make_shared<Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail>())
{
    cpu_complex_detail->parent = this;

    yang_name = "location"; yang_parent_name = "cpu-complex"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::I2cDev::CpuComplex::Location::~Location()
{
}

bool Controller::CccDriver::I2cDev::CpuComplex::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (cpu_complex_detail !=  nullptr && cpu_complex_detail->has_data());
}

bool Controller::CccDriver::I2cDev::CpuComplex::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (cpu_complex_detail !=  nullptr && cpu_complex_detail->has_operation());
}

std::string Controller::CccDriver::I2cDev::CpuComplex::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/i2c-dev/cpu-complex/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::I2cDev::CpuComplex::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::CpuComplex::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::CpuComplex::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu_complex_detail")
    {
        if(cpu_complex_detail == nullptr)
        {
            cpu_complex_detail = std::make_shared<Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail>();
        }
        return cpu_complex_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::CpuComplex::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpu_complex_detail != nullptr)
    {
        children["cpu_complex_detail"] = cpu_complex_detail;
    }

    return children;
}

void Controller::CccDriver::I2cDev::CpuComplex::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::I2cDev::CpuComplex::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::I2cDev::CpuComplex::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu_complex_detail" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::CpuComplexDetail()
    :
    cpu_complex_values{YType::str, "cpu_complex_values"}
{

    yang_name = "cpu_complex_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::~CpuComplexDetail()
{
}

bool Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cpu_complex_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::has_operation() const
{
    for (auto const & leaf : cpu_complex_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cpu_complex_values.yfilter);
}

std::string Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu_complex_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cpu_complex_values_name_datas = cpu_complex_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cpu_complex_values_name_datas.begin(), cpu_complex_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu_complex_values")
    {
        cpu_complex_values.append(value);
    }
}

void Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu_complex_values")
    {
        cpu_complex_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::I2cDev::CpuComplex::Location::CpuComplexDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu_complex_values")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::Ioexpander::Ioexpander()
    :
    location(this, {"location"})
{

    yang_name = "ioexpander"; yang_parent_name = "i2c-dev"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::I2cDev::Ioexpander::~Ioexpander()
{
}

bool Controller::CccDriver::I2cDev::Ioexpander::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::I2cDev::Ioexpander::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::I2cDev::Ioexpander::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/i2c-dev/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::I2cDev::Ioexpander::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ioexpander";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::Ioexpander::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::Ioexpander::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::I2cDev::Ioexpander::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::Ioexpander::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::I2cDev::Ioexpander::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::I2cDev::Ioexpander::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::I2cDev::Ioexpander::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::Ioexpander::Location::Location()
    :
    location{YType::str, "location"}
        ,
    io_exp_val(std::make_shared<Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal>())
{
    io_exp_val->parent = this;

    yang_name = "location"; yang_parent_name = "ioexpander"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::I2cDev::Ioexpander::Location::~Location()
{
}

bool Controller::CccDriver::I2cDev::Ioexpander::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (io_exp_val !=  nullptr && io_exp_val->has_data());
}

bool Controller::CccDriver::I2cDev::Ioexpander::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (io_exp_val !=  nullptr && io_exp_val->has_operation());
}

std::string Controller::CccDriver::I2cDev::Ioexpander::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/i2c-dev/ioexpander/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::I2cDev::Ioexpander::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::Ioexpander::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::Ioexpander::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "io_exp_val")
    {
        if(io_exp_val == nullptr)
        {
            io_exp_val = std::make_shared<Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal>();
        }
        return io_exp_val;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::Ioexpander::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(io_exp_val != nullptr)
    {
        children["io_exp_val"] = io_exp_val;
    }

    return children;
}

void Controller::CccDriver::I2cDev::Ioexpander::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::I2cDev::Ioexpander::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::I2cDev::Ioexpander::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "io_exp_val" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::IoExpVal()
    :
    io_exp_details{YType::str, "io_exp_details"}
{

    yang_name = "io_exp_val"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::~IoExpVal()
{
}

bool Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : io_exp_details.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::has_operation() const
{
    for (auto const & leaf : io_exp_details.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(io_exp_details.yfilter);
}

std::string Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io_exp_val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto io_exp_details_name_datas = io_exp_details.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), io_exp_details_name_datas.begin(), io_exp_details_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "io_exp_details")
    {
        io_exp_details.append(value);
    }
}

void Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "io_exp_details")
    {
        io_exp_details.yfilter = yfilter;
    }
}

bool Controller::CccDriver::I2cDev::Ioexpander::Location::IoExpVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "io_exp_details")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::Ethernet()
    :
    ethernet_status(std::make_shared<Controller::CccDriver::Ethernet::EthernetStatus>())
    , ethernet_counters(std::make_shared<Controller::CccDriver::Ethernet::EthernetCounters>())
{
    ethernet_status->parent = this;
    ethernet_counters->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ethernet::~Ethernet()
{
}

bool Controller::CccDriver::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet_status !=  nullptr && ethernet_status->has_data())
	|| (ethernet_counters !=  nullptr && ethernet_counters->has_data());
}

bool Controller::CccDriver::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet_status !=  nullptr && ethernet_status->has_operation())
	|| (ethernet_counters !=  nullptr && ethernet_counters->has_operation());
}

std::string Controller::CccDriver::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet_status")
    {
        if(ethernet_status == nullptr)
        {
            ethernet_status = std::make_shared<Controller::CccDriver::Ethernet::EthernetStatus>();
        }
        return ethernet_status;
    }

    if(child_yang_name == "ethernet_counters")
    {
        if(ethernet_counters == nullptr)
        {
            ethernet_counters = std::make_shared<Controller::CccDriver::Ethernet::EthernetCounters>();
        }
        return ethernet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ethernet_status != nullptr)
    {
        children["ethernet_status"] = ethernet_status;
    }

    if(ethernet_counters != nullptr)
    {
        children["ethernet_counters"] = ethernet_counters;
    }

    return children;
}

void Controller::CccDriver::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet_status" || name == "ethernet_counters")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::EthernetStatus::EthernetStatus()
    :
    location(this, {"location"})
{

    yang_name = "ethernet_status"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ethernet::EthernetStatus::~EthernetStatus()
{
}

bool Controller::CccDriver::Ethernet::EthernetStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Ethernet::EthernetStatus::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Ethernet::EthernetStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ethernet::EthernetStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::EthernetStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::EthernetStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Ethernet::EthernetStatus::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::EthernetStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Ethernet::EthernetStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Ethernet::EthernetStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Ethernet::EthernetStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::EthernetStatus::Location::Location()
    :
    location{YType::str, "location"}
        ,
    ethernet_status(std::make_shared<Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_>())
{
    ethernet_status->parent = this;

    yang_name = "location"; yang_parent_name = "ethernet_status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ethernet::EthernetStatus::Location::~Location()
{
}

bool Controller::CccDriver::Ethernet::EthernetStatus::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (ethernet_status !=  nullptr && ethernet_status->has_data());
}

bool Controller::CccDriver::Ethernet::EthernetStatus::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (ethernet_status !=  nullptr && ethernet_status->has_operation());
}

std::string Controller::CccDriver::Ethernet::EthernetStatus::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/ethernet/ethernet_status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ethernet::EthernetStatus::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::EthernetStatus::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::EthernetStatus::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet_status")
    {
        if(ethernet_status == nullptr)
        {
            ethernet_status = std::make_shared<Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_>();
        }
        return ethernet_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::EthernetStatus::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ethernet_status != nullptr)
    {
        children["ethernet_status"] = ethernet_status;
    }

    return children;
}

void Controller::CccDriver::Ethernet::EthernetStatus::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Ethernet::EthernetStatus::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Ethernet::EthernetStatus::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet_status" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::EthernetStatus_()
    :
    ethernet_status_values{YType::str, "ethernet_status_values"}
{

    yang_name = "ethernet_status"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::~EthernetStatus_()
{
}

bool Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ethernet_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::has_operation() const
{
    for (auto const & leaf : ethernet_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ethernet_status_values.yfilter);
}

std::string Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ethernet_status_values_name_datas = ethernet_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_status_values_name_datas.begin(), ethernet_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet_status_values")
    {
        ethernet_status_values.append(value);
    }
}

void Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet_status_values")
    {
        ethernet_status_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet_status_values")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::EthernetCounters::EthernetCounters()
    :
    location(this, {"location"})
{

    yang_name = "ethernet_counters"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ethernet::EthernetCounters::~EthernetCounters()
{
}

bool Controller::CccDriver::Ethernet::EthernetCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Ethernet::EthernetCounters::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Ethernet::EthernetCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ethernet::EthernetCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet_counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::EthernetCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::EthernetCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Ethernet::EthernetCounters::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::EthernetCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Ethernet::EthernetCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Ethernet::EthernetCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Ethernet::EthernetCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::EthernetCounters::Location::Location()
    :
    location{YType::str, "location"}
        ,
    ethernet_counters(std::make_shared<Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_>())
{
    ethernet_counters->parent = this;

    yang_name = "location"; yang_parent_name = "ethernet_counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Ethernet::EthernetCounters::Location::~Location()
{
}

bool Controller::CccDriver::Ethernet::EthernetCounters::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (ethernet_counters !=  nullptr && ethernet_counters->has_data());
}

bool Controller::CccDriver::Ethernet::EthernetCounters::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (ethernet_counters !=  nullptr && ethernet_counters->has_operation());
}

std::string Controller::CccDriver::Ethernet::EthernetCounters::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/ethernet/ethernet_counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Ethernet::EthernetCounters::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::EthernetCounters::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::EthernetCounters::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet_counters")
    {
        if(ethernet_counters == nullptr)
        {
            ethernet_counters = std::make_shared<Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_>();
        }
        return ethernet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::EthernetCounters::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ethernet_counters != nullptr)
    {
        children["ethernet_counters"] = ethernet_counters;
    }

    return children;
}

void Controller::CccDriver::Ethernet::EthernetCounters::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Ethernet::EthernetCounters::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Ethernet::EthernetCounters::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet_counters" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::EthernetCounters_()
    :
    ethernet_counter_values{YType::str, "ethernet_counter_values"}
{

    yang_name = "ethernet_counters"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::~EthernetCounters_()
{
}

bool Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ethernet_counter_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::has_operation() const
{
    for (auto const & leaf : ethernet_counter_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ethernet_counter_values.yfilter);
}

std::string Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet_counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ethernet_counter_values_name_datas = ethernet_counter_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_counter_values_name_datas.begin(), ethernet_counter_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet_counter_values")
    {
        ethernet_counter_values.append(value);
    }
}

void Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet_counter_values")
    {
        ethernet_counter_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet_counter_values")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::EventHistory()
    :
    brief(std::make_shared<Controller::CccDriver::EventHistory::Brief>())
    , detail(std::make_shared<Controller::CccDriver::EventHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "event-history"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::EventHistory::~EventHistory()
{
}

bool Controller::CccDriver::EventHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CccDriver::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CccDriver::EventHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CccDriver::EventHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CccDriver::EventHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Controller::CccDriver::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::EventHistory::Brief::~Brief()
{
}

bool Controller::CccDriver::EventHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::EventHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::EventHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::EventHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::EventHistory::Brief::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::EventHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::EventHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::EventHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_brief(std::make_shared<Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief>())
{
    card_event_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::EventHistory::Brief::Location::~Location()
{
}

bool Controller::CccDriver::EventHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_data());
}

bool Controller::CccDriver::EventHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_operation());
}

std::string Controller::CccDriver::EventHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/event-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::EventHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_brief")
    {
        if(card_event_hist_brief == nullptr)
        {
            card_event_hist_brief = std::make_shared<Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief>();
        }
        return card_event_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_event_hist_brief != nullptr)
    {
        children["card_event_hist_brief"] = card_event_hist_brief;
    }

    return children;
}

void Controller::CccDriver::EventHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::EventHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::EventHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::CardEventHistBrief()
    :
    card_event_hist_brief_values{YType::str, "card_event_hist_brief_values"}
{

    yang_name = "card_event_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::~CardEventHistBrief()
{
}

bool Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::has_operation() const
{
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_brief_values.yfilter);
}

std::string Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_brief_values_name_datas = card_event_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_brief_values_name_datas.begin(), card_event_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.append(value);
    }
}

void Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief_values")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::EventHistory::Detail::~Detail()
{
}

bool Controller::CccDriver::EventHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::EventHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::EventHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::EventHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::EventHistory::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::EventHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::EventHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::EventHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_detail(std::make_shared<Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail>())
{
    card_event_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::EventHistory::Detail::Location::~Location()
{
}

bool Controller::CccDriver::EventHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_data());
}

bool Controller::CccDriver::EventHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_operation());
}

std::string Controller::CccDriver::EventHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/event-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::EventHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_detail")
    {
        if(card_event_hist_detail == nullptr)
        {
            card_event_hist_detail = std::make_shared<Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail>();
        }
        return card_event_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_event_hist_detail != nullptr)
    {
        children["card_event_hist_detail"] = card_event_hist_detail;
    }

    return children;
}

void Controller::CccDriver::EventHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::EventHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::EventHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::CardEventHistDetail()
    :
    card_event_hist_detail_values{YType::str, "card_event_hist_detail_values"}
{

    yang_name = "card_event_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::~CardEventHistDetail()
{
}

bool Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::has_operation() const
{
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_detail_values.yfilter);
}

std::string Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_detail_values_name_datas = card_event_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_detail_values_name_datas.begin(), card_event_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.append(value);
    }
}

void Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail_values")
        return true;
    return false;
}

Controller::CccDriver::OirHistory::OirHistory()
    :
    rack(this, {"rack"})
{

    yang_name = "oir-history"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::OirHistory::~OirHistory()
{
}

bool Controller::CccDriver::OirHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::OirHistory::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::OirHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::OirHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Controller::CccDriver::OirHistory::Rack>();
        c->parent = this;
        rack.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::OirHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::OirHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::OirHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::OirHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::CccDriver::OirHistory::Rack::Rack()
    :
    rack{YType::str, "rack"}
        ,
    card_oir_hist(std::make_shared<Controller::CccDriver::OirHistory::Rack::CardOirHist>())
{
    card_oir_hist->parent = this;

    yang_name = "rack"; yang_parent_name = "oir-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::OirHistory::Rack::~Rack()
{
}

bool Controller::CccDriver::OirHistory::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_data());
}

bool Controller::CccDriver::OirHistory::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_operation());
}

std::string Controller::CccDriver::OirHistory::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/oir-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::OirHistory::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack, "rack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::OirHistory::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::OirHistory::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_oir_hist")
    {
        if(card_oir_hist == nullptr)
        {
            card_oir_hist = std::make_shared<Controller::CccDriver::OirHistory::Rack::CardOirHist>();
        }
        return card_oir_hist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::OirHistory::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_oir_hist != nullptr)
    {
        children["card_oir_hist"] = card_oir_hist;
    }

    return children;
}

void Controller::CccDriver::OirHistory::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::OirHistory::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Controller::CccDriver::OirHistory::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_hist" || name == "rack")
        return true;
    return false;
}

Controller::CccDriver::OirHistory::Rack::CardOirHist::CardOirHist()
    :
    card_oir_events{YType::str, "card_oir_events"}
{

    yang_name = "card_oir_hist"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::OirHistory::Rack::CardOirHist::~CardOirHist()
{
}

bool Controller::CccDriver::OirHistory::Rack::CardOirHist::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::OirHistory::Rack::CardOirHist::has_operation() const
{
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_oir_events.yfilter);
}

std::string Controller::CccDriver::OirHistory::Rack::CardOirHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_oir_hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::OirHistory::Rack::CardOirHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_oir_events_name_datas = card_oir_events.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_oir_events_name_datas.begin(), card_oir_events_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::OirHistory::Rack::CardOirHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::OirHistory::Rack::CardOirHist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::OirHistory::Rack::CardOirHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.append(value);
    }
}

void Controller::CccDriver::OirHistory::Rack::CardOirHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.yfilter = yfilter;
    }
}

bool Controller::CccDriver::OirHistory::Rack::CardOirHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_events")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::NotifHistory()
    :
    brief(std::make_shared<Controller::CccDriver::NotifHistory::Brief>())
    , detail(std::make_shared<Controller::CccDriver::NotifHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "notif-history"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::NotifHistory::~NotifHistory()
{
}

bool Controller::CccDriver::NotifHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CccDriver::NotifHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CccDriver::NotifHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::NotifHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notif-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CccDriver::NotifHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CccDriver::NotifHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Controller::CccDriver::NotifHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::NotifHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::NotifHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::NotifHistory::Brief::~Brief()
{
}

bool Controller::CccDriver::NotifHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::NotifHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::NotifHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::NotifHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::NotifHistory::Brief::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::NotifHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::NotifHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::NotifHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_brief(std::make_shared<Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief>())
{
    card_notif_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::NotifHistory::Brief::Location::~Location()
{
}

bool Controller::CccDriver::NotifHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_data());
}

bool Controller::CccDriver::NotifHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_operation());
}

std::string Controller::CccDriver::NotifHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/notif-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::NotifHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_brief")
    {
        if(card_notif_hist_brief == nullptr)
        {
            card_notif_hist_brief = std::make_shared<Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief>();
        }
        return card_notif_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_notif_hist_brief != nullptr)
    {
        children["card_notif_hist_brief"] = card_notif_hist_brief;
    }

    return children;
}

void Controller::CccDriver::NotifHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::NotifHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::NotifHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::CardNotifHistBrief()
    :
    card_notif_hist_brief_values{YType::str, "card_notif_hist_brief_values"}
{

    yang_name = "card_notif_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::~CardNotifHistBrief()
{
}

bool Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::has_operation() const
{
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_brief_values.yfilter);
}

std::string Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_brief_values_name_datas = card_notif_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_brief_values_name_datas.begin(), card_notif_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.append(value);
    }
}

void Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief_values")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::NotifHistory::Detail::~Detail()
{
}

bool Controller::CccDriver::NotifHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::NotifHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::NotifHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::NotifHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::NotifHistory::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::NotifHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::NotifHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::NotifHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_detail(std::make_shared<Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail>())
{
    card_notif_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::NotifHistory::Detail::Location::~Location()
{
}

bool Controller::CccDriver::NotifHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_data());
}

bool Controller::CccDriver::NotifHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_operation());
}

std::string Controller::CccDriver::NotifHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/notif-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::NotifHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_detail")
    {
        if(card_notif_hist_detail == nullptr)
        {
            card_notif_hist_detail = std::make_shared<Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail>();
        }
        return card_notif_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_notif_hist_detail != nullptr)
    {
        children["card_notif_hist_detail"] = card_notif_hist_detail;
    }

    return children;
}

void Controller::CccDriver::NotifHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::NotifHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::NotifHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::CardNotifHistDetail()
    :
    card_notif_hist_detail_values{YType::str, "card_notif_hist_detail_values"}
{

    yang_name = "card_notif_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::~CardNotifHistDetail()
{
}

bool Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::has_operation() const
{
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_detail_values.yfilter);
}

std::string Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_detail_values_name_datas = card_notif_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_detail_values_name_datas.begin(), card_notif_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.append(value);
    }
}

void Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail_values")
        return true;
    return false;
}

Controller::CccDriver::Slave::Slave()
    :
    event_history(std::make_shared<Controller::CccDriver::Slave::EventHistory>())
    , notif_history(std::make_shared<Controller::CccDriver::Slave::NotifHistory>())
    , oir_history(std::make_shared<Controller::CccDriver::Slave::OirHistory>())
{
    event_history->parent = this;
    notif_history->parent = this;
    oir_history->parent = this;

    yang_name = "slave"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::~Slave()
{
}

bool Controller::CccDriver::Slave::has_data() const
{
    if (is_presence_container) return true;
    return (event_history !=  nullptr && event_history->has_data())
	|| (notif_history !=  nullptr && notif_history->has_data())
	|| (oir_history !=  nullptr && oir_history->has_data());
}

bool Controller::CccDriver::Slave::has_operation() const
{
    return is_set(yfilter)
	|| (event_history !=  nullptr && event_history->has_operation())
	|| (notif_history !=  nullptr && notif_history->has_operation())
	|| (oir_history !=  nullptr && oir_history->has_operation());
}

std::string Controller::CccDriver::Slave::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        if(event_history == nullptr)
        {
            event_history = std::make_shared<Controller::CccDriver::Slave::EventHistory>();
        }
        return event_history;
    }

    if(child_yang_name == "notif-history")
    {
        if(notif_history == nullptr)
        {
            notif_history = std::make_shared<Controller::CccDriver::Slave::NotifHistory>();
        }
        return notif_history;
    }

    if(child_yang_name == "oir-history")
    {
        if(oir_history == nullptr)
        {
            oir_history = std::make_shared<Controller::CccDriver::Slave::OirHistory>();
        }
        return oir_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event_history != nullptr)
    {
        children["event-history"] = event_history;
    }

    if(notif_history != nullptr)
    {
        children["notif-history"] = notif_history;
    }

    if(oir_history != nullptr)
    {
        children["oir-history"] = oir_history;
    }

    return children;
}

void Controller::CccDriver::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "notif-history" || name == "oir-history")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::EventHistory()
    :
    brief(std::make_shared<Controller::CccDriver::Slave::EventHistory::Brief>())
    , detail(std::make_shared<Controller::CccDriver::Slave::EventHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "event-history"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::EventHistory::~EventHistory()
{
}

bool Controller::CccDriver::Slave::EventHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CccDriver::Slave::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CccDriver::Slave::EventHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CccDriver::Slave::EventHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CccDriver::Slave::EventHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Controller::CccDriver::Slave::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::EventHistory::Brief::~Brief()
{
}

bool Controller::CccDriver::Slave::EventHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::EventHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Slave::EventHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::EventHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Slave::EventHistory::Brief::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Slave::EventHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::EventHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::EventHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_brief(std::make_shared<Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief>())
{
    card_event_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::EventHistory::Brief::Location::~Location()
{
}

bool Controller::CccDriver::Slave::EventHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_data());
}

bool Controller::CccDriver::Slave::EventHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_operation());
}

std::string Controller::CccDriver::Slave::EventHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/event-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::EventHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_brief")
    {
        if(card_event_hist_brief == nullptr)
        {
            card_event_hist_brief = std::make_shared<Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief>();
        }
        return card_event_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_event_hist_brief != nullptr)
    {
        children["card_event_hist_brief"] = card_event_hist_brief;
    }

    return children;
}

void Controller::CccDriver::Slave::EventHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Slave::EventHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::EventHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::CardEventHistBrief()
    :
    card_event_hist_brief_values{YType::str, "card_event_hist_brief_values"}
{

    yang_name = "card_event_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::~CardEventHistBrief()
{
}

bool Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::has_operation() const
{
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_brief_values.yfilter);
}

std::string Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_brief_values_name_datas = card_event_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_brief_values_name_datas.begin(), card_event_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.append(value);
    }
}

void Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief_values")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::EventHistory::Detail::~Detail()
{
}

bool Controller::CccDriver::Slave::EventHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::EventHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Slave::EventHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::EventHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Slave::EventHistory::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Slave::EventHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::EventHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::EventHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_detail(std::make_shared<Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail>())
{
    card_event_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::EventHistory::Detail::Location::~Location()
{
}

bool Controller::CccDriver::Slave::EventHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_data());
}

bool Controller::CccDriver::Slave::EventHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_operation());
}

std::string Controller::CccDriver::Slave::EventHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/event-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::EventHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_detail")
    {
        if(card_event_hist_detail == nullptr)
        {
            card_event_hist_detail = std::make_shared<Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail>();
        }
        return card_event_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_event_hist_detail != nullptr)
    {
        children["card_event_hist_detail"] = card_event_hist_detail;
    }

    return children;
}

void Controller::CccDriver::Slave::EventHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Slave::EventHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::EventHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::CardEventHistDetail()
    :
    card_event_hist_detail_values{YType::str, "card_event_hist_detail_values"}
{

    yang_name = "card_event_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::~CardEventHistDetail()
{
}

bool Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::has_operation() const
{
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_detail_values.yfilter);
}

std::string Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_detail_values_name_datas = card_event_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_detail_values_name_datas.begin(), card_event_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.append(value);
    }
}

void Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail_values")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::NotifHistory()
    :
    brief(std::make_shared<Controller::CccDriver::Slave::NotifHistory::Brief>())
    , detail(std::make_shared<Controller::CccDriver::Slave::NotifHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "notif-history"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::NotifHistory::~NotifHistory()
{
}

bool Controller::CccDriver::Slave::NotifHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CccDriver::Slave::NotifHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CccDriver::Slave::NotifHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::NotifHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notif-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CccDriver::Slave::NotifHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CccDriver::Slave::NotifHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Controller::CccDriver::Slave::NotifHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::NotifHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::NotifHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::NotifHistory::Brief::~Brief()
{
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Slave::NotifHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::NotifHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Slave::NotifHistory::Brief::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Slave::NotifHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::NotifHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_brief(std::make_shared<Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief>())
{
    card_notif_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::NotifHistory::Brief::Location::~Location()
{
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_data());
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_operation());
}

std::string Controller::CccDriver::Slave::NotifHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/notif-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::NotifHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_brief")
    {
        if(card_notif_hist_brief == nullptr)
        {
            card_notif_hist_brief = std::make_shared<Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief>();
        }
        return card_notif_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_notif_hist_brief != nullptr)
    {
        children["card_notif_hist_brief"] = card_notif_hist_brief;
    }

    return children;
}

void Controller::CccDriver::Slave::NotifHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Slave::NotifHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::CardNotifHistBrief()
    :
    card_notif_hist_brief_values{YType::str, "card_notif_hist_brief_values"}
{

    yang_name = "card_notif_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::~CardNotifHistBrief()
{
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::has_operation() const
{
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_brief_values.yfilter);
}

std::string Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_brief_values_name_datas = card_notif_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_brief_values_name_datas.begin(), card_notif_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.append(value);
    }
}

void Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief_values")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::NotifHistory::Detail::~Detail()
{
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Slave::NotifHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::NotifHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Slave::NotifHistory::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Slave::NotifHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::NotifHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_detail(std::make_shared<Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail>())
{
    card_notif_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::NotifHistory::Detail::Location::~Location()
{
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_data());
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_operation());
}

std::string Controller::CccDriver::Slave::NotifHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/notif-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::NotifHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_detail")
    {
        if(card_notif_hist_detail == nullptr)
        {
            card_notif_hist_detail = std::make_shared<Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail>();
        }
        return card_notif_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_notif_hist_detail != nullptr)
    {
        children["card_notif_hist_detail"] = card_notif_hist_detail;
    }

    return children;
}

void Controller::CccDriver::Slave::NotifHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Slave::NotifHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::CardNotifHistDetail()
    :
    card_notif_hist_detail_values{YType::str, "card_notif_hist_detail_values"}
{

    yang_name = "card_notif_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::~CardNotifHistDetail()
{
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::has_operation() const
{
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_detail_values.yfilter);
}

std::string Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_detail_values_name_datas = card_notif_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_detail_values_name_datas.begin(), card_notif_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.append(value);
    }
}

void Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail_values")
        return true;
    return false;
}

Controller::CccDriver::Slave::OirHistory::OirHistory()
    :
    rack(this, {"rack"})
{

    yang_name = "oir-history"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::OirHistory::~OirHistory()
{
}

bool Controller::CccDriver::Slave::OirHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::OirHistory::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Slave::OirHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::OirHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Controller::CccDriver::Slave::OirHistory::Rack>();
        c->parent = this;
        rack.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::OirHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Slave::OirHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Slave::OirHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Slave::OirHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::CccDriver::Slave::OirHistory::Rack::Rack()
    :
    rack{YType::str, "rack"}
        ,
    card_oir_hist(std::make_shared<Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist>())
{
    card_oir_hist->parent = this;

    yang_name = "rack"; yang_parent_name = "oir-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Slave::OirHistory::Rack::~Rack()
{
}

bool Controller::CccDriver::Slave::OirHistory::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_data());
}

bool Controller::CccDriver::Slave::OirHistory::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_operation());
}

std::string Controller::CccDriver::Slave::OirHistory::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/slave/oir-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Slave::OirHistory::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack, "rack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::OirHistory::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::OirHistory::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_oir_hist")
    {
        if(card_oir_hist == nullptr)
        {
            card_oir_hist = std::make_shared<Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist>();
        }
        return card_oir_hist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::OirHistory::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(card_oir_hist != nullptr)
    {
        children["card_oir_hist"] = card_oir_hist;
    }

    return children;
}

void Controller::CccDriver::Slave::OirHistory::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Slave::OirHistory::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::OirHistory::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_hist" || name == "rack")
        return true;
    return false;
}

Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::CardOirHist()
    :
    card_oir_events{YType::str, "card_oir_events"}
{

    yang_name = "card_oir_hist"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::~CardOirHist()
{
}

bool Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::has_operation() const
{
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_oir_events.yfilter);
}

std::string Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_oir_hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_oir_events_name_datas = card_oir_events.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_oir_events_name_datas.begin(), card_oir_events_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.append(value);
    }
}

void Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_events")
        return true;
    return false;
}

Controller::CccDriver::Action::Action()
    :
    register_(std::make_shared<Controller::CccDriver::Action::Register>())
{
    register_->parent = this;

    yang_name = "action"; yang_parent_name = "ccc_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Action::~Action()
{
}

bool Controller::CccDriver::Action::has_data() const
{
    if (is_presence_container) return true;
    return (register_ !=  nullptr && register_->has_data());
}

bool Controller::CccDriver::Action::has_operation() const
{
    return is_set(yfilter)
	|| (register_ !=  nullptr && register_->has_operation());
}

std::string Controller::CccDriver::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<Controller::CccDriver::Action::Register>();
        }
        return register_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(register_ != nullptr)
    {
        children["register"] = register_;
    }

    return children;
}

void Controller::CccDriver::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register")
        return true;
    return false;
}

Controller::CccDriver::Action::Register::Register()
    :
    location(this, {"location"})
{

    yang_name = "register"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Action::Register::~Register()
{
}

bool Controller::CccDriver::Action::Register::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CccDriver::Action::Register::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CccDriver::Action::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/action/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Action::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Action::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Action::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::CccDriver::Action::Register::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Action::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::CccDriver::Action::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CccDriver::Action::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CccDriver::Action::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CccDriver::Action::Register::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CccDriver::Action::Register::Location::~Location()
{
}

bool Controller::CccDriver::Action::Register::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool Controller::CccDriver::Action::Register::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Controller::CccDriver::Action::Register::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/ccc_driver/action/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CccDriver::Action::Register::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CccDriver::Action::Register::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::CccDriver::Action::Register::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::CccDriver::Action::Register::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::CccDriver::Action::Register::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CccDriver::Action::Register::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CccDriver::Action::Register::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Switch()
    :
    oper(std::make_shared<Controller::Switch::Oper>())
{
    oper->parent = this;

    yang_name = "switch"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::~Switch()
{
}

bool Controller::Switch::has_data() const
{
    if (is_presence_container) return true;
    return (oper !=  nullptr && oper->has_data());
}

bool Controller::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Controller::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Switch::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    return children;
}

void Controller::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper")
        return true;
    return false;
}

Controller::Switch::Oper::Oper()
    :
    reachable(std::make_shared<Controller::Switch::Oper::Reachable>())
    , summary(std::make_shared<Controller::Switch::Oper::Summary>())
    , statistics(std::make_shared<Controller::Switch::Oper::Statistics>())
    , serdes(std::make_shared<Controller::Switch::Oper::Serdes>())
    , mac(std::make_shared<Controller::Switch::Oper::Mac>())
    , bridge(std::make_shared<Controller::Switch::Oper::Bridge>())
    , fdb(std::make_shared<Controller::Switch::Oper::Fdb>())
    , vlan(std::make_shared<Controller::Switch::Oper::Vlan>())
    , sdr(std::make_shared<Controller::Switch::Oper::Sdr>())
    , sfp(std::make_shared<Controller::Switch::Oper::Sfp>())
    , mlap(std::make_shared<Controller::Switch::Oper::Mlap>())
    , switch_debug_cont(std::make_shared<Controller::Switch::Oper::SwitchDebugCont>())
    , esd(std::make_shared<Controller::Switch::Oper::Esd>())
    , mgmt_agent(std::make_shared<Controller::Switch::Oper::MgmtAgent>())
    , port_state(std::make_shared<Controller::Switch::Oper::PortState>())
    , trunk(std::make_shared<Controller::Switch::Oper::Trunk>())
{
    reachable->parent = this;
    summary->parent = this;
    statistics->parent = this;
    serdes->parent = this;
    mac->parent = this;
    bridge->parent = this;
    fdb->parent = this;
    vlan->parent = this;
    sdr->parent = this;
    sfp->parent = this;
    mlap->parent = this;
    switch_debug_cont->parent = this;
    esd->parent = this;
    mgmt_agent->parent = this;
    port_state->parent = this;
    trunk->parent = this;

    yang_name = "oper"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::~Oper()
{
}

bool Controller::Switch::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (reachable !=  nullptr && reachable->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (serdes !=  nullptr && serdes->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (fdb !=  nullptr && fdb->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (sdr !=  nullptr && sdr->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (mlap !=  nullptr && mlap->has_data())
	|| (switch_debug_cont !=  nullptr && switch_debug_cont->has_data())
	|| (esd !=  nullptr && esd->has_data())
	|| (mgmt_agent !=  nullptr && mgmt_agent->has_data())
	|| (port_state !=  nullptr && port_state->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Controller::Switch::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (serdes !=  nullptr && serdes->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (fdb !=  nullptr && fdb->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (sdr !=  nullptr && sdr->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (mlap !=  nullptr && mlap->has_operation())
	|| (switch_debug_cont !=  nullptr && switch_debug_cont->has_operation())
	|| (esd !=  nullptr && esd->has_operation())
	|| (mgmt_agent !=  nullptr && mgmt_agent->has_operation())
	|| (port_state !=  nullptr && port_state->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Controller::Switch::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Controller::Switch::Oper::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "serdes")
    {
        if(serdes == nullptr)
        {
            serdes = std::make_shared<Controller::Switch::Oper::Serdes>();
        }
        return serdes;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Controller::Switch::Oper::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Controller::Switch::Oper::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "fdb")
    {
        if(fdb == nullptr)
        {
            fdb = std::make_shared<Controller::Switch::Oper::Fdb>();
        }
        return fdb;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Controller::Switch::Oper::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Switch::Oper::Sdr>();
        }
        return sdr;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<Controller::Switch::Oper::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "mlap")
    {
        if(mlap == nullptr)
        {
            mlap = std::make_shared<Controller::Switch::Oper::Mlap>();
        }
        return mlap;
    }

    if(child_yang_name == "switch-debug-cont")
    {
        if(switch_debug_cont == nullptr)
        {
            switch_debug_cont = std::make_shared<Controller::Switch::Oper::SwitchDebugCont>();
        }
        return switch_debug_cont;
    }

    if(child_yang_name == "esd")
    {
        if(esd == nullptr)
        {
            esd = std::make_shared<Controller::Switch::Oper::Esd>();
        }
        return esd;
    }

    if(child_yang_name == "mgmt-agent")
    {
        if(mgmt_agent == nullptr)
        {
            mgmt_agent = std::make_shared<Controller::Switch::Oper::MgmtAgent>();
        }
        return mgmt_agent;
    }

    if(child_yang_name == "port-state")
    {
        if(port_state == nullptr)
        {
            port_state = std::make_shared<Controller::Switch::Oper::PortState>();
        }
        return port_state;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Controller::Switch::Oper::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reachable != nullptr)
    {
        children["reachable"] = reachable;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(serdes != nullptr)
    {
        children["serdes"] = serdes;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(fdb != nullptr)
    {
        children["fdb"] = fdb;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(sdr != nullptr)
    {
        children["sdr"] = sdr;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(mlap != nullptr)
    {
        children["mlap"] = mlap;
    }

    if(switch_debug_cont != nullptr)
    {
        children["switch-debug-cont"] = switch_debug_cont;
    }

    if(esd != nullptr)
    {
        children["esd"] = esd;
    }

    if(mgmt_agent != nullptr)
    {
        children["mgmt-agent"] = mgmt_agent;
    }

    if(port_state != nullptr)
    {
        children["port-state"] = port_state;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    return children;
}

void Controller::Switch::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "summary" || name == "statistics" || name == "serdes" || name == "mac" || name == "bridge" || name == "fdb" || name == "vlan" || name == "sdr" || name == "sfp" || name == "mlap" || name == "switch-debug-cont" || name == "esd" || name == "mgmt-agent" || name == "port-state" || name == "trunk")
        return true;
    return false;
}

Controller::Switch::Oper::Reachable::Reachable()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "reachable"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Reachable::~Reachable()
{
}

bool Controller::Switch::Oper::Reachable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Reachable::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Reachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Reachable::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Reachable::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "reachable"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Reachable::Location::~Location()
{
}

bool Controller::Switch::Oper::Reachable::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Reachable::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Reachable::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/reachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Reachable::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Reachable::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Reachable::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Reachable::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Reachable::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Switch::Oper::Reachable::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Switch::Oper::Reachable::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Summary()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "summary"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Summary::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Summary::Location::~Location()
{
}

bool Controller::Switch::Oper::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Summary::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Summary::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Summary::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    admin_state{YType::enumeration, "admin-state"},
    port_speed{YType::str, "port-speed"},
    protocol_state{YType::enumeration, "protocol-state"},
    forwarding{YType::enumeration, "forwarding"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Summary::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| admin_state.is_set
	|| port_speed.is_set
	|| protocol_state.is_set
	|| forwarding.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Summary::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Summary::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Summary::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Summary::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Summary::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "admin-state" || name == "port-speed" || name == "protocol-state" || name == "forwarding" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Statistics()
    :
    summary_statistics(std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics>())
    , detail(std::make_shared<Controller::Switch::Oper::Statistics::Detail>())
{
    summary_statistics->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (summary_statistics !=  nullptr && summary_statistics->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Switch::Oper::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (summary_statistics !=  nullptr && summary_statistics->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Switch::Oper::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-statistics")
    {
        if(summary_statistics == nullptr)
        {
            summary_statistics = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics>();
        }
        return summary_statistics;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Switch::Oper::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary_statistics != nullptr)
    {
        children["summary-statistics"] = summary_statistics;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-statistics" || name == "detail")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::SummaryStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "summary-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::SummaryStatistics::~SummaryStatistics()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "summary-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/statistics/summary-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    state_changes{YType::uint32, "state-changes"},
    sw_sum_tx_packets{YType::uint64, "sw-sum-tx-packets"},
    sw_sum_rx_packets{YType::uint64, "sw-sum-rx-packets"},
    sw_sum_tx_drops_errors{YType::uint64, "sw-sum-tx-drops-errors"},
    sw_sum_rx_drops_errors{YType::uint64, "sw-sum-rx-drops-errors"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| state_changes.is_set
	|| sw_sum_tx_packets.is_set
	|| sw_sum_rx_packets.is_set
	|| sw_sum_tx_drops_errors.is_set
	|| sw_sum_rx_drops_errors.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(sw_sum_tx_packets.yfilter)
	|| ydk::is_set(sw_sum_rx_packets.yfilter)
	|| ydk::is_set(sw_sum_tx_drops_errors.yfilter)
	|| ydk::is_set(sw_sum_rx_drops_errors.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (sw_sum_tx_packets.is_set || is_set(sw_sum_tx_packets.yfilter)) leaf_name_data.push_back(sw_sum_tx_packets.get_name_leafdata());
    if (sw_sum_rx_packets.is_set || is_set(sw_sum_rx_packets.yfilter)) leaf_name_data.push_back(sw_sum_rx_packets.get_name_leafdata());
    if (sw_sum_tx_drops_errors.is_set || is_set(sw_sum_tx_drops_errors.yfilter)) leaf_name_data.push_back(sw_sum_tx_drops_errors.get_name_leafdata());
    if (sw_sum_rx_drops_errors.is_set || is_set(sw_sum_rx_drops_errors.yfilter)) leaf_name_data.push_back(sw_sum_rx_drops_errors.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-tx-packets")
    {
        sw_sum_tx_packets = value;
        sw_sum_tx_packets.value_namespace = name_space;
        sw_sum_tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-rx-packets")
    {
        sw_sum_rx_packets = value;
        sw_sum_rx_packets.value_namespace = name_space;
        sw_sum_rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-tx-drops-errors")
    {
        sw_sum_tx_drops_errors = value;
        sw_sum_tx_drops_errors.value_namespace = name_space;
        sw_sum_tx_drops_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-rx-drops-errors")
    {
        sw_sum_rx_drops_errors = value;
        sw_sum_rx_drops_errors.value_namespace = name_space;
        sw_sum_rx_drops_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "sw-sum-tx-packets")
    {
        sw_sum_tx_packets.yfilter = yfilter;
    }
    if(value_path == "sw-sum-rx-packets")
    {
        sw_sum_rx_packets.yfilter = yfilter;
    }
    if(value_path == "sw-sum-tx-drops-errors")
    {
        sw_sum_tx_drops_errors.yfilter = yfilter;
    }
    if(value_path == "sw-sum-rx-drops-errors")
    {
        sw_sum_rx_drops_errors.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "state-changes" || name == "sw-sum-tx-packets" || name == "sw-sum-rx-packets" || name == "sw-sum-tx-drops-errors" || name == "sw-sum-rx-drops-errors" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Detail()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::Detail::~Detail()
{
}

bool Controller::Switch::Oper::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::Detail::Location::~Location()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/statistics/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Switch::Oper::Statistics::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Switch::Oper::Statistics::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    port_speed{YType::str, "port-speed"},
    connects_to{YType::str, "connects-to"}
        ,
    counters(std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters>())
{
    counters->parent = this;

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| port_speed.is_set
	|| connects_to.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(connects_to.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "port" || name == "phys-state" || name == "port-speed" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::Counters()
    :
    sw_det_rx_ucast_packets{YType::uint64, "sw-det-rx-ucast-packets"},
    sw_det_rx_mcast_packets{YType::uint64, "sw-det-rx-mcast-packets"},
    sw_det_rx_bcast_packets{YType::uint64, "sw-det-rx-bcast-packets"},
    sw_det_rx_flow_control{YType::uint64, "sw-det-rx-flow-control"},
    sw_det_rx_good_octets{YType::uint64, "sw-det-rx-good-octets"},
    sw_det_rx_bad_octets{YType::uint64, "sw-det-rx-bad-octets"},
    sw_det_rx_fifo_overrun{YType::uint64, "sw-det-rx-fifo-overrun"},
    sw_det_rx_undersize{YType::uint64, "sw-det-rx-undersize"},
    sw_det_rx_fragments{YType::uint64, "sw-det-rx-fragments"},
    sw_det_rx_oversize{YType::uint64, "sw-det-rx-oversize"},
    sw_det_rx_jabber{YType::uint64, "sw-det-rx-jabber"},
    sw_det_rx_errors{YType::uint64, "sw-det-rx-errors"},
    sw_det_rx_bad_crc{YType::uint64, "sw-det-rx-bad-crc"},
    sw_det_rx_collisions{YType::uint64, "sw-det-rx-collisions"},
    sw_det_rx_policing_drops{YType::uint64, "sw-det-rx-policing-drops"},
    sw_det_tx_ucast_packets{YType::uint64, "sw-det-tx-ucast-packets"},
    sw_det_tx_mcast_packets{YType::uint64, "sw-det-tx-mcast-packets"},
    sw_det_tx_bcast_packets{YType::uint64, "sw-det-tx-bcast-packets"},
    sw_det_tx_flow_control{YType::uint64, "sw-det-tx-flow-control"},
    sw_det_tx_good_octets{YType::uint64, "sw-det-tx-good-octets"},
    sw_det_tx_deferred{YType::uint64, "sw-det-tx-deferred"},
    sw_det_tx_fifo_unrun{YType::uint64, "sw-det-tx-fifo-unrun"},
    sw_det_tx_mult_collision{YType::uint64, "sw-det-tx-mult-collision"},
    sw_det_tx_excess_collision{YType::uint64, "sw-det-tx-excess-collision"},
    sw_det_tx_late_collisions{YType::uint64, "sw-det-tx-late-collisions"},
    sw_det_tx_policing_drops{YType::uint64, "sw-det-tx-policing-drops"},
    sw_det_txq_drops{YType::uint64, "sw-det-txq-drops"},
    sw_det_rxtx_packets_64{YType::uint64, "sw-det-rxtx-packets-64"},
    sw_det_rxtx_packets_65_127{YType::uint64, "sw-det-rxtx-packets-65-127"},
    sw_det_rxtx_packets_128_255{YType::uint64, "sw-det-rxtx-packets-128-255"},
    sw_det_rxtx_packets_256_511{YType::uint64, "sw-det-rxtx-packets-256-511"},
    sw_det_rxtx_packets_512_1023{YType::uint64, "sw-det-rxtx-packets-512-1023"},
    sw_det_rxtx_packets_1024_max{YType::uint64, "sw-det-rxtx-packets-1024-max"}
{

    yang_name = "counters"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::~Counters()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_data() const
{
    if (is_presence_container) return true;
    return sw_det_rx_ucast_packets.is_set
	|| sw_det_rx_mcast_packets.is_set
	|| sw_det_rx_bcast_packets.is_set
	|| sw_det_rx_flow_control.is_set
	|| sw_det_rx_good_octets.is_set
	|| sw_det_rx_bad_octets.is_set
	|| sw_det_rx_fifo_overrun.is_set
	|| sw_det_rx_undersize.is_set
	|| sw_det_rx_fragments.is_set
	|| sw_det_rx_oversize.is_set
	|| sw_det_rx_jabber.is_set
	|| sw_det_rx_errors.is_set
	|| sw_det_rx_bad_crc.is_set
	|| sw_det_rx_collisions.is_set
	|| sw_det_rx_policing_drops.is_set
	|| sw_det_tx_ucast_packets.is_set
	|| sw_det_tx_mcast_packets.is_set
	|| sw_det_tx_bcast_packets.is_set
	|| sw_det_tx_flow_control.is_set
	|| sw_det_tx_good_octets.is_set
	|| sw_det_tx_deferred.is_set
	|| sw_det_tx_fifo_unrun.is_set
	|| sw_det_tx_mult_collision.is_set
	|| sw_det_tx_excess_collision.is_set
	|| sw_det_tx_late_collisions.is_set
	|| sw_det_tx_policing_drops.is_set
	|| sw_det_txq_drops.is_set
	|| sw_det_rxtx_packets_64.is_set
	|| sw_det_rxtx_packets_65_127.is_set
	|| sw_det_rxtx_packets_128_255.is_set
	|| sw_det_rxtx_packets_256_511.is_set
	|| sw_det_rxtx_packets_512_1023.is_set
	|| sw_det_rxtx_packets_1024_max.is_set;
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sw_det_rx_ucast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_mcast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_bcast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_flow_control.yfilter)
	|| ydk::is_set(sw_det_rx_good_octets.yfilter)
	|| ydk::is_set(sw_det_rx_bad_octets.yfilter)
	|| ydk::is_set(sw_det_rx_fifo_overrun.yfilter)
	|| ydk::is_set(sw_det_rx_undersize.yfilter)
	|| ydk::is_set(sw_det_rx_fragments.yfilter)
	|| ydk::is_set(sw_det_rx_oversize.yfilter)
	|| ydk::is_set(sw_det_rx_jabber.yfilter)
	|| ydk::is_set(sw_det_rx_errors.yfilter)
	|| ydk::is_set(sw_det_rx_bad_crc.yfilter)
	|| ydk::is_set(sw_det_rx_collisions.yfilter)
	|| ydk::is_set(sw_det_rx_policing_drops.yfilter)
	|| ydk::is_set(sw_det_tx_ucast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_mcast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_bcast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_flow_control.yfilter)
	|| ydk::is_set(sw_det_tx_good_octets.yfilter)
	|| ydk::is_set(sw_det_tx_deferred.yfilter)
	|| ydk::is_set(sw_det_tx_fifo_unrun.yfilter)
	|| ydk::is_set(sw_det_tx_mult_collision.yfilter)
	|| ydk::is_set(sw_det_tx_excess_collision.yfilter)
	|| ydk::is_set(sw_det_tx_late_collisions.yfilter)
	|| ydk::is_set(sw_det_tx_policing_drops.yfilter)
	|| ydk::is_set(sw_det_txq_drops.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_64.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_65_127.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_128_255.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_256_511.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_512_1023.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_1024_max.yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sw_det_rx_ucast_packets.is_set || is_set(sw_det_rx_ucast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_ucast_packets.get_name_leafdata());
    if (sw_det_rx_mcast_packets.is_set || is_set(sw_det_rx_mcast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_mcast_packets.get_name_leafdata());
    if (sw_det_rx_bcast_packets.is_set || is_set(sw_det_rx_bcast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_bcast_packets.get_name_leafdata());
    if (sw_det_rx_flow_control.is_set || is_set(sw_det_rx_flow_control.yfilter)) leaf_name_data.push_back(sw_det_rx_flow_control.get_name_leafdata());
    if (sw_det_rx_good_octets.is_set || is_set(sw_det_rx_good_octets.yfilter)) leaf_name_data.push_back(sw_det_rx_good_octets.get_name_leafdata());
    if (sw_det_rx_bad_octets.is_set || is_set(sw_det_rx_bad_octets.yfilter)) leaf_name_data.push_back(sw_det_rx_bad_octets.get_name_leafdata());
    if (sw_det_rx_fifo_overrun.is_set || is_set(sw_det_rx_fifo_overrun.yfilter)) leaf_name_data.push_back(sw_det_rx_fifo_overrun.get_name_leafdata());
    if (sw_det_rx_undersize.is_set || is_set(sw_det_rx_undersize.yfilter)) leaf_name_data.push_back(sw_det_rx_undersize.get_name_leafdata());
    if (sw_det_rx_fragments.is_set || is_set(sw_det_rx_fragments.yfilter)) leaf_name_data.push_back(sw_det_rx_fragments.get_name_leafdata());
    if (sw_det_rx_oversize.is_set || is_set(sw_det_rx_oversize.yfilter)) leaf_name_data.push_back(sw_det_rx_oversize.get_name_leafdata());
    if (sw_det_rx_jabber.is_set || is_set(sw_det_rx_jabber.yfilter)) leaf_name_data.push_back(sw_det_rx_jabber.get_name_leafdata());
    if (sw_det_rx_errors.is_set || is_set(sw_det_rx_errors.yfilter)) leaf_name_data.push_back(sw_det_rx_errors.get_name_leafdata());
    if (sw_det_rx_bad_crc.is_set || is_set(sw_det_rx_bad_crc.yfilter)) leaf_name_data.push_back(sw_det_rx_bad_crc.get_name_leafdata());
    if (sw_det_rx_collisions.is_set || is_set(sw_det_rx_collisions.yfilter)) leaf_name_data.push_back(sw_det_rx_collisions.get_name_leafdata());
    if (sw_det_rx_policing_drops.is_set || is_set(sw_det_rx_policing_drops.yfilter)) leaf_name_data.push_back(sw_det_rx_policing_drops.get_name_leafdata());
    if (sw_det_tx_ucast_packets.is_set || is_set(sw_det_tx_ucast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_ucast_packets.get_name_leafdata());
    if (sw_det_tx_mcast_packets.is_set || is_set(sw_det_tx_mcast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_mcast_packets.get_name_leafdata());
    if (sw_det_tx_bcast_packets.is_set || is_set(sw_det_tx_bcast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_bcast_packets.get_name_leafdata());
    if (sw_det_tx_flow_control.is_set || is_set(sw_det_tx_flow_control.yfilter)) leaf_name_data.push_back(sw_det_tx_flow_control.get_name_leafdata());
    if (sw_det_tx_good_octets.is_set || is_set(sw_det_tx_good_octets.yfilter)) leaf_name_data.push_back(sw_det_tx_good_octets.get_name_leafdata());
    if (sw_det_tx_deferred.is_set || is_set(sw_det_tx_deferred.yfilter)) leaf_name_data.push_back(sw_det_tx_deferred.get_name_leafdata());
    if (sw_det_tx_fifo_unrun.is_set || is_set(sw_det_tx_fifo_unrun.yfilter)) leaf_name_data.push_back(sw_det_tx_fifo_unrun.get_name_leafdata());
    if (sw_det_tx_mult_collision.is_set || is_set(sw_det_tx_mult_collision.yfilter)) leaf_name_data.push_back(sw_det_tx_mult_collision.get_name_leafdata());
    if (sw_det_tx_excess_collision.is_set || is_set(sw_det_tx_excess_collision.yfilter)) leaf_name_data.push_back(sw_det_tx_excess_collision.get_name_leafdata());
    if (sw_det_tx_late_collisions.is_set || is_set(sw_det_tx_late_collisions.yfilter)) leaf_name_data.push_back(sw_det_tx_late_collisions.get_name_leafdata());
    if (sw_det_tx_policing_drops.is_set || is_set(sw_det_tx_policing_drops.yfilter)) leaf_name_data.push_back(sw_det_tx_policing_drops.get_name_leafdata());
    if (sw_det_txq_drops.is_set || is_set(sw_det_txq_drops.yfilter)) leaf_name_data.push_back(sw_det_txq_drops.get_name_leafdata());
    if (sw_det_rxtx_packets_64.is_set || is_set(sw_det_rxtx_packets_64.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_64.get_name_leafdata());
    if (sw_det_rxtx_packets_65_127.is_set || is_set(sw_det_rxtx_packets_65_127.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_65_127.get_name_leafdata());
    if (sw_det_rxtx_packets_128_255.is_set || is_set(sw_det_rxtx_packets_128_255.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_128_255.get_name_leafdata());
    if (sw_det_rxtx_packets_256_511.is_set || is_set(sw_det_rxtx_packets_256_511.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_256_511.get_name_leafdata());
    if (sw_det_rxtx_packets_512_1023.is_set || is_set(sw_det_rxtx_packets_512_1023.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_512_1023.get_name_leafdata());
    if (sw_det_rxtx_packets_1024_max.is_set || is_set(sw_det_rxtx_packets_1024_max.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_1024_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sw-det-rx-ucast-packets")
    {
        sw_det_rx_ucast_packets = value;
        sw_det_rx_ucast_packets.value_namespace = name_space;
        sw_det_rx_ucast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-mcast-packets")
    {
        sw_det_rx_mcast_packets = value;
        sw_det_rx_mcast_packets.value_namespace = name_space;
        sw_det_rx_mcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bcast-packets")
    {
        sw_det_rx_bcast_packets = value;
        sw_det_rx_bcast_packets.value_namespace = name_space;
        sw_det_rx_bcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-flow-control")
    {
        sw_det_rx_flow_control = value;
        sw_det_rx_flow_control.value_namespace = name_space;
        sw_det_rx_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-good-octets")
    {
        sw_det_rx_good_octets = value;
        sw_det_rx_good_octets.value_namespace = name_space;
        sw_det_rx_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bad-octets")
    {
        sw_det_rx_bad_octets = value;
        sw_det_rx_bad_octets.value_namespace = name_space;
        sw_det_rx_bad_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-fifo-overrun")
    {
        sw_det_rx_fifo_overrun = value;
        sw_det_rx_fifo_overrun.value_namespace = name_space;
        sw_det_rx_fifo_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-undersize")
    {
        sw_det_rx_undersize = value;
        sw_det_rx_undersize.value_namespace = name_space;
        sw_det_rx_undersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-fragments")
    {
        sw_det_rx_fragments = value;
        sw_det_rx_fragments.value_namespace = name_space;
        sw_det_rx_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-oversize")
    {
        sw_det_rx_oversize = value;
        sw_det_rx_oversize.value_namespace = name_space;
        sw_det_rx_oversize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-jabber")
    {
        sw_det_rx_jabber = value;
        sw_det_rx_jabber.value_namespace = name_space;
        sw_det_rx_jabber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-errors")
    {
        sw_det_rx_errors = value;
        sw_det_rx_errors.value_namespace = name_space;
        sw_det_rx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bad-crc")
    {
        sw_det_rx_bad_crc = value;
        sw_det_rx_bad_crc.value_namespace = name_space;
        sw_det_rx_bad_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-collisions")
    {
        sw_det_rx_collisions = value;
        sw_det_rx_collisions.value_namespace = name_space;
        sw_det_rx_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-policing-drops")
    {
        sw_det_rx_policing_drops = value;
        sw_det_rx_policing_drops.value_namespace = name_space;
        sw_det_rx_policing_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-ucast-packets")
    {
        sw_det_tx_ucast_packets = value;
        sw_det_tx_ucast_packets.value_namespace = name_space;
        sw_det_tx_ucast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-mcast-packets")
    {
        sw_det_tx_mcast_packets = value;
        sw_det_tx_mcast_packets.value_namespace = name_space;
        sw_det_tx_mcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-bcast-packets")
    {
        sw_det_tx_bcast_packets = value;
        sw_det_tx_bcast_packets.value_namespace = name_space;
        sw_det_tx_bcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-flow-control")
    {
        sw_det_tx_flow_control = value;
        sw_det_tx_flow_control.value_namespace = name_space;
        sw_det_tx_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-good-octets")
    {
        sw_det_tx_good_octets = value;
        sw_det_tx_good_octets.value_namespace = name_space;
        sw_det_tx_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-deferred")
    {
        sw_det_tx_deferred = value;
        sw_det_tx_deferred.value_namespace = name_space;
        sw_det_tx_deferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-fifo-unrun")
    {
        sw_det_tx_fifo_unrun = value;
        sw_det_tx_fifo_unrun.value_namespace = name_space;
        sw_det_tx_fifo_unrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-mult-collision")
    {
        sw_det_tx_mult_collision = value;
        sw_det_tx_mult_collision.value_namespace = name_space;
        sw_det_tx_mult_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-excess-collision")
    {
        sw_det_tx_excess_collision = value;
        sw_det_tx_excess_collision.value_namespace = name_space;
        sw_det_tx_excess_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-late-collisions")
    {
        sw_det_tx_late_collisions = value;
        sw_det_tx_late_collisions.value_namespace = name_space;
        sw_det_tx_late_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-policing-drops")
    {
        sw_det_tx_policing_drops = value;
        sw_det_tx_policing_drops.value_namespace = name_space;
        sw_det_tx_policing_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-txq-drops")
    {
        sw_det_txq_drops = value;
        sw_det_txq_drops.value_namespace = name_space;
        sw_det_txq_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-64")
    {
        sw_det_rxtx_packets_64 = value;
        sw_det_rxtx_packets_64.value_namespace = name_space;
        sw_det_rxtx_packets_64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-65-127")
    {
        sw_det_rxtx_packets_65_127 = value;
        sw_det_rxtx_packets_65_127.value_namespace = name_space;
        sw_det_rxtx_packets_65_127.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-128-255")
    {
        sw_det_rxtx_packets_128_255 = value;
        sw_det_rxtx_packets_128_255.value_namespace = name_space;
        sw_det_rxtx_packets_128_255.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-256-511")
    {
        sw_det_rxtx_packets_256_511 = value;
        sw_det_rxtx_packets_256_511.value_namespace = name_space;
        sw_det_rxtx_packets_256_511.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-512-1023")
    {
        sw_det_rxtx_packets_512_1023 = value;
        sw_det_rxtx_packets_512_1023.value_namespace = name_space;
        sw_det_rxtx_packets_512_1023.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-1024-max")
    {
        sw_det_rxtx_packets_1024_max = value;
        sw_det_rxtx_packets_1024_max.value_namespace = name_space;
        sw_det_rxtx_packets_1024_max.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sw-det-rx-ucast-packets")
    {
        sw_det_rx_ucast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-mcast-packets")
    {
        sw_det_rx_mcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bcast-packets")
    {
        sw_det_rx_bcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-flow-control")
    {
        sw_det_rx_flow_control.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-good-octets")
    {
        sw_det_rx_good_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bad-octets")
    {
        sw_det_rx_bad_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-fifo-overrun")
    {
        sw_det_rx_fifo_overrun.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-undersize")
    {
        sw_det_rx_undersize.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-fragments")
    {
        sw_det_rx_fragments.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-oversize")
    {
        sw_det_rx_oversize.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-jabber")
    {
        sw_det_rx_jabber.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-errors")
    {
        sw_det_rx_errors.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bad-crc")
    {
        sw_det_rx_bad_crc.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-collisions")
    {
        sw_det_rx_collisions.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-policing-drops")
    {
        sw_det_rx_policing_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-ucast-packets")
    {
        sw_det_tx_ucast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-mcast-packets")
    {
        sw_det_tx_mcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-bcast-packets")
    {
        sw_det_tx_bcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-flow-control")
    {
        sw_det_tx_flow_control.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-good-octets")
    {
        sw_det_tx_good_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-deferred")
    {
        sw_det_tx_deferred.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-fifo-unrun")
    {
        sw_det_tx_fifo_unrun.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-mult-collision")
    {
        sw_det_tx_mult_collision.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-excess-collision")
    {
        sw_det_tx_excess_collision.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-late-collisions")
    {
        sw_det_tx_late_collisions.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-policing-drops")
    {
        sw_det_tx_policing_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-txq-drops")
    {
        sw_det_txq_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-64")
    {
        sw_det_rxtx_packets_64.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-65-127")
    {
        sw_det_rxtx_packets_65_127.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-128-255")
    {
        sw_det_rxtx_packets_128_255.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-256-511")
    {
        sw_det_rxtx_packets_256_511.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-512-1023")
    {
        sw_det_rxtx_packets_512_1023.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-1024-max")
    {
        sw_det_rxtx_packets_1024_max.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sw-det-rx-ucast-packets" || name == "sw-det-rx-mcast-packets" || name == "sw-det-rx-bcast-packets" || name == "sw-det-rx-flow-control" || name == "sw-det-rx-good-octets" || name == "sw-det-rx-bad-octets" || name == "sw-det-rx-fifo-overrun" || name == "sw-det-rx-undersize" || name == "sw-det-rx-fragments" || name == "sw-det-rx-oversize" || name == "sw-det-rx-jabber" || name == "sw-det-rx-errors" || name == "sw-det-rx-bad-crc" || name == "sw-det-rx-collisions" || name == "sw-det-rx-policing-drops" || name == "sw-det-tx-ucast-packets" || name == "sw-det-tx-mcast-packets" || name == "sw-det-tx-bcast-packets" || name == "sw-det-tx-flow-control" || name == "sw-det-tx-good-octets" || name == "sw-det-tx-deferred" || name == "sw-det-tx-fifo-unrun" || name == "sw-det-tx-mult-collision" || name == "sw-det-tx-excess-collision" || name == "sw-det-tx-late-collisions" || name == "sw-det-tx-policing-drops" || name == "sw-det-txq-drops" || name == "sw-det-rxtx-packets-64" || name == "sw-det-rxtx-packets-65-127" || name == "sw-det-rxtx-packets-128-255" || name == "sw-det-rxtx-packets-256-511" || name == "sw-det-rxtx-packets-512-1023" || name == "sw-det-rxtx-packets-1024-max")
        return true;
    return false;
}

Controller::Switch::Oper::Serdes::Serdes()
    :
    serdes_statistics(std::make_shared<Controller::Switch::Oper::Serdes::SerdesStatistics>())
{
    serdes_statistics->parent = this;

    yang_name = "serdes"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Serdes::~Serdes()
{
}

bool Controller::Switch::Oper::Serdes::has_data() const
{
    if (is_presence_container) return true;
    return (serdes_statistics !=  nullptr && serdes_statistics->has_data());
}

bool Controller::Switch::Oper::Serdes::has_operation() const
{
    return is_set(yfilter)
	|| (serdes_statistics !=  nullptr && serdes_statistics->has_operation());
}

std::string Controller::Switch::Oper::Serdes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Serdes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serdes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Serdes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Serdes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serdes-statistics")
    {
        if(serdes_statistics == nullptr)
        {
            serdes_statistics = std::make_shared<Controller::Switch::Oper::Serdes::SerdesStatistics>();
        }
        return serdes_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Serdes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(serdes_statistics != nullptr)
    {
        children["serdes-statistics"] = serdes_statistics;
    }

    return children;
}

void Controller::Switch::Oper::Serdes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Serdes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Serdes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serdes-statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Serdes::SerdesStatistics::SerdesStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "serdes-statistics"; yang_parent_name = "serdes"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Serdes::SerdesStatistics::~SerdesStatistics()
{
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Serdes::SerdesStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/serdes/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Serdes::SerdesStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serdes-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Serdes::SerdesStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Serdes::SerdesStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Serdes::SerdesStatistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Serdes::SerdesStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Serdes::SerdesStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "serdes-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Serdes::SerdesStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Serdes::SerdesStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/serdes/serdes-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Serdes::SerdesStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Serdes::SerdesStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Serdes::SerdesStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Serdes::SerdesStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Switch::Oper::Serdes::SerdesStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    serdes_entry(this, {"id"})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serdes_entry.len(); index++)
    {
        if(serdes_entry[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<serdes_entry.len(); index++)
    {
        if(serdes_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serdes-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry>();
        c->parent = this;
        serdes_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serdes_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serdes-entry" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::SerdesEntry()
    :
    id{YType::uint32, "id"},
    base_reg{YType::str, "base-reg"},
    desc{YType::str, "desc"},
    lane_0{YType::str, "lane-0"},
    lane_1{YType::str, "lane-1"},
    lane_2{YType::str, "lane-2"},
    lane_3{YType::str, "lane-3"}
{

    yang_name = "serdes-entry"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::~SerdesEntry()
{
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| base_reg.is_set
	|| desc.is_set
	|| lane_0.is_set
	|| lane_1.is_set
	|| lane_2.is_set
	|| lane_3.is_set;
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(base_reg.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(lane_0.yfilter)
	|| ydk::is_set(lane_1.yfilter)
	|| ydk::is_set(lane_2.yfilter)
	|| ydk::is_set(lane_3.yfilter);
}

std::string Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serdes-entry";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (base_reg.is_set || is_set(base_reg.yfilter)) leaf_name_data.push_back(base_reg.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (lane_0.is_set || is_set(lane_0.yfilter)) leaf_name_data.push_back(lane_0.get_name_leafdata());
    if (lane_1.is_set || is_set(lane_1.yfilter)) leaf_name_data.push_back(lane_1.get_name_leafdata());
    if (lane_2.is_set || is_set(lane_2.yfilter)) leaf_name_data.push_back(lane_2.get_name_leafdata());
    if (lane_3.is_set || is_set(lane_3.yfilter)) leaf_name_data.push_back(lane_3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-reg")
    {
        base_reg = value;
        base_reg.value_namespace = name_space;
        base_reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lane-0")
    {
        lane_0 = value;
        lane_0.value_namespace = name_space;
        lane_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lane-1")
    {
        lane_1 = value;
        lane_1.value_namespace = name_space;
        lane_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lane-2")
    {
        lane_2 = value;
        lane_2.value_namespace = name_space;
        lane_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lane-3")
    {
        lane_3 = value;
        lane_3.value_namespace = name_space;
        lane_3.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "base-reg")
    {
        base_reg.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "lane-0")
    {
        lane_0.yfilter = yfilter;
    }
    if(value_path == "lane-1")
    {
        lane_1.yfilter = yfilter;
    }
    if(value_path == "lane-2")
    {
        lane_2.yfilter = yfilter;
    }
    if(value_path == "lane-3")
    {
        lane_3.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "base-reg" || name == "desc" || name == "lane-0" || name == "lane-1" || name == "lane-2" || name == "lane-3")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::Mac()
    :
    mac_statistics(std::make_shared<Controller::Switch::Oper::Mac::MacStatistics>())
{
    mac_statistics->parent = this;

    yang_name = "mac"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mac::~Mac()
{
}

bool Controller::Switch::Oper::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (mac_statistics !=  nullptr && mac_statistics->has_data());
}

bool Controller::Switch::Oper::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (mac_statistics !=  nullptr && mac_statistics->has_operation());
}

std::string Controller::Switch::Oper::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-statistics")
    {
        if(mac_statistics == nullptr)
        {
            mac_statistics = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics>();
        }
        return mac_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_statistics != nullptr)
    {
        children["mac-statistics"] = mac_statistics;
    }

    return children;
}

void Controller::Switch::Oper::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::MacStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "mac-statistics"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mac::MacStatistics::~MacStatistics()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::MacStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mac::MacStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "mac-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mac::MacStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mac/mac-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Switch::Oper::Mac::MacStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    mac_entry(this, {"id"})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_entry.len(); index++)
    {
        if(mac_entry[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<mac_entry.len(); index++)
    {
        if(mac_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry>();
        c->parent = this;
        mac_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-entry" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::MacEntry()
    :
    id{YType::uint32, "id"},
    base_reg{YType::str, "base-reg"},
    desc{YType::str, "desc"},
    value_{YType::str, "value"}
{

    yang_name = "mac-entry"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::~MacEntry()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| base_reg.is_set
	|| desc.is_set
	|| value_.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(base_reg.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-entry";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (base_reg.is_set || is_set(base_reg.yfilter)) leaf_name_data.push_back(base_reg.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-reg")
    {
        base_reg = value;
        base_reg.value_namespace = name_space;
        base_reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "base-reg")
    {
        base_reg.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "base-reg" || name == "desc" || name == "value")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Bridge()
    :
    statistics(std::make_shared<Controller::Switch::Oper::Bridge::Statistics>())
{
    statistics->parent = this;

    yang_name = "bridge"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Bridge::~Bridge()
{
}

bool Controller::Switch::Oper::Bridge::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Switch::Oper::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Switch::Oper::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Bridge::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Switch::Oper::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Statistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "statistics"; yang_parent_name = "bridge"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Bridge::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Bridge::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/bridge/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Bridge::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Bridge::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    ingress_set_id(this, {"ingress_set"})
    , egress_set_id(this, {"egress_set"})
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Bridge::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ingress_set_id.len(); index++)
    {
        if(ingress_set_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<egress_set_id.len(); index++)
    {
        if(egress_set_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<ingress_set_id.len(); index++)
    {
        if(ingress_set_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<egress_set_id.len(); index++)
    {
        if(egress_set_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/bridge/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-set-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId>();
        c->parent = this;
        ingress_set_id.append(c);
        return c;
    }

    if(child_yang_name == "egress-set-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId>();
        c->parent = this;
        egress_set_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ingress_set_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : egress_set_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Switch::Oper::Bridge::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-set-id" || name == "egress-set-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::IngressSetId()
    :
    ingress_set{YType::uint32, "ingress-set"},
    ingress_set_name{YType::str, "ingress-set-name"},
    ingress_frames{YType::uint64, "ingress-frames"},
    ingress_vlan_discards{YType::uint64, "ingress-vlan-discards"},
    ingress_security_discards{YType::uint64, "ingress-security-discards"},
    ingress_other_discards{YType::uint64, "ingress-other-discards"}
{

    yang_name = "ingress-set-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::~IngressSetId()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_data() const
{
    if (is_presence_container) return true;
    return ingress_set.is_set
	|| ingress_set_name.is_set
	|| ingress_frames.is_set
	|| ingress_vlan_discards.is_set
	|| ingress_security_discards.is_set
	|| ingress_other_discards.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_set.yfilter)
	|| ydk::is_set(ingress_set_name.yfilter)
	|| ydk::is_set(ingress_frames.yfilter)
	|| ydk::is_set(ingress_vlan_discards.yfilter)
	|| ydk::is_set(ingress_security_discards.yfilter)
	|| ydk::is_set(ingress_other_discards.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-set-id";
    ADD_KEY_TOKEN(ingress_set, "ingress-set");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_set.is_set || is_set(ingress_set.yfilter)) leaf_name_data.push_back(ingress_set.get_name_leafdata());
    if (ingress_set_name.is_set || is_set(ingress_set_name.yfilter)) leaf_name_data.push_back(ingress_set_name.get_name_leafdata());
    if (ingress_frames.is_set || is_set(ingress_frames.yfilter)) leaf_name_data.push_back(ingress_frames.get_name_leafdata());
    if (ingress_vlan_discards.is_set || is_set(ingress_vlan_discards.yfilter)) leaf_name_data.push_back(ingress_vlan_discards.get_name_leafdata());
    if (ingress_security_discards.is_set || is_set(ingress_security_discards.yfilter)) leaf_name_data.push_back(ingress_security_discards.get_name_leafdata());
    if (ingress_other_discards.is_set || is_set(ingress_other_discards.yfilter)) leaf_name_data.push_back(ingress_other_discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-set")
    {
        ingress_set = value;
        ingress_set.value_namespace = name_space;
        ingress_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-set-name")
    {
        ingress_set_name = value;
        ingress_set_name.value_namespace = name_space;
        ingress_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-frames")
    {
        ingress_frames = value;
        ingress_frames.value_namespace = name_space;
        ingress_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-vlan-discards")
    {
        ingress_vlan_discards = value;
        ingress_vlan_discards.value_namespace = name_space;
        ingress_vlan_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-security-discards")
    {
        ingress_security_discards = value;
        ingress_security_discards.value_namespace = name_space;
        ingress_security_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-other-discards")
    {
        ingress_other_discards = value;
        ingress_other_discards.value_namespace = name_space;
        ingress_other_discards.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-set")
    {
        ingress_set.yfilter = yfilter;
    }
    if(value_path == "ingress-set-name")
    {
        ingress_set_name.yfilter = yfilter;
    }
    if(value_path == "ingress-frames")
    {
        ingress_frames.yfilter = yfilter;
    }
    if(value_path == "ingress-vlan-discards")
    {
        ingress_vlan_discards.yfilter = yfilter;
    }
    if(value_path == "ingress-security-discards")
    {
        ingress_security_discards.yfilter = yfilter;
    }
    if(value_path == "ingress-other-discards")
    {
        ingress_other_discards.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-set" || name == "ingress-set-name" || name == "ingress-frames" || name == "ingress-vlan-discards" || name == "ingress-security-discards" || name == "ingress-other-discards")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::EgressSetId()
    :
    egress_set{YType::uint32, "egress-set"},
    egress_set_name{YType::str, "egress-set-name"},
    egress_ucast_frames{YType::uint64, "egress-ucast-frames"},
    egress_mcast_frames{YType::uint64, "egress-mcast-frames"},
    egress_bcast_frames{YType::uint64, "egress-bcast-frames"},
    egress_discarded_frames{YType::uint64, "egress-discarded-frames"},
    egress_txq_congestion{YType::uint64, "egress-txq-congestion"},
    egress_ctrl_packets{YType::uint64, "egress-ctrl-packets"},
    egress_other_drops{YType::uint64, "egress-other-drops"}
{

    yang_name = "egress-set-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::~EgressSetId()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_data() const
{
    if (is_presence_container) return true;
    return egress_set.is_set
	|| egress_set_name.is_set
	|| egress_ucast_frames.is_set
	|| egress_mcast_frames.is_set
	|| egress_bcast_frames.is_set
	|| egress_discarded_frames.is_set
	|| egress_txq_congestion.is_set
	|| egress_ctrl_packets.is_set
	|| egress_other_drops.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_set.yfilter)
	|| ydk::is_set(egress_set_name.yfilter)
	|| ydk::is_set(egress_ucast_frames.yfilter)
	|| ydk::is_set(egress_mcast_frames.yfilter)
	|| ydk::is_set(egress_bcast_frames.yfilter)
	|| ydk::is_set(egress_discarded_frames.yfilter)
	|| ydk::is_set(egress_txq_congestion.yfilter)
	|| ydk::is_set(egress_ctrl_packets.yfilter)
	|| ydk::is_set(egress_other_drops.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-set-id";
    ADD_KEY_TOKEN(egress_set, "egress-set");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_set.is_set || is_set(egress_set.yfilter)) leaf_name_data.push_back(egress_set.get_name_leafdata());
    if (egress_set_name.is_set || is_set(egress_set_name.yfilter)) leaf_name_data.push_back(egress_set_name.get_name_leafdata());
    if (egress_ucast_frames.is_set || is_set(egress_ucast_frames.yfilter)) leaf_name_data.push_back(egress_ucast_frames.get_name_leafdata());
    if (egress_mcast_frames.is_set || is_set(egress_mcast_frames.yfilter)) leaf_name_data.push_back(egress_mcast_frames.get_name_leafdata());
    if (egress_bcast_frames.is_set || is_set(egress_bcast_frames.yfilter)) leaf_name_data.push_back(egress_bcast_frames.get_name_leafdata());
    if (egress_discarded_frames.is_set || is_set(egress_discarded_frames.yfilter)) leaf_name_data.push_back(egress_discarded_frames.get_name_leafdata());
    if (egress_txq_congestion.is_set || is_set(egress_txq_congestion.yfilter)) leaf_name_data.push_back(egress_txq_congestion.get_name_leafdata());
    if (egress_ctrl_packets.is_set || is_set(egress_ctrl_packets.yfilter)) leaf_name_data.push_back(egress_ctrl_packets.get_name_leafdata());
    if (egress_other_drops.is_set || is_set(egress_other_drops.yfilter)) leaf_name_data.push_back(egress_other_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-set")
    {
        egress_set = value;
        egress_set.value_namespace = name_space;
        egress_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-set-name")
    {
        egress_set_name = value;
        egress_set_name.value_namespace = name_space;
        egress_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-ucast-frames")
    {
        egress_ucast_frames = value;
        egress_ucast_frames.value_namespace = name_space;
        egress_ucast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-mcast-frames")
    {
        egress_mcast_frames = value;
        egress_mcast_frames.value_namespace = name_space;
        egress_mcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-bcast-frames")
    {
        egress_bcast_frames = value;
        egress_bcast_frames.value_namespace = name_space;
        egress_bcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-discarded-frames")
    {
        egress_discarded_frames = value;
        egress_discarded_frames.value_namespace = name_space;
        egress_discarded_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-txq-congestion")
    {
        egress_txq_congestion = value;
        egress_txq_congestion.value_namespace = name_space;
        egress_txq_congestion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-ctrl-packets")
    {
        egress_ctrl_packets = value;
        egress_ctrl_packets.value_namespace = name_space;
        egress_ctrl_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-other-drops")
    {
        egress_other_drops = value;
        egress_other_drops.value_namespace = name_space;
        egress_other_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-set")
    {
        egress_set.yfilter = yfilter;
    }
    if(value_path == "egress-set-name")
    {
        egress_set_name.yfilter = yfilter;
    }
    if(value_path == "egress-ucast-frames")
    {
        egress_ucast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-mcast-frames")
    {
        egress_mcast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-bcast-frames")
    {
        egress_bcast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-discarded-frames")
    {
        egress_discarded_frames.yfilter = yfilter;
    }
    if(value_path == "egress-txq-congestion")
    {
        egress_txq_congestion.yfilter = yfilter;
    }
    if(value_path == "egress-ctrl-packets")
    {
        egress_ctrl_packets.yfilter = yfilter;
    }
    if(value_path == "egress-other-drops")
    {
        egress_other_drops.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-set" || name == "egress-set-name" || name == "egress-ucast-frames" || name == "egress-mcast-frames" || name == "egress-bcast-frames" || name == "egress-discarded-frames" || name == "egress-txq-congestion" || name == "egress-ctrl-packets" || name == "egress-other-drops")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Fdb()
    :
    vlan(std::make_shared<Controller::Switch::Oper::Fdb::Vlan>())
    , mac(std::make_shared<Controller::Switch::Oper::Fdb::Mac>())
    , port(std::make_shared<Controller::Switch::Oper::Fdb::Port>())
    , statistics(std::make_shared<Controller::Switch::Oper::Fdb::Statistics>())
    , switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon>())
{
    vlan->parent = this;
    mac->parent = this;
    port->parent = this;
    statistics->parent = this;
    switch_fdb_common->parent = this;

    yang_name = "fdb"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::~Fdb()
{
}

bool Controller::Switch::Oper::Fdb::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Controller::Switch::Oper::Fdb::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Controller::Switch::Oper::Fdb::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Controller::Switch::Oper::Fdb::Port>();
        }
        return port;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Fdb::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "mac" || name == "port" || name == "statistics" || name == "switch-fdb-common")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::Vlan()
    :
    vlan_iter(this, {"vlan"})
{

    yang_name = "vlan"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Vlan::~Vlan()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_iter.len(); index++)
    {
        if(vlan_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_iter.len(); index++)
    {
        if(vlan_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter>();
        c->parent = this;
        vlan_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::VlanIter()
    :
    vlan{YType::uint16, "vlan"}
        ,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "vlan-iter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::~VlanIter()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-iter";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "vlan-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fdb_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::Mac()
    :
    mac_iter(this, {"mac"})
{

    yang_name = "mac"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Mac::~Mac()
{
}

bool Controller::Switch::Oper::Fdb::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_iter.len(); index++)
    {
        if(mac_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::has_operation() const
{
    for (std::size_t index=0; index<mac_iter.len(); index++)
    {
        if(mac_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter>();
        c->parent = this;
        mac_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::MacIter()
    :
    mac{YType::str, "mac"}
        ,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "mac-iter"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::~MacIter()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iter";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "mac")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "mac-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fdb_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::Port()
    :
    port_iter(this, {"port"})
{

    yang_name = "port"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Port::~Port()
{
}

bool Controller::Switch::Oper::Fdb::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "port-iter"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fdb_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}


}
}

