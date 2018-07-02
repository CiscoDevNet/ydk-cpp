
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_sdm_diag.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_sdm_diag {

Diagnostic::Diagnostic()
    :
    monitor(std::make_shared<Diagnostic::Monitor>())
    , schedule(std::make_shared<Diagnostic::Schedule>())
    , status(std::make_shared<Diagnostic::Status>())
    , diag_start(std::make_shared<Diagnostic::DiagStart>())
    , diag_stop(std::make_shared<Diagnostic::DiagStop>())
    , content(std::make_shared<Diagnostic::Content>())
    , result(std::make_shared<Diagnostic::Result>())
{
    monitor->parent = this;
    schedule->parent = this;
    status->parent = this;
    diag_start->parent = this;
    diag_stop->parent = this;
    content->parent = this;
    result->parent = this;

    yang_name = "diagnostic"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sdm-diag"; is_top_level_class = true; has_list_ancestor = false; 
}

Diagnostic::~Diagnostic()
{
}

bool Diagnostic::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data())
	|| (schedule !=  nullptr && schedule->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (diag_start !=  nullptr && diag_start->has_data())
	|| (diag_stop !=  nullptr && diag_stop->has_data())
	|| (content !=  nullptr && content->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool Diagnostic::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (diag_start !=  nullptr && diag_start->has_operation())
	|| (diag_stop !=  nullptr && diag_stop->has_operation())
	|| (content !=  nullptr && content->has_operation())
	|| (result !=  nullptr && result->has_operation());
}

std::string Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Diagnostic::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Diagnostic::Schedule>();
        }
        return schedule;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Diagnostic::Status>();
        }
        return status;
    }

    if(child_yang_name == "diag_start")
    {
        if(diag_start == nullptr)
        {
            diag_start = std::make_shared<Diagnostic::DiagStart>();
        }
        return diag_start;
    }

    if(child_yang_name == "diag_stop")
    {
        if(diag_stop == nullptr)
        {
            diag_stop = std::make_shared<Diagnostic::DiagStop>();
        }
        return diag_stop;
    }

    if(child_yang_name == "content")
    {
        if(content == nullptr)
        {
            content = std::make_shared<Diagnostic::Content>();
        }
        return content;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<Diagnostic::Result>();
        }
        return result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(diag_start != nullptr)
    {
        children["diag_start"] = diag_start;
    }

    if(diag_stop != nullptr)
    {
        children["diag_stop"] = diag_stop;
    }

    if(content != nullptr)
    {
        children["content"] = content;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    return children;
}

void Diagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Diagnostic::clone_ptr() const
{
    return std::make_shared<Diagnostic>();
}

std::string Diagnostic::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Diagnostic::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Diagnostic::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Diagnostic::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Diagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "schedule" || name == "status" || name == "diag_start" || name == "diag_stop" || name == "content" || name == "result")
        return true;
    return false;
}

Diagnostic::Monitor::Monitor()
    :
    rejected(std::make_shared<Diagnostic::Monitor::Rejected>())
    , interval(std::make_shared<Diagnostic::Monitor::Interval>())
    , threshold(std::make_shared<Diagnostic::Monitor::Threshold>())
{
    rejected->parent = this;
    interval->parent = this;
    threshold->parent = this;

    yang_name = "monitor"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::~Monitor()
{
}

bool Diagnostic::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return (rejected !=  nullptr && rejected->has_data())
	|| (interval !=  nullptr && interval->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Diagnostic::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (rejected !=  nullptr && rejected->has_operation())
	|| (interval !=  nullptr && interval->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Diagnostic::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rejected")
    {
        if(rejected == nullptr)
        {
            rejected = std::make_shared<Diagnostic::Monitor::Rejected>();
        }
        return rejected;
    }

    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Diagnostic::Monitor::Interval>();
        }
        return interval;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Diagnostic::Monitor::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rejected != nullptr)
    {
        children["rejected"] = rejected;
    }

    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Diagnostic::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rejected" || name == "interval" || name == "threshold")
        return true;
    return false;
}

Diagnostic::Monitor::Rejected::Rejected()
    :
    location(this, {"loc"})
{

    yang_name = "rejected"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::Rejected::~Rejected()
{
}

bool Diagnostic::Monitor::Rejected::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Monitor::Rejected::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Monitor::Rejected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::Rejected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rejected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Rejected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Rejected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::Monitor::Rejected::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Rejected::get_children() const
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

void Diagnostic::Monitor::Rejected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Monitor::Rejected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Monitor::Rejected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::Monitor::Rejected::Location::Location()
    :
    loc{YType::str, "loc"}
        ,
    test(this, {"test_id", "run"})
{

    yang_name = "location"; yang_parent_name = "rejected"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::Rejected::Location::~Location()
{
}

bool Diagnostic::Monitor::Rejected::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set;
}

bool Diagnostic::Monitor::Rejected::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Diagnostic::Monitor::Rejected::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/monitor/rejected/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::Rejected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Rejected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Rejected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::Monitor::Rejected::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Rejected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Monitor::Rejected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Monitor::Rejected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Diagnostic::Monitor::Rejected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc")
        return true;
    return false;
}

Diagnostic::Monitor::Rejected::Location::Test::Test()
    :
    test_id{YType::str, "test_id"},
    run{YType::enumeration, "run"}
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Monitor::Rejected::Location::Test::~Test()
{
}

