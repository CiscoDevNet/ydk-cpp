
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "opertest1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace opertest1 {

Oper::Oper()
    :
    fred{YType::int32, "fred"},
    barney{YType::int32, "barney"},
    wilma{YType::int32, "wilma"},
    betty{YType::int32, "betty"}
        ,
    slates(this, {"slatenum"})
    , uname(std::make_shared<Oper::Uname>())
    , uptime(std::make_shared<Oper::Uptime>())
    , w(std::make_shared<Oper::W>())
{
    uname->parent = this;
    uptime->parent = this;
    w->parent = this;

    yang_name = "oper"; yang_parent_name = "opertest1"; is_top_level_class = true; has_list_ancestor = false; 
}

Oper::~Oper()
{
}

bool Oper::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slates.len(); index++)
    {
        if(slates[index]->has_data())
            return true;
    }
    return fred.is_set
	|| barney.is_set
	|| wilma.is_set
	|| betty.is_set
	|| (uname !=  nullptr && uname->has_data())
	|| (uptime !=  nullptr && uptime->has_data())
	|| (w !=  nullptr && w->has_data());
}

bool Oper::has_operation() const
{
    for (std::size_t index=0; index<slates.len(); index++)
    {
        if(slates[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fred.yfilter)
	|| ydk::is_set(barney.yfilter)
	|| ydk::is_set(wilma.yfilter)
	|| ydk::is_set(betty.yfilter)
	|| (uname !=  nullptr && uname->has_operation())
	|| (uptime !=  nullptr && uptime->has_operation())
	|| (w !=  nullptr && w->has_operation());
}

std::string Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fred.is_set || is_set(fred.yfilter)) leaf_name_data.push_back(fred.get_name_leafdata());
    if (barney.is_set || is_set(barney.yfilter)) leaf_name_data.push_back(barney.get_name_leafdata());
    if (wilma.is_set || is_set(wilma.yfilter)) leaf_name_data.push_back(wilma.get_name_leafdata());
    if (betty.is_set || is_set(betty.yfilter)) leaf_name_data.push_back(betty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slates")
    {
        auto ent_ = std::make_shared<Oper::Slates>();
        ent_->parent = this;
        slates.append(ent_);
        return ent_;
    }

    if(child_yang_name == "uname")
    {
        if(uname == nullptr)
        {
            uname = std::make_shared<Oper::Uname>();
        }
        return uname;
    }

    if(child_yang_name == "uptime")
    {
        if(uptime == nullptr)
        {
            uptime = std::make_shared<Oper::Uptime>();
        }
        return uptime;
    }

    if(child_yang_name == "w")
    {
        if(w == nullptr)
        {
            w = std::make_shared<Oper::W>();
        }
        return w;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slates.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(uname != nullptr)
    {
        _children["uname"] = uname;
    }

    if(uptime != nullptr)
    {
        _children["uptime"] = uptime;
    }

    if(w != nullptr)
    {
        _children["w"] = w;
    }

    return _children;
}

void Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fred")
    {
        fred = value;
        fred.value_namespace = name_space;
        fred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "barney")
    {
        barney = value;
        barney.value_namespace = name_space;
        barney.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wilma")
    {
        wilma = value;
        wilma.value_namespace = name_space;
        wilma.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "betty")
    {
        betty = value;
        betty.value_namespace = name_space;
        betty.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fred")
    {
        fred.yfilter = yfilter;
    }
    if(value_path == "barney")
    {
        barney.yfilter = yfilter;
    }
    if(value_path == "wilma")
    {
        wilma.yfilter = yfilter;
    }
    if(value_path == "betty")
    {
        betty.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Oper::clone_ptr() const
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
    if(name == "slates" || name == "uname" || name == "uptime" || name == "w" || name == "fred" || name == "barney" || name == "wilma" || name == "betty")
        return true;
    return false;
}

Oper::Slates::Slates()
    :
    slatenum{YType::int32, "slatenum"},
    mrslate{YType::int32, "mrslate"}
{

    yang_name = "slates"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::Slates::~Slates()
{
}

bool Oper::Slates::has_data() const
{
    if (is_presence_container) return true;
    return slatenum.is_set
	|| mrslate.is_set;
}

bool Oper::Slates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slatenum.yfilter)
	|| ydk::is_set(mrslate.yfilter);
}

std::string Oper::Slates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Slates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slates";
    ADD_KEY_TOKEN(slatenum, "slatenum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Slates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slatenum.is_set || is_set(slatenum.yfilter)) leaf_name_data.push_back(slatenum.get_name_leafdata());
    if (mrslate.is_set || is_set(mrslate.yfilter)) leaf_name_data.push_back(mrslate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::Slates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::Slates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Oper::Slates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slatenum")
    {
        slatenum = value;
        slatenum.value_namespace = name_space;
        slatenum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrslate")
    {
        mrslate = value;
        mrslate.value_namespace = name_space;
        mrslate.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Slates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slatenum")
    {
        slatenum.yfilter = yfilter;
    }
    if(value_path == "mrslate")
    {
        mrslate.yfilter = yfilter;
    }
}

bool Oper::Slates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slatenum" || name == "mrslate")
        return true;
    return false;
}

Oper::Uname::Uname()
    :
    system{YType::str, "system"},
    nodename{YType::str, "nodename"},
    release{YType::str, "release"},
    version{YType::str, "version"},
    machine{YType::str, "machine"},
    all{YType::str, "all"}
{

    yang_name = "uname"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::Uname::~Uname()
{
}

bool Oper::Uname::has_data() const
{
    if (is_presence_container) return true;
    return system.is_set
	|| nodename.is_set
	|| release.is_set
	|| version.is_set
	|| machine.is_set
	|| all.is_set;
}

bool Oper::Uname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(release.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(machine.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Oper::Uname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Uname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Uname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (release.is_set || is_set(release.yfilter)) leaf_name_data.push_back(release.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (machine.is_set || is_set(machine.yfilter)) leaf_name_data.push_back(machine.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::Uname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::Uname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Oper::Uname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodename")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release")
    {
        release = value;
        release.value_namespace = name_space;
        release.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "machine")
    {
        machine = value;
        machine.value_namespace = name_space;
        machine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Uname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "nodename")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "release")
    {
        release.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "machine")
    {
        machine.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Oper::Uname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "nodename" || name == "release" || name == "version" || name == "machine" || name == "all")
        return true;
    return false;
}

Oper::Uptime::Uptime()
    :
    curtime{YType::str, "curtime"},
    uptime{YType::str, "uptime"},
    loadavg1min{YType::str, "loadavg1min"},
    loadavg5min{YType::str, "loadavg5min"},
    loadavg15min{YType::str, "loadavg15min"}
{

    yang_name = "uptime"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::Uptime::~Uptime()
{
}

bool Oper::Uptime::has_data() const
{
    if (is_presence_container) return true;
    return curtime.is_set
	|| uptime.is_set
	|| loadavg1min.is_set
	|| loadavg5min.is_set
	|| loadavg15min.is_set;
}

bool Oper::Uptime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(curtime.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(loadavg1min.yfilter)
	|| ydk::is_set(loadavg5min.yfilter)
	|| ydk::is_set(loadavg15min.yfilter);
}

std::string Oper::Uptime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::Uptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::Uptime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curtime.is_set || is_set(curtime.yfilter)) leaf_name_data.push_back(curtime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (loadavg1min.is_set || is_set(loadavg1min.yfilter)) leaf_name_data.push_back(loadavg1min.get_name_leafdata());
    if (loadavg5min.is_set || is_set(loadavg5min.yfilter)) leaf_name_data.push_back(loadavg5min.get_name_leafdata());
    if (loadavg15min.is_set || is_set(loadavg15min.yfilter)) leaf_name_data.push_back(loadavg15min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::Uptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::Uptime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Oper::Uptime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curtime")
    {
        curtime = value;
        curtime.value_namespace = name_space;
        curtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadavg1min")
    {
        loadavg1min = value;
        loadavg1min.value_namespace = name_space;
        loadavg1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadavg5min")
    {
        loadavg5min = value;
        loadavg5min.value_namespace = name_space;
        loadavg5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadavg15min")
    {
        loadavg15min = value;
        loadavg15min.value_namespace = name_space;
        loadavg15min.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::Uptime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curtime")
    {
        curtime.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "loadavg1min")
    {
        loadavg1min.yfilter = yfilter;
    }
    if(value_path == "loadavg5min")
    {
        loadavg5min.yfilter = yfilter;
    }
    if(value_path == "loadavg15min")
    {
        loadavg15min.yfilter = yfilter;
    }
}

bool Oper::Uptime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curtime" || name == "uptime" || name == "loadavg1min" || name == "loadavg5min" || name == "loadavg15min")
        return true;
    return false;
}

Oper::W::W()
    :
    header_info(std::make_shared<Oper::W::HeaderInfo>())
    , users(std::make_shared<Oper::W::Users>())
{
    header_info->parent = this;
    users->parent = this;

    yang_name = "w"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::W::~W()
{
}

bool Oper::W::has_data() const
{
    if (is_presence_container) return true;
    return (header_info !=  nullptr && header_info->has_data())
	|| (users !=  nullptr && users->has_data());
}

bool Oper::W::has_operation() const
{
    return is_set(yfilter)
	|| (header_info !=  nullptr && header_info->has_operation())
	|| (users !=  nullptr && users->has_operation());
}

std::string Oper::W::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::W::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "w";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::W::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::W::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header-info")
    {
        if(header_info == nullptr)
        {
            header_info = std::make_shared<Oper::W::HeaderInfo>();
        }
        return header_info;
    }

    if(child_yang_name == "users")
    {
        if(users == nullptr)
        {
            users = std::make_shared<Oper::W::Users>();
        }
        return users;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::W::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header_info != nullptr)
    {
        _children["header-info"] = header_info;
    }

    if(users != nullptr)
    {
        _children["users"] = users;
    }

    return _children;
}

void Oper::W::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::W::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::W::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-info" || name == "users")
        return true;
    return false;
}

Oper::W::HeaderInfo::HeaderInfo()
    :
    curtime{YType::str, "curtime"},
    uptime{YType::str, "uptime"},
    loadavg1min{YType::str, "loadavg1min"},
    loadavg5min{YType::str, "loadavg5min"},
    loadavg15min{YType::str, "loadavg15min"}
{

    yang_name = "header-info"; yang_parent_name = "w"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::W::HeaderInfo::~HeaderInfo()
{
}

bool Oper::W::HeaderInfo::has_data() const
{
    if (is_presence_container) return true;
    return curtime.is_set
	|| uptime.is_set
	|| loadavg1min.is_set
	|| loadavg5min.is_set
	|| loadavg15min.is_set;
}

bool Oper::W::HeaderInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(curtime.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(loadavg1min.yfilter)
	|| ydk::is_set(loadavg5min.yfilter)
	|| ydk::is_set(loadavg15min.yfilter);
}

std::string Oper::W::HeaderInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/w/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::W::HeaderInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::W::HeaderInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curtime.is_set || is_set(curtime.yfilter)) leaf_name_data.push_back(curtime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (loadavg1min.is_set || is_set(loadavg1min.yfilter)) leaf_name_data.push_back(loadavg1min.get_name_leafdata());
    if (loadavg5min.is_set || is_set(loadavg5min.yfilter)) leaf_name_data.push_back(loadavg5min.get_name_leafdata());
    if (loadavg15min.is_set || is_set(loadavg15min.yfilter)) leaf_name_data.push_back(loadavg15min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::W::HeaderInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::W::HeaderInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Oper::W::HeaderInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curtime")
    {
        curtime = value;
        curtime.value_namespace = name_space;
        curtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadavg1min")
    {
        loadavg1min = value;
        loadavg1min.value_namespace = name_space;
        loadavg1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadavg5min")
    {
        loadavg5min = value;
        loadavg5min.value_namespace = name_space;
        loadavg5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadavg15min")
    {
        loadavg15min = value;
        loadavg15min.value_namespace = name_space;
        loadavg15min.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::W::HeaderInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curtime")
    {
        curtime.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "loadavg1min")
    {
        loadavg1min.yfilter = yfilter;
    }
    if(value_path == "loadavg5min")
    {
        loadavg5min.yfilter = yfilter;
    }
    if(value_path == "loadavg15min")
    {
        loadavg15min.yfilter = yfilter;
    }
}

bool Oper::W::HeaderInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curtime" || name == "uptime" || name == "loadavg1min" || name == "loadavg5min" || name == "loadavg15min")
        return true;
    return false;
}

Oper::W::Users::Users()
    :
    user(this, {"tty"})
{

    yang_name = "users"; yang_parent_name = "w"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::W::Users::~Users()
{
}

bool Oper::W::Users::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Oper::W::Users::has_operation() const
{
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oper::W::Users::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/w/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::W::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::W::Users::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::W::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        auto ent_ = std::make_shared<Oper::W::Users::User>();
        ent_->parent = this;
        user.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::W::Users::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Oper::W::Users::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oper::W::Users::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oper::W::Users::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Oper::W::Users::User::User()
    :
    tty{YType::str, "tty"},
    user{YType::str, "user"},
    from{YType::str, "from"},
    login_at{YType::str, "login-at"},
    idle{YType::str, "idle"},
    jcpu{YType::str, "jcpu"},
    pcpu{YType::str, "pcpu"},
    what{YType::str, "what"}
{

    yang_name = "user"; yang_parent_name = "users"; is_top_level_class = false; has_list_ancestor = false; 
}

Oper::W::Users::User::~User()
{
}

bool Oper::W::Users::User::has_data() const
{
    if (is_presence_container) return true;
    return tty.is_set
	|| user.is_set
	|| from.is_set
	|| login_at.is_set
	|| idle.is_set
	|| jcpu.is_set
	|| pcpu.is_set
	|| what.is_set;
}

bool Oper::W::Users::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(login_at.yfilter)
	|| ydk::is_set(idle.yfilter)
	|| ydk::is_set(jcpu.yfilter)
	|| ydk::is_set(pcpu.yfilter)
	|| ydk::is_set(what.yfilter);
}

std::string Oper::W::Users::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:oper/w/users/" << get_segment_path();
    return path_buffer.str();
}

std::string Oper::W::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    ADD_KEY_TOKEN(tty, "tty");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oper::W::Users::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (login_at.is_set || is_set(login_at.yfilter)) leaf_name_data.push_back(login_at.get_name_leafdata());
    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (jcpu.is_set || is_set(jcpu.yfilter)) leaf_name_data.push_back(jcpu.get_name_leafdata());
    if (pcpu.is_set || is_set(pcpu.yfilter)) leaf_name_data.push_back(pcpu.get_name_leafdata());
    if (what.is_set || is_set(what.yfilter)) leaf_name_data.push_back(what.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Oper::W::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Oper::W::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Oper::W::Users::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "login-at")
    {
        login_at = value;
        login_at.value_namespace = name_space;
        login_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jcpu")
    {
        jcpu = value;
        jcpu.value_namespace = name_space;
        jcpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcpu")
    {
        pcpu = value;
        pcpu.value_namespace = name_space;
        pcpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "what")
    {
        what = value;
        what.value_namespace = name_space;
        what.value_namespace_prefix = name_space_prefix;
    }
}

void Oper::W::Users::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "login-at")
    {
        login_at.yfilter = yfilter;
    }
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
    if(value_path == "jcpu")
    {
        jcpu.yfilter = yfilter;
    }
    if(value_path == "pcpu")
    {
        pcpu.yfilter = yfilter;
    }
    if(value_path == "what")
    {
        what.yfilter = yfilter;
    }
}

bool Oper::W::Users::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty" || name == "user" || name == "from" || name == "login-at" || name == "idle" || name == "jcpu" || name == "pcpu" || name == "what")
        return true;
    return false;
}

Actions::Actions()
{

    yang_name = "actions"; yang_parent_name = "opertest1"; is_top_level_class = true; has_list_ancestor = false; 
}

Actions::~Actions()
{
}

bool Actions::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Actions::has_operation() const
{
    return is_set(yfilter);
}

std::string Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opertest1:actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Actions::clone_ptr() const
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

