
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_console.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_console {

Console::Console()
    :
    config(std::make_shared<Console::Config>())
{
    config->parent = this;

    yang_name = "console"; yang_parent_name = "Cisco-IOS-XR-sysadmin-console"; is_top_level_class = true; has_list_ancestor = false; 
}

Console::~Console()
{
}

bool Console::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data());
}

bool Console::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Console::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Console::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Console::clone_ptr() const
{
    return std::make_shared<Console>();
}

std::string Console::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Console::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Console::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Console::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Console::Config::Config()
    :
    attach_sdr(std::make_shared<Console::Config::AttachSdr>())
{
    attach_sdr->parent = this;

    yang_name = "config"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false; 
}

Console::Config::~Config()
{
}

bool Console::Config::has_data() const
{
    if (is_presence_container) return true;
    return (attach_sdr !=  nullptr && attach_sdr->has_data());
}

bool Console::Config::has_operation() const
{
    return is_set(yfilter)
	|| (attach_sdr !=  nullptr && attach_sdr->has_operation());
}

std::string Console::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console/" << get_segment_path();
    return path_buffer.str();
}

std::string Console::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attach-sdr")
    {
        if(attach_sdr == nullptr)
        {
            attach_sdr = std::make_shared<Console::Config::AttachSdr>();
        }
        return attach_sdr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attach_sdr != nullptr)
    {
        children["attach-sdr"] = attach_sdr;
    }

    return children;
}

void Console::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Console::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Console::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-sdr")
        return true;
    return false;
}

Console::Config::AttachSdr::AttachSdr()
    :
    runtime(std::make_shared<Console::Config::AttachSdr::Runtime>())
    , boot(std::make_shared<Console::Config::AttachSdr::Boot>())
{
    runtime->parent = this;
    boot->parent = this;

    yang_name = "attach-sdr"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Console::Config::AttachSdr::~AttachSdr()
{
}

bool Console::Config::AttachSdr::has_data() const
{
    if (is_presence_container) return true;
    return (runtime !=  nullptr && runtime->has_data())
	|| (boot !=  nullptr && boot->has_data());
}

bool Console::Config::AttachSdr::has_operation() const
{
    return is_set(yfilter)
	|| (runtime !=  nullptr && runtime->has_operation())
	|| (boot !=  nullptr && boot->has_operation());
}

std::string Console::Config::AttachSdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Console::Config::AttachSdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attach-sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::AttachSdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::AttachSdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Console::Config::AttachSdr::Runtime>();
        }
        return runtime;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Console::Config::AttachSdr::Boot>();
        }
        return boot;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::AttachSdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(runtime != nullptr)
    {
        children["runtime"] = runtime;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    return children;
}

void Console::Config::AttachSdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Console::Config::AttachSdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Console::Config::AttachSdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime" || name == "boot")
        return true;
    return false;
}

Console::Config::AttachSdr::Runtime::Runtime()
    :
    location(this, {"location_rp"})
{

    yang_name = "runtime"; yang_parent_name = "attach-sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Console::Config::AttachSdr::Runtime::~Runtime()
{
}

bool Console::Config::AttachSdr::Runtime::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Console::Config::AttachSdr::Runtime::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Console::Config::AttachSdr::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console/config/attach-sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Console::Config::AttachSdr::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::AttachSdr::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::AttachSdr::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Console::Config::AttachSdr::Runtime::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::AttachSdr::Runtime::get_children() const
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

void Console::Config::AttachSdr::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Console::Config::AttachSdr::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Console::Config::AttachSdr::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Console::Config::AttachSdr::Runtime::Location::Location()
    :
    location_rp{YType::str, "location-rp"}
        ,
    tty_name(this, {"ttyname"})
{

    yang_name = "location"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = false; 
}

Console::Config::AttachSdr::Runtime::Location::~Location()
{
}

bool Console::Config::AttachSdr::Runtime::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tty_name.len(); index++)
    {
        if(tty_name[index]->has_data())
            return true;
    }
    return location_rp.is_set;
}