bool Diagnostic::Monitor::Rejected::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    return test_id.is_set
	|| run.is_set;
}

bool Diagnostic::Monitor::Rejected::Location::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_id.yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Diagnostic::Monitor::Rejected::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_id, "test_id");
    ADD_KEY_TOKEN(run, "run");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Rejected::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_id.is_set || is_set(test_id.yfilter)) leaf_name_data.push_back(test_id.get_name_leafdata());
    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Rejected::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Rejected::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Monitor::Rejected::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_id")
    {
        test_id = value;
        test_id.value_namespace = name_space;
        test_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Monitor::Rejected::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_id")
    {
        test_id.yfilter = yfilter;
    }
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Diagnostic::Monitor::Rejected::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test_id" || name == "run")
        return true;
    return false;
}

Diagnostic::Monitor::Interval::Interval()
    :
    location(this, {"loc"})
{

    yang_name = "interval"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::Interval::~Interval()
{
}

bool Diagnostic::Monitor::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Monitor::Interval::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Monitor::Interval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::Monitor::Interval::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Interval::get_children() const
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

void Diagnostic::Monitor::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Monitor::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Monitor::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::Monitor::Interval::Location::Location()
    :
    loc{YType::str, "loc"}
        ,
    test(this, {"test_id"})
{

    yang_name = "location"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::Interval::Location::~Location()
{
}

bool Diagnostic::Monitor::Interval::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set;
}

bool Diagnostic::Monitor::Interval::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Diagnostic::Monitor::Interval::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/monitor/interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::Interval::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Interval::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Interval::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::Monitor::Interval::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Interval::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Monitor::Interval::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Monitor::Interval::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Diagnostic::Monitor::Interval::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc")
        return true;
    return false;
}

Diagnostic::Monitor::Interval::Location::Test::Test()
    :
    test_id{YType::str, "test_id"},
    days{YType::int32, "days"},
    time{YType::str, "time"}
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Monitor::Interval::Location::Test::~Test()
{
}

bool Diagnostic::Monitor::Interval::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    return test_id.is_set
	|| days.is_set
	|| time.is_set;
}

bool Diagnostic::Monitor::Interval::Location::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_id.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Diagnostic::Monitor::Interval::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_id, "test_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Interval::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_id.is_set || is_set(test_id.yfilter)) leaf_name_data.push_back(test_id.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Interval::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Interval::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Monitor::Interval::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_id")
    {
        test_id = value;
        test_id.value_namespace = name_space;
        test_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Monitor::Interval::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_id")
    {
        test_id.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Diagnostic::Monitor::Interval::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test_id" || name == "days" || name == "time")
        return true;
    return false;
}

Diagnostic::Monitor::Threshold::Threshold()
    :
    location(this, {"loc"})
{

    yang_name = "threshold"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::Threshold::~Threshold()
{
}

bool Diagnostic::Monitor::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Monitor::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Monitor::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::Monitor::Threshold::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Threshold::get_children() const
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

void Diagnostic::Monitor::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Monitor::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Monitor::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::Monitor::Threshold::Location::Location()
    :
    loc{YType::str, "loc"}
        ,
    test(this, {"test_id"})
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Monitor::Threshold::Location::~Location()
{
}

bool Diagnostic::Monitor::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set;
}

bool Diagnostic::Monitor::Threshold::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Diagnostic::Monitor::Threshold::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/monitor/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Monitor::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::Monitor::Threshold::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Monitor::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Monitor::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Diagnostic::Monitor::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc")
        return true;
    return false;
}

Diagnostic::Monitor::Threshold::Location::Test::Test()
    :
    test_id{YType::str, "test_id"},
    failure_count{YType::int32, "failure-count"}
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Monitor::Threshold::Location::Test::~Test()
{
}

bool Diagnostic::Monitor::Threshold::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    return test_id.is_set
	|| failure_count.is_set;
}

bool Diagnostic::Monitor::Threshold::Location::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_id.yfilter)
	|| ydk::is_set(failure_count.yfilter);
}

std::string Diagnostic::Monitor::Threshold::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_id, "test_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Monitor::Threshold::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_id.is_set || is_set(test_id.yfilter)) leaf_name_data.push_back(test_id.get_name_leafdata());
    if (failure_count.is_set || is_set(failure_count.yfilter)) leaf_name_data.push_back(failure_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Monitor::Threshold::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Monitor::Threshold::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Monitor::Threshold::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_id")
    {
        test_id = value;
        test_id.value_namespace = name_space;
        test_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-count")
    {
        failure_count = value;
        failure_count.value_namespace = name_space;
        failure_count.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Monitor::Threshold::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_id")
    {
        test_id.yfilter = yfilter;
    }
    if(value_path == "failure-count")
    {
        failure_count.yfilter = yfilter;
    }
}

bool Diagnostic::Monitor::Threshold::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test_id" || name == "failure-count")
        return true;
    return false;
}

Diagnostic::Schedule::Schedule()
    :
    start(std::make_shared<Diagnostic::Schedule::Start>())
{
    start->parent = this;

    yang_name = "schedule"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Schedule::~Schedule()
{
}

bool Diagnostic::Schedule::has_data() const
{
    if (is_presence_container) return true;
    return (start !=  nullptr && start->has_data());
}

bool Diagnostic::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| (start !=  nullptr && start->has_operation());
}

std::string Diagnostic::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Diagnostic::Schedule::Start>();
        }
        return start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start != nullptr)
    {
        children["start"] = start;
    }

    return children;
}

