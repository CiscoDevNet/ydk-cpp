
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_show_inv.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_show_inv {

Inventory::Inventory()
    :
    location(this, {"loc"})
    , all(this, {"index_"})
    , chassis(this, {"index_"})
    , power(this, {"index_"})
    , fan(this, {"index_"})
    , raw(this, {"index_"})
{

    yang_name = "inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-show-inv"; is_top_level_class = true; has_list_ancestor = false; 
}

Inventory::~Inventory()
{
}

bool Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<all.len(); index++)
    {
        if(all[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<chassis.len(); index++)
    {
        if(chassis[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<power.len(); index++)
    {
        if(power[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fan.len(); index++)
    {
        if(fan[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<raw.len(); index++)
    {
        if(raw[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<all.len(); index++)
    {
        if(all[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<chassis.len(); index++)
    {
        if(chassis[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<power.len(); index++)
    {
        if(power[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fan.len(); index++)
    {
        if(fan[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<raw.len(); index++)
    {
        if(raw[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Inventory::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        auto c = std::make_shared<Inventory::All>();
        c->parent = this;
        all.append(c);
        return c;
    }

    if(child_yang_name == "chassis")
    {
        auto c = std::make_shared<Inventory::Chassis>();
        c->parent = this;
        chassis.append(c);
        return c;
    }

    if(child_yang_name == "power")
    {
        auto c = std::make_shared<Inventory::Power>();
        c->parent = this;
        power.append(c);
        return c;
    }

    if(child_yang_name == "fan")
    {
        auto c = std::make_shared<Inventory::Fan>();
        c->parent = this;
        fan.append(c);
        return c;
    }

    if(child_yang_name == "raw")
    {
        auto c = std::make_shared<Inventory::Raw>();
        c->parent = this;
        raw.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::get_children() const
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

    count = 0;
    for (auto c : all.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : chassis.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : power.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : fan.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : raw.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Inventory::clone_ptr() const
{
    return std::make_shared<Inventory>();
}

std::string Inventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Inventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Inventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Inventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all" || name == "chassis" || name == "power" || name == "fan" || name == "raw")
        return true;
    return false;
}

Inventory::Location::Location()
    :
    loc{YType::str, "loc"},
    name{YType::str, "name"},
    description{YType::str, "Description"},
    pid{YType::str, "PID"},
    vid{YType::str, "VID"},
    sn{YType::str, "SN"},
    index_{YType::uint32, "index"}
{

    yang_name = "location"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Location::~Location()
{
}

bool Inventory::Location::has_data() const
{
    if (is_presence_container) return true;
    return loc.is_set
	|| name.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| sn.is_set
	|| index_.is_set;
}

bool Inventory::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Inventory::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PID")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VID")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SN")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "PID")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "VID")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "SN")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Inventory::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc" || name == "name" || name == "Description" || name == "PID" || name == "VID" || name == "SN" || name == "index")
        return true;
    return false;
}

Inventory::All::All()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    description{YType::str, "Description"},
    pid{YType::str, "PID"},
    vid{YType::str, "VID"},
    sn{YType::str, "SN"},
    loc{YType::str, "loc"}
{

    yang_name = "all"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::All::~All()
{
}

bool Inventory::All::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| name.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| sn.is_set
	|| loc.is_set;
}

bool Inventory::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Inventory::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PID")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VID")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SN")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "PID")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "VID")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "SN")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Inventory::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "Description" || name == "PID" || name == "VID" || name == "SN" || name == "loc")
        return true;
    return false;
}

Inventory::Chassis::Chassis()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    description{YType::str, "Description"},
    pid{YType::str, "PID"},
    vid{YType::str, "VID"},
    sn{YType::str, "SN"},
    loc{YType::str, "loc"}
{

    yang_name = "chassis"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Chassis::~Chassis()
{
}

bool Inventory::Chassis::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| name.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| sn.is_set
	|| loc.is_set;
}

bool Inventory::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Inventory::Chassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PID")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VID")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SN")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "PID")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "VID")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "SN")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Inventory::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "Description" || name == "PID" || name == "VID" || name == "SN" || name == "loc")
        return true;
    return false;
}

Inventory::Power::Power()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    description{YType::str, "Description"},
    pid{YType::str, "PID"},
    vid{YType::str, "VID"},
    sn{YType::str, "SN"},
    loc{YType::str, "loc"}
{

    yang_name = "power"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Power::~Power()
{
}

bool Inventory::Power::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| name.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| sn.is_set
	|| loc.is_set;
}

bool Inventory::Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Inventory::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PID")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VID")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SN")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "PID")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "VID")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "SN")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Inventory::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "Description" || name == "PID" || name == "VID" || name == "SN" || name == "loc")
        return true;
    return false;
}

Inventory::Fan::Fan()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    description{YType::str, "Description"},
    pid{YType::str, "PID"},
    vid{YType::str, "VID"},
    sn{YType::str, "SN"},
    loc{YType::str, "loc"}
{

    yang_name = "fan"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Fan::~Fan()
{
}

bool Inventory::Fan::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| name.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| sn.is_set
	|| loc.is_set;
}

bool Inventory::Fan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Inventory::Fan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Fan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Fan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Fan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Fan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Fan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PID")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VID")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SN")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Fan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "PID")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "VID")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "SN")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Inventory::Fan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "Description" || name == "PID" || name == "VID" || name == "SN" || name == "loc")
        return true;
    return false;
}

Inventory::Raw::Raw()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    description{YType::str, "Description"},
    pid{YType::str, "PID"},
    vid{YType::str, "VID"},
    sn{YType::str, "SN"},
    loc{YType::str, "loc"}
{

    yang_name = "raw"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Raw::~Raw()
{
}

bool Inventory::Raw::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| name.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| sn.is_set
	|| loc.is_set;
}

bool Inventory::Raw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(sn.yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Inventory::Raw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-inv:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Raw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Raw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Raw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Raw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Raw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PID")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VID")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SN")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Raw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "PID")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "VID")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "SN")
    {
        sn.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool Inventory::Raw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "Description" || name == "PID" || name == "VID" || name == "SN" || name == "loc")
        return true;
    return false;
}


}
}