bool Console::Config::AttachSdr::Runtime::Location::has_operation() const
{
    for (std::size_t index=0; index<tty_name.len(); index++)
    {
        if(tty_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_rp.yfilter);
}

std::string Console::Config::AttachSdr::Runtime::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console/config/attach-sdr/runtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Console::Config::AttachSdr::Runtime::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_rp, "location-rp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::AttachSdr::Runtime::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_rp.is_set || is_set(location_rp.yfilter)) leaf_name_data.push_back(location_rp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::AttachSdr::Runtime::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tty-name")
    {
        auto c = std::make_shared<Console::Config::AttachSdr::Runtime::Location::TtyName>();
        c->parent = this;
        tty_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::AttachSdr::Runtime::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tty_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Console::Config::AttachSdr::Runtime::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-rp")
    {
        location_rp = value;
        location_rp.value_namespace = name_space;
        location_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Console::Config::AttachSdr::Runtime::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-rp")
    {
        location_rp.yfilter = yfilter;
    }
}

bool Console::Config::AttachSdr::Runtime::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty-name" || name == "location-rp")
        return true;
    return false;
}

Console::Config::AttachSdr::Runtime::Location::TtyName::TtyName()
    :
    ttyname{YType::str, "ttyname"},
    sdr_name{YType::str, "sdr-name"}
{

    yang_name = "tty-name"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Console::Config::AttachSdr::Runtime::Location::TtyName::~TtyName()
{
}

bool Console::Config::AttachSdr::Runtime::Location::TtyName::has_data() const
{
    if (is_presence_container) return true;
    return ttyname.is_set
	|| sdr_name.is_set;
}

bool Console::Config::AttachSdr::Runtime::Location::TtyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttyname.yfilter)
	|| ydk::is_set(sdr_name.yfilter);
}

std::string Console::Config::AttachSdr::Runtime::Location::TtyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty-name";
    ADD_KEY_TOKEN(ttyname, "ttyname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::AttachSdr::Runtime::Location::TtyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttyname.is_set || is_set(ttyname.yfilter)) leaf_name_data.push_back(ttyname.get_name_leafdata());
    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::AttachSdr::Runtime::Location::TtyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::AttachSdr::Runtime::Location::TtyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Console::Config::AttachSdr::Runtime::Location::TtyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttyname")
    {
        ttyname = value;
        ttyname.value_namespace = name_space;
        ttyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Console::Config::AttachSdr::Runtime::Location::TtyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttyname")
    {
        ttyname.yfilter = yfilter;
    }
    if(value_path == "sdr-name")
    {
        sdr_name.yfilter = yfilter;
    }
}

bool Console::Config::AttachSdr::Runtime::Location::TtyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttyname" || name == "sdr-name")
        return true;
    return false;
}

Console::Config::AttachSdr::Boot::Boot()
    :
    location(this, {"location_rp"})
{

    yang_name = "boot"; yang_parent_name = "attach-sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Console::Config::AttachSdr::Boot::~Boot()
{
}

bool Console::Config::AttachSdr::Boot::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Console::Config::AttachSdr::Boot::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Console::Config::AttachSdr::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console/config/attach-sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Console::Config::AttachSdr::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::AttachSdr::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::AttachSdr::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Console::Config::AttachSdr::Boot::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::AttachSdr::Boot::get_children() const
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

void Console::Config::AttachSdr::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Console::Config::AttachSdr::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Console::Config::AttachSdr::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Console::Config::AttachSdr::Boot::Location::Location()
    :
    location_rp{YType::str, "location-rp"},
    sdr_name{YType::str, "sdr-name"}
{

    yang_name = "location"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; 
}

Console::Config::AttachSdr::Boot::Location::~Location()
{
}

bool Console::Config::AttachSdr::Boot::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_rp.is_set
	|| sdr_name.is_set;
}

bool Console::Config::AttachSdr::Boot::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_rp.yfilter)
	|| ydk::is_set(sdr_name.yfilter);
}

std::string Console::Config::AttachSdr::Boot::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-console:console/config/attach-sdr/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Console::Config::AttachSdr::Boot::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_rp, "location-rp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Console::Config::AttachSdr::Boot::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_rp.is_set || is_set(location_rp.yfilter)) leaf_name_data.push_back(location_rp.get_name_leafdata());
    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Console::Config::AttachSdr::Boot::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Console::Config::AttachSdr::Boot::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Console::Config::AttachSdr::Boot::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-rp")
    {
        location_rp = value;
        location_rp.value_namespace = name_space;
        location_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Console::Config::AttachSdr::Boot::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-rp")
    {
        location_rp.yfilter = yfilter;
    }
    if(value_path == "sdr-name")
    {
        sdr_name.yfilter = yfilter;
    }
}

bool Console::Config::AttachSdr::Boot::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-rp" || name == "sdr-name")
        return true;
    return false;
}


}
}