void Diagnostic::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Diagnostic::Schedule::Start::Start()
    :
    location(this, {"loc"})
{

    yang_name = "start"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Schedule::Start::~Start()
{
}

bool Diagnostic::Schedule::Start::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Schedule::Start::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Schedule::Start::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Schedule::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::Schedule::Start::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::Start::get_children() const
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

void Diagnostic::Schedule::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Schedule::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Schedule::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::Schedule::Start::Location::Location()
    :
    loc{YType::str, "loc"}
        ,
    test(this, {"test_id"})
{

    yang_name = "location"; yang_parent_name = "start"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Schedule::Start::Location::~Location()
{
}

bool Diagnostic::Schedule::Start::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set;
}

bool Diagnostic::Schedule::Start::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Diagnostic::Schedule::Start::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/schedule/start/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Schedule::Start::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::Start::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::Start::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::Schedule::Start::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::Start::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Schedule::Start::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Schedule::Start::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Diagnostic::Schedule::Start::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc")
        return true;
    return false;
}

Diagnostic::Schedule::Start::Location::Test::Test()
    :
    test_id{YType::str, "test_id"}
        ,
    daily(this, {"hour_min"})
    , on(this, {"month", "day_of_month", "year", "hour_min"})
    , weekly(this, {"daysofweek", "hour_min"})
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Schedule::Start::Location::Test::~Test()
{
}

bool Diagnostic::Schedule::Start::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<daily.len(); index++)
    {
        if(daily[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<on.len(); index++)
    {
        if(on[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weekly.len(); index++)
    {
        if(weekly[index]->has_data())
            return true;
    }
    return test_id.is_set;
}

bool Diagnostic::Schedule::Start::Location::Test::has_operation() const
{
    for (std::size_t index=0; index<daily.len(); index++)
    {
        if(daily[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<on.len(); index++)
    {
        if(on[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weekly.len(); index++)
    {
        if(weekly[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(test_id.yfilter);
}

std::string Diagnostic::Schedule::Start::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_id, "test_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::Start::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_id.is_set || is_set(test_id.yfilter)) leaf_name_data.push_back(test_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::Start::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        auto c = std::make_shared<Diagnostic::Schedule::Start::Location::Test::Daily>();
        c->parent = this;
        daily.append(c);
        return c;
    }

    if(child_yang_name == "on")
    {
        auto c = std::make_shared<Diagnostic::Schedule::Start::Location::Test::On>();
        c->parent = this;
        on.append(c);
        return c;
    }

    if(child_yang_name == "weekly")
    {
        auto c = std::make_shared<Diagnostic::Schedule::Start::Location::Test::Weekly>();
        c->parent = this;
        weekly.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::Start::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : daily.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : on.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : weekly.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Schedule::Start::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_id")
    {
        test_id = value;
        test_id.value_namespace = name_space;
        test_id.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Schedule::Start::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_id")
    {
        test_id.yfilter = yfilter;
    }
}

bool Diagnostic::Schedule::Start::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "test_id")
        return true;
    return false;
}

Diagnostic::Schedule::Start::Location::Test::Daily::Daily()
    :
    hour_min{YType::str, "hour_min"}
{

    yang_name = "daily"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Schedule::Start::Location::Test::Daily::~Daily()
{
}

bool Diagnostic::Schedule::Start::Location::Test::Daily::has_data() const
{
    if (is_presence_container) return true;
    return hour_min.is_set;
}

bool Diagnostic::Schedule::Start::Location::Test::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hour_min.yfilter);
}

std::string Diagnostic::Schedule::Start::Location::Test::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    ADD_KEY_TOKEN(hour_min, "hour_min");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::Start::Location::Test::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour_min.is_set || is_set(hour_min.yfilter)) leaf_name_data.push_back(hour_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::Start::Location::Test::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::Start::Location::Test::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Schedule::Start::Location::Test::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hour_min")
    {
        hour_min = value;
        hour_min.value_namespace = name_space;
        hour_min.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Schedule::Start::Location::Test::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hour_min")
    {
        hour_min.yfilter = yfilter;
    }
}

bool Diagnostic::Schedule::Start::Location::Test::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour_min")
        return true;
    return false;
}

Diagnostic::Schedule::Start::Location::Test::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::int32, "day_of_month"},
    year{YType::int32, "year"},
    hour_min{YType::str, "hour_min"}
{

    yang_name = "on"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Schedule::Start::Location::Test::On::~On()
{
}

bool Diagnostic::Schedule::Start::Location::Test::On::has_data() const
{
    if (is_presence_container) return true;
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hour_min.is_set;
}

bool Diagnostic::Schedule::Start::Location::Test::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hour_min.yfilter);
}

std::string Diagnostic::Schedule::Start::Location::Test::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    ADD_KEY_TOKEN(month, "month");
    ADD_KEY_TOKEN(day_of_month, "day_of_month");
    ADD_KEY_TOKEN(year, "year");
    ADD_KEY_TOKEN(hour_min, "hour_min");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::Start::Location::Test::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hour_min.is_set || is_set(hour_min.yfilter)) leaf_name_data.push_back(hour_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::Start::Location::Test::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::Start::Location::Test::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Schedule::Start::Location::Test::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day_of_month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour_min")
    {
        hour_min = value;
        hour_min.value_namespace = name_space;
        hour_min.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Schedule::Start::Location::Test::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day_of_month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hour_min")
    {
        hour_min.yfilter = yfilter;
    }
}

bool Diagnostic::Schedule::Start::Location::Test::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day_of_month" || name == "year" || name == "hour_min")
        return true;
    return false;
}

Diagnostic::Schedule::Start::Location::Test::Weekly::Weekly()
    :
    daysofweek{YType::enumeration, "daysofweek"},
    hour_min{YType::str, "hour_min"}
{

    yang_name = "weekly"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Schedule::Start::Location::Test::Weekly::~Weekly()
{
}

bool Diagnostic::Schedule::Start::Location::Test::Weekly::has_data() const
{
    if (is_presence_container) return true;
    return daysofweek.is_set
	|| hour_min.is_set;
}

bool Diagnostic::Schedule::Start::Location::Test::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(daysofweek.yfilter)
	|| ydk::is_set(hour_min.yfilter);
}

std::string Diagnostic::Schedule::Start::Location::Test::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    ADD_KEY_TOKEN(daysofweek, "daysofweek");
    ADD_KEY_TOKEN(hour_min, "hour_min");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Schedule::Start::Location::Test::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daysofweek.is_set || is_set(daysofweek.yfilter)) leaf_name_data.push_back(daysofweek.get_name_leafdata());
    if (hour_min.is_set || is_set(hour_min.yfilter)) leaf_name_data.push_back(hour_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Schedule::Start::Location::Test::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Schedule::Start::Location::Test::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Schedule::Start::Location::Test::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "daysofweek")
    {
        daysofweek = value;
        daysofweek.value_namespace = name_space;
        daysofweek.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour_min")
    {
        hour_min = value;
        hour_min.value_namespace = name_space;
        hour_min.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Schedule::Start::Location::Test::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "daysofweek")
    {
        daysofweek.yfilter = yfilter;
    }
    if(value_path == "hour_min")
    {
        hour_min.yfilter = yfilter;
    }
}

bool Diagnostic::Schedule::Start::Location::Test::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daysofweek" || name == "hour_min")
        return true;
    return false;
}

Diagnostic::Status::Status()
    :
    location_index(this, {"data_idx"})
{

    yang_name = "status"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Status::~Status()
{
}

bool Diagnostic::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location_index.len(); index++)
    {
        if(location_index[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Status::has_operation() const
{
    for (std::size_t index=0; index<location_index.len(); index++)
    {
        if(location_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location_index")
    {
        auto c = std::make_shared<Diagnostic::Status::LocationIndex>();
        c->parent = this;
        location_index.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location_index.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location_index")
        return true;
    return false;
}

Diagnostic::Status::LocationIndex::LocationIndex()
    :
    data_idx{YType::int32, "data_idx"},
    description{YType::str, "description"},
    curr_running_tst_runby{YType::str, "curr_running_tst_runby"}
{

    yang_name = "location_index"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Status::LocationIndex::~LocationIndex()
{
}

bool Diagnostic::Status::LocationIndex::has_data() const
{
    if (is_presence_container) return true;
    return data_idx.is_set
	|| description.is_set
	|| curr_running_tst_runby.is_set;
}

bool Diagnostic::Status::LocationIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_idx.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(curr_running_tst_runby.yfilter);
}

std::string Diagnostic::Status::LocationIndex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Status::LocationIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location_index";
    ADD_KEY_TOKEN(data_idx, "data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Status::LocationIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_idx.is_set || is_set(data_idx.yfilter)) leaf_name_data.push_back(data_idx.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (curr_running_tst_runby.is_set || is_set(curr_running_tst_runby.yfilter)) leaf_name_data.push_back(curr_running_tst_runby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Status::LocationIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Status::LocationIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Status::LocationIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data_idx")
    {
        data_idx = value;
        data_idx.value_namespace = name_space;
        data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr_running_tst_runby")
    {
        curr_running_tst_runby = value;
        curr_running_tst_runby.value_namespace = name_space;
        curr_running_tst_runby.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Status::LocationIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data_idx")
    {
        data_idx.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "curr_running_tst_runby")
    {
        curr_running_tst_runby.yfilter = yfilter;
    }
}

bool Diagnostic::Status::LocationIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "description" || name == "curr_running_tst_runby")
        return true;
    return false;
}

Diagnostic::DiagStart::DiagStart()
    :
    location(this, {"loc"})
{

    yang_name = "diag_start"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::DiagStart::~DiagStart()
{
}

bool Diagnostic::DiagStart::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::DiagStart::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::DiagStart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::DiagStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag_start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::DiagStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::DiagStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::DiagStart::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::DiagStart::get_children() const
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

void Diagnostic::DiagStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::DiagStart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::DiagStart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::DiagStart::Location::Location()
    :
    loc{YType::str, "loc"},
    description{YType::str, "description"}
        ,
    test(this, {"test_type"})
{

    yang_name = "location"; yang_parent_name = "diag_start"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::DiagStart::Location::~Location()
{
}

bool Diagnostic::DiagStart::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set
	|| description.is_set;
}

bool Diagnostic::DiagStart::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::DiagStart::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/diag_start/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::DiagStart::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::DiagStart::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::DiagStart::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::DiagStart::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::DiagStart::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::DiagStart::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::DiagStart::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::DiagStart::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc" || name == "description")
        return true;
    return false;
}

Diagnostic::DiagStart::Location::Test::Test()
    :
    test_type{YType::str, "test_type"},
    description{YType::str, "description"}
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::DiagStart::Location::Test::~Test()
{
}

bool Diagnostic::DiagStart::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    return test_type.is_set
	|| description.is_set;
}

bool Diagnostic::DiagStart::Location::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_type.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::DiagStart::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_type, "test_type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::DiagStart::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_type.is_set || is_set(test_type.yfilter)) leaf_name_data.push_back(test_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::DiagStart::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::DiagStart::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::DiagStart::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_type")
    {
        test_type = value;
        test_type.value_namespace = name_space;
        test_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::DiagStart::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_type")
    {
        test_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::DiagStart::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test_type" || name == "description")
        return true;
    return false;
}

Diagnostic::DiagStop::DiagStop()
    :
    location(this, {"loc"})
{

    yang_name = "diag_stop"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::DiagStop::~DiagStop()
{
}

bool Diagnostic::DiagStop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::DiagStop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::DiagStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::DiagStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag_stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::DiagStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::DiagStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::DiagStop::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::DiagStop::get_children() const
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

void Diagnostic::DiagStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::DiagStop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::DiagStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::DiagStop::Location::Location()
    :
    loc{YType::str, "loc"},
    description{YType::str, "description"}
        ,
    test(this, {"test_type"})
{

    yang_name = "location"; yang_parent_name = "diag_stop"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::DiagStop::Location::~Location()
{
}

bool Diagnostic::DiagStop::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set
	|| description.is_set;
}

bool Diagnostic::DiagStop::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::DiagStop::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/diag_stop/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::DiagStop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::DiagStop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::DiagStop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::DiagStop::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::DiagStop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::DiagStop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::DiagStop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::DiagStop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc" || name == "description")
        return true;
    return false;
}

Diagnostic::DiagStop::Location::Test::Test()
    :
    test_type{YType::str, "test_type"},
    description{YType::str, "description"}
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::DiagStop::Location::Test::~Test()
{
}

bool Diagnostic::DiagStop::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    return test_type.is_set
	|| description.is_set;
}

bool Diagnostic::DiagStop::Location::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_type.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::DiagStop::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_type, "test_type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::DiagStop::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_type.is_set || is_set(test_type.yfilter)) leaf_name_data.push_back(test_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::DiagStop::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::DiagStop::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::DiagStop::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_type")
    {
        test_type = value;
        test_type.value_namespace = name_space;
        test_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::DiagStop::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_type")
    {
        test_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::DiagStop::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test_type" || name == "description")
        return true;
    return false;
}

Diagnostic::Content::Content()
    :
    location(this, {"loc"})
{

    yang_name = "content"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Content::~Content()
{
}

bool Diagnostic::Content::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Content::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Content::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Content::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "content";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Content::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Content::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::Content::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Content::get_children() const
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

void Diagnostic::Content::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Content::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Content::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::Content::Location::Location()
    :
    loc{YType::str, "loc"},
    description{YType::str, "description"}
        ,
    data_list(this, {"data_idx"})
{

    yang_name = "location"; yang_parent_name = "content"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Content::Location::~Location()
{
}

bool Diagnostic::Content::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_list.len(); index++)
    {
        if(data_list[index]->has_data())
            return true;
    }
    return loc.is_set
	|| description.is_set;
}

bool Diagnostic::Content::Location::has_operation() const
{
    for (std::size_t index=0; index<data_list.len(); index++)
    {
        if(data_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::Content::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/content/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Content::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Content::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Content::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_list")
    {
        auto c = std::make_shared<Diagnostic::Content::Location::DataList>();
        c->parent = this;
        data_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Content::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Content::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Content::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::Content::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_list" || name == "loc" || name == "description")
        return true;
    return false;
}

Diagnostic::Content::Location::DataList::DataList()
    :
    data_idx{YType::int32, "data_idx"},
    id{YType::int32, "id"},
    test_name{YType::str, "test_name"},
    attribute{YType::str, "attribute"},
    timeinfo{YType::str, "timeinfo"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "data_list"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Content::Location::DataList::~DataList()
{
}

bool Diagnostic::Content::Location::DataList::has_data() const
{
    if (is_presence_container) return true;
    return data_idx.is_set
	|| id.is_set
	|| test_name.is_set
	|| attribute.is_set
	|| timeinfo.is_set
	|| threshold.is_set;
}

bool Diagnostic::Content::Location::DataList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_idx.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(test_name.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(timeinfo.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Diagnostic::Content::Location::DataList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_list";
    ADD_KEY_TOKEN(data_idx, "data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Content::Location::DataList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_idx.is_set || is_set(data_idx.yfilter)) leaf_name_data.push_back(data_idx.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (test_name.is_set || is_set(test_name.yfilter)) leaf_name_data.push_back(test_name.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (timeinfo.is_set || is_set(timeinfo.yfilter)) leaf_name_data.push_back(timeinfo.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Content::Location::DataList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Content::Location::DataList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Content::Location::DataList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data_idx")
    {
        data_idx = value;
        data_idx.value_namespace = name_space;
        data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test_name")
    {
        test_name = value;
        test_name.value_namespace = name_space;
        test_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeinfo")
    {
        timeinfo = value;
        timeinfo.value_namespace = name_space;
        timeinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Content::Location::DataList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data_idx")
    {
        data_idx.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "test_name")
    {
        test_name.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "timeinfo")
    {
        timeinfo.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Diagnostic::Content::Location::DataList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "id" || name == "test_name" || name == "attribute" || name == "timeinfo" || name == "threshold")
        return true;
    return false;
}

Diagnostic::Result::Result()
    :
    location(this, {"loc"})
{

    yang_name = "result"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Result::~Result()
{
}

bool Diagnostic::Result::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Diagnostic::Result::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diagnostic::Result::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Diagnostic::Result::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Result::get_children() const
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

void Diagnostic::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diagnostic::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diagnostic::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Diagnostic::Result::Location::Location()
    :
    loc{YType::str, "loc"},
    description{YType::str, "description"}
        ,
    test(this, {"test_type"})
{

    yang_name = "location"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = false; 
}

Diagnostic::Result::Location::~Location()
{
}

bool Diagnostic::Result::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_data())
            return true;
    }
    return loc.is_set
	|| description.is_set;
}

bool Diagnostic::Result::Location::has_operation() const
{
    for (std::size_t index=0; index<test.len(); index++)
    {
        if(test[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::Result::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdm-diag:diagnostic/result/" << get_segment_path();
    return path_buffer.str();
}

std::string Diagnostic::Result::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Result::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Result::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        auto c = std::make_shared<Diagnostic::Result::Location::Test>();
        c->parent = this;
        test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Result::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Result::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Result::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::Result::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "loc" || name == "description")
        return true;
    return false;
}

Diagnostic::Result::Location::Test::Test()
    :
    test_type{YType::str, "test_type"},
    description{YType::str, "description"}
        ,
    detail(this, {"det"})
{

    yang_name = "test"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Result::Location::Test::~Test()
{
}

bool Diagnostic::Result::Location::Test::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return test_type.is_set
	|| description.is_set;
}

bool Diagnostic::Result::Location::Test::has_operation() const
{
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(test_type.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diagnostic::Result::Location::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    ADD_KEY_TOKEN(test_type, "test_type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Result::Location::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_type.is_set || is_set(test_type.yfilter)) leaf_name_data.push_back(test_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Result::Location::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Diagnostic::Result::Location::Test::Detail>();
        c->parent = this;
        detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Result::Location::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Result::Location::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test_type")
    {
        test_type = value;
        test_type.value_namespace = name_space;
        test_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Result::Location::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test_type")
    {
        test_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diagnostic::Result::Location::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "test_type" || name == "description")
        return true;
    return false;
}

Diagnostic::Result::Location::Test::Detail::Detail()
    :
    det{YType::str, "det"}
        ,
    data_list(this, {"data_idx"})
{

    yang_name = "detail"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Result::Location::Test::Detail::~Detail()
{
}

bool Diagnostic::Result::Location::Test::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_list.len(); index++)
    {
        if(data_list[index]->has_data())
            return true;
    }
    return det.is_set;
}

bool Diagnostic::Result::Location::Test::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_list.len(); index++)
    {
        if(data_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(det.yfilter);
}

std::string Diagnostic::Result::Location::Test::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(det, "det");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Result::Location::Test::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (det.is_set || is_set(det.yfilter)) leaf_name_data.push_back(det.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Result::Location::Test::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_list")
    {
        auto c = std::make_shared<Diagnostic::Result::Location::Test::Detail::DataList>();
        c->parent = this;
        data_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Result::Location::Test::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diagnostic::Result::Location::Test::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "det")
    {
        det = value;
        det.value_namespace = name_space;
        det.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Result::Location::Test::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "det")
    {
        det.yfilter = yfilter;
    }
}

bool Diagnostic::Result::Location::Test::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_list" || name == "det")
        return true;
    return false;
}

Diagnostic::Result::Location::Test::Detail::DataList::DataList()
    :
    data_idx{YType::int32, "data_idx"},
    detail_flag{YType::int32, "detail_flag"},
    sl_no{YType::int32, "sl_no"},
    test_name{YType::str, "test_name"},
    test_result{YType::str, "test_result"},
    err_code{YType::int32, "err_code"},
    err_description{YType::str, "err_description"},
    test_type{YType::str, "test_type"},
    hm_test_count{YType::int32, "hm_test_count"},
    od_test_count{YType::int32, "od_test_count"},
    sched_test_count{YType::int32, "sched_test_count"},
    run_cnt{YType::int32, "run_cnt"},
    lt_exe_time{YType::str, "lt_exe_time"},
    ft_fail_time{YType::str, "ft_fail_time"},
    lt_fail_time{YType::str, "lt_fail_time"},
    lt_pass_time{YType::str, "lt_pass_time"},
    total_fail_cnt{YType::int32, "total_fail_cnt"},
    cons_fail_cnt{YType::int32, "cons_fail_cnt"},
    more_info{YType::str, "more_info"}
{

    yang_name = "data_list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diagnostic::Result::Location::Test::Detail::DataList::~DataList()
{
}

bool Diagnostic::Result::Location::Test::Detail::DataList::has_data() const
{
    if (is_presence_container) return true;
    return data_idx.is_set
	|| detail_flag.is_set
	|| sl_no.is_set
	|| test_name.is_set
	|| test_result.is_set
	|| err_code.is_set
	|| err_description.is_set
	|| test_type.is_set
	|| hm_test_count.is_set
	|| od_test_count.is_set
	|| sched_test_count.is_set
	|| run_cnt.is_set
	|| lt_exe_time.is_set
	|| ft_fail_time.is_set
	|| lt_fail_time.is_set
	|| lt_pass_time.is_set
	|| total_fail_cnt.is_set
	|| cons_fail_cnt.is_set
	|| more_info.is_set;
}

bool Diagnostic::Result::Location::Test::Detail::DataList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_idx.yfilter)
	|| ydk::is_set(detail_flag.yfilter)
	|| ydk::is_set(sl_no.yfilter)
	|| ydk::is_set(test_name.yfilter)
	|| ydk::is_set(test_result.yfilter)
	|| ydk::is_set(err_code.yfilter)
	|| ydk::is_set(err_description.yfilter)
	|| ydk::is_set(test_type.yfilter)
	|| ydk::is_set(hm_test_count.yfilter)
	|| ydk::is_set(od_test_count.yfilter)
	|| ydk::is_set(sched_test_count.yfilter)
	|| ydk::is_set(run_cnt.yfilter)
	|| ydk::is_set(lt_exe_time.yfilter)
	|| ydk::is_set(ft_fail_time.yfilter)
	|| ydk::is_set(lt_fail_time.yfilter)
	|| ydk::is_set(lt_pass_time.yfilter)
	|| ydk::is_set(total_fail_cnt.yfilter)
	|| ydk::is_set(cons_fail_cnt.yfilter)
	|| ydk::is_set(more_info.yfilter);
}

std::string Diagnostic::Result::Location::Test::Detail::DataList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_list";
    ADD_KEY_TOKEN(data_idx, "data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diagnostic::Result::Location::Test::Detail::DataList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_idx.is_set || is_set(data_idx.yfilter)) leaf_name_data.push_back(data_idx.get_name_leafdata());
    if (detail_flag.is_set || is_set(detail_flag.yfilter)) leaf_name_data.push_back(detail_flag.get_name_leafdata());
    if (sl_no.is_set || is_set(sl_no.yfilter)) leaf_name_data.push_back(sl_no.get_name_leafdata());
    if (test_name.is_set || is_set(test_name.yfilter)) leaf_name_data.push_back(test_name.get_name_leafdata());
    if (test_result.is_set || is_set(test_result.yfilter)) leaf_name_data.push_back(test_result.get_name_leafdata());
    if (err_code.is_set || is_set(err_code.yfilter)) leaf_name_data.push_back(err_code.get_name_leafdata());
    if (err_description.is_set || is_set(err_description.yfilter)) leaf_name_data.push_back(err_description.get_name_leafdata());
    if (test_type.is_set || is_set(test_type.yfilter)) leaf_name_data.push_back(test_type.get_name_leafdata());
    if (hm_test_count.is_set || is_set(hm_test_count.yfilter)) leaf_name_data.push_back(hm_test_count.get_name_leafdata());
    if (od_test_count.is_set || is_set(od_test_count.yfilter)) leaf_name_data.push_back(od_test_count.get_name_leafdata());
    if (sched_test_count.is_set || is_set(sched_test_count.yfilter)) leaf_name_data.push_back(sched_test_count.get_name_leafdata());
    if (run_cnt.is_set || is_set(run_cnt.yfilter)) leaf_name_data.push_back(run_cnt.get_name_leafdata());
    if (lt_exe_time.is_set || is_set(lt_exe_time.yfilter)) leaf_name_data.push_back(lt_exe_time.get_name_leafdata());
    if (ft_fail_time.is_set || is_set(ft_fail_time.yfilter)) leaf_name_data.push_back(ft_fail_time.get_name_leafdata());
    if (lt_fail_time.is_set || is_set(lt_fail_time.yfilter)) leaf_name_data.push_back(lt_fail_time.get_name_leafdata());
    if (lt_pass_time.is_set || is_set(lt_pass_time.yfilter)) leaf_name_data.push_back(lt_pass_time.get_name_leafdata());
    if (total_fail_cnt.is_set || is_set(total_fail_cnt.yfilter)) leaf_name_data.push_back(total_fail_cnt.get_name_leafdata());
    if (cons_fail_cnt.is_set || is_set(cons_fail_cnt.yfilter)) leaf_name_data.push_back(cons_fail_cnt.get_name_leafdata());
    if (more_info.is_set || is_set(more_info.yfilter)) leaf_name_data.push_back(more_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diagnostic::Result::Location::Test::Detail::DataList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diagnostic::Result::Location::Test::Detail::DataList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diagnostic::Result::Location::Test::Detail::DataList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data_idx")
    {
        data_idx = value;
        data_idx.value_namespace = name_space;
        data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail_flag")
    {
        detail_flag = value;
        detail_flag.value_namespace = name_space;
        detail_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sl_no")
    {
        sl_no = value;
        sl_no.value_namespace = name_space;
        sl_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test_name")
    {
        test_name = value;
        test_name.value_namespace = name_space;
        test_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test_result")
    {
        test_result = value;
        test_result.value_namespace = name_space;
        test_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err_code")
    {
        err_code = value;
        err_code.value_namespace = name_space;
        err_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err_description")
    {
        err_description = value;
        err_description.value_namespace = name_space;
        err_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test_type")
    {
        test_type = value;
        test_type.value_namespace = name_space;
        test_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm_test_count")
    {
        hm_test_count = value;
        hm_test_count.value_namespace = name_space;
        hm_test_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "od_test_count")
    {
        od_test_count = value;
        od_test_count.value_namespace = name_space;
        od_test_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sched_test_count")
    {
        sched_test_count = value;
        sched_test_count.value_namespace = name_space;
        sched_test_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "run_cnt")
    {
        run_cnt = value;
        run_cnt.value_namespace = name_space;
        run_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt_exe_time")
    {
        lt_exe_time = value;
        lt_exe_time.value_namespace = name_space;
        lt_exe_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ft_fail_time")
    {
        ft_fail_time = value;
        ft_fail_time.value_namespace = name_space;
        ft_fail_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt_fail_time")
    {
        lt_fail_time = value;
        lt_fail_time.value_namespace = name_space;
        lt_fail_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt_pass_time")
    {
        lt_pass_time = value;
        lt_pass_time.value_namespace = name_space;
        lt_pass_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fail_cnt")
    {
        total_fail_cnt = value;
        total_fail_cnt.value_namespace = name_space;
        total_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cons_fail_cnt")
    {
        cons_fail_cnt = value;
        cons_fail_cnt.value_namespace = name_space;
        cons_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "more_info")
    {
        more_info = value;
        more_info.value_namespace = name_space;
        more_info.value_namespace_prefix = name_space_prefix;
    }
}

void Diagnostic::Result::Location::Test::Detail::DataList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data_idx")
    {
        data_idx.yfilter = yfilter;
    }
    if(value_path == "detail_flag")
    {
        detail_flag.yfilter = yfilter;
    }
    if(value_path == "sl_no")
    {
        sl_no.yfilter = yfilter;
    }
    if(value_path == "test_name")
    {
        test_name.yfilter = yfilter;
    }
    if(value_path == "test_result")
    {
        test_result.yfilter = yfilter;
    }
    if(value_path == "err_code")
    {
        err_code.yfilter = yfilter;
    }
    if(value_path == "err_description")
    {
        err_description.yfilter = yfilter;
    }
    if(value_path == "test_type")
    {
        test_type.yfilter = yfilter;
    }
    if(value_path == "hm_test_count")
    {
        hm_test_count.yfilter = yfilter;
    }
    if(value_path == "od_test_count")
    {
        od_test_count.yfilter = yfilter;
    }
    if(value_path == "sched_test_count")
    {
        sched_test_count.yfilter = yfilter;
    }
    if(value_path == "run_cnt")
    {
        run_cnt.yfilter = yfilter;
    }
    if(value_path == "lt_exe_time")
    {
        lt_exe_time.yfilter = yfilter;
    }
    if(value_path == "ft_fail_time")
    {
        ft_fail_time.yfilter = yfilter;
    }
    if(value_path == "lt_fail_time")
    {
        lt_fail_time.yfilter = yfilter;
    }
    if(value_path == "lt_pass_time")
    {
        lt_pass_time.yfilter = yfilter;
    }
    if(value_path == "total_fail_cnt")
    {
        total_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "cons_fail_cnt")
    {
        cons_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "more_info")
    {
        more_info.yfilter = yfilter;
    }
}

bool Diagnostic::Result::Location::Test::Detail::DataList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "detail_flag" || name == "sl_no" || name == "test_name" || name == "test_result" || name == "err_code" || name == "err_description" || name == "test_type" || name == "hm_test_count" || name == "od_test_count" || name == "sched_test_count" || name == "run_cnt" || name == "lt_exe_time" || name == "ft_fail_time" || name == "lt_fail_time" || name == "lt_pass_time" || name == "total_fail_cnt" || name == "cons_fail_cnt" || name == "more_info")
        return true;
    return false;
}

const Enum::YLeaf Diagnostic::Monitor::Rejected::Location::Test::Run::disable {1, "disable"};

const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::JAN {0, "JAN"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::FEB {1, "FEB"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::MAR {2, "MAR"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::APR {3, "APR"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::MAY {4, "MAY"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::JUN {5, "JUN"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::JUL {6, "JUL"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::AUG {7, "AUG"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::SEP {8, "SEP"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::OCT {9, "OCT"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::NOV {10, "NOV"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::On::Month::DEC {11, "DEC"};

const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::SUN {0, "SUN"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::MON {1, "MON"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::TUE {2, "TUE"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::WED {3, "WED"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::THR {4, "THR"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::FRI {5, "FRI"};
const Enum::YLeaf Diagnostic::Schedule::Start::Location::Test::Weekly::Daysofweek::SAT {6, "SAT"};


}
}

